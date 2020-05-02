using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ghost : MonoBehaviour {

	public GameObject player;
	public GameObject rightborder;
	private bool alive = false;
	public float currenthealth = 5f;
	public CircleCollider2D nearby;
	private bool chase = false;
	public bool hurt = false;
	public float fade;
	public BoxCollider2D attack;
	public BoxCollider2D self;
	public float speed = 2.5f;

	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("Player");
	}
	
	// Update is called once per frame
	void Update () {
		fade = gameObject.GetComponent<SpriteRenderer> ().color.a;
		if (transform.position.x < player.transform.position.x + 7f && !alive && !hurt) {
			alive = true;
			rightborder.SetActive (true);
		}
		if (alive) {
			if(attack.IsTouching(player.GetComponent<PolygonCollider2D>()))
			{
					player.GetComponent<Player>().hit();
			}
			if (nearby.IsTouching (player.GetComponent<PolygonCollider2D> ())) {
				chase = true;
			} else {
				chase = false;
			}
			if(currenthealth <= 0)
			{
				alive = false;
			}
			if (!chase) {
				gameObject.GetComponent<Animator> ().SetBool ("attack", false);

				if (transform.localPosition.x < 152) {
					transform.localPosition = new Vector3 (152, transform.localPosition.y, transform.localPosition.z);
				}
				else if (transform.localPosition.x > 353) {
					transform.localPosition = new Vector3 (353, transform.localPosition.y, transform.localPosition.z);
				}
				if (transform.localPosition.y < 22) {
					transform.localPosition = new Vector3 (transform.localPosition.x, 22, transform.localPosition.z);
				}
				else if (transform.localPosition.y > 98) {
					transform.localPosition = new Vector3 (transform.localPosition.x, 98, transform.localPosition.z);
				}

				if (player.transform.position.x < transform.position.x) {
					transform.localScale = new Vector3 (-Mathf.Abs (transform.localScale.x), transform.localScale.y, transform.localScale.z);
					transform.position = new Vector3 (transform.position.x + (Time.deltaTime / 2), transform.position.y, transform.position.z);
				} else if (player.transform.position.x > transform.position.x) {
					transform.localScale = new Vector3 (Mathf.Abs (transform.localScale.x), transform.localScale.y, transform.localScale.z);
					transform.position = new Vector3 (transform.position.x - (Time.deltaTime / 2), transform.position.y, transform.position.z);
				}
				if (player.transform.position.y < transform.position.y) {
					transform.position = new Vector3 (transform.position.x, transform.position.y + (Time.deltaTime / 2), transform.position.z);
				} else if (player.transform.position.y > transform.position.y) {
					transform.position = new Vector3 (transform.position.x, transform.position.y - (Time.deltaTime / 2), transform.position.z);
				}
			} else {
				if (player.transform.position.x < transform.position.x) {
					transform.localScale = new Vector3 (Mathf.Abs (transform.localScale.x), transform.localScale.y, transform.localScale.z);
				} else if (player.transform.position.x > transform.position.x) {
					transform.localScale = new Vector3 (-Mathf.Abs (transform.localScale.x), transform.localScale.y, transform.localScale.z);
				}
				gameObject.GetComponent<Animator> ().SetBool ("attack", true);
				transform.position = Vector2.MoveTowards(transform.position, player.transform.position, speed * Time.deltaTime);
			}

		}
		if (hurt) {
			alive = false;
			gameObject.GetComponent<SpriteRenderer> ().color = new Color (255, 255, 255, gameObject.GetComponent<SpriteRenderer> ().color.a - Time.deltaTime);
			//gameObject.GetComponent<BoxCollider2D> ().enabled = false;
			self.enabled = false;
			attack.enabled = false;
			gameObject.GetComponent<Animator> ().SetBool ("dead", true);
			if (gameObject.GetComponent<SpriteRenderer> ().color.a <= 0f) {
				gameObject.GetComponent<Animator> ().SetBool ("dead", false);
				if (currenthealth == 1) {
					
					transform.localPosition = new Vector3 (152f, Random.Range (22f, 98f), transform.localPosition.z);
				} else if(player.transform.position.x < transform.position.x){
					transform.localPosition = new Vector3 (Random.Range (152f, 252f), Random.Range (22f, 98f), transform.localPosition.z);
				} else if(player.transform.position.x >= transform.position.x){
					transform.localPosition = new Vector3 (Random.Range (252f, 353f), Random.Range (22f, 98f), transform.localPosition.z);
				}
				hurt = false;
				alive = true;
				attack.enabled = true;
				//gameObject.GetComponent<BoxCollider2D> ().enabled = true;
				self.enabled = true;
			}
		} else {
			gameObject.GetComponent<SpriteRenderer> ().color = new Color (255, 255, 255, gameObject.GetComponent<SpriteRenderer> ().color.a + Time.deltaTime);

		}
		if (gameObject.GetComponent<SpriteRenderer> ().color.a >= 1f) {
			gameObject.GetComponent<SpriteRenderer> ().color = new Color (255, 255, 255, 1f);

		}
			
		if (!alive && currenthealth <= 0) {
			rightborder.SetActive (false);
			gameObject.GetComponent<Animator> ().SetBool ("dead", true);
			GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ().bossdead = true;
			if (gameObject.GetComponent<SpriteRenderer> ().color.a <= .5f) {
				Destroy (gameObject);
			}
		}
	}
}
