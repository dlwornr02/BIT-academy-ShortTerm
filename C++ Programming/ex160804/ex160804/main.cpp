//#include<iostream>
//#include<cstring>
//#include<string>
//class String
//{
//	char*str;
//public:
//	String(char*_str)
//	{
//		str = new char[strlen(_str)+1];
//		strcpy(str,_str);
//	}
//}
//void main()
//{
//
//}
//
//
//#include<iostream>
//using namespace std;
//class Array
//{
//public:
//	Array(int cap=100){}
//	void Add(int data)
//	{
//	}
//	int Size()const{return 0;}
//	int operator[](int idx)const
//	{
//		return 0;
//	}
//	int& operator[](int idx)
//	{
//		int n=10;
//		return n;
//	}
//};
//void main()
//{
//	Array arr;
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	arr.Add(40);
//	arr.Add(50);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//}
////////�������̽��ϼ�//////////

//
//#include<iostream>
//using namespace std;
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	int*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):size(0),capacity(cap)
//	{
//		arr = new int[capacity];
//	}
//	~Array(){delete arr;}
//	void Add(int data)
//	{
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	int operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//	{
//		return arr[idx];
//	}
//	int& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array arr(5);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	arr.Add(40);
//	arr.Add(50);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	int*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
//	{
//		arr = new int[capacity];
//	}
//	Array(const Array&arg){
//	}
//	~Array(){delete arr;}
//	void Add(int data)
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	int operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//	{
//		return arr[idx];
//	}
//	int& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array arr(5);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	arr.Add(40);
//	arr.Add(50);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	int*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
//	{
//		arr = new int[capacity];
//	}
//	Array(const Array&arg){
//	}
//	~Array(){delete arr;}
//	void Add(int data)
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	int At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw"idx ����!";
//	}
//	int operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	int& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array arr(5);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	arr.Add(40);
//	arr.Add(50);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	int*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
//	{
//		arr = new int[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new int[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg)
//	{
//		//if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
//			//return;
//		delete []arr;
//		size = arg.size;
//		capacity=arg.capacity;
//		arr = new int[capacity];
//		for(int i=0;i<arg.size;i++)
//			arr[i]=arg.arr[i];
//		return *this;
//	}
//	~Array(){delete arr;}
//	void Add(int data)
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	int At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw"idx ����!";
//	}
//	int operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	int& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array arr(5);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	arr.Add(40);
//	arr.Add(50);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//
//	//Array arr2 = arr;
//	Array arr2;
//	arr2= arr;
//	for(int i=0;i<arr2.Size();i++)
//		cout<<arr2[i]<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	int*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
//	{
//		arr = new int[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new int[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
//	{
//		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
//			return *this;
//		delete []arr;
//		size = arg.size;
//		capacity=arg.capacity;
//		arr = new int[capacity];
//		for(int i=0;i<arg.size;i++)
//			arr[i]=arg.arr[i];
//		return *this;
//	}
//	~Array(){delete arr;}
//	void Add(int data)
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	int At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw"idx ����!";
//	}
//	int operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	int& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array arr(5);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	arr.Add(40);
//	arr.Add(50);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//
//	//Array arr2 = arr;
//	arr= arr; //�ڱ����
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	int*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
//	{
//		arr = new int[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new int[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
//	{
//		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
//			return *this;
//		delete []arr;
//		size = arg.size;
//		capacity=arg.capacity;
//		arr = new int[capacity];
//		for(int i=0;i<arg.size;i++)
//			arr[i]=arg.arr[i];
//		return *this;
//	}
//	~Array(){delete arr;}
//	void Add(int data)
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	int At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw"idx ����!";
//	}
//	int operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	int& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array arr(5);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	arr.Add(40);
//	arr.Add(50);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//
//	//Array arr2 = arr;
//	arr= arr; //�ڱ����
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//typedef int T;
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
//	{
//		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
//			return *this;
//		delete []arr;
//		size = arg.size;
//		capacity=arg.capacity;
//		arr = new T[capacity];
//		for(int i=0;i<arg.size;i++)
//			arr[i]=arg.arr[i];
//		return *this;
//	}
//	~Array(){delete arr;}
//	void Add(const T& data) //�����������𸣹Ƿ� const���������
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	const T& At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw"idx ����!";
//	}
//	const T& operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array arr(5);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	arr.Add(40);
//	arr.Add(50);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//
//	//Array arr2 = arr;
//	arr= arr; //�ڱ����
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//typedef double T;
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
//	{
//		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
//			return *this;
//		delete []arr;
//		size = arg.size;
//		capacity=arg.capacity;
//		arr = new T[capacity];
//		for(int i=0;i<arg.size;i++)
//			arr[i]=arg.arr[i];
//		return *this;
//	}
//	~Array(){delete arr;}
//	void Add(const T& data) //�����������𸣹Ƿ� const���������
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	const T& At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw"idx ����!";
//	}
//	const T& operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array arr(5);
//
//	arr.Add(10.5);
//	arr.Add(20.2);
//	arr.Add(30.3);
//	arr.Add(40.6);
//	arr.Add(50.5);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//
//	//Array arr2 = arr;
//	arr= arr; //�ڱ����
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class String
//{
//	char*buf;
//public:
//	String(const char*s="")
//	{
//		buf=new char[strlen(s)+1];
//		strcpy(buf,s);
//	}
//	String(const String&arg)
//	{
//		buf=new char[strlen(arg.buf)+1];
//		strcpy(buf,arg.buf);
//	}
//	const String& operator=(const String&arg)
//	{
//		delete[]buf;
//		buf=new char[strlen(arg.buf)+1];
//		strcpy(buf,arg.buf);
//		return *this;
//	}
//	const String& operator+=(const String&arg)
//	{
//		char*s=new char[strlen(buf)+strlen(arg.buf)+1];
//		strcpy(s,buf);
//		strcat(s,arg.buf);
//		delete []buf;
//		buf=s;
//		return *this;
//	}
//	const String& operator-=(const String&arg)
//	{
//		buf=new char[strlen(arg.buf)+1];
//		strcpy(buf,arg.buf);
//		return *this;
//	}
//	~String(){delete[]buf;}
//	const char*GetString()const
//	{
//		return buf;
//	}
//	const String operator+(const String&arg) //���ο� ��ü�� �����ǹǷ� ��ȯŸ�Կ� �����Ⱦ�
//	{
//		char*s;
//		s = new char[strlen(buf)+strlen(arg.buf)+1];
//		strcpy(s,buf);
//		strcat(s,arg.buf);
//		
//		String str(s);
//		delete []s;
//		return str;
//	}
//	const char& operator[](int idx)const //const��ü�� ��const��ü������ ���� �ߺ������ڸ� �������ش�.
//	{
//		cout<<"const"<<endl;
//		return buf[idx];
//	}
//	char& operator[](int idx) //������ ����ؼ� ��ȯ���ش�.
//	{
//		return buf[idx];
//	}
//	operator const char*()const
//	{
//		return buf;
//	}
//	operator int()const
//	{
//		return strlen(buf);
//	}
//};
//ostream& operator<<(ostream& out,const String&st)
//{
//	out<<st.GetString();
//	return out;
//}
//typedef String T;
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
//	{
//		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
//			return *this;
//		delete []arr;
//		size = arg.size;
//		capacity=arg.capacity;
//		arr = new T[capacity];
//		for(int i=0;i<arg.size;i++)
//			arr[i]=arg.arr[i];
//		return *this;
//	}
//	~Array(){delete [] arr;}
//	void Add(const T& data) //�����������𸣹Ƿ� const���������
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	const T& At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw"idx ����!";
//	}
//	const T& operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array arr(5);
//
//	arr.Add("10.5");
//	arr.Add("20.5");
//	arr.Add("30.3");
//	arr.Add("40.6");
//	arr.Add("50.5");
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//
//	//Array arr2 = arr;
//	arr= arr; //�ڱ����
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//ostream& operator<<(ostream&o,const Point&arg)
//{
//	o<<arg.GetX()<<','<<arg.GetY();
//	return o;
//}
//typedef Point T;
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
//	{
//		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
//			return *this;
//		delete []arr;
//		size = arg.size;
//		capacity=arg.capacity;
//		arr = new T[capacity];
//		for(int i=0;i<arg.size;i++)
//			arr[i]=arg.arr[i];
//		return *this;
//	}
//	~Array(){delete [] arr;}
//	void Add(const T& data) //�����������𸣹Ƿ� const���������
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	const T& At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw"idx ����!";
//	}
//	const T& operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array arr(5);
//
//	arr.Add(Point(2,3));
//	arr.Add(Point(4,5));
//	arr.Add(Point(7,8));
//	arr.Add(Point(6,5));
//	arr.Add(Point(0,0));
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//
//	//Array arr2 = arr;
//	arr= arr; //�ڱ����
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//}
//
//
//#include<iostream>
//using namespace std; 
//void Print(int n){cout<<"data : "<<n<<endl;}
//void main()
//{
//	Print(100);
//	Print("Hello!")
//}
//
//
//#include<iostream>
//using namespace std; 
//template <typename T>//Ŭ���̾�Ʈ�� Ÿ���� ���Ѵٴ� �ǹ� T�� template�� �Ű�����
//void Print(T n){cout<<"data : "<<n<<endl;}
//void main()
//{
//	Print(100);
//	Print("Hello!");
//}
//
//
//#include<iostream>
//using namespace std; 
//template <typename T>//Ŭ���̾�Ʈ�� Ÿ���� ���Ѵٴ� �ǹ� T�� template�� �Ű�����
//void Print(T n){cout<<"data : "<<n<<endl;}//������� ������ �𸣹Ƿ� const&�� �ٿ��ش�
//void main()
//{
//	Print<int>(100);
//	Print<const char*>("Hello!");
//}
//
//
//#include<iostream>
//using namespace std; 
//template <typename T>//Ŭ���̾�Ʈ�� Ÿ���� ���Ѵٴ� �ǹ� T�� template�� �Ű�����
//void Print(T n){cout<<"data : "<<n<<endl;}//������� ������ �𸣹Ƿ� const&�� �ٿ��ش�
//void main()
//{
//	Print<int>(100); //�̰���¥�Լ�
//	Print<const char*>("Hello!");
//}
//
//
//#include<iostream>
//using namespace std; 
//template <typename T>//Ŭ���̾�Ʈ�� Ÿ���� ���Ѵٴ� �ǹ� T�� template�� �Ű�����
//void Print(const&T n){cout<<typeid(T).name()<<"data : "<<n<<endl;}//������� ������ �𸣹Ƿ� const&�� �ٿ��ش�
//void main()
//{
//	Print<int>(100); //�̰���¥�Լ�
//	Print<const char*>("Hello!");
//}
//
//
//#include<iostream>
//using namespace std; 
//template <typename T>//Ŭ���̾�Ʈ�� Ÿ���� ���Ѵٴ� �ǹ� T�� template�� �Ű�����
//void Print(T n) //�̰���¥�Լ����ƴ϶� ���� �Լ���template�̴�. Ŭ���̾�Ʈ�� Ÿ���� �������ָ� �ڵ����� ��¥�Լ��� �������ش�.
//{
//	cout<<typeid(T).name()<<"data : "<<n<<endl;
//}//const&�� ���� �˾Ƽ� �������ش�.
//void main()
//{
//	Print(100);
//	Print("Hello!"); //Ÿ���� �̸��� �����ص������Ѵ�
//}
//
//
//#include<iostream>
//using namespace std; 
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//ostream& operator<<(ostream&o,const Point&arg)
//{
//	o<<arg.GetX()<<','<<arg.GetY();
//	return o;
//}
//template <typename T>//Ŭ���̾�Ʈ�� Ÿ���� ���Ѵٴ� �ǹ� T�� template�� �Ű�����
//void Print(T n) //�̰���¥�Լ����ƴ϶� ���� �Լ���template�̴�. Ŭ���̾�Ʈ�� Ÿ���� �������ָ� �ڵ����� ��¥�Լ��� �������ش�.
//{
//	cout<<typeid(T).name()<<"data : "<<n<<endl;
//}//const&�� ���� �˾Ƽ� �������ش�.
//void main()
//{
//	Print(100);
//	Print("Hello!"); //Ÿ���� �̸��� �����ص������Ѵ�
//	Print(Point(2,3));
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//ostream& operator<<(ostream&o,const Point&arg)
//{
//	o<<arg.GetX()<<','<<arg.GetY();
//	return o;
//}
//template <typename T>//Ŭ���̾�Ʈ�� Ÿ���� ���Ѵٴ� �ǹ� T�� template�� �Ű�����
//void Print(T n) //�̰���¥�Լ����ƴ϶� ���� �Լ���template�̴�. Ŭ���̾�Ʈ�� Ÿ���� �������ָ� �ڵ����� ��¥�Լ��� �������ش�.
//{
//	cout<<typeid(T).name()<<"data : "<<n<<endl;
//}//const&�� ���� �˾Ƽ� �������ش�.
//void main()
//{
//	Print(100);
//	Print(200);
//	Print("Hello!"); //Ÿ���� �̸��� �����ص� �����Ѵ�
//	Point pt(2,3);
//	Point*p=&pt;
//	Print(pt);
//	Print(p);  //�ּҰ��� ��µȴ�. �������� �������, �Լ�templateƯ��ȭ���������
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//ostream& operator<<(ostream&o,const Point&arg)
//{
//	o<<arg.GetX()<<','<<arg.GetY();
//	return o;
//}
//template <typename T>//�Լ�template�� �Ϲ�ȭ����
//void Print(T n) //�̰���¥�Լ����ƴ϶� ���� �Լ���template�̴�. Ŭ���̾�Ʈ�� Ÿ���� �������ָ� �ڵ����� ��¥�Լ��� �������ش�.
//{
//	cout<<typeid(T).name()<<"data : "<<n<<endl;
//}//const&�� ���� �˾Ƽ� �������ش�.
//template <>//�Լ�template�� Ư��ȭ���� 
//void Print(Point* n) 
//{
//	cout<<typeid(Point*).name()<<"data : "<<n->GetX()<<','<<n->GetY()<<endl;
//}//const&�� ���� �˾Ƽ� �������ش�.
//void main()
//{
//	Print(100);
//	Print(200);
//	Print("Hello!"); //Ÿ���� �̸��� �����ص� �����Ѵ�
//	Point pt(2,3);
//	Point*p=&pt;
//	Print(pt);
//	Print(p);  //�ּҰ��� ��µȴ�. �������� �������, �Լ�templateƯ��ȭ���������
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T,int sz>//���������ü��ִ�
//void Print(T n) //�̰���¥�Լ����ƴ϶� ���� �Լ���template�̴�. Ŭ���̾�Ʈ�� Ÿ���� �������ָ� �ڵ����� ��¥�Լ��� �������ش�.
//{
//	for(int i=0;i<sz;++i)
//		cout<<"data : "<<n<<endl;
//}//const&�� ���� �˾Ƽ� �������ش�.
//void main()
//{
//	Print<int,10>(100);
//	Print<int,5>(200);
//	Print<const char*,2>("Hello!"); //Ÿ���� �̸��� �����ص� �����Ѵ�
//}


//#include<iostream>
//using namespace std;
//void Swap(int&a,int&b)
//{
//	int temp;
//	temp=a;
//	a=b;
//	b=temp;
//}
//void main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a,b);
//	cout<<a<<','<<b<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T>
//void Swap(T&a,T&b)
//{
//	T temp=a;
//	a=b;
//	b=temp;
//}
//void main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a,b);
//	cout<<a<<','<<b<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T> //T�� Ÿ���� Ŭ���̾�Ʈ�� �����ϰ��ϴ°��� class template
//					  //��¥Ŭ�������ƴ� 
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
//	{
//		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
//			return *this;
//		delete []arr;
//		size = arg.size;
//		capacity=arg.capacity;
//		arr = new T[capacity];
//		for(int i=0;i<arg.size;i++)
//			arr[i]=arg.arr[i];
//		return *this;
//	}
//	~Array(){delete arr;}
//	void Add(const T& data) //�����������𸣹Ƿ� const���������
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	const T& At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw"idx ����!";
//	}
//	const T& operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array<double>arr(5); //class template�� Ŭ���̾�Ʈ�� type�� ���������
//						//�����ȵ�
//	arr.Add(10.5);
//	arr.Add(20.2);
//	arr.Add(30.3);
//	arr.Add(40.6);
//	arr.Add(50.5);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//
//	Array<int> arr2(100);
//	arr2.Add(100);
//	arr2.Add(200);
//	for(int i=0;i<arr2.Size();i++)
//		cout<<arr2[i]<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T> //T�� Ÿ���� Ŭ���̾�Ʈ�� �����ϰ��ϴ°��� class template
//					  //��¥Ŭ�������ƴ� 
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
//	{
//		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
//			return *this;
//		delete []arr;
//		size = arg.size;
//		capacity=arg.capacity;
//		arr = new T[capacity];
//		for(int i=0;i<arg.size;i++)
//			arr[i]=arg.arr[i];
//		return *this;
//	}
//	~Array(){delete arr;}
//	void Add(const T& data) //�����������𸣹Ƿ� const���������
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	const T& At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw"idx ����!";
//	}
//	const T& operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array<double>arr(5); //class template�� Ŭ���̾�Ʈ�� type�� ���������
//						//�����ȵ�
//	arr.Add(10.5);
//	arr.Add(20.2);
//	arr.Add(30.3);
//	arr.Add(40.6);
//	arr.Add(50.5);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//
//	Array<int> arr2(100);
//	arr2.Add(100);
//	arr2.Add(200);
//	for(int i=0;i<arr2.Size();i++)
//		cout<<arr2[i]<<endl;
//	Array<int>arr3(10);
//	arr2=arr3; //�ν��Ͻ�Ŭ������ �����Ƿ� ���԰���
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T,int SZ> //T�� Ÿ���� Ŭ���̾�Ʈ�� �����ϰ��ϴ°��� class template
//							 //int SZ�� �Ű������� �������ν� ���ȭ�ȴ�. �����ؾ��Ѵ�. �޸𸮰� �ʹ�Ŀ��
//					  //��¥Ŭ�������ƴ� 
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=SZ):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
//	{
//		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
//			return *this;
//		delete []arr;
//		size = arg.size;
//		capacity=arg.capacity;
//		arr = new T[capacity];
//		for(int i=0;i<arg.size;i++)
//			arr[i]=arg.arr[i];
//		return *this;
//	}
//	~Array(){delete arr;}
//	void Add(const T& data) //�����������𸣹Ƿ� const���������
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	const T& At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw"idx ����!";
//	}
//	const T& operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array<double,5>arr; //class template�� Ŭ���̾�Ʈ�� type�� ���������
//						//�����ȵ�
//	arr.Add(10.5);
//	arr.Add(20.2);
//	arr.Add(30.3);
//	arr.Add(40.6);
//	arr.Add(50.5);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//
//	Array<int,100> arr2;
//	arr2.Add(100);
//	arr2.Add(200);
//	for(int i=0;i<arr2.Size();i++)
//		cout<<arr2[i]<<endl;
//	Array<int,10>arr3;
//	arr2=arr3; //�ν��Ͻ�Ŭ������ �޶�����.
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T,int SZ> //T�� Ÿ���� Ŭ���̾�Ʈ�� �����ϰ��ϴ°��� class template
//							 //int SZ�� �Ű������� �������ν� ���ȭ�ȴ�. �����ؾ��Ѵ�. �޸𸮰� �ʹ�Ŀ��
//					  //��¥Ŭ�������ƴ� 
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=SZ):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
//	{
//		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
//			return *this;
//		delete []arr;
//		size = arg.size;
//		capacity=arg.capacity;
//		arr = new T[capacity];
//		for(int i=0;i<arg.size;i++)
//			arr[i]=arg.arr[i];
//		return *this;
//	}
//	~Array(){delete arr;}
//	void Add(const T& data) //�����������𸣹Ƿ� const���������
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	const T& At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw"idx ����!";
//	}
//	const T& operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array<double,5>arr; //class template�� Ŭ���̾�Ʈ�� type�� ���������
//						//�����ȵ�
//	arr.Add(10.5);
//	arr.Add(20.2);
//	arr.Add(30.3);
//	arr.Add(40.6);
//	arr.Add(50.5);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//
//	Array<int,100> arr2;
//	arr2.Add(100);
//	arr2.Add(200);
//	for(int i=0;i<arr2.Size();i++)
//		cout<<arr2[i]<<endl;
//	Array<int,100>arr3;
//	arr2=arr3; //�ν��Ͻ�Ŭ������ �����Ƿ� ���԰���
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T=int,int SZ=100> //T�� Ÿ���� Ŭ���̾�Ʈ�� �����ϰ��ϴ°��� class template
//							 //int SZ�� �Ű������� �������ν� ���ȭ�ȴ�. �����ؾ��Ѵ�. �޸𸮰� �ʹ�Ŀ��
//							//template�� default���� ������ �� �ִ�.
//					  //��¥Ŭ�������ƴ� templateŬ����
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=SZ):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
//	{
//		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
//			return *this;
//		delete []arr;
//		size = arg.size;
//		capacity=arg.capacity;
//		arr = new T[capacity];
//		for(int i=0;i<arg.size;i++)
//			arr[i]=arg.arr[i];
//		return *this;
//	}
//	~Array(){delete arr;}
//	void Add(const T& data) //�����������𸣹Ƿ� const���������
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	const T& At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw"idx ����!";
//	}
//	const T& operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //��const��ü���� ���
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array<double,5>arr; //class template�� Ŭ���̾�Ʈ�� type�� ���������
//						//�����ȵ�
//	arr.Add(10.5);
//	arr.Add(20.2);
//	arr.Add(30.3);
//	arr.Add(40.6);
//	arr.Add(50.5);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//
//	Array<int> arr2;
//	arr2.Add(100);
//	arr2.Add(200);
//	for(int i=0;i<arr2.Size();i++)
//		cout<<arr2[i]<<endl;
//	Array<>arr3;
//	arr2=arr3; //�ν��Ͻ�Ŭ������ �����Ƿ� ���԰���
//}

//#include<iostream>
//template <typename T>
//class Array
//{
//	T* n;
//	int capacity;
//	int size;
//public:
//	Array(int cap=10):capacity(cap),size(0),n(0)
//	{
//		n=new T[capcity];
//	}
//	~Array(){delete n;}
//	Array(const Array&arg)
//	{
//		capacity=arg.capacity;
//		size = arg.size;
//		n=new T[capcity];
//		for(int i=0;i<size;i++)
//			n[i]=arg.n[i];
//	}
//	int Size(){return size;}
//	const T operator[](int idx)const{return n[idx];}
//	T& operator[](int idx){return n[idx];}
//	const T& operator[](int idx){return n[idx];}
//
//}
//int main(void)
//{
//
//}
//
//
//#include<iostream>
//using namespace std;
//void main()
//{
//	//����ȯ -> static_cast<>,dynamic_cast<>,reinterpret_cast<>
//	//const_cast<> 4������ �ִ�.
//
//	int n=10;
//	double d =5.5;
//	n=(int)d;   //c����� ����ȯ�� ���輺�� ���.
//				//��������ȯ c������ �����̾��µ� c++������ 4������ �����ش�.
//	cout<<n<<endl;
//}
//
//
////static-cast����ȯ
//#include<iostream>
//using namespace std;
//void main()
//{
//	int n=10;
//	double d =5.5;
//	n=static_cast<int>(d);
//	cout<<n<<endl;
//}
//
//
////static-cast����ȯ-�θ�,�ڽİ��� ����ȯ�̳� ��ġ��ȯ�� ���ȴ�.
//#include<iostream>
//using namespace std;
//class Parent
//{
//};
//class Child1 : public Parent
//{
//};
//class Child2 : public Parent
//{
//};
//class Other
//{
//
//};
//void main()
//{
//	Child1 c1;
//	Parent*p = &c1;
//	Child1*pc=static_cast<Child1*>(p);
//}
//
//
////static-cast����ȯ-�θ�,�ڽİ��� ����ȯ�̳� ��ġ��ȯ�� ���ȴ�.
//#include<iostream>
//using namespace std;
//class Parent
//{
//};
//class Child1 : public Parent
//{
//};
//class Child2 : public Parent
//{
//};
//class Other
//{
//
//};
//void main()
//{
//	double d = 5.5;
//	//int*p= (int*)&d; //��������ȯ���� ����ȯ
//	int*p= static_cast<int*>(&d); //�θ�-�ڽİ��� ����ȯ���ƴϰ� ��ġ����ȯ���ƴϴ�.//����!
//
//
////static-cast����ȯ-�θ�,�ڽİ��� ����ȯ�̳� ��ġ��ȯ�� ���ȴ�.
//#include<iostream>
//using namespace std;
//class Parent
//{
//};
//class Child1 : public Parent
//{
//};
//class Child2 : public Parent
//{
//};
//class Other
//{
//
//};
//void main()
//{
//	int n = 0x44434241;
//	//char*p=static_cast<char*>(&n); //�ȵ�
//	char*p=reinterpret_cast<char*>(&n); //reinterpret_cast�� �����ٸ� ����Ÿ�԰��� �������Ŀ� ���ȴ�
//
//	cout<<p[0]<<endl;
//	cout<<p[1]<<endl;
//	cout<<p[2]<<endl;
//	cout<<p[3]<<endl;
//}
//
//
////static-cast����ȯ-�θ�,�ڽİ��� ����ȯ�̳� ��ġ��ȯ�� ���ȴ�.
//#include<iostream>
//using namespace std;
//class Parent
//{
//};
//class Child1 : public Parent
//{
//};
//class Child2 : public Parent
//{
//};
//class Other
//{
//
//};
//void Increment(int*pn)
//{
//	++*pn;
//}
//void main()
//{
//	int n = 10;
//	const int*p = &n;
//
//	Increment(reinterpret_cast<int*>(p)); //const�� ��const�� �������Ѵ�.
//										  //reinterpret-cast�ε� �ȵȴ�.
//	cout<<*p<<','<<n<<endl;
//}

//
//
////static-cast����ȯ-�θ�,�ڽİ��� ����ȯ�̳� ��ġ��ȯ�� ���ȴ�.
//#include<iostream>
//using namespace std;
//class Parent
//{
//};
//class Child1 : public Parent
//{
//};
//class Child2 : public Parent
//{
//};
//class Other
//{
//
//};
//void Increment(int*pn)
//{
//	++*pn;
//}
//void main()
//{
//	int n = 10;
//	const int*p = &n;
//
//	Increment(const_cast<int*>(p)); //const�� ��const�� �������Ѵ�.
//									//reinterpret-cast�ε� �ȵȴ�.
//									//const_cast�������
//	cout<<*p<<','<<n<<endl;
//}
//
//
////static-cast����ȯ-�θ�,�ڽİ��� ����ȯ�̳� ��ġ��ȯ�� ���ȴ�.
//#include<iostream>
//using namespace std;
//class Parent
//{
//};
//class Child1 : public Parent
//{
//};
//class Child2 : public Parent
//{
//};
//class Other
//{
//
//};
//void Increment(int*pn)
//{
//	++*pn;
//}
//void main()
//{
//	int n = 10;
//	const int*p = &n;
//	////////////////////////////////////////////
//	int*pm = const_cast<int*>(p);
//}
//
//
//#include<iostream>
//using namespace std;
//class Parent
//{
//};
//class Child1 : public Parent
//{
//};
//class Child2 : public Parent
//{
//};
//class Other
//{
//
//};
//void Increment(int*pn)
//{
//	++*pn;
//}
//void Print(int&data) //const int&���� ���޴´�.
//{
//	cout<<data<<endl;
//}
//void main()
//{
//	int n = 10;
//	const int&r = n;
//	////////////////////////////////////////////
//	cout<<r<<','<<n<<endl;
//
//	Print(const_cast<int&>(r));
//}
//
//
////dynamic_cast ==> runtime�� ����ȯ�� �ϴ� ���/�ǽð����� ����ȯ�� ���ش�
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Data
//{
//public:
//	virtual void PrintValue()const=0;
//	virtual ~Data(){}
//
//};
//class IntData : public Data
//{
//	int value;
//public:
//	IntData(int n):value(n){}
//	void PrintValue()const
//	{
//		cout<<"Int: "<<value<<endl;
//	}
//};
//
//class StringData : public Data
//{
//	char value[100];
//public:
//	StringData(const char*s=0){strcpy(value,s);}
//	void PrintValue()const
//	{
//		cout<<"String: "<<value<<endl;
//	}
//	const char*GetValue()const{return value;}
//
//};
//void main()
//{
//	Data*darr[5]={new IntData(10),new StringData("ABC"),new IntData(20),new IntData(30)
//	,new StringData("abcd")};
//
//	for(int i=0;i<5;i++)
//		darr[i]->PrintValue();
//	char buf[100]={0};
//	for(int i=0;i<5;i++)
//	{
//		StringData*ps=static_cast<StringData*>(darr[i]); //����ð��� �����ؾ��ϹǷ� static_cast�� �������� �ʴ�.
//		strcat(buf,ps->GetValue());
//	}
//	for(int i=0;i<5;i++)
//		delete darr[i];
//}
//
//
////dynamic_cast ==> runtime�� ����ȯ�� �ϴ� ���/�ǽð����� ����ȯ�� ���ش�
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Data
//{
//public:
//	virtual void PrintValue()const=0;
//	virtual ~Data(){}
//
//};
//class IntData : public Data
//{
//	int value;
//public:
//	IntData(int n):value(n){}
//	void PrintValue()const
//	{
//		cout<<"Int: "<<value<<endl;
//	}
//};
//
//class StringData : public Data
//{
//	char value[100];
//public:
//	StringData(const char*s=0){strcpy(value,s);}
//	void PrintValue()const
//	{
//		cout<<"String: "<<value<<endl;
//	}
//	const char*GetValue()const{return value;}
//
//};
//void main()
//{
//	Data*darr[5]={new IntData(10),new StringData("ABC"),new IntData(20),new IntData(30)
//	,new StringData("abcd")};
//
//	for(int i=0;i<5;i++)
//		darr[i]->PrintValue();
//	char buf[100]={0};
//	for(int i=0;i<5;i++)
//	{
//		StringData*ps=static_cast<StringData*>(darr[i]); 
//		//����ð��� �����ؾ��ϹǷ� static_cast�� �������� �ʴ�.
//		if(ps!=NULL) //����ȯ���� ���ϴ°�� NULL���� ��ȯ�Ѵ�.�ڽ�Ÿ���̸� ����ȯ
//			strcat(buf,ps->GetValue());
//	}
//	cout<<buf<<endl;
//	for(int i=0;i<5;i++)
//		delete darr[i];
//}
//
//
////dynamic_cast ==> runtime�� ����ȯ�� �ϴ� ���/�ǽð����� ����ȯ�� ���ش�
////�θ��ڽİ��� ��������(*,&)�� �ǽð��� �˻��Ͽ� ��ȯ���ִ� type-casting
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Data
//{
//public:
//	virtual void PrintValue()const=0;
//	virtual ~Data(){}
//
//};
//class IntData : public Data
//{
//	int value;
//public:
//	IntData(int n):value(n){}
//	void PrintValue()const
//	{
//		cout<<"Int: "<<value<<endl;
//	}
//};
//
//class StringData : public Data
//{
//	char value[100];
//public:
//	StringData(const char*s=0){strcpy(value,s);}
//	void PrintValue()const
//	{
//		cout<<"String: "<<value<<endl;
//	}
//	const char*GetValue()const{return value;}
//
//};
//void main()
//{
//	StringData s1("ABC");
//	IntData n1(100);
//
//	Data& rd = n1; //n1;
//	rd.PrintValue();
//	try{
//	StringData& sd = dynamic_cast<StringData&>(rd);//down-cast
//										   //bad-cast exception
//	cout<<sd.GetValue()<<endl;
//	}
//	catch(...)
//	{
//		cout<<"IntData Type..."<<endl;
//	}
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<typeinfo>
//using namespace std;
//class Data
//{
//public:
//	virtual void PrintValue()const=0;
//	virtual ~Data(){}
//
//};
//class IntData : public Data
//{
//	int value;
//public:
//	IntData(int n):value(n){}
//	void PrintValue()const
//	{
//		cout<<"Int: "<<value<<endl;
//	}
//};
//
//class StringData : public Data
//{
//	char value[100];
//public:
//	StringData(const char*s=0){strcpy(value,s);}
//	void PrintValue()const
//	{
//		cout<<"String: "<<value<<endl;
//	}
//	const char*GetValue()const{return value;}
//
//};
//void main()
//{
//	const type_info& ri = typeid(Data);//�Ϲ������� ����.���簡 �Ұ����ϱ⶧���� ������������ ����Ѵ�.
//	cout<<ri.name()<<endl;
//
//	Data*pd1 = new StringData("ABC");
//	Data* pd2 = new IntData(100);
//	Data* pd3 = new StringData("hello!");
//
//	cout<<typeid(pd1).name()<<endl;
//	cout<<typeid(pd2).name()<<endl;
//	cout<<typeid(pd3).name()<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<typeinfo>
//using namespace std;
//class Data
//{
//public:
//	virtual void PrintValue()const=0;
//	virtual ~Data(){}
//
//};
//class IntData : public Data
//{
//	int value;
//public:
//	IntData(int n):value(n){}
//	void PrintValue()const
//	{
//		cout<<"Int: "<<value<<endl;
//	}
//};
//
//class StringData : public Data
//{
//	char value[100];
//public:
//	StringData(const char*s=0){strcpy(value,s);}
//	void PrintValue()const
//	{
//		cout<<"String: "<<value<<endl;
//	}
//	const char*GetValue()const{return value;}
//
//};
//void main()
//{
//	const type_info& ri = typeid(Data);//�Ϲ������� ����.���簡 �Ұ����ϱ⶧���� ������������ ����Ѵ�.
//	cout<<ri.name()<<endl;
//
//	Data*pd1 = new StringData("ABC");
//	Data* pd2 = new IntData(100);
//	Data* pd3 = new StringData("hello!");
//
//	cout<<typeid(*pd1).name()<<endl; //StringDataŸ�Կ� ���� type_info��ü���ȴ�.
//	cout<<typeid(*pd2).name()<<endl;
//	cout<<typeid(*pd3).name()<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<typeinfo>
//using namespace std;
//class Data
//{
//public:
//	virtual void PrintValue()const=0;
//	virtual ~Data(){}
//
//};
//class IntData : public Data
//{
//	int value;
//public:
//	IntData(int n):value(n){}
//	void PrintValue()const
//	{
//		cout<<"Int: "<<value<<endl;
//	}
//};
//
//class StringData : public Data
//{
//	char value[100];
//public:
//	StringData(const char*s=0){strcpy(value,s);}
//	void PrintValue()const
//	{
//		cout<<"String: "<<value<<endl;
//	}
//	const char*GetValue()const{return value;}
//
//};
//void main()
//{
//	const type_info& ri = typeid(Data);//�Ϲ������� ����.���簡 �Ұ����ϱ⶧���� ������������ ����Ѵ�.
//	cout<<ri.name()<<endl;
//
//	Data*pd1 = new StringData("ABC");
//	Data* pd2 = new IntData(100);
//	Data* pd3 = new StringData("hello!");
//
//	if(typeid(StringData)==typeid(*pd1)) //������ *pd1�� StringDataŸ���̴�
//		cout<<static_cast<StringData*>(pd1)->GetValue()<<endl;
//	if(typeid(StringData)==typeid(*pd2)) //������ *pd2�� StringDataŸ���̴�
//		cout<<static_cast<StringData*>(pd1)->GetValue()<<endl;
//	if(typeid(StringData)==typeid(*pd3)) //������ *pd3�� StringDataŸ���̴�
//		cout<<static_cast<StringData*>(pd1)->GetValue()<<endl;
//	//dynamic_cast�� �����ʴ������� if������ ��Ȯ�ϰ� �߱⶧��
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<typeinfo>
//using namespace std;
//class Data
//{
//public:
//	virtual void PrintValue()const=0;
//	virtual ~Data(){}
//
//};
//class IntData : public Data
//{
//	int value;
//public:
//	IntData(int n):value(n){}
//	void PrintValue()const
//	{
//		cout<<"Int: "<<value<<endl;
//	}
//};
//
//class StringData : public Data
//{
//	char value[100];
//public:
//	StringData(const char*s=0){strcpy(value,s);}
//	void PrintValue()const
//	{
//		cout<<"String: "<<value<<endl;
//	}
//	const char*GetValue()const{return value;}
//
//};
//void main()
//{
//	const type_info& ri = typeid(Data);//�Ϲ������� ����.���簡 �Ұ����ϱ⶧���� ������������ ����Ѵ�.
//	cout<<ri.name()<<endl;
//
//	Data*pd1 = new StringData("ABC");
//	Data* pd2 = new IntData(100);
//	Data* pd3 = new StringData("hello!");
//
//	if(typeid(StringData)==typeid(*pd1)) //������ *pd1�� StringDataŸ���̴�
//		cout<<static_cast<StringData*>(pd1)->GetValue()<<endl;
//	if(typeid(StringData)==typeid(*pd2)) //������ *pd2�� StringDataŸ���̴�
//		cout<<static_cast<StringData*>(pd1)->GetValue()<<endl;
//	if(typeid(StringData)==typeid(*pd3)) //������ *pd3�� StringDataŸ���̴�
//		cout<<static_cast<StringData*>(pd1)->GetValue()<<endl;
//	//dynamic_cast�� �����ʴ������� if������ ��Ȯ�ϰ� �߱⶧��
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Person
//{
//	char name[20];
//	char phone[20];
//public:
//	Person(const char*n="",const char*p="")
//	{
//		strcpy(name,n);
//		strcpy(phone,p);
//	}
//	void SetName(const char*n){strcpy(name,n);}
//	void SetPhone(const char*p){strcpy(phone,p);}
//	const char* GetName()const{return name;}
//	const char* GetPhone()const{return phone;}
//	void Print()const{cout<<"name: "<<name<<','<<"phone: "<<phone<<endl;}
//};
//class TelPhoneBook
//{
//	Person parr[100];
//	int pcount;
//public:
//	TelPhoneBook():pcount(0){}
//	~TelPhoneBook(){}
//	void Add()
//	{
//		char name[20];
//		char phone[20];
//		cout<<"�̸��Է�: ";
//		cin>>name;
//		cout<<"��ȭ�Է�: ";
//		cin>>phone;
//		//parr[pcount++]=Person(name,phone);
//		parr[pcount].SetName(name);
//		parr[pcount++].SetPhone(phone);
//	}
//	void Print()const
//	{
//
//		for(int i=0;i<pcount;i++)
//			//cout<<"name: "<<parr[i].GetName()<<','<<"phone: "<<parr[i].GetPhone()<<endl;*/
//			parr[i].Print();
//	}
//	void Search()const
//	{
//		char name[20];
//		cout<<"�̸� �Է� : ";
//		cin>>name;
//		for(int i=0;i<pcount;++i)
//			if(strcmp(name,parr[i].GetName())==0)
//			{
//				cout<<"["<<i<<"]: ";
//				parr[i].Print();
//				break;
//			}
//
//	}
//	void Remove()
//	{
//		char name[20];
//		cout<<"������ �̸� �Է� : ";
//		cin>>name;
//		for(int i=0;i<pcount;++i)
//			if(strcmp(name,parr[i].GetName())==0)
//			{
//				for(int j=i;j<pcount-1;j++)
//					parr[j]=parr[j+1];
//				pcount--;
//			}
//	}
//};
//
//void main()
//{
//	TelPhoneBook tpBook;
//	tpBook.Add();
//	tpBook.Print();
//	tpBook.Search();
//	tpBook.Remove();
//
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<conio.h>
//using namespace std;
//class Person
//{
//	char name[20];
//	char phone[20];
//public:
//	Person(const char*n="",const char*p="")
//	{
//		strcpy(name,n);
//		strcpy(phone,p);
//	}
//	void SetName(const char*n){strcpy(name,n);}
//	void SetPhone(const char*p){strcpy(phone,p);}
//	const char* GetName()const{return name;}
//	const char* GetPhone()const{return phone;}
//	void Print()const{cout<<"name: "<<name<<','<<"phone: "<<phone<<endl;}
//};
//class TelPhoneBook
//{
//	Person parr[100];
//	int pcount;
//public:
//	TelPhoneBook():pcount(0){}
//	~TelPhoneBook(){}
//	void Add()
//	{
//		char name[20];
//		char phone[20];
//		cout<<"�̸��Է�: ";
//		cin>>name;
//		cout<<"��ȭ�Է�: ";
//		cin>>phone;
//		//parr[pcount++]=Person(name,phone);
//		parr[pcount].SetName(name);
//		parr[pcount++].SetPhone(phone);
//	}
//	void Print()const
//	{
//
//		for(int i=0;i<pcount;i++)
//			//cout<<"name: "<<parr[i].GetName()<<','<<"phone: "<<parr[i].GetPhone()<<endl;*/
//			parr[i].Print();
//	}
//	void Search()const
//	{
//		char name[20];
//		cout<<"�̸� �Է� : ";
//		cin>>name;
//		for(int i=0;i<pcount;++i)
//			if(strcmp(name,parr[i].GetName())==0)
//			{
//				cout<<"["<<i<<"]: ";
//				parr[i].Print();
//				break;
//			}
//
//	}
//	void Remove()
//	{
//		char name[20];
//		cout<<"������ �̸� �Է� : ";
//		cin>>name;
//		for(int i=0;i<pcount;++i)
//			if(strcmp(name,parr[i].GetName())==0)
//			{
//				for(int j=i;j<pcount-1;j++)
//					parr[j]=parr[j+1];
//				pcount--;
//			}
//	}
//};
//void MainMenu()
//{
//	cout<<"1.input phone"<<endl;
//	cout<<"2.print phone"<<endl;
//	cout<<"3.search phone"<<endl;
//	cout<<"4.remove phone"<<endl;
//	cout<<"0.exit program"<<endl;
//}
//void main()
//{
//	TelPhoneBook tpBook;
//	bool brun = true;
//	while(brun){
//		MainMenu();
//		switch(_getch())
//		{
//		case'1':
//			tpBook.Add();
//			break;
//		case'2':
//			tpBook.Print();
//			break;
//		case'3':
//			tpBook.Search();
//			break;
//		case'4':
//			tpBook.Remove();
//			break;
//		case'0':
//			brun=false;
//			break;
//		}
//	}
//}