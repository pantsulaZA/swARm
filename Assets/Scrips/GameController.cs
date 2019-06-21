using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameController : MonoBehaviour
{
    [SerializeField] private Vector2 size;
    [SerializeField] private int treeDensity = 0;
    private List<GameObject> trees = new List<GameObject>();
    [SerializeField] private GameObject treePrefab;
    public int population = 0;
    private List<Person> people = new List<Person>();
    [SerializeField] private GameObject personPrefab;
    [SerializeField] private MapGenerator islandNoise;

    void Start()
    {
        StartCoroutine(ConstructWorld());
    }

    IEnumerator ConstructWorld()
    {
        float[,] noiseMap = islandNoise.GenerateMap();
        // yield return new WaitForSeconds(1);
        PlantTrees();
        // yield return new WaitForSeconds(3);
        SpawnPopulation();
        yield return new WaitForSeconds(2);
    }

    void Update()
    {
        foreach (Person person in people)
        {
            person.resources = trees;
        }
    }


    void PlantTrees()
    {
        for (int tree = 0; tree < treeDensity * size.x * size.y / 100; tree++)
        {
            float x = UnityEngine.Random.value * size.x - size.x / 2;
            float z = UnityEngine.Random.value * size.y - size.y / 2;
            Vector3 newPosition = new Vector3(x, 30, z);
            var ray = new Ray(newPosition, Vector3.down);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                var selection = hit.transform.GetComponent<Plantable>();
                if (selection != null)
                {
                    PlantTree(hit.point);
                }
            }
        }
    }

    public void PlantTree(Vector3 newPosition)
    {
        // Debug.Log("Planting tree" + newPosition);
        trees.Add(Instantiate(original: treePrefab, position: newPosition, rotation: Quaternion.identity));
    }

    void SpawnPopulation()
    {
        for (int person = 0; person < population; person++)
        {
            float x = UnityEngine.Random.value * 10 - 5;
            float z = UnityEngine.Random.value * 10 - 5;
            Vector3 newPosition = new Vector3(x, 50, z);
            Debug.Log("New person at " + newPosition);
            var ray = new Ray(newPosition, Vector3.down);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                var selection = hit.transform.GetComponent<Plantable>();
                if (selection != null)
                {
                    createPerson(hit.point);
                }
            }
        }
    }

    internal Person createPerson(Vector3 position)
    {
        var newPerson = Instantiate(original: personPrefab, position: position, rotation: Quaternion.identity).GetComponent<Person>();
        newPerson.resources = trees;
        people.Add(newPerson);
        return newPerson;
    }
}
