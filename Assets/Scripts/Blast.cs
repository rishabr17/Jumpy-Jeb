using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Blast : MonoBehaviour {

	public Transform player;
	public float speed = 5f;
	public bool shoot = false;
	public bool rightside = true;
	public float cooldown = 3f;
	public bool original = false;


	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("Player").GetComponent<Transform>();
	}
	
	// Update is called once per frame
	void Update () {
		if (shoot && rightside) {
			transform.position = new Vector3 (transform.position.x - (Time.deltaTime*4.5f), transform.position.y, transform.position.z);
		}
		else if (shoot && !rightside) {
			transform.position = new Vector3 (transform.position.x + (Time.deltaTime*4.5f), transform.position.y, transform.position.z);
		}
		cooldown -= Time.deltaTime;
		if (cooldown <= 0f && !original) {
			Destroy (gameObject);
		}
	}
	private void OnTriggerEnter2D(Collider2D collision){
		if (collision.gameObject.tag == "Player") {
			collision.gameObject.GetComponent<Player> ().hit ();
			GameObject.FindGameObjectWithTag ("mage").GetComponent<Mage> ().hit = true;
		}
		if (collision.gameObject.tag == "sideborder") {
			Destroy (gameObject);
		}

	}
}
