#include<iostream>
using namespace std;
#include"rectangle.h"
rectangle::rectangle(float length, float height, string colour) :Shape("rectangle", colour)
{
	this->length = length;
	this->width = height;
}
float rectangle::area()
{
	float area = length*width;
	return area;
}
string rectangle::colour()
{
	return this->color;
}
rectangle::~rectangle()
{
	cout << "~rectangle invoked" << endl;
}