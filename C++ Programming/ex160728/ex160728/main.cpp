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
//	Array arr(100); //����ڿ� �Է¿����� ����� �޸𸮿뷮�� �ٸ����Ϸ��� �����޸𸮻��
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
//		buf=new int[capacity]; //new�������Ƿ� delete�� �־���Ѵ�.
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
//	Array arr(100); //����ڿ� �Է¿����� ����� �޸𸮿뷮�� �ٸ����Ϸ��� �����޸𸮻��
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
//		buf=new int[capacity]; //new�������Ƿ� delete�� �־���Ѵ�.
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
//	Array arr(100); //����ڿ� �Է¿����� ����� �޸𸮿뷮�� �ٸ����Ϸ��� �����޸𸮻��
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
//		buf=new int[capacity]; //new�������Ƿ� delete�� �־���Ѵ�.
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
//	Array arr(100); //����ڿ� �Է¿����� ����� �޸𸮿뷮�� �ٸ����Ϸ��� �����޸𸮻��
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
//	Point pt2(pt1); //��ü�� ����� �����Ϸ��� ���ش�.
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
//	int*py; //�������̹Ƿ� �����޸𸮰� �ʿ��ϴ�.
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
////������ �����
////����������� ������ �ϹǷ� ���� �߻�
////������ ���°�쿡�� ������ �߻��Ѵ�.
////��������� �ΰ�ü�� ���ε��� �����޸𸮸� ���°�
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(pt1); //��ü�� ����� �����Ϸ��� ���ش�.
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
//	int*py; //�������̹Ƿ� �����޸𸮰� �ʿ��ϴ�.
//public:
//	Point(int _x=0,int _y=0):x(_x),py(0)
//	{
//		py=new int(_y);
//	}
//	Point(const Point& arg):x(arg.x),py(0)//����������� ���� signiture deep copy�� ���� ���������
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
////������ �����
////����������� ������ �ϹǷ� ���� �߻�
////������ ���°�쿡�� ������ �߻��Ѵ�.
////��������� �ΰ�ü�� ���ε��� �����޸𸮸� ���°�
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(pt1); //��ü�� ����� �����Ϸ��� ���ش�.
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
//		buf=new int[capacity]; //new�������Ƿ� delete�� �־���Ѵ�.
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
//	Array arr(100); //����ڿ� �Է¿����� ����� �޸𸮿뷮�� �ٸ����Ϸ��� �����޸𸮻��
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr.At(i)<<endl;
//
//	Array arr2 = arr; //������ �������ֱ⶧���� shallow copy�ϸ� �ȵ�
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