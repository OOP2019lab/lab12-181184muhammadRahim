#pragma once
#include<iostream>
#include"shape.h"
using namespace std;
class rectangle:public Shape
{
public:
	float area();
	rectangle(float length, float height, string colour);
	string colour();
	~rectangle();
private:
	float length;
	float width;

};


