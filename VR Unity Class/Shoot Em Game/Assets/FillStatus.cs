using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FillStatus : MonoBehaviour {
	
	Image img;

	void Start () {
		img = GetComponent<Image> ();
		img.fillAmount = 1;
	}
	
	// Update is called once per frame
	void Update () {
		if (transform.CompareTag("Untagged")){
			if(img.fillAmount < 1){
				img.fillAmount += .01f;
			}
		}
		if (transform.CompareTag("Active")){
			if(img.fillAmount > 0){
				img.fillAmount -= .01f;
			}
		}
		if (transform.CompareTag("Disabled")){
			img.fillAmount = 1;
			transform.tag = "Untagged";
		}
		if (img.fillAmount == 0){
			transform.tag = "Selected";
		}
	}
}
