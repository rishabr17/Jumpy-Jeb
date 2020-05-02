using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gameoverscore : MonoBehaviour {

	// Use this for initialization
	void Start () {
		gameObject.GetComponent<UnityEngine.UI.Text>().text = "Score: " + PlayerPrefs.GetInt("Score");
	}
	
	// Update is called once per frame
	void Update () {
	}
}
