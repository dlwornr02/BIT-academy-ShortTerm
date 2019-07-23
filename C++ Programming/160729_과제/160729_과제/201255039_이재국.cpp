//
//#pragma warning(disable:4996)
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//
//class Rectangle
//{
//	Point ptStart;
//	Point ptEnd;
//public:
//	Rectangle(){}
//	Rectangle(const Point&s,const Point&e):ptStart(s),ptEnd(e){}
//	Rectangle(int l,int t,int r,int b):ptStart(l,t),ptEnd(r,b){}
//	const Point& GetStartPoint()const
//	{
//		return ptStart;
//	}
//	const Point& GetEndPoint()const
//	{
//		return ptEnd;
//	}
//	void Draw()const
//	{
//		cout<<endl<<"시작좌표 ("<<ptStart.GetX()<<','<<ptStart.GetY()<<')'<<'-'
//			<<"끝좌표 ("<<ptEnd.GetX()<<','<<ptEnd.GetY()<<')'<<endl;
//	}
//	int Width()const{return abs(ptEnd.GetX()-ptStart.GetX());}
//	int Height()const{return abs(ptEnd.GetY()-ptStart.GetY());}
//
//};
//class Array{
//	Rectangle*arr;
//	int size;
//	int capacity;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap)
//	{
//		arr = new Rectangle[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new Rectangle[capacity];
//		for(int i=0;i<size;i++)
//			arr[i]=arg.arr[i];
//	}
//	~Array()
//	{
//		delete []arr;
//	}
//	void Add(const Rectangle& data) //객체가 매개변수이므로 참조형을 써준다
//	{
//		if(size>=capacity)
//			return ;
//		arr[size++]=data;
//	}
//	int Size()const
//	{
//		return size;
//	}
//	const Rectangle& At(int idx)const
//	{
//		return arr[idx];
//	}
//};
//int CalculateArea(const Rectangle&rt)
//{
//	int w = rt.Width();
//	int h = rt.Height();
//	return w*h;
//}
//void main()
//{
//	Array arr;
//	int run=1;
//	int x1,y1,x2,y2;
//	while(run)
//	{
//		cout<<endl<<"시작좌표와 끝좌표가 (0,0)-(0,0)이면 종료"<<endl;
//		cout<<"시작 좌표를 입력하세요: ";
//		cin>>x1>>y1;
//		cout<<endl<<"끝나는 좌표를 입력하세요: ";
//		cin>>x2>>y2;
//		arr.Add(Rectangle(Point(x1,y1),Point(x2,y2)));
//		if(x1==0&&y1==0&&x2==0&&y2==0)
//			run=0;
//	}
//	for(int i=0;i<arr.Size()-1;i++)
//	{
//		arr.At(i).Draw();
//		cout<<"사각형의 넓이 : "<<CalculateArea(arr.At(i))<<endl<<endl;
//	}
//	/*Rectangle r1(Point(0,0),Point(2,3));
//	Rectangle r2(5,5, 10,10);
//	r1.Draw();
//	r2.Draw();
//	cout<<CalculateArea(r1)<<endl;
//	cout<<CalculateArea(r2)<<endl;*/
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void SetX(int x){this->x=x;}
//	void SetY(int y){this->y=y;}
//	int GetX(){return x;}
//	int GetY(){return y;}
//};
//class Rectangle
//{
//	Point startPoint;
//	Point endPoint;
//public:
//	Rectangle(){}
//	Rectangle(Point&stP,Point&EP):startPoint(stP),endPoint(EP){}
//	void SetStartPoint(Point&stP){startPoint = stP;}
//	void SetEndPoint(Point&EP){endPoint = EP;}
//	Point& GetStartPoint(){return startPoint;}
//	Point& GetEndPoint(){return endPoint;}
//	int GetWidth(){return abs(endPoint.GetX()-startPoint.GetX());}
//	int GetHeight(){return abs(endPoint.GetY()-startPoint.GetY());}
//	int GetArea()
//	{
//		return (this->GetHeight()*this->GetWidth());
//	}
//	void RecInfo()
//	{
//		cout<<"시작좌표: ("<<startPoint.GetX()<<','<<startPoint.GetY()<<") - 끝좌표: ("<<
//			endPoint.GetX()<<','<<endPoint.GetY()<<")"<<endl;
//		cout<<"넓이 : "<<this->GetArea()<<endl;
//	}
//};
//class RecArray
//{
//	Rectangle*Rarr;
//	int size;
//	int capacity;
//public:
//	RecArray(int cap=10):size(0),capacity(cap)
//	{
//		Rarr = new Rectangle[capacity];
//	}
//	void Add(Point&stp,Point&endp)
//	{
//		Rarr[size++] = Rectangle(stp,endp);
//	}
//	Rectangle& At(int index)
//	{
//		return Rarr[index];
//	}
//	int Size(){return size;}
//	
//};
//void PrintRecInfo(RecArray&rarr)
//{
//	for(int i=0;i<rarr.Size()-1;i++){
//		rarr.At(i).RecInfo();
//	}
//}
//void main()
//{
//	RecArray Rarr;
//	int run=1;
//	int x1,y1,x2,y2;
//	while(run)
//	{
//		cout<<"시작좌표 입력 : ";
//		cin>>x1>>y1;
//		cout<<"끝좌표 입력 : ";
//		cin>>x2>>y2;
//		Rarr.Add(Point(x1,y1),Point(x2,y2));
//		if(x1==0&&y1==0&&x2==0&&y2==0)
//			run=0;
//	}
//	PrintRecInfo(Rarr);
//
//}

#include<iostream>
using namespace std;
class Triangle
{
public:
};
class Rectangle
{
public:
};
class Circle
{
public:
};
template <typename T>
void PrintFigureArea(T&figure)
{
	if(T==Triangle)
	{
	}
	else if(T==Rectangle)
	{
	}
	else if(T==Circle)
	{
	}
}
int main()
{
	int run=1;
	int select;
	while(run)
	{
		cout<<"1.Evaluate the Triangle Area"<<endl;
		cout<<"2.Evaluate the Rectangle Area"<<endl;
		cout<<"3.Evaluate the Circle Area"<<endl;
		cout<<"0.Exit the Program"<<endl<<endl;

		cout<<"Select working set : ";
		cin>>select;
		switch(select)
		{
		case 1:
		case 2:
		case 3:

		case 0:
			run = 0;
			break;
		default:
			break;
		}
	}
}