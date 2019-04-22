#include"shape.h"
#include<string>
float Shape::area()
{
	float a = 0;
	return a;

}
/*Shape::Shape(string types)
{
	this->type = types;

}*/
Shape::Shape(string types, string colours)
{
	this->color = colours;
	this->type = types;
}
Shape::~Shape()
{
	cout << "shape destructor was invoked" << endl;
}
string Shape::colour()
{
	return this->color;
}
Shape::Shape(string col)
{
	this->color = col;
}
string Shape::gettype()
{
	return this->type;
}