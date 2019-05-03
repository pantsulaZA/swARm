using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    public Vector2 size;
    public int trees = 0;
    public GameObject treePrefab;
    // Start is called before the first frame update
    void Start()
    {
        for (int tree = 0; tree < trees; tree++)
        {
            float x = Random.value * size.x - size.x/2;
            float z = Random.value * size.y - size.y/2;
            Vector3 newPosition = new Vector3(x, 0, z);
            Instantiate(original: treePrefab, position: newPosition, rotation: Quaternion.identity);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
