using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlatformGenerator : MonoBehaviour {

    public GameObject camerapoint;
    public GameObject backgroundpoint;
	public GameObject destroyPointfront;
    private Rigidbody2D rb2d;
	private float delay = 1f;

	// Use this for initialization
	void Start () {
        rb2d = gameObject.GetComponent<Rigidbody2D>();
        rb2d.AddForce(-transform.right * 15f);
	}
	
	// Update is called once per frame
	void Update () {
		if(backgroundpoint.transform.position.x < camerapoint.transform.position.x && delay <= 0f)
        {
            Instantiate(gameObject, new Vector3(18.85f, transform.position.y, transform.position.z), gameObject.transform.rotation);
			backgroundpoint.transform.position = new Vector3(45f, transform.position.y, transform.position.z);
			delay = 1f;
        }
		if (transform.position.x < destroyPointfront.transform.position.x) {
			Destroy (gameObject);
		}
		delay -= Time.deltaTime;
	}
    
}
