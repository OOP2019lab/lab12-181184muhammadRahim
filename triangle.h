#pragma once
#include<iostream>
#include"shape.h"
using namespace std;
class triangle: public Shape 
{
public:
	float area();
	triangle(float bases, float heights, string colour);
	string colour();
	~triangle();
private:
	float base;
	float height;
};

