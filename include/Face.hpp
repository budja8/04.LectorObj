#ifndef FACE_H
#define FACE_H
#include "Edge.hpp"
#include <vector>
#pragma once

using namespace std;

class Face  
{
	private:
		vector<Edge> edges;
	public:
		Face(vector<Edge> edges);
		void print();

};
#endif