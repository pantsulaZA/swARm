using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapGenerator : MonoBehaviour
{
    public enum DrawMode { NoiseMap, ColorMap, Mesh }
    public DrawMode drawMode;
    public int width = 20;
    public int height = 20;
    public float samplingScale = 20f;
    public int octaves = 3;
    [Range(0,1)]
    public float persistence = 0.5f; // 0-1
    public float lacunarity = 2; // >1


    public int seed;
    public Vector2 offset;
    public bool autoUpdate;

    public float[,] noiseMap;

    public TerrainType[] regions;

    public float[,] GenerateMap()
    {
        noiseMap = Noise.Generate(width, height, seed, samplingScale, octaves, persistence, lacunarity, offset);

        Color[] colorMap = new Color[width * height];
        for (int y = 0; y < width; y++)
        {
            for (int x = 0; x < height; x++)
            {
                float currentHeight = noiseMap[x, y];
                for (int i = 0; i < regions.Length; i++)
                {
                    if (currentHeight <= regions[i].height)
                    {
                        colorMap[y * width + x] = regions[i].color;
                        break;
                    }

                }
            }
        }
        MapDisplay display = FindObjectOfType<MapDisplay>();
        if (drawMode == DrawMode.NoiseMap)
        {
            display.DrawTexture(TextureGenertor.TextureFromHeightMap(noiseMap));
        }
        else if (drawMode == DrawMode.ColorMap)
        {
            display.DrawTexture(TextureGenertor.TextureFromColorMap(colorMap, width, height));
        } else if (drawMode == DrawMode.Mesh ){
            display.DrawMesh(MeshGenerator.GenerateMesh(noiseMap), TextureGenertor.TextureFromColorMap(colorMap, width, height));
        }
        return noiseMap;
    }

    void OnValidate()
    {
        if (width < 1)
        {
            width = 1;
        }
        if (height < 1)
        {
            height = 1;
        }
        if (lacunarity < 1)
        {
            lacunarity = 1;
        }

        if (octaves < 0)
        {
            octaves = 0;
        }
    }
}

[System.Serializable]
public struct TerrainType
{
    public string name;
    public float height;
    public Color color;
}