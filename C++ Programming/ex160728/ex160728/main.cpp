//
//#include<iostream>
//using namespace std;
//class Point{
//	int x;
//	int y;
//public:
//	Point(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()const
//	{
//		cout<<x<<','<<y<<endl;
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,4);
//
//	pt1.Print();
//	pt2.Print();
//}
//
//#include<iostream>
//using namespace std;
//class Point{
//	int x;
//	int y;
//public:
//	Point(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()const
//	{
//		cout<<x<<','<<y<<endl;
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	bool Equals(Point pt)const
//	{
//		return (pt.x==this->x) && (pt.y==this->y);
//	}
//};
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,4);
//	if(pt1.Equals(pt2))
//		cout<<"true"<<endl;
//	else
//		cout<<"false"<<endl;
//	pt1.Print();
//	pt2.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point{
//	int x;
//	int y;
//public:
//	Point(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()const
//	{
//		cout<<x<<','<<y<<endl;
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	bool Equals(Point pt)const
//	{
//		return (pt.x==this->x) && (pt.y==this->y);
//	}
//};
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,4);
//	if(pt1.Equals(pt2))
//		cout<<"true"<<endl;
//	else
//		cout<<"false"<<endl;
//	pt1.Print();
//	pt2.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Array{
//	int*buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap=10):size(0),capacity(cap)
//	{
//		buf=new int[capacity];
//	}
//	void Add(int data)
//	{
//		if(size>=capacity)
//			return;
//		buf[size++] = data;
//	}
//	int At(int idx)const{return buf[idx];}
//	int Size()const{return size;}
//};
//void main()
//{
//	Array arr(100); //사용자에 입력에따라 만드는 메모리용량을 다르게하려면 동적메모리사용
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	cout<<arr.At(0)<<endl;
//	cout<<arr.At(1)<<endl;
//	cout<<arr.At(2)<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class Array{
//	int*buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap=10):size(0),capacity(cap)
//	{
//		buf=new int[capacity]; //new가있으므로 delete도 있어야한다.
//	}
//	~Array(){delete []buf;}
//	void Add(int data)
//	{
//		if(size>=capacity)
//			return;
//		buf[size++] = data;
//	}
//	int At(int idx)const{return buf[idx];}
//	int Size()const{return size;}
//};
//void main()
//{
//	Array arr(100); //사용자에 입력에따라 만드는 메모리용량을 다르게하려면 동적메모리사용
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	cout<<arr.At(0)<<endl;
//	cout<<arr.At(1)<<endl;
//	cout<<arr.At(2)<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class Array{
//	int*buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap=10):size(0),capacity(cap)
//	{
//		buf=new int[capacity]; //new가있으므로 delete도 있어야한다.
//	}
//	~Array(){delete []buf;}
//	void Add(int data)
//	{
//		if(size>=capacity)
//			return;
//		buf[size++] = data;
//	}
//	int At(int idx)const{return buf[idx];}
//	int Size()const{return size;}
//};
//void main()
//{
//	Array arr(100); //사용자에 입력에따라 만드는 메모리용량을 다르게하려면 동적메모리사용
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr.At(i)<<endl;
//}


//#include<iostream>
//using namespace std;
//class Array{
//	int*buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap=10):size(0),capacity(cap)
//	{
//		buf=new int[capacity]; //new가있으므로 delete도 있어야한다.
//	}
//	~Array(){delete []buf;}
//	void Add(int data)
//	{
//		if(size>=capacity)
//			return;
//		buf[size++] = data;
//	}
//	int At(int idx)const{return buf[idx];}
//	int Size()const{return size;}
//};
//void main()
//{
//	Array arr(100); //사용자에 입력에따라 만드는 메모리용량을 다르게하려면 동적메모리사용
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr.At(i)<<endl;
//
//	Array arr2 = arr;
//}
//
//
//#include<iostream>
//using namespace std;
//class Point{
//	int x;
//	int y;
//public:
//	Point(int _x,int _y)
//	{
//		x=_x;
//		y=_y;
//	}
//	void Print()const
//	{
//		cout<<x<<','<<y<<endl;
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(pt1); //객체의 복사는 컴파일러가 해준다.
//
//	pt1.Print();
//	pt2.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point{
//	int x;
//	int*py; //포인터이므로 동적메모리가 필요하다.
//public:
//	Point(int _x=0,int _y=0):x(_x),py(0)
//	{
//		py=new int(_y);
//	}
//	~Point()
//	{
//		delete py;
//	}
//	void Print()const
//	{
//		cout<<x<<','<<*py<<endl;
//	}
//	int GetX()const{return x;}
//	int GetY()const{return *py;}
//};
////문제가 생긴다
////복사과정에서 참조를 하므로 문제 발생
////참조를 갖는경우에는 문제가 발생한다.
////ㄹㅇ복사는 두객체가 따로따로 동적메모리를 갖는것
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(pt1); //객체의 복사는 컴파일러가 해준다.
//
//	pt1.Print();
//	pt2.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point{
//	int x;
//	int*py; //포인터이므로 동적메모리가 필요하다.
//public:
//	Point(int _x=0,int _y=0):x(_x),py(0)
//	{
//		py=new int(_y);
//	}
//	Point(const Point& arg):x(arg.x),py(0)//복사생성자의 형태 signiture deep copy를 위한 복사생성자
//	{
//		py=new int(*arg.py);
//	}
//	~Point()
//	{
//		delete py;
//	}
//	void Print()const
//	{
//		cout<<x<<','<<*py<<endl;
//	}
//	int GetX()const{return x;}
//	int GetY()const{return *py;}
//};
////문제가 생긴다
////복사과정에서 참조를 하므로 문제 발생
////참조를 갖는경우에는 문제가 발생한다.
////ㄹㅇ복사는 두객체가 따로따로 동적메모리를 갖는것
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(pt1); //객체의 복사는 컴파일러가 해준다.
//
//	pt1.Print();
//	pt2.Print();
//
//
//
//#include<iostream>
//using namespace std;
//class Array{
//	int*buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap=10):size(0),capacity(cap)
//	{
//		buf=new int[capacity]; //new가있으므로 delete도 있어야한다.
//	}
//	Array(Array&arg):size(arg.size),capacity(arg.capacity)
//	{
//		buf=new int[capacity];
//		for(int i=0;i<size;i++)
//			buf[i] = arg.buf[i];
//	}
//	~Array(){delete []buf;}
//	void Add(int data)
//	{
//		if(size>=capacity)
//			return;
//		buf[size++] = data;
//	}
//	int At(int idx)const{return buf[idx];}
//	int Size()const{return size;}
//};
//void main()
//{
//	Array arr(100); //사용자에 입력에따라 만드는 메모리용량을 다르게하려면 동적메모리사용
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr.At(i)<<endl;
//
//	Array arr2 = arr; //참조를 가지고있기때문에 shallow copy하면 안됨
//	for(int i=0;i<arr2.Size();i++)
//		cout<<arr2.At(i)<<endl;
//}
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//class String{
//	string*buf;
//	int capacity;
//	int len;
//	int size;
//public:
//	String(int cap=10):capacity(cap)
//	{
//		size=0;
//		buf=new string[cap];
//	}
//	void InputString()
//	{
//		cout<<"String : ";
//		cin>>buf[size++];
//	}
//	void OutputString()const
//	{
//		for(int i=0;i<size;i++)
//		cout<<"["<<i<<"]"<<":"<<buf[i]<<endl;
//	}
//	bool EqualsExit()const
//	{
//		return buf[size-1]=="exit";
//	}
//};
//void main()
//{
//	String str(100);
//	while(1)
//	{
//		str.InputString();
//		if(str.EqualsExit())
//			break;
//	}
//	str.OutputString();
//}