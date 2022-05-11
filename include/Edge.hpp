#ifndef EDGE_H
#define EDGE_H
#include "Vertex.hpp"
#pragma once
	
class Edge{
    private:
        Vertex vi, vf;
    public:
        Edge();
        Edge(Vertex vi, Vertex vf);
        void print();
};
#endif