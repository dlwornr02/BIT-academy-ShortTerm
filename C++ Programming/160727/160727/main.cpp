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
//#include<iostream> //��ü���⿡�� �������ʵ带 
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
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x,int _y) //������
//						//�����ڴ� ��ü�� �����ɶ� �ڵ����� ȣ��Ǵ� Ư���� �޼���
//						//�����ھ��� ��������� ��ü�� ����
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
//#include<iostream> //��ü���⿡�� �������ʵ带 
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
//	Point(int _x,int _y) //������
//						//�����ڴ� ��ü�� �����ɶ� �ڵ����� ȣ��Ǵ� Ư���� �޼���
//						//�����ھ��� ��������� ��ü�� ����
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
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0) //������,default�Ű��������� �־��ش�
//						//�����ڴ� ��ü�� �����ɶ� �ڵ����� ȣ��Ǵ� Ư���� �޼���
//						//�����ھ��� ��������� ��ü�� ����
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
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0) //������,default�Ű��������� �־��ش�
//						//�����ڴ� ��ü�� �����ɶ� �ڵ����� ȣ��Ǵ� Ư���� �޼���
//						//�����ھ��� ��������� ��ü�� ����
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
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0) //������,default�Ű��������� �־��ش�
//						//�����ڴ� ��ü�� �����ɶ� �ڵ����� ȣ��Ǵ� Ư���� �޼���
//						//�����ھ��� ��������� ��ü�� ����
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
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0) //������,default�Ű��������� �־��ش�
//						//�����ڴ� ��ü�� �����ɶ� �ڵ����� ȣ��Ǵ� Ư���� �޼���
//						//�����ھ��� ��������� ��ü�� ����
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
//void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
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
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0) //������,default�Ű��������� �־��ش�
//						//�����ڴ� ��ü�� �����ɶ� �ڵ����� ȣ��Ǵ� Ư���� �޼���
//						//�����ھ��� ��������� ��ü�� ����
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
//void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
//{
//	Point pt1(2,3);
//	pt1.Print();
//	
//	Point*p=&pt1;
//	p->Print();
//}
//
//
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0) //������,default�Ű��������� �־��ش�
//						//�����ڴ� ��ü�� �����ɶ� �ڵ����� ȣ��Ǵ� Ư���� �޼���
//						//�����ھ��� ��������� ��ü�� ����
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
//void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
//{
//	Point pt1(2,3);
//	pt1.Print();
//	
//	Point*p= new Point(2,3);
//	p->Print();
//	delete p;//�Ҹ�˴ϴ�.
//}
//
//
#include<iostream> //��ü���⿡�� �������ʵ带 
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int _x=0,int _y=0) //������,default�Ű��������� �־��ش�
						//�����ڴ� ��ü�� �����ɶ� �ڵ����� ȣ��Ǵ� Ư���� �޼���
						//�����ھ��� ��������� ��ü�� ����
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
void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
{
	Point*parr[5];
	cout<<"main start!"<<endl;
	for(int i=0;i<5;i++)
		parr[i] = new Point(i,i);
	for(int i=0;i<5;i++)
		parr[i]->Print();
	for(int i=0;i<5;i++)
		delete parr[i]; //delete�� ���� �Ҹ��� ȣ��
	cout<<"main end..."<<endl;
}
//
//
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
////Ŭ���� ���� point.h������
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
///////Ŭ���� �޼ҵ��� ���� point.cpp////////////////////////////////////
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
//void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
//{
//	Point pt1;
//	pt1.Print();
//}
//
//
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y) //�ʱ�ȭ����	{
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
//void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
//{
//	Point pt;
//	pt.Print();
//}
//
//
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y) //�ʱ�ȭ����	
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
//		cout<<this->x<<','<<this->y<<endl;//this�� ��ü �ڽ��� �ּҸ� �ǹ��Ѵ�.
//	}
//};
////�������ʵ�� ��ü���� ���������� �޼���� ��ӻ��������ʴ´�.
//void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
//{
//	Point pt;
//	pt.Print();
//}
//
//
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y) //�ʱ�ȭ����	
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
//		cout<<this->x<<','<<this->y<<endl;//this�� ��ü �ڽ��� �ּҸ� �ǹ��Ѵ�.
//	}
//};
////�������ʵ�� ��ü���� ���������� �޼���� ��ӻ��������ʴ´�.�׷��� this������ ����
//void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
//{
//	Point pt;
//	pt.Print();
//}
//
//
//#include<iostream> //��ü���⿡�� �������ʵ带 
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
//void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
//{
//	A::Print(10);
//	B::Print(20);
//}
//
//
//#include<iostream> //��ü���⿡�� �������ʵ带 
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
//void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
//{
//	Print(10);
//	B::Print(20);
//}
//
//
//#include<iostream> //��ü���⿡�� �������ʵ带 
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
//void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
//{
//	Print(10);
//	B::Print(20);
//}
//
//


//#include<iostream> //��ü���⿡�� �������ʵ带 
////using namespace std;
//void main()
//{
//	std::cout<<100<<std::endl;
//}
/*
#include<iostream> //��ü���⿡�� �������ʵ带 
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int _x=0,int _y=0):x(_x),y(_y) //�ʱ�ȭ����	
	{
	}
	void Set(int _x,int _y)
	{
		this->x=_x;
		this->y=_y;
	}
	void Print()
	{
		cout<<this->x<<','<<this->y<<endl;//this�� ��ü �ڽ��� �ּҸ� �ǹ��Ѵ�.

	}
	int GetX(){return x;}
	int GetY(){return y;}
	void SetX(int _x){x=_x;}
	void SetY(int _y){x=_y;}
}
void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
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
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y) //�ʱ�ȭ����	
//	{
//	}
//	void Set(int _x,int _y)
//	{
//		this->x=_x;
//		this->y=_y;
//	}
//	void Print()const //�������������ϱ� const�޼���� ����
//	{
//		cout<<this->x<<','<<this->y<<endl;//this�� ��ü �ڽ��� �ּҸ� �ǹ��Ѵ�.
//
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	void SetX(int _x){x=_x;}
//	void SetY(int _y){y=_y;}
//};
//void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
//{
//	const Point pt(2,3);
//	pt.Print();
//}
//
//
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y) //�ʱ�ȭ����	
//	{
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()const //�������������ϱ� const�޼���� ����
//	{
//		//x=100; //const�� �ٿ��ָ� ��ü�� ����� �����Ҽ�����.
//		cout<<this->x<<','<<this->y<<endl;//this�� ��ü �ڽ��� �ּҸ� �ǹ��Ѵ�.
//
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	void SetX(int _x){x=_x;}
//	void SetY(int _y){y=_y;}
//};
//void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
//{
//	const Point pt(2,3);
//	pt.Print();
//}
//
//
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y) //�ʱ�ȭ����	
//	{
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()const //�������������ϱ� const�޼���� ����
//	{
//		cout<<this->x<<','<<this->y<<endl;//this�� ��ü �ڽ��� �ּҸ� �ǹ��Ѵ�.
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
//void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
//{
//	Point pt(2,3);
//	PrintPoint(pt);
//}
//
//
//#include<iostream> //��ü���⿡�� �������ʵ带 
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y) //�ʱ�ȭ����	
//	{
//	}
//	void Set(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()const //�������������ϱ� const�޼���� ����
//	{
//		cout<<this->x<<','<<this->y<<endl;//this�� ��ü �ڽ��� �ּҸ� �ǹ��Ѵ�.
//
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	void SetX(int _x){x=_x;}
//	void SetY(int _y){y=_y;}
//};
//void PrintPoint(const Point&pt) //���������ʱ����� �����̱⶧���� const�� �ٿ�����Ѵ�
//{
//	pt.Print();  //const�� �޼��尡 ���ǵǾ����� ������ const��ü���� ȣ���� �� ����.
//}
//void main() //c++�� �Ҥ����ڵ� �߿��ϴ�
//{
//	Point pt(2,3);
//	PrintPoint(pt);
//}