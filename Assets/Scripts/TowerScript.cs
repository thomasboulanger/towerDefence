using System.Collections.Generic;
using UnityEngine;

public class TowerScript : MonoBehaviour
{
    public GameObject canvas;
    public GameObject tower;
    public bool isUIActive;
    public static List<GameObject> towers = new List<GameObject>();
    
    private RectTransform myRectTransform;
    void Start()
    {
        isUIActive = false;
    }

    private void OnMouseDown()
    {
        if (transform.name.Contains("TowerPosition"))
        {
            if (isUIActive)
            {
                isUIActive = false;
                canvas.SetActive(false);
            }
            else
            {
                isUIActive = true;
                canvas.SetActive(true);
            }
        }
        else if (transform.CompareTag("Tower"))
        {
            if (isUIActive)
            {
                isUIActive = false;
                canvas.SetActive(false);
            }
            else
            {
                isUIActive = true;
                canvas.SetActive(true);
            }
        }
    }

    public void TowerPositionButton()
    {
        if (PlayerDataScript.singleton.money >= 50)
        {
            GameObject go = Instantiate(tower, transform.position, Quaternion.identity);
            towers.Add(go);
            if (transform.name.Contains("1")||transform.name.Contains("2")||transform.name.Contains("3"))
            {
                myRectTransform = go.transform.GetChild(1).GetComponent<RectTransform>();
                myRectTransform.localPosition += Vector3.forward * 8;
            }
            canvas.SetActive(false);
            PlayerDataScript.singleton.money -= 50;
        }
    }
}
