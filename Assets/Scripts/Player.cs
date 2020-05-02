using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Player : MonoBehaviour {

    private Animator anim;
    private Rigidbody2D rb2d;
    public Grounded grounded;
    private bool doublejump = true;
    private bool goLeft = false;
    private bool goRight = false;
    public int currenthealth = 5;
    public int points = 0;
    private bool colorswitch = false;
    private float colortime = 1f;
    private int colornumber = 10;
    private bool coloronce = true;
    public UnityEngine.UI.Image image;
    public Sprite[] heartsprites;
    private float hitcooldown = 0f;
    public GameObject whitesheet;
	private AudioSource audio;
	public AudioClip hitsound;
	public AudioClip jumpsound;
	public AudioClip coinsound;
	public bool triplejump = true;

	public SpriteRenderer self;

	private bool normaljeb;
	private bool rocketjeb;
	private bool speedyjeb;
	private bool astrojeb;
	private bool deathjeb;
	private bool moneyjeb;
	private bool goldenjeb;

	public Sprite normal;
	public Sprite rocket;
	public Sprite speedy;
	public Sprite astro;
	public Sprite death;
	public Sprite money;
	public Sprite golden;


    // Use this for initialization
    void Start () {
        anim = gameObject.GetComponent<Animator>();
        rb2d = gameObject.GetComponent<Rigidbody2D>();
        whitesheet.GetComponent<SpriteRenderer>().color = new Color(0, 0, 0, 0);
		Application.targetFrameRate = 60;
		Time.timeScale = 1f;
		audio = gameObject.GetComponent<AudioSource> ();
		self = gameObject.GetComponent<SpriteRenderer> ();

		normaljeb = false;
		rocketjeb = false;
		speedyjeb = false;
		astrojeb = false;
		deathjeb = false;
		moneyjeb = false;
		goldenjeb = false;

		gameObject.GetComponent<Animator>().SetBool("rocket", false);
		gameObject.GetComponent<Animator>().SetBool("speedy", false);
		gameObject.GetComponent<Animator>().SetBool("astro", false);
		gameObject.GetComponent<Animator>().SetBool("death", false);
		gameObject.GetComponent<Animator>().SetBool("money", false);
		gameObject.GetComponent<Animator>().SetBool("golden", false);

		switch (PlayerPrefs.GetInt ("jebtype")) {
		case(0):
			normaljeb = true;
			this.GetComponent<SpriteRenderer>().sprite = normal;
			break;
		case(1):
			rocketjeb = true;
			this.GetComponent<SpriteRenderer>().sprite = rocket;
			gameObject.GetComponent<Animator>().SetBool("rocket", true);
			break;
		case(2):
			speedyjeb = true;
			this.GetComponent<SpriteRenderer>().sprite = speedy;
			gameObject.GetComponent<Animator>().SetBool("speedy", true);
			break;
		case(3):
			astrojeb = true;
			this.GetComponent<SpriteRenderer>().sprite = astro;
			gameObject.GetComponent<Animator>().SetBool("astro", true);
			break;
		case(4):
			deathjeb = true;
			this.GetComponent<SpriteRenderer>().sprite = death;
			gameObject.GetComponent<Animator>().SetBool("death", true);
			break;
		case(5):
			moneyjeb = true;
			this.GetComponent<SpriteRenderer>().sprite = money;
			gameObject.GetComponent<Animator>().SetBool("money", true);
			break;
		case(6):
			goldenjeb = true;
			rocketjeb = true;
			speedyjeb = true;
			astrojeb = true;
			deathjeb = true;
			moneyjeb = true;
			this.GetComponent<SpriteRenderer>().sprite = golden;
			gameObject.GetComponent<Animator>().SetBool("golden", true);
			break;
		}
    }
	
	// Update is called once per frame
	void Update () {
		switch (PlayerPrefs.GetInt ("jebtype")) {
		case(0):
			normaljeb = true;
			self.sprite = normal;
			break;
		case(1):
			rocketjeb = true;
			self.sprite = rocket;
			break;
		case(2):
			speedyjeb = true;
			self.sprite = speedy;
			break;
		case(3):
			astrojeb = true;
			self.sprite = astro;
			break;
		case(4):
			deathjeb = true;
			self.sprite = death;
			break;
		case(5):
			moneyjeb = true;
			self.sprite = money;
			break;
		case(6):
			self.sprite = golden;
			break;
		}
        if (colorswitch)
        {
            hitcooldown -= Time.deltaTime;
        }
        if (hitcooldown < 0f)
        {
            colorswitch = false;
            gameObject.GetComponent<Animator>().SetBool("Hit", false);
        }
		if (currenthealth <= 0 && goldenjeb) {
			currenthealth = 5;
			whitesheet.SetActive(true);
			whitesheet.GetComponent<SpriteRenderer>().color = new Color(0, 0, 0, whitesheet.GetComponent<SpriteRenderer>().color.a + Time.deltaTime);
			if (whitesheet.GetComponent<SpriteRenderer> ().color.a >= 1f) {
				whitesheet.SetActive (false);
			}
			goldenjeb = false;
		}
		if (currenthealth <= 0 && !goldenjeb)
        {
            currenthealth = 0;
            anim.SetBool("Dead", true);
            whitesheet.SetActive(true);
            whitesheet.GetComponent<SpriteRenderer>().color = new Color(0, 0, 0, whitesheet.GetComponent<SpriteRenderer>().color.a + Time.deltaTime);
            if(whitesheet.GetComponent<SpriteRenderer>().color.a >= 1f)
            {
				if(PlayerPrefs.GetInt("highScore") < points)
				{
					PlayerPrefs.SetInt("highScore", points);
				}
				PlayerPrefs.SetInt("Score", points);
				PlayerPrefs.Save ();
                SceneManager.LoadSceneAsync("MainMenu 1");
				currenthealth = 5;
            }
        }
        image.sprite = heartsprites[currenthealth];
        GameObject.FindGameObjectWithTag("score").GetComponent<Score>().ScoreChange(points);
    }

    private void FixedUpdate()
    {
		//3.543959f
		float size = 1;
		float pointsf = points;

		if (astrojeb)
			rb2d.gravityScale = .75f;
		else
			rb2d.gravityScale = 1f;

        if(grounded.grounded)
        {
			rb2d.velocity = new Vector2(0, 3.543959f*1.5f);
			audio.PlayOneShot (jumpsound);
        }

        Vector3 easeVelocity = rb2d.velocity;
        easeVelocity.y = rb2d.velocity.y;
        easeVelocity.z = 0.0f;
        easeVelocity.x *= 0.85f;
        rb2d.velocity = easeVelocity;

		float speedincrease;
		if (speedyjeb)
			speedincrease = 1.5f;
		else
			speedincrease = 1f;

		if (goLeft || Input.GetKey(KeyCode.LeftArrow))
        {
			transform.localScale = new Vector3(-size, size, size);
			if (rb2d.velocity.x > (-8f*speedincrease))
            {
				rb2d.AddForce(-transform.right * (8f*speedincrease));
            }
        }
		else if (goRight || Input.GetKey(KeyCode.RightArrow))
        {
			transform.localScale = new Vector3(size, size, size);
			if (rb2d.velocity.x < (8f*speedincrease))
            {
				rb2d.AddForce(transform.right * (8f*speedincrease));
            }
        }
		if (Input.GetKeyDown (KeyCode.UpArrow)) {
			jump ();
		}
		if(grounded.grounded )
        {
            doublejump = true;
			triplejump = true;
        }
    }

    public void left()
    {
        goLeft = true;
    }

    public void right()
    {
        goRight = true;
    }

    public void endleft()
    {
        goLeft = false;
    }

    public void endright()
    {
        goRight = false;
    }

    public void jump()
    {
		if (doublejump)
        {
			rb2d.velocity = new Vector2(0, 3.543959f*1.5f);
            doublejump = false;
			if (rocketjeb && triplejump) {
				doublejump = true;
				triplejump = false;
			}
			audio.PlayOneShot (jumpsound);
        }
	
    }

    public void hit()
    {
        if (hitcooldown <= 0f)
        {
            currenthealth--;
            hitcooldown = .5f;
			rb2d.velocity = new Vector2(-transform.localScale.x * 1f, 3.543959f*1.5f);
            colorswitch = true;
            gameObject.GetComponent<Animator>().SetBool("Hit", true);
			audio.PlayOneShot (hitsound);
        }
    }

	public void jumpaudio(){
		audio.PlayOneShot (jumpsound);
	}
	public void coins(){
		points += 5;
		audio.PlayOneShot (coinsound);
		if(moneyjeb)
			PlayerPrefs.SetInt ("NumberCoins", PlayerPrefs.GetInt("NumberCoins")+4);
		else
			PlayerPrefs.SetInt ("NumberCoins", PlayerPrefs.GetInt("NumberCoins")+2);
		
		PlayerPrefs.Save ();
	}
    public void spikehit()
    {
        if (hitcooldown <= 0f)
        {
            currenthealth--;
            hitcooldown = 1f;
			rb2d.velocity = new Vector2(transform.localScale.x * 1f, 3.543959f*1.5f);
            colorswitch = true;
            gameObject.GetComponent<Animator>().SetBool("Hit", true);
			audio.PlayOneShot (hitsound);
        }
    }
	public void monsterkill(){
		if (deathjeb)
			points += 15;
		else
			points += 10;

		doublejump = true;
		triplejump = true;
	}
    private void OnCollisionEnter2D(Collision2D collision)
    {
		if (collision.gameObject.tag == "Snake" || collision.gameObject.tag == "Minotaur" || collision.gameObject.tag == "Worm" || collision.gameObject.tag == "ogresword")
        {
            hit();
        }
        if(collision.gameObject.tag == "Spikes")
        {
            spikehit();
        }
		if (collision.gameObject.tag == "bat" && collision.gameObject.GetComponent<Bat> ().dead == false) {
			hit ();
			collision.gameObject.GetComponent<Rigidbody2D> ().velocity = new Vector2(.01f * collision.gameObject.transform.localScale.x, 2f);
		}
    }



}
