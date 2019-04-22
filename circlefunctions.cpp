#include<iostream>
using namespace std;
#include"circle.h"
float circle::area()
{
	float area = (3.141)*(radius*radius);
	return area;
}
circle::circle(float rad, string col) :Shape("circle", col)
{
	this->radius = rad;

}
string circle::colour()
{
	return this->color;
}
circle::~circle()
{
	cout << "~cicle invoked" << endl;
}