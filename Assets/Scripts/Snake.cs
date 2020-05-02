using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Snake : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	}

    private void FixedUpdate()
    {
        if (GameObject.FindGameObjectWithTag("Player").transform.position.x < transform.position.x - 4f)
        {
			gameObject.GetComponent<Rigidbody2D>().velocity = (new Vector2(-.5f*3.543959f, 0f));
        }
    }
}
