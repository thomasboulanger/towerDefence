using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class SpawnerScript : MonoBehaviour
{
    public GameObject Enemy;
    [Range(0, 10)] 
    public int spawnRateDelay;
    private float _timer;
    void Start()
    {
        
    }

    void Update()
    {
        _timer += Time.deltaTime;
        if (_timer >= spawnRateDelay) 
        {
            Instantiate(Enemy, transform.position, Quaternion.identity);
            _timer = 0f;
        }
    }
}
