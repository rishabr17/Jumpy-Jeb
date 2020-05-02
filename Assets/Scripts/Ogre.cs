using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ogre : MonoBehaviour {

    private Player player;

	// Use this for initialization
	void Start () {
        player = FindObjectOfType<Player>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.tag == "Player")
        {
            player.hit();
        }
        if (collision.gameObject.tag == "Camera")
        {

            gameObject.GetComponent<Animator>().SetBool("Dead", true);
        }
    }
}
