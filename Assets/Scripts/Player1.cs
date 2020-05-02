using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player1 : MonoBehaviour {

    private Animator anim;
    private Rigidbody2D rb2d;
    public Grounded grounded;
    private bool goLeft = false;
    private bool goRight = false;

	// Use this for initialization
	void Start () {
        anim = gameObject.GetComponent<Animator>();
        rb2d = gameObject.GetComponent<Rigidbody2D>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    private void FixedUpdate()
    {
        if(grounded.grounded)
        {
            rb2d.velocity = new Vector2(0f, 7f);
        }
        
    }
    
}
