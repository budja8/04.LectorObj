#include <iostream>
#include "../include/Face.hpp"  
#include "../include/Edge.hpp"  

using namespace std;

Face::Face(vector<Edge> edges){
    this->edges = edges;
}

void Face::print(){

    for(int i=0; i<this->edges.size(); i++){
        this->edges[i].print();
    }
    
}
