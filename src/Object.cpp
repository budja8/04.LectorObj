#include "../include/Object.hpp"  
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

Object::Object(string file)
{
    string line;
    vector<Vertex> vertices = {};
    vector<Face> faces = {};

    ifstream archivoOBJ(file);
    while (getline(archivoOBJ, line))
    {
        vector<string> elems = split(line, " ");

        if(!elems.empty())
        {
            if(elems[0].compare("v") == 0)
            {
                //Construir Vertex
                float x = stof(elems[1]);
                float y = stof(elems[2]);
                float z = stof(elems[3]);
                Vertex v(x, y, z);
                vertices.push_back(v);
            }
            if(elems[0].compare("f") == 0)
            {
                //Construir Edges
                int i1 = stoi(split(elems[1], "/")[0]) - 1;
                int i2 = stoi(split(elems[2], "/")[0]) - 1;
                int i3 = stoi(split(elems[3], "/")[0]) - 1;
                Edge e1(vertices[i1], vertices[i2]);
                Edge e2(vertices[i2], vertices[i3]);
                Edge e3(vertices[i3], vertices[i1]);
                //Construir Face
                Face f({e1, e2, e3});
                faces.push_back(f);
            }
        }
    }

    this->vertices = vertices;
    this->faces = faces;
}

vector<string> Object::split(const string& str, const string& delim)
{
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do
    {
        pos = str.find(delim, prev);
        if(pos == string::npos) pos = str.length();
        string token = str.substr(prev, pos-prev);
        if(!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    }
    while (pos < str.length() && prev < str.length());
    return tokens;
}

void Object::print()
{
    for(Vertex v : this->vertices)
        v.print();
    for(Face f: this->faces)
        f.print();
}