#pragma once
//Ŭ���� ���� point.h������
class Point
{
private:
	int x;
	int y;
public:
	Point(int _x=0,int _y=0);
	~Point();
	void Set(int _x,int _y);
	void Print();
};

