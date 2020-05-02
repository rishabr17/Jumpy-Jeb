using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	private void OnTriggerEnter2D(Collider2D collision){
		if (collision.gameObject.tag == "Player") {
			collision.gameObject.GetComponent<Player> ().hit ();
			gameObject.GetComponentInParent<Eyeball> ().closed = true;
			gameObject.GetComponentInParent<Eyeball> ().closetime = 2f;
		}
		if (collision.gameObject.tag == "sideborder") {
			gameObject.transform.localPosition = new Vector3(0f, 0f, 0f);
			gameObject.GetComponentInParent<Eyeball> ().closed = true;
			gameObject.GetComponentInParent<Eyeball> ().closetime = 2f;
		}
	}
}
