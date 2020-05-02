using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coins : MonoBehaviour {


	private bool destroy = false;
	private float countdown = 2f;
	// Use this for initialization
	void Start () {
		try{
			gameObject.GetComponentInChildren<ParticleSystem> ().Pause();
		}catch(System.Exception e){
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (destroy) {
			gameObject.GetComponent<SpriteRenderer> ().enabled = false;
			countdown -= .01f;

			if (countdown < 1f) {
				gameObject.GetComponentInChildren<ParticleSystem> ().Stop ();
			} else {
				gameObject.GetComponentInChildren<ParticleSystem> ().Play ();
			}
			//gameObject.GetComponentInChildren<Transform> ().localScale = new Vector3 (0.06497138f, 0.06497138f, 0.06497138f);
		}
		if (countdown < 0f) {
			Destroy (gameObject);
		}
	}

	private void OnTriggerEnter2D(Collider2D collision)
	{
		if (collision.gameObject.tag == "Player" && destroy == false) {
			collision.gameObject.GetComponent<Player> ().coins();
			destroy = true;
		}
	}
}
