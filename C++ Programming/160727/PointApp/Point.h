#pragma once
//클래스 정의 point.h에들어간다
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

