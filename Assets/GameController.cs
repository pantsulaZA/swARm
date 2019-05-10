using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    [SerializeField] private Vector2 size;
    [SerializeField] private int treeDensity = 0;
    private List<GameObject> trees = new List<GameObject>();
    [SerializeField] private GameObject treePrefab;
    public int population = 0;
    private List<Gatherer> people = new List<Gatherer>();
    [SerializeField] private GameObject personPrefab;
    [SerializeField] private House house;

    void Start()
    {
        PlantTrees();
        SpawnPopulation();
        house.Reset();
    }

    void Update()
    {
        foreach (Gatherer person in people)
        {
            person.resources = trees;
        }
    }
    // Update is called once per frame
    void PlantTrees()
    {
        for (int tree = 0; tree < treeDensity*size.x*size.y; tree++)
        {
            float x = Random.value * size.x - size.x / 2;
            float z = Random.value * size.y - size.y / 2;
            Vector3 newPosition = new Vector3(x, 12, z);
            var ray = new Ray(newPosition, Vector3.down);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                var selection = hit.transform.GetComponent<Plantable>();
                if (selection != null)
                {
                    PlantTree(newPosition);
                }
            }
        }
    }

    public void PlantTree(Vector3 newPosition)
    {
        Debug.Log("Planting tree" + newPosition);
        trees.Add(Instantiate(original: treePrefab, position: newPosition, rotation: Quaternion.identity));
    }

    void SpawnPopulation()
    {
        for (int person = 0; person < population; person++)
        {
            float x = Random.value * 20 - 10;
            float z = Random.value * 20 - 10;
            Vector3 newPosition = new Vector3(x, 12, z);
            var ray = new Ray(newPosition, Vector3.down);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                var selection = hit.transform.GetComponent<Plantable>();
                if (selection != null)
                {
                    var newPerson = Instantiate(original: personPrefab, position: hit.point, rotation: Quaternion.identity).GetComponent<Gatherer>();
                    newPerson.resources = trees;
                    newPerson.house = house;
                    people.Add(newPerson);
                }
            }
        }
    }
}
