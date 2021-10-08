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
    public static float delayBetweenWaves = 10;
    public static int enemyCounter;
    public TimerBetweenWaves timerBetweenWaves = new TimerBetweenWaves(delayBetweenWaves);
    
    private float _timer;

    void Update()
    {
        
        if (!timerBetweenWaves.onWave)
        {
            timerBetweenWaves.Timer += Time.deltaTime;
        }
        else
        {
            _timer += Time.deltaTime;
        }

        if (_timer >= spawnRateDelay && timerBetweenWaves.onWave) 
        {
            Instantiate(Enemy, transform.position, Quaternion.identity);
            enemyCounter++;
            if (enemyCounter >= 10)
            {
                timerBetweenWaves.onWave = false;
                enemyCounter = 0;
            }
            _timer = 0f;
        }
    }
}

public class TimerBetweenWaves
{
    public bool onWave;
    public float time;
    public int waveCounter;
    private float _waveTimer;

    public float Timer
    {
        get { return time; }
        set
        {
            time = value;
            if (time >= _waveTimer)
            {
                time = 0f;
                onWave = true;
                //_waveTimer -= 5f;
                waveCounter++;
                if (_waveTimer <= 0) 
                {
                    _waveTimer = 0;
                }
            }
        }
    }

    public TimerBetweenWaves(float timer)
    {
        _waveTimer = timer;
    }
}
