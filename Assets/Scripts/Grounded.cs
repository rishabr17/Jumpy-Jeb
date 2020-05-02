using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grounded : MonoBehaviour {

    public bool grounded;

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if(collision.gameObject.tag == "ground")
        {
            grounded = false;
        }
        if (collision.gameObject.tag == "ogre")
        {
            grounded = false;
        }
		if (collision.gameObject.tag == "bat") {
			grounded = false;
		}
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
		if(collision.gameObject.tag == "ground" )
        {
            grounded = true;
			if(FindObjectOfType<Player>() != null && GameObject.FindGameObjectWithTag("platformgenerator").GetComponent<PlatformGenerator1>().currentplatform != 100 && GameObject.FindGameObjectWithTag("platformgenerator").GetComponent<PlatformGenerator1>().currentplatform != 200)
                FindObjectOfType<Player>().points += 1;
        }
		if (collision.gameObject.tag == "mage") {
			GameObject.FindGameObjectWithTag("Player").GetComponent<Rigidbody2D>().velocity = new Vector2(0, 3.543959f*1.5f);
			FindObjectOfType<Player>().monsterkill();
			collision.gameObject.GetComponent<Mage> ().dead = true;
			collision.gameObject.GetComponent<BoxCollider2D> ().enabled = false;
			FindObjectOfType<Player> ().jumpaudio ();
		}
		if (collision.gameObject.tag == "ghost") {
			GameObject.FindGameObjectWithTag("Player").GetComponent<Rigidbody2D>().velocity = new Vector2(0, 3.543959f*1.5f);
			FindObjectOfType<Player> ().jumpaudio ();
			if (collision.gameObject.GetComponent<Ghost> ().hurt != true) {
				FindObjectOfType<Player>().monsterkill();
				collision.gameObject.GetComponent<BoxCollider2D> ().enabled = false;
				collision.gameObject.GetComponent<Ghost> ().currenthealth--;
				collision.gameObject.GetComponent<Ghost> ().hurt = true;
			}



		}
		if(collision.gameObject.tag == "eyeball" )
		{
			FindObjectOfType<Player> ().jumpaudio ();
			collision.gameObject.GetComponent<Rigidbody2D>().gravityScale = .3f;
			collision.gameObject.GetComponent<Rigidbody2D>().AddForce(transform.up * 5000f);
			collision.gameObject.GetComponent<Rigidbody2D>().AddForce((transform.right*(GameObject.FindGameObjectWithTag("Player").GetComponent<Transform>().localScale.x/3.543959f)) * collision.gameObject.transform.localScale.x * 5000f);
			collision.gameObject.GetComponent<CircleCollider2D> ().enabled = false;
			collision.gameObject.GetComponent<Eyeball> ().bullet.SetActive (false);
			collision.gameObject.GetComponent<Eyeball> ().closed = true;
			collision.gameObject.GetComponent<Eyeball> ().closetime = 2f;
			GameObject.FindGameObjectWithTag("Player").GetComponent<Rigidbody2D>().velocity = new Vector2(0, 3.543959f*1.5f);
			FindObjectOfType<Player>().monsterkill();
			//collision.gameObject.GetComponent<Rigidbody2D>().
		}
		if (collision.gameObject.tag == "bat")
		{
			FindObjectOfType<Player> ().jumpaudio ();
			GameObject.FindGameObjectWithTag("Player").GetComponent<Rigidbody2D>().velocity = new Vector2(0, 3.543959f*1.5f);
			collision.gameObject.GetComponent<Bat> ().dead = true;
			collision.gameObject.GetComponent<Animator>().SetBool("Dead", true);
			collision.gameObject.GetComponent<Rigidbody2D>().gravityScale = .3f;
			collision.gameObject.GetComponent<Rigidbody2D>().freezeRotation = false;
			collision.gameObject.GetComponent<Rigidbody2D>().AddForce(transform.up * 1000f);
			collision.gameObject.GetComponent<Rigidbody2D>().AddForce(transform.right * collision.gameObject.transform.localScale.x * 1000f);
			collision.gameObject.GetComponent<BoxCollider2D> ().enabled = false;
			FindObjectOfType<Player>().monsterkill();
		}
        if (collision.gameObject.tag == "Snake" || collision.gameObject.tag == "ogresword" || collision.gameObject.tag == "Minotaur" || (collision.gameObject.tag == "Worm"))
        {
            FindObjectOfType<Player>().hit();
        }
        if(collision.gameObject.tag == "Spikes")
        {
            FindObjectOfType<Player>().spikehit();
        }
		if(collision.gameObject.tag == "skeleton" )
		{
			FindObjectOfType<Player> ().jumpaudio ();
			GameObject.FindGameObjectWithTag("Player").GetComponent<Rigidbody2D>().velocity = new Vector2(0, 3.543959f*1.5f);
			if (collision.gameObject.GetComponent<Skeleton> ().hit == false) {
				FindObjectOfType<Player> ().monsterkill();
				collision.gameObject.gameObject.GetComponent<Skeleton> ().hit = true;


			}
		}
    }
}
