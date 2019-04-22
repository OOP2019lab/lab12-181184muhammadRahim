#include<iostream>
using namespace std;
#include"triangle.h"
float triangle::area()
{
	float area = (this->base)*(this->height);
	area = (area)*0.5;
	return area;
}
triangle::triangle(float bases, float heights, string colour) :Shape("triangle", colour)
{
	this->base = bases;
	this->height = heights;
}
string triangle::colour()
{
	return this->color;
}
triangle::~triangle()
{
	cout << "~triangle invoked" << endl;
}