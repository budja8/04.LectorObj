#include "../include/Edge.hpp"  
#include "../include/Vertex.hpp"  

Edge::Edge(){
    
}

Edge::Edge(Vertex vi, Vertex vf){
    this->vi = vi;
    this->vf = vf;
}

void Edge::print(){
    this->vi.print();
    this->vf.print();
}