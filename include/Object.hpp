#ifndef OBJECT_H
#define OBJECT_H
#pragma once

#include <string>
#include <vector>
#include "Vertex.hpp"
#include "Edge.hpp"
#include "Face.hpp"

using namespace std;

class Object
{
    private:
        vector<Face> faces;
        vector<Vertex> vertices;
        vector<string> split(const string& str, const string& delim);
    public:
        Object(string file);
        void print();
};
#endif