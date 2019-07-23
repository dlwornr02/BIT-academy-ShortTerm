#include<iostream>
#include "Point.h"
using namespace std;
Point::Point(int _x,int _y)
{
	x=_x;
	y=_y;
	cout<<"Point()"<<endl;
}
Point::~Point()
{
	cout<<"~Point()"<<endl;
}
void Point::Set(int _x,int _y)
{
	x=_x;
	y=_y;
}
void Point::Print()
{

	cout<<x<<','<<y<<endl;
}