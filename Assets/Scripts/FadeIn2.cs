using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FadeIn2 : MonoBehaviour {

	private SpriteRenderer spriterenderer;
	private float alpha = 1f;

	// Use this for initialization
	void Start () {
		spriterenderer = gameObject.GetComponent<SpriteRenderer>();
		gameObject.SetActive (true);
		alpha = 1f;
	}

	// Update is called once per frame
	void Update () {
		alpha -= .01f;
		spriterenderer.color = new Color(255, 255, 255, alpha);
		if(alpha <= 0)
		{
			gameObject.SetActive(false);
		}
	}
}