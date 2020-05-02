using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Eyeball : MonoBehaviour {

	private GameObject player;
	private float speed = 10f;
	public bool closed = true;
	public float closetime = 5f;
	public GameObject bullet;
	private float bulletspeed = 0.05f;
	private Vector3 movepoint;
	public GameObject destroypoint;
	private float slope;
	private bool rightside = false;
	public GameObject platformpointahead;

	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("Player");
		movepoint = transform.position;
		bullet.GetComponent<SpriteRenderer> ().sortingOrder = 2;
	}
	
	// Update is called once per frame
	void Update () {
		if (closed) {
			Vector3 vectorToTarget = player.transform.position - transform.position;
			float angle = Mathf.Atan2 (vectorToTarget.y, vectorToTarget.x) * Mathf.Rad2Deg - 180;
			if ((angle < -90f && angle > -180f) || (angle > 90f && angle < 180f)) {
				transform.localScale = new Vector3 (67.43143f, -67.43143f, 1);
				rightside = true;
			} else if ((angle > -90f && angle < 90f)) {
				transform.localScale = new Vector3 (67.43143f, 67.43143f, 1);
				rightside = false;
			}
			Quaternion q = Quaternion.AngleAxis (angle, Vector3.forward);
			transform.rotation = Quaternion.Slerp (transform.rotation, q, Time.deltaTime * speed);
		}
		closetime -= Time.deltaTime;
			if (closetime <= 0f && !closed) {
				gameObject.GetComponent<Animator> ().SetBool ("closed", true);
				closed = true;
				closetime = 2f;
			} else if (closetime <= 0f && closed) {
				gameObject.GetComponent<Animator> ().SetBool ("closed", false);
				closed = false;
				//	slope = (player.transform.position.y - transform.position.y) / (player.transform.position.x - transform.position.x);
				movepoint = player.transform.position;
				bullet.transform.localPosition = new Vector3 (0f, 0f, 0f);
				bullet.SetActive (false);
				closetime = 2f;
			}
			if (!closed) {
			//bullet.transform.position = Vector3.MoveTowards (bullet.transform.position, movepoint, 50f * Time.deltaTime);

			if (!rightside) {
				bullet.SetActive (true);
				bullet.GetComponent<Rigidbody2D> ().velocity = -transform.right * 3f;
				bullet.GetComponent<SpriteRenderer> ().sortingOrder = 4;
			} else {
				bullet.SetActive (true);
				bullet.GetComponent<Rigidbody2D> ().velocity = -transform.right * 3f;
				bullet.GetComponent<SpriteRenderer> ().sortingOrder = 4;
			}
			} else {
				bullet.transform.localPosition = new Vector3 (0f, 0f, 0f);
			bullet.SetActive (false);
			bullet.GetComponent<SpriteRenderer> ().sortingOrder = 2;
			}
		/*if (transform.position.x < destroypoint.transform.position.x && transform.position.x > platformpointahead.transform.position.x) {
			Destroy (gameObject);
		}*/

	}
	private void OnCollisionEnter2D(Collision2D collision){
		if (collision.gameObject.tag == "sideborder") {
			Destroy (gameObject);
		}
	}
}
