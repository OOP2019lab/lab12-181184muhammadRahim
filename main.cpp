#include<iostream>
#include"shape.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
using namespace std;
#include<string>
float sumArea(Shape&s1, Shape&s2)
{
	float area = s1.area() + s2.area();
	return area;
}
int main()
{
	triangle t1(1.0, 9.0,"Red");
	circle c1(2,"Blue");
	rectangle r1(6, 2, "Orange");
	cout << t1.area() << endl;
	cout << t1.colour() << endl;
	cout << c1.area() << endl;
	cout << r1.area() << endl;

	Shape *sptr1 = &t1;
	Shape &sref=r1;
	cout << sptr1->area()<<endl;
	cout << sptr1->color<<endl;
	cout << sref.colour() << endl;
	cout << sref.area() << endl;
	Shape s1("Purple");
	cout << sumArea(t1, c1) << endl;
	cout << sumArea(s1, r1) << endl;
	cout << sumArea(s1, t1) << endl;
	int count=5;
	Shape** shapesArray = new Shape*[5];
	for (int i = 0; i < count; i++)
	{
		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
		int key = 0;
		cout << "Please enter your option?" << endl;
		cin >> key;
		bool flag = false;
		if (key <0 || key>3)
		{
			for (int i = 0; flag == false; i++)
			{
				cout << "wrong input please re-enter" << endl;
				cin >> key;
				if (key > 0 && key < 4)
				{
					flag = true;
				}

			}
		}
		else if (key > 0 && key < 4)
		{
			flag = true;
		}
		if (flag == true)
		{
			if (key == 1)
			{
				cout << "please enter base?" << endl;
				float base = 0, height = 0;
				cin >> base;
				cout << "please enter height?" << endl;
				cin >> height;
				cout << "please enter colour?" << endl;
				string colour;
				cin >> colour;
				triangle t1(base, height, colour);
				shapesArray[i] = new Shape(t1);
			}
			if (key == 2)
			{
				cout << "please enter length?" << endl;
				float length = 0, height = 0;
				cin >> length;
				cout << "please enter height?" << endl;
				cin >> height;
				cout << "please enter colour?" << endl;
				string colour;
				cin >> colour;
				rectangle r(length, height, colour);
				shapesArray[i] = new Shape(r);
			}
			if (key == 3)
			{
				cout << "please enter radius?" << endl;
				float radius = 0;
				cin >> radius;
				cout << "please enter colour?" << endl;
				string colour;
				cin >> colour;
				circle C(radius, colour);
				shapesArray[i] = new Shape(C);
			}

		}
	}
	for (int i = 0; i < count; i++)
	{
		cout << shapesArray[i]->gettype() << endl;
		cout << shapesArray[i]->colour() << endl;
	}
	for (int i = 0; i < count; i++)
	{
		delete shapesArray[i];

	}
	system("pause");

}