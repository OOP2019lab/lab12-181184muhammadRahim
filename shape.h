#pragma once
#include<iostream>
using namespace std;
class Shape
{
public:
	string gettype();
	Shape(string col);
	virtual float area();
	//Shape(string types);
	Shape(string types, string colours);
	virtual string colour();
	string color;
	virtual ~Shape();
private:

protected:
	string type;

};

