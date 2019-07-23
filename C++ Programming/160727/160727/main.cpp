//#include<iostream>
//using namespace std;
//class Point
//{
//public:
//	int x;
//	int y;
//
//	void Print()
//	{
//		cout<<x<<','<<y<<endl;
//	}
//};
//void main()
//{
//	Point pt1;
//	Point pt2;
//
//	pt1.x=2;
//	pt1.y=3;
//	pt1.Print();
//	pt2.x=5;
//	pt2.y=6;
//	pt2.Print();
//}

//#include<iostream>
//using namespace std;
//class Point
//{
//public:
//	int x;
//	int y;
//
//	void Print()
//	{
//		cout<<x<<','<<y<<endl;
//	}
//};
//void main()
//{
//	Point pt1;
//	Point pt2;
//
//	pt1.x=2;
//	pt1.y=3;
//	pt1.Print();
//
//	pt2.x=5;
//	pt2.y=6;
//	pt2.Print();
//}
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()
//	{
//
//		cout<<x<<','<<y<<endl;
//	}
//};
//void main()
//{
//	Point pt1;
//	Point pt2;
//
//	pt1.Set(2,3);
//	pt1.Print();
//
//	pt2.Set(5,6);
//	pt2.Print();
//}
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x,int _y) //생성자
//						//생성자는 객체가 생성될때 자동으로 호출되는 특수한 메서드
//						//생성자없이 만들어지는 객체는 없다
//	{
//		x=_x;
//		y=_y;
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()
//	{
//
//		cout<<x<<','<<y<<endl;
//	}
//};
//void main()
//{
//	Point pt1(1,1);
//	Point pt2(2,2);
//
//	pt1.Print();
//
//	pt2.Set(5,6);
//	pt2.Print();
//}
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(){
//		x=0;
//		y=0;
//	}
//	Point(int _x,int _y) //생성자
//						//생성자는 객체가 생성될때 자동으로 호출되는 특수한 메서드
//						//생성자없이 만들어지는 객체는 없다
//	{
//		x=_x;
//		y=_y;
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()
//	{
//
//		cout<<x<<','<<y<<endl;
//	}
//};
//void main()
//{
//	Point pt1;
//	Point pt2(2,2);
//
//	pt1.Print();
//
//	pt2.Set(5,6);
//	pt2.Print();
//}
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0) //생성자,default매개변수값을 넣어준다
//						//생성자는 객체가 생성될때 자동으로 호출되는 특수한 메서드
//						//생성자없이 만들어지는 객체는 없다
//	{
//		x=_x;
//		y=_y;
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()
//	{
//
//		cout<<x<<','<<y<<endl;
//	}
//};
//void main()
//{
//	Point pt1;
//	Point pt2(2,2);
//
//	pt1.Print();
//
//	pt2.Set(5,6);
//	pt2.Print();
//}
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0) //생성자,default매개변수값을 넣어준다
//						//생성자는 객체가 생성될때 자동으로 호출되는 특수한 메서드
//						//생성자없이 만들어지는 객체는 없다
//	{
//		x=_x;
//		y=_y;
//		cout<<"Point()"<<endl;
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()
//	{
//
//		cout<<x<<','<<y<<endl;
//	}
//};
//void main()
//{
//	Point pt1;
//	Point pt2(2,2);
//
//	pt1.Print();
//
//	pt2.Set(5,6);
//	pt2.Print();
//}
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0) //생성자,default매개변수값을 넣어준다
//						//생성자는 객체가 생성될때 자동으로 호출되는 특수한 메서드
//						//생성자없이 만들어지는 객체는 없다
//	{
//		x=_x;
//		y=_y;
//		cout<<"Point()"<<endl;
//	}
//	~Point()
//	{
//		cout<<"~Point()"<<endl;
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()
//	{
//
//		cout<<x<<','<<y<<endl;
//	}
//};
//void main()
//{
//	Point ptArray[5];
//}
//
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0) //생성자,default매개변수값을 넣어준다
//						//생성자는 객체가 생성될때 자동으로 호출되는 특수한 메서드
//						//생성자없이 만들어지는 객체는 없다
//	{
//		x=_x;
//		y=_y;
//		cout<<"Point()"<<endl;
//	}
//	~Point()
//	{
//		cout<<"~Point()"<<endl;
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()
//	{
//
//		cout<<x<<','<<y<<endl;
//	}
//};
//void main() //c++은 소ㅁ멸자도 중요하다
//{
//	Point pt1(2,3);
//	pt1.Print();
//	{
//		Point pt2(3,4);
//		pt2.Print();
//	}
//	{
//		Point pt3(5,6);
//		pt3.Print();
//	}
//}
//
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0) //생성자,default매개변수값을 넣어준다
//						//생성자는 객체가 생성될때 자동으로 호출되는 특수한 메서드
//						//생성자없이 만들어지는 객체는 없다
//	{
//		x=_x;
//		y=_y;
//		cout<<"Point()"<<endl;
//	}
//	~Point()
//	{
//		cout<<"~Point()"<<endl;
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()
//	{
//
//		cout<<x<<','<<y<<endl;
//	}
//};
//void main() //c++은 소ㅁ멸자도 중요하다
//{
//	Point pt1(2,3);
//	pt1.Print();
//	
//	Point*p=&pt1;
//	p->Print();
//}
//
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0) //생성자,default매개변수값을 넣어준다
//						//생성자는 객체가 생성될때 자동으로 호출되는 특수한 메서드
//						//생성자없이 만들어지는 객체는 없다
//	{
//		x=_x;
//		y=_y;
//		cout<<"Point()"<<endl;
//	}
//	~Point()
//	{
//		cout<<"~Point()"<<endl;
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()
//	{
//
//		cout<<x<<','<<y<<endl;
//	}
//};
//void main() //c++은 소ㅁ멸자도 중요하다
//{
//	Point pt1(2,3);
//	pt1.Print();
//	
//	Point*p= new Point(2,3);
//	p->Print();
//	delete p;//소멸됩니다.
//}
//
//
#include<iostream> //객체지향에서 데이터필드를 
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int _x=0,int _y=0) //생성자,default매개변수값을 넣어준다
						//생성자는 객체가 생성될때 자동으로 호출되는 특수한 메서드
						//생성자없이 만들어지는 객체는 없다
	{
		x=_x;
		y=_y;
		cout<<"Point()"<<endl;
	}
	~Point()
	{
		cout<<"~Point()"<<endl;
	}
	void Set(int _x,int _y)
	{
		x=_x;
		y=_y;
	}
	void Print()
	{

		cout<<x<<','<<y<<endl;
	}
};
void main() //c++은 소ㅁ멸자도 중요하다
{
	Point*parr[5];
	cout<<"main start!"<<endl;
	for(int i=0;i<5;i++)
		parr[i] = new Point(i,i);
	for(int i=0;i<5;i++)
		parr[i]->Print();
	for(int i=0;i<5;i++)
		delete parr[i]; //delete를 쓰면 소멸자 호출
	cout<<"main end..."<<endl;
}
//
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
////클래스 정의 point.h에들어간다
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0);
//	~Point();
//	void Set(int _x,int _y);
//	void Print();
//};
///////클래스 메소드의 정의 point.cpp////////////////////////////////////
//Point::Point(int _x,int _y)
//{
//	x=_x;
//	y=_y;
//	cout<<"Point()"<<endl;
//}
//Point::~Point()
//{
//	cout<<"~Point()"<<endl;
//}
//void Point::Set(int _x,int _y)
//{
//	x=_x;
//	y=_y;
//}
//void Point::Print()
//{
//
//	cout<<x<<','<<y<<endl;
//}
//void main() //c++은 소ㅁ멸자도 중요하다
//{
//	Point pt1;
//	pt1.Print();
//}
//
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y) //초기화문법	{
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()
//	{
//
//		cout<<x<<','<<y<<endl;
//	}
//};
//void main() //c++은 소ㅁ멸자도 중요하다
//{
//	Point pt;
//	pt.Print();
//}
//
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y) //초기화문법	
//	{
//	}
//	void Set(int _x,int _y)
//	{
//		this->x=_x;
//		this->y=_y;
//	}
//	void Print()
//	{
//
//		cout<<this->x<<','<<this->y<<endl;//this는 객체 자신의 주소를 의미한다.
//	}
//};
////데이터필드는 객체마다 생성되지만 메서드는 계속생성되지않는다.
//void main() //c++은 소ㅁ멸자도 중요하다
//{
//	Point pt;
//	pt.Print();
//}
//
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y) //초기화문법	
//	{
//	}
//	void Set(int _x,int _y)
//	{
//		this->x=_x;
//		this->y=_y;
//	}
//	void Print()
//	{
//
//		cout<<this->x<<','<<this->y<<endl;//this는 객체 자신의 주소를 의미한다.
//	}
//};
////데이터필드는 객체마다 생성되지만 메서드는 계속생성되지않는다.그래서 this문법을 쓴다
//void main() //c++은 소ㅁ멸자도 중요하다
//{
//	Point pt;
//	pt.Print();
//}
//
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//namespace A
//{
//	void Print(int n)
//	{
//		cout<<"A name: "<<n<<endl;
//	}
//}
//namespace B
//{
//	void Print(int n)
//	{
//		cout<<"B name: "<<n<<endl;
//	}
//}
//void main() //c++은 소ㅁ멸자도 중요하다
//{
//	A::Print(10);
//	B::Print(20);
//}
//
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//using A::Print;
//namespace A
//{
//	void Print(int n)
//	{
//		cout<<"A name: "<<n<<endl;
//	}
//}
//namespace B
//{
//	void Print(int n)
//	{
//		cout<<"B name: "<<n<<endl;
//	}
//}
//void main() //c++은 소ㅁ멸자도 중요하다
//{
//	Print(10);
//	B::Print(20);
//}
//
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//namespace A
//{
//	void Print(int n)
//	{
//		cout<<"A name: "<<n<<endl;
//	}
//}
//namespace B
//{
//	void Print(int n)
//	{
//		cout<<"B name: "<<n<<endl;
//	}
//}
//using namespace A;
//void main() //c++은 소ㅁ멸자도 중요하다
//{
//	Print(10);
//	B::Print(20);
//}
//
//


//#include<iostream> //객체지향에서 데이터필드를 
////using namespace std;
//void main()
//{
//	std::cout<<100<<std::endl;
//}
/*
#include<iostream> //객체지향에서 데이터필드를 
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int _x=0,int _y=0):x(_x),y(_y) //초기화문법	
	{
	}
	void Set(int _x,int _y)
	{
		this->x=_x;
		this->y=_y;
	}
	void Print()
	{
		cout<<this->x<<','<<this->y<<endl;//this는 객체 자신의 주소를 의미한다.

	}
	int GetX(){return x;}
	int GetY(){return y;}
	void SetX(int _x){x=_x;}
	void SetY(int _y){x=_y;}
}
void main() //c++은 소ㅁ멸자도 중요하다
{
	Point pt;
	pt.Print();
	pt.SetX(10);
	pt.SetY(10);

	cout<<pt.GetX()<<endl;
	cout<<pt.GetY()<<endl;
}
*/
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y) //초기화문법	
//	{
//	}
//	void Set(int _x,int _y)
//	{
//		this->x=_x;
//		this->y=_y;
//	}
//	void Print()const //변경하지않으니까 const메서드로 지정
//	{
//		cout<<this->x<<','<<this->y<<endl;//this는 객체 자신의 주소를 의미한다.
//
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	void SetX(int _x){x=_x;}
//	void SetY(int _y){y=_y;}
//};
//void main() //c++은 소ㅁ멸자도 중요하다
//{
//	const Point pt(2,3);
//	pt.Print();
//}
//
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y) //초기화문법	
//	{
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()const //변경하지않으니까 const메서드로 지정
//	{
//		//x=100; //const를 붙여주면 객체의 멤버를 변경할수없다.
//		cout<<this->x<<','<<this->y<<endl;//this는 객체 자신의 주소를 의미한다.
//
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	void SetX(int _x){x=_x;}
//	void SetY(int _y){y=_y;}
//};
//void main() //c++은 소ㅁ멸자도 중요하다
//{
//	const Point pt(2,3);
//	pt.Print();
//}
//
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y) //초기화문법	
//	{
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()const //변경하지않으니까 const메서드로 지정
//	{
//		cout<<this->x<<','<<this->y<<endl;//this는 객체 자신의 주소를 의미한다.
//
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	void SetX(int _x){x=_x;}
//	void SetY(int _y){y=_y;}
//};
//void PrintPoint(Point&pt)
//{
//	pt.Print();
//}
//void main() //c++은 소ㅁ멸자도 중요하다
//{
//	Point pt(2,3);
//	PrintPoint(pt);
//}
//
//
//#include<iostream> //객체지향에서 데이터필드를 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y) //초기화문법	
//	{
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()const //변경하지않으니까 const메서드로 지정
//	{
//		cout<<this->x<<','<<this->y<<endl;//this는 객체 자신의 주소를 의미한다.
//
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	void SetX(int _x){x=_x;}
//	void SetY(int _y){y=_y;}
//};
//void PrintPoint(const Point&pt) //복사하지않기위한 참조이기때문에 const를 붙여줘야한다
//{
//	pt.Print();  //const로 메서드가 정의되어있지 않으면 const객체에서 호출할 수 없다.
//}
//void main() //c++은 소ㅁ멸자도 중요하다
//{
//	Point pt(2,3);
//	PrintPoint(pt);
//}