using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bat : MonoBehaviour {

	private GameObject player;
	private float speed = 1f;
	public bool dead = false;

	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("Player");
		gameObject.GetComponent<SpriteRenderer> ().color = new Color (255, 255, 255, 0);

	}
	
	// Update is called once per frame
	void Update () {
		if (!dead && (GameObject.FindGameObjectWithTag("Player").transform.position.x < transform.position.x || (GameObject.FindGameObjectWithTag("Player").transform.position.x > transform.position.x) && GameObject.FindGameObjectWithTag("Player").transform.position.x < transform.position.x+10f)) {
			
			transform.position = Vector2.MoveTowards (transform.position, player.transform.position, speed * Time.deltaTime);
			if (player.transform.position.x < transform.position.x) {
				gameObject.transform.localScale = new Vector3 (Mathf.Abs(gameObject.transform.localScale.x), gameObject.transform.localScale.y, 1f);
			} else {
				gameObject.transform.localScale = new Vector3 (-Mathf.Abs(gameObject.transform.localScale.x), gameObject.transform.localScale.y, 1f);
			}
		}
		gameObject.GetComponent<SpriteRenderer> ().color = new Color (255, 255, 255, gameObject.GetComponent<SpriteRenderer> ().color.a + Time.deltaTime);
		if (dead) {
			

			gameObject.GetComponent<Rigidbody2D> ().gravityScale = .3f;
		}
	}

	private void OnCollisionEnter2D(Collision2D collision){
		if (collision.gameObject == GameObject.FindGameObjectWithTag("sideborder")) {
			dead = true;
			gameObject.GetComponent<Animator> ().SetBool ("Dead", true);
			gameObject.GetComponent<Rigidbody2D> ().gravityScale = .3f;
			gameObject.GetComponent<Rigidbody2D> ().freezeRotation = false;
			gameObject.GetComponent<Rigidbody2D> ().AddForce (transform.up * 1000f);
			gameObject.GetComponent<Rigidbody2D> ().AddForce (transform.right * gameObject.transform.localScale.x * 1000f);
			gameObject.GetComponent<BoxCollider2D> ().enabled = false;
		}
	}
}
