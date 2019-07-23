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
//	String(const String&arg) //복사생성자
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
//	String(const String&arg) //복사생성자
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
//	str2 = str1; //복사대입연산자 호출,오류 지금해결못함
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
//	String(const String&arg) //복사생성자
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
//	String(const String&arg) //복사생성자
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
//	str2.Assign(str1);  //str2=str1; 이거대신에 함수사용 
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
//	String(const String&arg) //복사생성자
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
//	str2.Assign("ABC");  //매개변수의 타입이 다르지만 가능
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
//	String(const String&arg) //복사생성자
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
//	str2.Assign(String("ABC"));  //생성자형식변환으로 가능
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
//	cout<<str1<<endl;  //연산자중복이 되있어서 객체로 출력가능
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
//	cout<<str1<<endl;  //연산자중복이 되있어서 객체로 출력가능
//
//	string str2("Hi~!");
//	//str2.assign(str1); //함수로 복사가능
//	str2 = str1; //string객체는 대입연산자도 사용가능
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
//		Point pt4 = pt; //복사생성자가 호출되므로 생성자가 호출되지않는다.
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
////상태값을 저장하고 다른 멤버함수에서 사용하지 않으므로 class멤버로 사용하는것이 더 직관성이 높다.
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
////상태값을 저장하고 다른 멤버함수에서 사용하지 않으므로 class멤버로 사용하는것이 더 직관성이 높다.
////전역함수로 만들지않는것은 같은범주내에 있는 함수들을 묶기 위한것
//void main()
//{
//	cout<<Math::Add(10,20)<<endl;
//	cout<<Math::Mul(10,20)<<endl;
//}
//
//
////string,array클래스는 시험에나온대요
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
////string,array클래스는 시험에나온대요
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
//	void Add(const Point& data) //객체가 매개변수이므로 참조형을 써준다
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
//		const Point&pt = arr.At(i); //수정되지않으므로 const붙여준다.
//		pt.Print();
//	}
//}
//
//
////string,array클래스는 시험에나온대요
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
//	void Add(const T& data) //객체가 매개변수이므로 참조형을 써준다
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
//		const Point&pt = arr.At(i); //수정되지않으므로 const붙여준다.
//		pt.Print();
//	}
//}
//
//
////string,array클래스는 시험에나온대요
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
//	void Add(const T& data) //객체가 매개변수이므로 참조형을 써준다
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
//		const Point*pt = arr.At(i); //수정되지않으므로 const붙여준다.
//		pt->Print();
//	}
//	for(int i=0;i<arr.Size();++i)
//		delete arr.At(i);  //arr.Ar(i)는 동적메모리의 시작주소를 반환
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
//		const Point*pt = arr.at(i); //수정되지않으므로 const붙여준다.
//		pt->Print();
//	}
//	for(int i=0;i<arr.size();++i)
//		delete arr.at(i);  //arr.Ar(i)는 동적메모리의 시작주소를 반환
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
//		const Point*pt = arr.at(i); //수정되지않으므로 const붙여준다.
//		pt->Print();
//	}
//	for(int i=0;i<arr.size();++i)
//		delete arr.at(i);  //arr.Ar(i)는 동적메모리의 시작주소를 반환
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