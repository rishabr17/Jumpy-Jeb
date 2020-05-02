using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Camera : MonoBehaviour {

    public GameObject player;
    private float distanceToMove;
    private Vector3 playerposition;
	public GameObject pausescreen;
	public UnityEngine.UI.Button button1;
	public UnityEngine.UI.Button button2;
	public UnityEngine.UI.Button button3;
	public UnityEngine.UI.Button button4;
	public bool pause = false;
	public bool bossdead = false;
	public bool boss = false;

	// Use this for initialization
	void Start () {
        playerposition = player.transform.position;

	}
	
	// Update is called once per frame
	void Update () {
		if (boss && !bossdead) {
		}else if (!pause) {
			float pointsf = player.GetComponent<Player>().points;
			pointsf = pointsf / 50000f;
			if (transform.position.x < 19.877f) {
				transform.position = new Vector3 (19.8773f, transform.position.y, transform.position.z);
			}
			if (transform.position.y < -2.4148f) {
				transform.position = new Vector3 (player.transform.position.x, -2.4148f, transform.position.z);
			}

			distanceToMove = player.transform.position.x - playerposition.x;
			if (pointsf > .075f) {
				pointsf = .075f;
			}
			if (distanceToMove < .010f+pointsf) {
				transform.position = new Vector3 (transform.position.x + .020f + pointsf, transform.position.y, transform.position.z);
			} else if (player.transform.position.x + .4f > transform.position.x) {
				transform.position = new Vector3 (transform.position.x + (distanceToMove * 1f), transform.position.y, transform.position.z);
			} else {
				transform.position = new Vector3 (transform.position.x + .020f + pointsf, transform.position.y, transform.position.z);
			}
			playerposition = player.transform.position;
		}
		

    }
	private void FixedUpdate(){
		/*float pointsf = player.GetComponent<Player>().points;
		if(Time.timeScale <= 2f){
			Time.timeScale = 1.0f + pointsf / 200;
		}*/
	}

	public void paused(){
		if (pause) {
			pause = false;
			pausescreen.SetActive (false);
			button1.gameObject.SetActive (false);
			button2.gameObject.SetActive (false);
			button3.gameObject.SetActive (false);
			button4.gameObject.SetActive (false);
			Time.timeScale = 1f;
		} else {
			pause = true;
			pausescreen.SetActive (true);
			button1.gameObject.SetActive (true);
			button2.gameObject.SetActive (true);
			button3.gameObject.SetActive (true);
			button4.gameObject.SetActive (true);
			Time.timeScale = 0f;
		}
	}
}
