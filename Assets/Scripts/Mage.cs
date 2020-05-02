using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mage : MonoBehaviour {

	public BoxCollider2D skull;
	public GameObject blast;
	public GameObject cloud;
	public bool hit;
	public bool dead = false;
	public bool teleport = false;
	public int currenthealth = 10;
	public bool appear = false;
	public bool rightside = true;
	public bool rightside2 = true;
	public GameObject bossplatform;
	public float cooldown = 2f;
	private bool up = true;
	private float ypos;
	private bool start = false;
	public GameObject rightborder;
	public GameObject bat;
	public bool bats = false;
	private float speed = .5f;


	// Use this for initialization
	void Start () {
		blast.GetComponent<Blast> ().original = true;
	}
	
	// Update is called once per frame
	void Update () {
		if (transform.position.x < GameObject.FindGameObjectWithTag ("Player").transform.position.x + 7f) {
			start = true;
			rightborder.SetActive (true);
		}
		if (start) {
			
			if (gameObject.transform.localPosition.y < 36 && currenthealth >=7) {
				up = true;
			} else if (gameObject.transform.localPosition.y > 94 && currenthealth >= 7) {
				up = false;
			}

			if (currenthealth < 7) {
				if (transform.position.y < GameObject.FindGameObjectWithTag ("Player").transform.position.y) {
					up = true;

				} 
				else {
					up = false;
				}
			}
			if (currenthealth < 4) {
				bats = true;

			}
			if (!up&& currenthealth >= 7) {
				ypos = transform.localPosition.y - (Time.deltaTime * 10f);
				transform.localPosition = new Vector3 (transform.localPosition.x, ypos, 1f);
			} else if (up&& currenthealth >=7) {
				ypos = transform.localPosition.y + (Time.deltaTime * 10f);
				transform.localPosition = new Vector3 (transform.localPosition.x, ypos, 1f);
			}
			else if (!up && currenthealth < 7) {
				ypos = transform.localPosition.y - (Time.deltaTime * 4f);
				//transform.localPosition = new Vector3 (transform.localPosition.x, ypos, 1f);
				transform.position = Vector2.MoveTowards(transform.position, GameObject.FindGameObjectWithTag("Player").transform.position, speed * Time.deltaTime);
			} else if (up && currenthealth < 7) {
				ypos = transform.localPosition.y + (Time.deltaTime * 4f);
				//transform.localPosition = new Vector3 (transform.localPosition.x, ypos, 1f);
				transform.position = Vector2.MoveTowards(transform.position, GameObject.FindGameObjectWithTag("Player").transform.position, speed * Time.deltaTime);
			}


			if (dead && currenthealth > 0 && teleport == false) {
				currenthealth--;
				teleport = true;
				dead = false;
			}
			if (gameObject.GetComponent<SpriteRenderer> ().color.a <= .10f && teleport && currenthealth > 0) {
				teleport = false;
				appear = true;
			} else if (teleport) {
				gameObject.GetComponent<SpriteRenderer> ().color = new Color (255, 255, 255, gameObject.GetComponent<SpriteRenderer> ().color.a - Time.deltaTime);
				cloud.GetComponent<SpriteRenderer> ().color = new Color (255, 255, 255, cloud.GetComponent<SpriteRenderer> ().color.a - Time.deltaTime);

			}

			if (appear && !rightside2) {
				gameObject.transform.localPosition = new Vector3 (343.5f, gameObject.transform.localPosition.y, gameObject.transform.localPosition.z);
				gameObject.GetComponent<SpriteRenderer> ().color = new Color (255, 255, 255, gameObject.GetComponent<SpriteRenderer> ().color.a + Time.deltaTime);
				cloud.GetComponent<SpriteRenderer> ().color = new Color (255, 255, 255, cloud.GetComponent<SpriteRenderer> ().color.a + Time.deltaTime);
				if (gameObject.GetComponent<SpriteRenderer> ().color.a >= 1f) {
					appear = false;
					rightside2 = true;
					if (bats) {
						gameObject.GetComponent<Animator> ().SetBool ("bat", true);

						GameObject batgameObject1 = Instantiate (bat);
						batgameObject1.transform.localScale = new Vector3 (4.113f, 4.113f, 4.113f);
						//batgameObject1.transform.parent = gameObject.GetComponentInParent<Transform> ();
						batgameObject1.transform.position = new Vector3 (gameObject.transform.position.x, gameObject.transform.position.y + 1f, gameObject.transform.position.z);
						cooldown = 1f;

						//batgameObject2.transform.parent = gameObject.GetComponentInParent<Transform> ();


						GameObject batgameObject3 = Instantiate (bat);
						batgameObject3.transform.localScale = new Vector3 (4.113f, 4.113f, 4.113f);

						//batgameObject3.transform.parent = gameObject.GetComponentInParent<Transform> ();

						batgameObject3.transform.position = new Vector3 (gameObject.transform.position.x - 6f, gameObject.transform.position.y + 1f, gameObject.transform.position.z);
					}
				}

				gameObject.GetComponent<BoxCollider2D> ().enabled = true;
			} else if (appear && rightside2) {
				gameObject.transform.localPosition = new Vector3 (162.9f, gameObject.transform.localPosition.y, gameObject.transform.localPosition.z);
				gameObject.GetComponent<SpriteRenderer> ().color = new Color (255, 255, 255, gameObject.GetComponent<SpriteRenderer> ().color.a + Time.deltaTime);
				cloud.GetComponent<SpriteRenderer> ().color = new Color (255, 255, 255, cloud.GetComponent<SpriteRenderer> ().color.a + Time.deltaTime);
				if (gameObject.GetComponent<SpriteRenderer> ().color.a >= 1f) {
					appear = false;
					rightside2 = false;
					if (bats) {
						gameObject.GetComponent<Animator> ().SetBool ("bat", true);

						GameObject batgameObject1 = Instantiate (bat);
						batgameObject1.transform.localScale = new Vector3 (4.113f, 4.113f, 4.113f);

						//batgameObject1.transform.parent = gameObject.GetComponentInParent<Transform> ();

						batgameObject1.transform.position = new Vector3 (gameObject.transform.position.x, gameObject.transform.position.y + 1f, gameObject.transform.position.z);


						//batgameObject2.transform.parent = gameObject.GetComponentInParent<Transform> ();

						cooldown = 1f;
						GameObject batgameObject3 = Instantiate (bat);
						batgameObject3.transform.localScale = new Vector3 (4.113f, 4.113f, 4.113f);

						//batgameObject3.transform.parent = gameObject.GetComponentInParent<Transform> ();

						batgameObject3.transform.position = new Vector3 (gameObject.transform.position.x + 6f, gameObject.transform.position.y + 1f, gameObject.transform.position.z);
					}
				}
				gameObject.GetComponent<BoxCollider2D> ().enabled = true;
			}
			if (cooldown < 0f) {
				gameObject.GetComponent<Animator> ().SetBool ("bat", false);

			}
			if (GameObject.FindGameObjectWithTag ("Player").transform.position.x < transform.position.x) {
				transform.localScale = new Vector3 (Mathf.Abs (transform.localScale.x), transform.localScale.y, 1f);
				rightside = true;
			} else {
				transform.localScale = new Vector3 (-Mathf.Abs (transform.localScale.x), transform.localScale.y, 1f);
				rightside = false;
			}

			if (currenthealth <= 0) {
			
				gameObject.GetComponent<SpriteRenderer> ().color = new Color (255, 255, 255, gameObject.GetComponent<SpriteRenderer> ().color.a - Time.deltaTime);
				rightborder.SetActive (false);
			}
			if (gameObject.GetComponent<SpriteRenderer> ().color.a <= 0f) {
				Destroy (gameObject);
				GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ().bossdead = true;

			}
			cooldown -= Time.deltaTime;

			if (!dead) {
				if (skull != null)
				if (skull.enabled && cooldown < 0f) {//&& !hit) {
					//blast.transform.localPosition = new Vector3 (blast.transform.localPosition.x - (Time.deltaTime), blast.transform.localPosition.y, blast.transform.localPosition.z);
					GameObject clone1 = Instantiate (blast);
					clone1.transform.parent = bossplatform.transform;
					if (rightside) {
						clone1.transform.localScale = new Vector3 (86.21448f, 86.21448f, 86.21448f);

					} else {
						clone1.transform.localScale = new Vector3 (-86.21448f, 86.21448f, 86.21448f);
					}
					clone1.transform.localPosition = new Vector3 (gameObject.transform.localPosition.x, gameObject.transform.localPosition.y + 3.5f, 0f);

					clone1.GetComponent<Blast> ().shoot = true;
					clone1.GetComponent<Blast> ().rightside = rightside;
					clone1.GetComponent<Blast> ().cooldown = 3f;
					clone1.GetComponent<Blast> ().original = false;
					if (currenthealth >= 7)
						cooldown = 1.5f;
					else if (currenthealth < 7) {
						cooldown = 1f;
					}
					//blast.GetComponent<Blast>().shoot = true;
				} else if (hit) {
					//blast.transform.localPosition = new Vector3 (0f, 0.048f, 0f);
					//hit = false;
				}
			}
		}
		} 
}
