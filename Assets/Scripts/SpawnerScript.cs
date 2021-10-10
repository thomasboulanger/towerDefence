using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class SpawnerScript : MonoBehaviour
{
    public GameObject Enemy;
    [Range(0, 2)] 
    public float spawnRateDelay;
    public static float delayBetweenWaves = 20f;
    
     static int enemyCounter;
     private float _timer;
     private float _enemyByWave = 10;
     private int _enemyHp = 5;


    public static bool onWave; 
    public static float waveTime;
    public static int waveCounter;

    private void Start()
    {
        waveTime = delayBetweenWaves;
    }

    void Update()
    {
        if (!onWave)
        {
            //faire un time.deltatime custom sur un script a part et le mettre en reference ici a la place de cette merde...
            waveTime -= Time.deltaTime / GameObject.FindGameObjectsWithTag("Spawner").Length;
        }
        else
        {
            _timer += Time.deltaTime;
        }

        if (waveTime <= 0f)
        {
            onWave = true;
            waveTime = delayBetweenWaves;
            waveCounter++;
            if (waveTime >= delayBetweenWaves) 
            {
                waveTime = delayBetweenWaves;
            }
        }
        if (_timer >= spawnRateDelay && onWave) 
        {
            enemyCounter++;

            GameObject go = Instantiate(Enemy, transform.position, Quaternion.identity);
            go.GetComponent<EnemyScript>().hp = _enemyHp + waveCounter - 1;
            if (enemyCounter >= _enemyByWave)
            {
                onWave = false;
                enemyCounter = 0;
                _enemyByWave += 5;
            }
            _timer = 0f;
        }
    }
}