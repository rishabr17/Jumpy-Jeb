using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Skeleton : MonoBehaviour {

	public bool hit = false;
	private bool attack = false;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (hit) {
			gameObject.GetComponent<Animator> ().SetBool ("Dead", true);

		}
		if (attack) {
			attack = false;
		}
	}
	private void OnCollisionEnter2D(Collision2D collision){
		if (collision.gameObject.tag == "Player" && !hit) {
			collision.gameObject.GetComponent<Player> ().hit ();
			attack = true;
		}
	}

}
