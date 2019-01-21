using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pickup : MonoBehaviour {

	public Transform MainCamera;
	GameObject currentPickUpItem;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		RaycastHit hit;
		
		if (Input.GetButton ("Fire1") && MainCamera.childCount < 3) {
			if (Physics.Raycast (MainCamera.position, MainCamera.forward, out hit)) {
				Rigidbody rb = hit.transform.GetComponent<Rigidbody> ();
				
				if(rb != null) {
					rb.useGravity = false;
					rb.isKinematic = true;
					currentPickUpItem = hit.transform.gameObject;
					currentPickUpItem.transform.parent = MainCamera;
				}
			}
		}
		else if (currentPickUpItem) {
			currentPickUpItem.GetComponent<Rigidbody> ().useGravity = true;
			currentPickUpItem.GetComponent<Rigidbody> ().isKinematic = false;
			currentPickUpItem.transform.parent = null;
		}
	}
}
