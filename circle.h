#pragma once
#include<iostream>
#include"shape.h"
using namespace std;
class circle: public Shape
{
public:

	float area();
	string colour();
	circle(float rad,string col);
	~circle();
private:
	float radius;

};

