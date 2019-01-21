using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

	public Transform MainCamera;
	public float speed = 2;

	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		MainCamera.Rotate(0f, Input.GetAxis ("Mouse X") * speed, 0f, Space.World);
		MainCamera.Rotate(-Input.GetAxis ("Mouse Y") * speed, 0f, 0f, Space.Self);
	}
}
