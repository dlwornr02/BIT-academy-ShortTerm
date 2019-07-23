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
////////인터페이스완성//////////

//
//#include<iostream>
//using namespace std;
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
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
//	int operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//	{
//		return arr[idx];
//	}
//	int& operator[](int idx) //비const객체에서 사용
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
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	int*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
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
//	int operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//	{
//		return arr[idx];
//	}
//	int& operator[](int idx) //비const객체에서 사용
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
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	int*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
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
//			throw"idx 오류!";
//	}
//	int operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	int& operator[](int idx) //비const객체에서 사용
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
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	int*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
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
//		//if(this == &arg) //delete를 하기때문에 check해야한다.
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
//			throw"idx 오류!";
//	}
//	int operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	int& operator[](int idx) //비const객체에서 사용
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
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	int*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
//	{
//		arr = new int[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new int[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
//	{
//		if(this == &arg) //delete를 하기때문에 check해야한다.
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
//			throw"idx 오류!";
//	}
//	int operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	int& operator[](int idx) //비const객체에서 사용
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
//	arr= arr; //자기대입
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	int*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
//	{
//		arr = new int[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new int[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
//	{
//		if(this == &arg) //delete를 하기때문에 check해야한다.
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
//			throw"idx 오류!";
//	}
//	int operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	int& operator[](int idx) //비const객체에서 사용
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
//	arr= arr; //자기대입
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//typedef int T;
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
//	{
//		if(this == &arg) //delete를 하기때문에 check해야한다.
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
//	void Add(const T& data) //언떤형식인지모르므로 const형참조사용
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
//			throw"idx 오류!";
//	}
//	const T& operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //비const객체에서 사용
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
//	arr= arr; //자기대입
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//typedef double T;
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
//	{
//		if(this == &arg) //delete를 하기때문에 check해야한다.
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
//	void Add(const T& data) //언떤형식인지모르므로 const형참조사용
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
//			throw"idx 오류!";
//	}
//	const T& operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //비const객체에서 사용
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
//	arr= arr; //자기대입
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
//	const String operator+(const String&arg) //새로운 객체가 생성되므로 반환타입에 참조안씀
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
//	const char& operator[](int idx)const //const객체와 비const객체에따라 따로 중복연산자를 정의해준다.
//	{
//		cout<<"const"<<endl;
//		return buf[idx];
//	}
//	char& operator[](int idx) //참조를 사용해서 변환해준다.
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
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
//	{
//		if(this == &arg) //delete를 하기때문에 check해야한다.
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
//	void Add(const T& data) //언떤형식인지모르므로 const형참조사용
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
//			throw"idx 오류!";
//	}
//	const T& operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //비const객체에서 사용
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
//	arr= arr; //자기대입
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
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
//	{
//		if(this == &arg) //delete를 하기때문에 check해야한다.
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
//	void Add(const T& data) //언떤형식인지모르므로 const형참조사용
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
//			throw"idx 오류!";
//	}
//	const T& operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //비const객체에서 사용
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
//	arr= arr; //자기대입
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
//template <typename T>//클라이언트가 타입을 정한다는 의미 T는 template의 매개변수
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
//template <typename T>//클라이언트가 타입을 정한다는 의미 T는 template의 매개변수
//void Print(T n){cout<<"data : "<<n<<endl;}//어떤형식이 들어올지 모르므로 const&를 붙여준다
//void main()
//{
//	Print<int>(100);
//	Print<const char*>("Hello!");
//}
//
//
//#include<iostream>
//using namespace std; 
//template <typename T>//클라이언트가 타입을 정한다는 의미 T는 template의 매개변수
//void Print(T n){cout<<"data : "<<n<<endl;}//어떤형식이 들어올지 모르므로 const&를 붙여준다
//void main()
//{
//	Print<int>(100); //이게진짜함수
//	Print<const char*>("Hello!");
//}
//
//
//#include<iostream>
//using namespace std; 
//template <typename T>//클라이언트가 타입을 정한다는 의미 T는 template의 매개변수
//void Print(const&T n){cout<<typeid(T).name()<<"data : "<<n<<endl;}//어떤형식이 들어올지 모르므로 const&를 붙여준다
//void main()
//{
//	Print<int>(100); //이게진짜함수
//	Print<const char*>("Hello!");
//}
//
//
//#include<iostream>
//using namespace std; 
//template <typename T>//클라이언트가 타입을 정한다는 의미 T는 template의 매개변수
//void Print(T n) //이건진짜함수가아니라 단지 함수의template이다. 클라이언트가 타입을 지정해주면 자동으로 진짜함수를 생성해준다.
//{
//	cout<<typeid(T).name()<<"data : "<<n<<endl;
//}//const&를 빼도 알아서 결정해준다.
//void main()
//{
//	Print(100);
//	Print("Hello!"); //타입의 이름은 생략해도동작한다
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
//template <typename T>//클라이언트가 타입을 정한다는 의미 T는 template의 매개변수
//void Print(T n) //이건진짜함수가아니라 단지 함수의template이다. 클라이언트가 타입을 지정해주면 자동으로 진짜함수를 생성해준다.
//{
//	cout<<typeid(T).name()<<"data : "<<n<<endl;
//}//const&를 빼도 알아서 결정해준다.
//void main()
//{
//	Print(100);
//	Print("Hello!"); //타입의 이름은 생략해도동작한다
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
//template <typename T>//클라이언트가 타입을 정한다는 의미 T는 template의 매개변수
//void Print(T n) //이건진짜함수가아니라 단지 함수의template이다. 클라이언트가 타입을 지정해주면 자동으로 진짜함수를 생성해준다.
//{
//	cout<<typeid(T).name()<<"data : "<<n<<endl;
//}//const&를 빼도 알아서 결정해준다.
//void main()
//{
//	Print(100);
//	Print(200);
//	Print("Hello!"); //타입의 이름은 생략해도 동작한다
//	Point pt(2,3);
//	Point*p=&pt;
//	Print(pt);
//	Print(p);  //주소값이 출력된다. 연산으로 해줘야함, 함수template특수화를해줘야함
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
//template <typename T>//함수template의 일반화버전
//void Print(T n) //이건진짜함수가아니라 단지 함수의template이다. 클라이언트가 타입을 지정해주면 자동으로 진짜함수를 생성해준다.
//{
//	cout<<typeid(T).name()<<"data : "<<n<<endl;
//}//const&를 빼도 알아서 결정해준다.
//template <>//함수template의 특수화버전 
//void Print(Point* n) 
//{
//	cout<<typeid(Point*).name()<<"data : "<<n->GetX()<<','<<n->GetY()<<endl;
//}//const&를 빼도 알아서 결정해준다.
//void main()
//{
//	Print(100);
//	Print(200);
//	Print("Hello!"); //타입의 이름은 생략해도 동작한다
//	Point pt(2,3);
//	Point*p=&pt;
//	Print(pt);
//	Print(p);  //주소값이 출력된다. 연산으로 해줘야함, 함수template특수화를해줘야함
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T,int sz>//정수도들어올수있다
//void Print(T n) //이건진짜함수가아니라 단지 함수의template이다. 클라이언트가 타입을 지정해주면 자동으로 진짜함수를 생성해준다.
//{
//	for(int i=0;i<sz;++i)
//		cout<<"data : "<<n<<endl;
//}//const&를 빼도 알아서 결정해준다.
//void main()
//{
//	Print<int,10>(100);
//	Print<int,5>(200);
//	Print<const char*,2>("Hello!"); //타입의 이름은 생략해도 동작한다
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
//template <typename T> //T의 타입을 클라이언트가 결정하게하는것이 class template
//					  //진짜클래스가아닌 
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
//	{
//		if(this == &arg) //delete를 하기때문에 check해야한다.
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
//	void Add(const T& data) //언떤형식인지모르므로 const형참조사용
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
//			throw"idx 오류!";
//	}
//	const T& operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //비const객체에서 사용
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array<double>arr(5); //class template는 클라이언트가 type을 정해줘야함
//						//생략안됨
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
//template <typename T> //T의 타입을 클라이언트가 결정하게하는것이 class template
//					  //진짜클래스가아닌 
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
//	{
//		if(this == &arg) //delete를 하기때문에 check해야한다.
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
//	void Add(const T& data) //언떤형식인지모르므로 const형참조사용
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
//			throw"idx 오류!";
//	}
//	const T& operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //비const객체에서 사용
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array<double>arr(5); //class template는 클라이언트가 type을 정해줘야함
//						//생략안됨
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
//	arr2=arr3; //인스턴스클래스가 같으므로 대입가능
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T,int SZ> //T의 타입을 클라이언트가 결정하게하는것이 class template
//							 //int SZ를 매개변수로 넣음으로써 비대화된다. 주의해야한다. 메모리가 너무커짐
//					  //진짜클래스가아닌 
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=SZ):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
//	{
//		if(this == &arg) //delete를 하기때문에 check해야한다.
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
//	void Add(const T& data) //언떤형식인지모르므로 const형참조사용
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
//			throw"idx 오류!";
//	}
//	const T& operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //비const객체에서 사용
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array<double,5>arr; //class template는 클라이언트가 type을 정해줘야함
//						//생략안됨
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
//	arr2=arr3; //인스턴스클래스가 달라진다.
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T,int SZ> //T의 타입을 클라이언트가 결정하게하는것이 class template
//							 //int SZ를 매개변수로 넣음으로써 비대화된다. 주의해야한다. 메모리가 너무커짐
//					  //진짜클래스가아닌 
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=SZ):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
//	{
//		if(this == &arg) //delete를 하기때문에 check해야한다.
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
//	void Add(const T& data) //언떤형식인지모르므로 const형참조사용
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
//			throw"idx 오류!";
//	}
//	const T& operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //비const객체에서 사용
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array<double,5>arr; //class template는 클라이언트가 type을 정해줘야함
//						//생략안됨
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
//	arr2=arr3; //인스턴스클래스가 같으므로 대입가능
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T=int,int SZ=100> //T의 타입을 클라이언트가 결정하게하는것이 class template
//							 //int SZ를 매개변수로 넣음으로써 비대화된다. 주의해야한다. 메모리가 너무커짐
//							//template도 default값을 지정할 수 있다.
//					  //진짜클래스가아닌 template클래스
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=SZ):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
//	{
//		if(this == &arg) //delete를 하기때문에 check해야한다.
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
//	void Add(const T& data) //언떤형식인지모르므로 const형참조사용
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
//			throw"idx 오류!";
//	}
//	const T& operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //비const객체에서 사용
//	{
//		return arr[idx];
//	}
//};
//void main()
//{
//	Array<double,5>arr; //class template는 클라이언트가 type을 정해줘야함
//						//생략안됨
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
//	arr2=arr3; //인스턴스클래스가 같으므로 대입가능
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
//	//형변환 -> static_cast<>,dynamic_cast<>,reinterpret_cast<>
//	//const_cast<> 4가지가 있다.
//
//	int n=10;
//	double d =5.5;
//	n=(int)d;   //c언어의 형변환은 위험성을 띤다.
//				//강제형변환 c언어에서는 만능이었는데 c++에서는 4가지로 나눠준다.
//	cout<<n<<endl;
//}
//
//
////static-cast형변환
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
////static-cast형변환-부모,자식간의 형변환이나 수치변환에 사용된다.
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
////static-cast형변환-부모,자식간의 형변환이나 수치변환에 사용된다.
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
//	//int*p= (int*)&d; //강제형변환으로 형변환
//	int*p= static_cast<int*>(&d); //부모-자식간의 형변환도아니고 수치형변환도아니다.//오류!
//
//
////static-cast형변환-부모,자식간의 형변환이나 수치변환에 사용된다.
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
//	//char*p=static_cast<char*>(&n); //안됨
//	char*p=reinterpret_cast<char*>(&n); //reinterpret_cast는 전혀다른 형식타입간에 참조형식에 사용된다
//
//	cout<<p[0]<<endl;
//	cout<<p[1]<<endl;
//	cout<<p[2]<<endl;
//	cout<<p[3]<<endl;
//}
//
//
////static-cast형변환-부모,자식간의 형변환이나 수치변환에 사용된다.
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
//	Increment(reinterpret_cast<int*>(p)); //const를 비const로 만들어야한다.
//										  //reinterpret-cast로도 안된다.
//	cout<<*p<<','<<n<<endl;
//}

//
//
////static-cast형변환-부모,자식간의 형변환이나 수치변환에 사용된다.
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
//	Increment(const_cast<int*>(p)); //const를 비const로 만들어야한다.
//									//reinterpret-cast로도 안된다.
//									//const_cast해줘야함
//	cout<<*p<<','<<n<<endl;
//}
//
//
////static-cast형변환-부모,자식간의 형변환이나 수치변환에 사용된다.
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
//void Print(int&data) //const int&형을 못받는다.
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
////dynamic_cast ==> runtime때 형변환을 하는 기능/실시간으로 형변환을 해준다
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
//		StringData*ps=static_cast<StringData*>(darr[i]); //실행시간에 결정해야하므로 static_cast는 적절하지 않다.
//		strcat(buf,ps->GetValue());
//	}
//	for(int i=0;i<5;i++)
//		delete darr[i];
//}
//
//
////dynamic_cast ==> runtime때 형변환을 하는 기능/실시간으로 형변환을 해준다
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
//		//실행시간에 결정해야하므로 static_cast는 적절하지 않다.
//		if(ps!=NULL) //형변환하지 못하는경우 NULL값을 반환한다.자식타입이면 형변환
//			strcat(buf,ps->GetValue());
//	}
//	cout<<buf<<endl;
//	for(int i=0;i<5;i++)
//		delete darr[i];
//}
//
//
////dynamic_cast ==> runtime때 형변환을 하는 기능/실시간으로 형변환을 해준다
////부모자식간의 참조형식(*,&)을 실시간에 검사하여 변환해주는 type-casting
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
//	const type_info& ri = typeid(Data);//일반적으로 수정.복사가 불가능하기때문에 참조형식으로 사용한다.
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
//	const type_info& ri = typeid(Data);//일반적으로 수정.복사가 불가능하기때문에 참조형식으로 사용한다.
//	cout<<ri.name()<<endl;
//
//	Data*pd1 = new StringData("ABC");
//	Data* pd2 = new IntData(100);
//	Data* pd3 = new StringData("hello!");
//
//	cout<<typeid(*pd1).name()<<endl; //StringData타입에 대한 type_info객체가된다.
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
//	const type_info& ri = typeid(Data);//일반적으로 수정.복사가 불가능하기때문에 참조형식으로 사용한다.
//	cout<<ri.name()<<endl;
//
//	Data*pd1 = new StringData("ABC");
//	Data* pd2 = new IntData(100);
//	Data* pd3 = new StringData("hello!");
//
//	if(typeid(StringData)==typeid(*pd1)) //같으면 *pd1은 StringData타입이다
//		cout<<static_cast<StringData*>(pd1)->GetValue()<<endl;
//	if(typeid(StringData)==typeid(*pd2)) //같으면 *pd2은 StringData타입이다
//		cout<<static_cast<StringData*>(pd1)->GetValue()<<endl;
//	if(typeid(StringData)==typeid(*pd3)) //같으면 *pd3은 StringData타입이다
//		cout<<static_cast<StringData*>(pd1)->GetValue()<<endl;
//	//dynamic_cast를 쓰지않는이유는 if문에서 명확하게 했기때문
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
//	const type_info& ri = typeid(Data);//일반적으로 수정.복사가 불가능하기때문에 참조형식으로 사용한다.
//	cout<<ri.name()<<endl;
//
//	Data*pd1 = new StringData("ABC");
//	Data* pd2 = new IntData(100);
//	Data* pd3 = new StringData("hello!");
//
//	if(typeid(StringData)==typeid(*pd1)) //같으면 *pd1은 StringData타입이다
//		cout<<static_cast<StringData*>(pd1)->GetValue()<<endl;
//	if(typeid(StringData)==typeid(*pd2)) //같으면 *pd2은 StringData타입이다
//		cout<<static_cast<StringData*>(pd1)->GetValue()<<endl;
//	if(typeid(StringData)==typeid(*pd3)) //같으면 *pd3은 StringData타입이다
//		cout<<static_cast<StringData*>(pd1)->GetValue()<<endl;
//	//dynamic_cast를 쓰지않는이유는 if문에서 명확하게 했기때문
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
//		cout<<"이름입력: ";
//		cin>>name;
//		cout<<"전화입력: ";
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
//		cout<<"이름 입력 : ";
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
//		cout<<"삭제할 이름 입력 : ";
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
//		cout<<"이름입력: ";
//		cin>>name;
//		cout<<"전화입력: ";
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
//		cout<<"이름 입력 : ";
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
//		cout<<"삭제할 이름 입력 : ";
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