//
//
//#include<iostream>
//using namespace std;
//class String
//{
//public:
//	String(const char*s = ""){}
//	const char*GetString()const{return "";}
//};
//void main()
//{
//	String str1("Hello!");
//
//	cout<<str1.GetString()<<endl;
//}
//
//
//#include<iostream>
//#include<cstring>
//using namespace std;
//class String
//{
//	char name[100];
//public:
//	String(const char*s = "")
//	{
//		strcpy(name,s);
//	}
//	const char*GetString()const{return name;}
//};
//void main()
//{
//	String str1("Hello!");
//
//	cout<<str1.GetString()<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class String
//{
//	char*str;
//public:
//	String(const char*s = "")
//	{
//		str = new char[strlen(s)+1];
//		strcpy(str,s);
//	}
//	String(const String&arg) //���������
//	{
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//
//	}
//	~String()
//	{
//		delete str;
//	}
//	const char*GetString()const{return str;}
//};
//void main()
//{
//	String str1("Hello!");
//
//	cout<<str1.GetString()<<endl;
//
//	String str2 = str1;
//	cout<<str1.GetString()<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class String
//{
//	char*str;
//public:
//	String(const char*s = "")
//	{
//		str = new char[strlen(s)+1];
//		strcpy(str,s);
//	}
//	String(const String&arg) //���������
//	{
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//
//	}
//	~String()
//	{
//		delete str;
//	}
//	const char*GetString()const{return str;}
//};
//void main()
//{
//	String str1("Hello!");
//
//	cout<<str1.GetString()<<endl;
//
//	String str2("Hi~!");
//	str2 = str1; //������Կ����� ȣ��,���� �����ذ����
//	cout<<str1.GetString()<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class String
//{
//	char*str;
//public:
//	String(const char*s = "")
//	{
//		str = new char[strlen(s)+1];
//		strcpy(str,s);
//	}
//	String(const String&arg) //���������
//	{
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//
//	}
//	~String()
//	{
//		delete []str;
//	}
//	void Assign(const String&arg)
//	{
//		delete []str;
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//		
//	}
//	const char*GetString()const{return str;}
//};
//void main()
//{
//	String str1("Hello!");
//
//	cout<<str1.GetString()<<endl;
//
//	String str2("Hi~!");
//	cout<<str2.GetString()<<endl;
//	str2.Assign(str1);
//	cout<<str2.GetString()<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class String
//{
//	char*str;
//public:
//	String(const char*s = "")
//	{
//		str = new char[strlen(s)+1];
//		strcpy(str,s);
//	}
//	String(const String&arg) //���������
//	{
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//
//	}
//	~String()
//	{
//		delete []str;
//	}
//	void Assign(const String&arg)
//	{
//		delete []str;
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//		
//	}
//	const char*GetString()const{return str;}
//};
//void main()
//{
//	String str1("Hello!");
//
//	cout<<str1.GetString()<<endl;
//
//	String str2("Hi~!");
//	cout<<str2.GetString()<<endl;
//	str2.Assign(str1);  //str2=str1; �̰Ŵ�ſ� �Լ���� 
//	cout<<str2.GetString()<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class String
//{
//	char*str;
//public:
//	String(const char*s = "")
//	{
//		str = new char[strlen(s)+1];
//		strcpy(str,s);
//	}
//	String(const String&arg) //���������
//	{
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//
//	}
//	~String()
//	{
//		delete []str;
//	}
//	void Assign(const String&arg)
//	{
//		delete []str;
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//		
//	}
//	const char*GetString()const{return str;}
//};
//void main()
//{
//	String str1("Hello!");
//
//	cout<<str1.GetString()<<endl;
//
//	String str2;
//	str2.Assign("ABC");  //�Ű������� Ÿ���� �ٸ����� ����
//	cout<<str2.GetString()<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class String
//{
//	char*str;
//public:
//	String(const char*s = "")
//	{
//		str = new char[strlen(s)+1];
//		strcpy(str,s);
//	}
//	String(const String&arg) //���������
//	{
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//
//	}
//	~String()
//	{
//		delete []str;
//	}
//	void Assign(const String&arg)
//	{
//		delete []str;
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//		
//	}
//	const char*GetString()const{return str;}
//};
//void main()
//{
//	String str1("Hello!");
//
//	cout<<str1.GetString()<<endl;
//
//	String str2;
//	str2.Assign(String("ABC"));  //���������ĺ�ȯ���� ����
//	cout<<str2.GetString()<<endl;
//}
//
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
//using namespace std;
//
//void main()
//{
//	string str1("Hello!");
//	cout<<str1.c_str()<<endl;
//
//	string str2("Hi~!");
//	cout<<str2.c_str()<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
//using namespace std;
//
//void main()
//{
//	string str1("Hello!");
//	cout<<str1<<endl;  //�������ߺ��� ���־ ��ü�� ��°���
//
//	string str2("Hi~!");
//	cout<<str2<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
//using namespace std;
//
//void main()
//{
//	string str1("Hello!");
//	cout<<str1<<endl;  //�������ߺ��� ���־ ��ü�� ��°���
//
//	string str2("Hi~!");
//	//str2.assign(str1); //�Լ��� ���簡��
//	str2 = str1; //string��ü�� ���Կ����ڵ� ��밡��
//	cout<<str2<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
//using namespace std;
//class Point
//{
//	int x,y;
//	static int InstanceNum;
//public:
//	Point(int x=0,int y=0):x(x),y(y){InstanceNum++;}
//	~Point(){InstanceNum--;}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	static int GetInstanceNum()
//	{
//		return InstanceNum;
//	}
//};
//int Point::InstanceNum;
//void main()
//{
//	cout<<"InstanceNum : "<<Point::GetInstanceNum()<<endl;
//	{
//		Point pt;
//		pt.Print();
//		cout<<"InstanceNum : "<<Point::GetInstanceNum()<<endl;
//	}
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
//using namespace std;
//class Point
//{
//	int x,y;
//	static int InstanceNum;
//public:
//	Point(int x=0,int y=0):x(x),y(y){InstanceNum++;}
//	~Point(){InstanceNum--;}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	static int GetInstanceNum()
//	{
//		return InstanceNum;
//	}
//};
//int Point::InstanceNum;
//void main()
//{
//	cout<<"InstanceNum : "<<Point::GetInstanceNum()<<endl;
//	{
//		Point pt,pt2,pt3;
//		pt.Print();
//		cout<<"InstanceNum : "<<Point::GetInstanceNum()<<endl;
//	}
//	cout<<"InstanceNum : "<<Point::GetInstanceNum()<<endl;
//
//}


//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
//using namespace std;
//class Point
//{
//	int x,y;
//	static int InstanceNum;
//public:
//	Point(int x=0,int y=0):x(x),y(y){InstanceNum++;}
//	~Point(){InstanceNum--;}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	static int GetInstanceNum()
//	{
//		return InstanceNum;
//	}
//};
//int Point::InstanceNum=3;
//void main()
//{
//	cout<<"InstanceNum : "<<Point::GetInstanceNum()<<endl;
//	{
//		Point pt,pt2,pt3;
//		pt.Print();
//		cout<<"InstanceNum : "<<Point::GetInstanceNum()<<endl;
//	}
//	cout<<"InstanceNum : "<<Point::GetInstanceNum()<<endl;
//
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
//using namespace std;
//class Point
//{
//	int x,y;
//	static int InstanceNum;
//public:
//	Point(int x=0,int y=0):x(x),y(y){InstanceNum++;}
//	Point(const Point&arg):x(arg.x),y(arg.y){InstanceNum++;}
//	~Point(){InstanceNum--;}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	static int GetInstanceNum()
//	{
//		return InstanceNum;
//	}
//};
//int Point::InstanceNum;
//void main()
//{
//	cout<<"InstanceNum : "<<Point::GetInstanceNum()<<endl;
//	{
//		Point pt,pt2,pt3;
//		Point pt4 = pt; //��������ڰ� ȣ��ǹǷ� �����ڰ� ȣ������ʴ´�.
//		pt.Print();
//		cout<<"InstanceNum : "<<Point::GetInstanceNum()<<endl;
//	}
//	cout<<"InstanceNum : "<<Point::GetInstanceNum()<<endl;
//
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
//using namespace std;
//class Math
//{
//public:
//	int Add(int a,int b)
//	{
//		return a+b;
//	}
//	int Mul(int a,int b)
//	{
//		return a*b;
//	}
//};
////���°��� �����ϰ� �ٸ� ����Լ����� ������� �����Ƿ� class����� ����ϴ°��� �� �������� ����.
//void main()
//{
//	Math m;
//	cout<<m.Add(10,20)<<endl;
//	cout<<m.Mul(10,20)<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
//using namespace std;
//class Math
//{
//public:
//	static int Add(int a,int b)
//	{
//		return a+b;
//	}
//	static int Mul(int a,int b)
//	{
//		return a*b;
//	}
//};
////���°��� �����ϰ� �ٸ� ����Լ����� ������� �����Ƿ� class����� ����ϴ°��� �� �������� ����.
////�����Լ��� �������ʴ°��� �������ֳ��� �ִ� �Լ����� ���� ���Ѱ�
//void main()
//{
//	cout<<Math::Add(10,20)<<endl;
//	cout<<Math::Mul(10,20)<<endl;
//}
//
//
////string,arrayŬ������ ���迡���´��
//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
//using namespace std;
//class Array{
//	int*arr;
//	int size;
//	int capacity;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap)
//	{
//		arr = new int[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new int[capacity];
//		for(int i=0;i<size;i++)
//			arr[i]=arg.arr[i];
//	}
//	~Array()
//	{
//		delete []arr;
//	}
//	void Add(int data)
//	{
//		if(size>=capacity)
//			return ;
//		arr[size++]=data;
//	}
//	int Size()const
//	{
//		return size;
//	}
//	int At(int idx)const
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array arr;
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr.At(i)<<endl;
//}
//
//
////string,arrayŬ������ ���迡���´��
//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
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
//class Array{
//	Point*arr;
//	int size;
//	int capacity;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap)
//	{
//		arr = new Point[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new Point[capacity];
//		for(int i=0;i<size;i++)
//			arr[i]=arg.arr[i];
//	}
//	~Array()
//	{
//		delete []arr;
//	}
//	void Add(const Point& data) //��ü�� �Ű������̹Ƿ� �������� ���ش�
//	{
//		if(size>=capacity)
//			return ;
//		arr[size++]=data;
//	}
//	int Size()const
//	{
//		return size;
//	}
//	const Point& At(int idx)const
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array arr;
//	arr.Add(Point(2,3));
//	arr.Add(Point(5,4));
//	arr.Add(Point(7,8));
//
//	for(int i=0;i<arr.Size();i++){
//		const Point&pt = arr.At(i); //�������������Ƿ� const�ٿ��ش�.
//		pt.Print();
//	}
//}
//
//
////string,arrayŬ������ ���迡���´��
//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
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
//typedef Point T;
//class Array{
//	T*arr;
//	int size;
//	int capacity;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap)
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i=0;i<size;i++)
//			arr[i]=arg.arr[i];
//	}
//	~Array()
//	{
//		delete []arr;
//	}
//	void Add(const T& data) //��ü�� �Ű������̹Ƿ� �������� ���ش�
//	{
//		if(size>=capacity)
//			return ;
//		arr[size++]=data;
//	}
//	int Size()const
//	{
//		return size;
//	}
//	const T& At(int idx)const
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array arr;
//	arr.Add(Point(2,3));
//	arr.Add(Point(5,4));
//	arr.Add(Point(7,8));
//
//	for(int i=0;i<arr.Size();i++){
//		const Point&pt = arr.At(i); //�������������Ƿ� const�ٿ��ش�.
//		pt.Print();
//	}
//}
//
//
////string,arrayŬ������ ���迡���´��
//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
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
//typedef Point*T;
//class Array{
//	T*arr;
//	int size;
//	int capacity;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap)
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i=0;i<size;i++)
//			arr[i]=arg.arr[i];
//	}
//	~Array()
//	{
//		delete []arr;
//	}
//	void Add(const T& data) //��ü�� �Ű������̹Ƿ� �������� ���ش�
//	{
//		if(size>=capacity)
//			return ;
//		arr[size++]=data;
//	}
//	int Size()const
//	{
//		return size;
//	}
//	const T& At(int idx)const
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array arr;
//	arr.Add(new Point(2,3));
//	arr.Add(new Point(5,4));
//	arr.Add(new Point(7,8));
//
//	for(int i=0;i<arr.Size();i++){
//		const Point*pt = arr.At(i); //�������������Ƿ� const�ٿ��ش�.
//		pt->Print();
//	}
//	for(int i=0;i<arr.Size();++i)
//		delete arr.At(i);  //arr.Ar(i)�� �����޸��� �����ּҸ� ��ȯ
//}
//
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
//#include<vector>
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
//void main()
//{
//	vector<Point*>arr;
//	arr.push_back(new Point(2,3));
//	arr.push_back(new Point(5,4));
//	arr.push_back(new Point(7,8));
//
//	for(int i=0;i<arr.size();i++){
//		const Point*pt = arr.at(i); //�������������Ƿ� const�ٿ��ش�.
//		pt->Print();
//	}
//	for(int i=0;i<arr.size();++i)
//		delete arr.at(i);  //arr.Ar(i)�� �����޸��� �����ּҸ� ��ȯ
//}
//
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<string>
//#include<vector>
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
//void main()
//{
//	vector<Point*>arr;
//	arr.push_back(new Point(2,3));
//	arr.push_back(new Point(5,4));
//	arr.push_back(new Point(7,8));
//
//	for(int i=0;i<arr.size();i++){
//		const Point*pt = arr.at(i); //�������������Ƿ� const�ٿ��ش�.
//		pt->Print();
//	}
//	for(int i=0;i<arr.size();++i)
//		delete arr.at(i);  //arr.Ar(i)�� �����޸��� �����ּҸ� ��ȯ
//}
//
//
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
//	Rectangle(const Point&s,const Point&e):ptStart(s),ptEnd(e){}
//	Rectangle(int l,int t,int r,int b):ptStart(l,t),ptEnd(r,b){}
//	void Draw()const
//	{
//		cout<<"("<<ptStart.GetX()<<','<<ptStart.GetY()<<'-'<<')'
//			<<"("<<ptEnd.GetX()<<','<<ptEnd.GetY()<<'-'<<')'<<endl;
//	}
//
//};
//void main()
//{
//	Rectangle r1(Point(0,0),Point(2,3));
//	Rectangle r2(5,5, 10,10);
//}
//
//
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
//		cout<<"("<<ptStart.GetX()<<','<<ptStart.GetY()<<'-'<<')'
//			<<"("<<ptEnd.GetX()<<','<<ptEnd.GetY()<<'-'<<')'<<endl;
//	}
//
//};
//int CalculateArea(Rectangle rt)
//{
//	return (rt.GetEndPoint().GetX()-rt.GetStartPoint().GetX())*
//		(rt.GetEndPoint().GetY()-rt.GetStartPoint().GetX());
//}
//
//void main()
//{
//	Rectangle r1(Point(0,0),Point(2,3));
//	Rectangle r2(5,5, 10,10);
//
//	cout<<CalculateArea(r1)<<endl;
//	cout<<CalculateArea(r2)<<endl;
//}

//
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
//		cout<<"("<<ptStart.GetX()<<','<<ptStart.GetY()<<'-'<<')'
//			<<"("<<ptEnd.GetX()<<','<<ptEnd.GetY()<<'-'<<')'<<endl;
//	}
//	int Width()const{return ptEnd.GetX()-ptStart.GetX();}
//	int Height()const{return ptEnd.GetY()-ptStart.GetY();}
//
//};
//int CalculateArea(const Rectangle&rt)
//{
//	int w = rt.Width();
//	int h = rt.Height();
//	return w*h;
//}
//
//void main()
//{
//	Rectangle r1(Point(0,0),Point(2,3));
//	Rectangle r2(5,5, 10,10);
//
//	cout<<CalculateArea(r1)<<endl;
//	cout<<CalculateArea(r2)<<endl;
//}

//
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
//		cout<<"("<<ptStart.GetX()<<','<<ptStart.GetY()<<'-'<<')'
//			<<"("<<ptEnd.GetX()<<','<<ptEnd.GetY()<<'-'<<')'<<endl;
//	}
//	int Width()const{return abs(ptEnd.GetX()-ptStart.GetX());}
//	int Height()const{return abs(ptEnd.GetY()-ptStart.GetY());}
//
//};
//int CalculateArea(const Rectangle&rt)
//{
//	int w = rt.Width();
//	int h = rt.Height();
//	return w*h;
//}
//void main()
//{
//	Rectangle r1(Point(0,0),Point(2,3));
//	Rectangle r2(5,5, 10,10);
//
//	cout<<CalculateArea(r1)<<endl;
//	cout<<CalculateArea(r2)<<endl;
//}


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
//		cout<<endl<<"������ǥ ("<<ptStart.GetX()<<','<<ptStart.GetY()<<')'<<'-'
//			<<"����ǥ ("<<ptEnd.GetX()<<','<<ptEnd.GetY()<<')'<<endl;
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
//	void Add(const Rectangle& data) //��ü�� �Ű������̹Ƿ� �������� ���ش�
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
//		cout<<endl<<"������ǥ�� ����ǥ�� (0,0)-(0,0)�̸� ����"<<endl;
//		cout<<"���� ��ǥ�� �Է��ϼ���: ";
//		cin>>x1>>y1;
//		cout<<endl<<"������ ��ǥ�� �Է��ϼ���: ";
//		cin>>x2>>y2;
//		arr.Add(Rectangle(Point(x1,y1),Point(x2,y2)));
//		if(x1==0&&y1==0&&x2==0&&y2==0)
//			run=0;
//	}
//	for(int i=0;i<arr.Size()-1;i++)
//	{
//		arr.At(i).Draw();
//		cout<<"�簢���� ���� : "<<CalculateArea(arr.At(i))<<endl<<endl;
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
//		cout<<endl<<"������ǥ ("<<ptStart.GetX()<<','<<ptStart.GetY()<<')'<<'-'
//			<<"����ǥ ("<<ptEnd.GetX()<<','<<ptEnd.GetY()<<')'<<endl;
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
//	void Add(const Rectangle& data) //��ü�� �Ű������̹Ƿ� �������� ���ش�
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
//		cout<<endl<<"������ǥ�� ����ǥ�� (0,0)-(0,0)�̸� ����"<<endl;
//		cout<<"���� ��ǥ�� �Է��ϼ���: ";
//		cin>>x1>>y1;
//		cout<<endl<<"������ ��ǥ�� �Է��ϼ���: ";
//		cin>>x2>>y2;
//		arr.Add(Rectangle(Point(x1,y1),Point(x2,y2)));
//		if(x1==0&&y1==0&&x2==0&&y2==0)
//			run=0;
//	}
//	for(int i=0;i<arr.Size()-1;i++)
//	{
//		arr.At(i).Draw();
//		cout<<"�簢���� ���� : "<<CalculateArea(arr.At(i))<<endl<<endl;
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
//		cout<<"������ǥ: ("<<startPoint.GetX()<<','<<startPoint.GetY()<<") - ����ǥ: ("<<
//			endPoint.GetX()<<','<<endPoint.GetY()<<")"<<endl;
//		cout<<"���� : "<<this->GetArea()<<endl;
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
//		cout<<"������ǥ �Է� : ";
//		cin>>x1>>y1;
//		cout<<"����ǥ �Է� : ";
//		cin>>x2>>y2;
//		Rarr.Add(Point(x1,y1),Point(x2,y2));
//		if(x1==0&&y1==0&&x2==0&&y2==0)
//			run=0;
//	}
//	PrintRecInfo(Rarr);
//
//}