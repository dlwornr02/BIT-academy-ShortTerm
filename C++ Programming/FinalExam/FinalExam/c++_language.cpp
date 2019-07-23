////복사생성자와 복사 대입연산자.
//#include<iostream>
//#include<cstring>
//using namespace std;
//class PointInfo
//{
//	int x;
//	int y;
//	char*Info;
//public:
//	PointInfo(int _x=0,int _y=0,char*_Info=""):x(_x),y(_y)
//	{
//		Info = new char[strlen(_Info)+1];
//		strcpy(Info,_Info);
//	}
//	~PointInfo(){delete[]Info;}
//	PointInfo(const PointInfo&arg):x(arg.x),y(arg.y)
//	{
//		Info = new char[strlen(arg.Info)+1];
//		strcpy(Info,arg.Info);
//	}
//	const PointInfo& operator=(const PointInfo& arg)
//	{
//		if(this==&arg)
//			return *this;
//		x=arg.x;
//		y=arg.y;
//		delete Info;
//		Info = new char[strlen(arg.Info)+1];
//		strcpy(Info,arg.Info);
//		return *this;
//	}
//	void Print()
//	{
//		cout<<x<<" , "<<y<<"  "<<Info<<endl;
//	}
//};
//void main()
//{
//	PointInfo pi1(2,3,"꼭지점");
//	PointInfo pi2(4,6,"왼쪽꼭지점");
//	PointInfo pi3(9,5,"오른쪽꼭지점");
//	PointInfo pi4(pi2);
//	PointInfo pi5;
//	pi5 = pi3;
//
//	pi1.Print();
//	pi2.Print();
//	pi3.Print();
//	pi4.Print();
//	pi5.Print();
//
//}

//
//////////////////////////////상속과 다형성////////
//#include<iostream>
//using namespace std;
//class Figure
//{
//public:
//	virtual void Print()=0;
//};
//class Triangle : public Figure
//{
//public:
//	void Print(){cout<<"삼각형"<<endl;}
//};
//class Rectangle : public Figure
//{
//public:
//	void Print(){cout<<"사각형"<<endl;}
//};
//class Circle : public Figure
//{
//
//public:
//	void Print(){cout<<" 원 "<<endl;}
//};
//void main()
//{
//	Figure* F[3]={new Triangle(), new Rectangle(), new Circle()};
//	Triangle t;
//	Rectangle r;
//	Circle c;
//
//	for(int i = 0; i<3;i++)
//		F[i]->Print();
//}
//
/////////////////////연산자 중복과 함수자///////
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//class Point 
//{
//	int x;
//	int y;
//public:
//	Point(int _x=0, int _y=0):x(_x),y(_y){}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	bool operator<(const Point& a)
//	{
//		return x<a.x;
//	}
//	const Point& operator++()
//	{
//		x++;
//		y++;
//		return *this;
//	}
//	const Point& operator++(int)
//	{
//		Point a = *this;
//		x++;
//		y++;
//		return a;
//	}
//};
//template <typename T>
//const T& Add(const T& a, const T&b)
//{
//	T t;
//	t=a+b;
//	return t;
//}
//template <typename T>
//const T& Sub(const T& a, const T&b)
//{
//	T t;
//	t=a-b;
//	return t;
//}
//ostream& operator<<(ostream&o,const Point& arg)
//{
//	o<<arg.GetX()<<','<<arg.GetY();
//	return o;
//}
//class ComparePoint
//{
//public:
//	bool operator()(const Point& a, const Point& b)
//	{
//		if(a.GetX() > b.GetX())
//			return true;
//		else if(a.GetX() < b.GetX())
//			return false;
//		else
//			return a.GetY() > b.GetY(); 
//	}
//};
//class Pred
//{
//public :
//	bool operator()(const Point& a)
//	{
//		return a.GetX()==5;
//	}
//};
//class Increment
//{
//public:
//	void operator()(Point&a)
//	{
//		a++;
//	}
//};
//void main()
//{
//	vector<Point> v;
//	v.push_back(Point(2,4));
//	v.push_back(Point(6,1));
//	v.push_back(Point(5,2));
//	v.push_back(Point(7,8));
//	v.push_back(Point(6,9));
//
//	vector<Point>::iterator biter = v.begin();
//	vector<Point>::iterator eiter = v.end();
//
//	sort(biter,eiter,ComparePoint());
//	
//	vector<Point>::iterator iter = find_if(biter,eiter,Pred());
//	
//	cout<<*iter<<endl;
//
//	for_each(biter,eiter,Increment());
//
//	for(vector<Point>::iterator iter=biter;iter!=eiter;iter++)
//	{
//		cout<<*iter<<endl;
//	}
//}
//
//
////////////////String class와 Array class//////////////
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//template <typename T>
//class Array
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):capacity(cap),size(0)
//	{
//		arr = new T[capacity];
//	}
//	Array(const Array& arg):capacity(arg.capacity),size(arg.size)
//	{
//		arr = new T[capacity];
//		for(int i = 0 ; i < size ; i++)
//		{
//			arr[i] = arg.arr[i];
//		}
//	}
//	const Array& operator=(const Array&arg)
//	{
//		if(this == &arg)
//			return *this;
//		delete []arr;
//		capacity = arg.capacity;
//		size = arg.size;
//		
//		for(int i = 0 ; i < size ; i++)
//		{
//			arr[i] = arg.arr[i];
//		}
//	}
//	~Array(){delete[]arr;}
//	void Add(const T& d)
//	{
//		if(size < capacity)
//			arr[size++] = d;
//	}
//	void Remove(int idx)
//	{
//		if(size>0){
//			for(int i = idx ; i < size ; i++)
//			{
//				arr[i] = arr[i+1];
//			}
//			size--;
//		}
//	}
//	int Size()const{return size;}
//	int Capacity()const{return capacity;}
//
//	const T& operator[](int idx)const
//	{
//		return arr[idx];
//	}
//	T& operator[](int idx)
//	{
//		return arr[idx];
//	}
//};
//class String
//{
//	char*str;
//public:
//	String(char* _str = "")
//	{
//		str = new char[strlen(_str)+1];
//		strcpy(str,_str);
//	}
//	~String(){delete[]str;}
//	String(const String& arg)
//	{
//		str = new char[strlen(arg.str) + 1];
//		strcpy(str,arg.str);
//	}
//	const String& operator=(const String&arg)
//	{
//		if(this == &arg)
//			return *this;
//		delete [] str;
//		str = new char[strlen(arg.str) + 1];
//		strcpy(str,arg.str);
//
//		return *this;
//	}
//	const String& operator+(const String& arg)
//	{
//		char*temp = new char[strlen(str) + strlen(arg.str) + 1];
//		strcpy(temp,str);
//		delete[]str;
//		strcat(temp,arg.str);
//		str = temp;
//		return *this;
//	}
//
//	const char& operator[](int idx)const
//	{
//		return str[idx];
//	}
//	char& operator[](int idx)
//	{
//		return str[idx];
//	}
//	operator const char*(){return str;}
//	char* GetString()const{return str;}
//};
//ostream& operator<<(ostream& o,const String& arg)
//{
//	o<<arg.GetString();
//	return o;
//}
//void main()
//{
//	Array<String> arr(100);
//	arr.Add("ABCDE");
//	arr.Add("SDF");
//	cout<<arr[0]<<endl;
//	cout<<arr[0]+arr[1]<<endl;
//}
//
//
//
//
//
//
//
//
////////////////vector, list, map, find, find_if sort, for_each/////////////////////////////
//////VECTOR//////
//#pragma warning(disable:4996)
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void main()
//{
//	vector<int> v;
//
//	v.push_back(60);
//	v.push_back(50);
//	v.push_back(30);
//	v.push_back(90);
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(80);
//
//	for(vector<int>::iterator iter = v.begin() ; iter!=v.end() ; iter++)
//	{
//		cout<<*iter<<" ";
//	}
//	cout<<endl;
//	sort(v.begin(),v.end());
//	for(vector<int>::iterator iter = v.begin() ; iter!=v.end() ; iter++)
//	{
//		cout<<*iter<<" ";
//	}
//}
//
//
////////////////vector, list, map, find, find_if sort, for_each//////////////
//////LIST//////
//#pragma warning(disable:4996)
//#include<iostream>
//#include<list>
//#include<algorithm>
//using namespace std;
//
//void main()
//{
//	list<int> lt;
//
//	lt.push_back(60);
//	lt.push_back(50);
//	lt.push_back(30);
//	lt.push_back(90);
//	lt.push_back(10);
//	
//	lt.push_front(20);
//	lt.push_front(80);
//
//	for(list<int>::iterator iter = lt.begin() ; iter!=lt.end() ; iter++)
//	{
//		cout<<*iter<<" ";
//	}
//	cout<<endl;
//	list<int>::iterator liter = find(lt.begin(),lt.end(),30);
//	cout<<*liter<<endl;
//	lt.sort(greater<int>());
//	for(list<int>::iterator iter = lt.begin() ; iter!=lt.end() ; iter++)
//	{
//		cout<<*iter<<" ";
//	}
//	cout<<endl;
//}
//
//
//////////////vector, list, map, find, find_if sort, for_each//////////////
////MAP//////
//#pragma warning(disable:4996)
//#include<iostream>
//#include<map>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//void main()
//{
//	map<int,string> m;
//	m[2] = "two";
//	m[1] = "one";
//	m[3] = "three"; //바로 참조값으로 넣어 줄 수 있다.
//
//	cout<<m[1]<<endl; //출력방식
//	cout<<m[2]<<endl;
//	cout<<m[3]<<endl;
//
//	m.insert(pair<int, string>(4,"four")); //pair객체로 넣어주어야 한다.
//	m.insert(pair<int, string>(5,"five")); //pair객체로 넣어주어야 한다.
//	m.insert(pair<int, string>(6,"six")); //pair객체로 넣어주어야 한다.
//	m.insert(pair<int, string>(7,"seven")); //pair객체로 넣어주어야 한다.
//	
//	map<int ,string>::iterator iter = m.find(4);
//	
//	cout<<iter->second<<endl;
//	iter = m.find(5); //map의 find()메서드
//	cout<<iter->second<<endl; //출력 방식
//	cout<<(*iter).second<<endl; //출력방식
//
//	////////update 방식/////////
//	m[2] = "TWO"; //보안에 위험성이 있다.
//	//찾아서 update하는 방식이 더 보안성이 높다.
//	iter = m.find(3);
//	if(iter!=m.end()) 
//		iter->second = "THREE"; 
//
//	map<int,string>::iterator liter = m.lower_bound(4);
//	map<int,string>::iterator uiter = m.upper_bound(4);
//	if(liter!=uiter)
//		liter->second = "FOUR";
//	/*for(map<int,string>::iterator iter = liter; iter!=uiter; iter++)
//		iter->second = "FOUR";*/
//
//	for(map<int,string>::iterator iter = m.begin() ; iter!=m.end() ; iter++)
//	{
//		cout<<iter->second<<" ";
//	}
//	cout<<endl;
//	cout<<m.at(2)<<endl; //출력방식
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<map>
//#include<string>
//#include<algorithm>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x=0, int _y=0):x(_x),y(_y){}
//	const Point& operator+(const Point&arg)const
//	{
//		Point temp;
//
//		temp.x = x + arg.x;
//		temp.y = y + arg.y;
//
//		return temp;
//	}
//	const Point& operator+=(const Point&arg)
//	{
//		x +=arg.x;
//		y +=arg.y;
//
//		return *this;
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//ostream& operator<<(ostream& o, const Point& arg)
//{
//	o<<arg.GetX()<<','<<arg.GetY();
//	return o;
//}
//void main()
//{
//	map<string,Point> m;
//	m["Point1"] = Point(2,3);
//
//	m.insert(pair<string,Point>("Point2",Point(3,4)));
//	cout<<m["Point1"]<<endl; //출력
//	for(map<string,Point>::iterator iter = m.begin(); iter!=m.end();iter++) //출력
//		cout<<iter->first<<" : "<<iter->second<<endl;
//	map<string,Point>::iterator liter = m.find("Point2");
//	if(liter!=m.end())
//	{
//		liter->second = Point(8,8);
//	}
//	for(map<string,Point>::iterator iter = m.begin(); iter!=m.end();iter++) //출력
//		cout<<iter->first<<" : "<<iter->second<<endl;
//}
//
//
//////////////////////자료구조 만들기/////////////////////
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//template <typename T>
//class List
//{
//public:
//	struct Node
//	{
//		T data;
//		Node*prev;
//		Node*next;
//	};
//private:
//	Node* AllocNode(const T&data)
//	{
//		Node *pn = new Node;
//		pn->data = data;
//		pn -> prev = NULL;
//		pn -> next = NULL;
//		return pn;
//	}
//	Node*head;
//	Node*tail;
//public:
//	class Iterator
//	{
//		Node*ptr;
//	public:
//		Iterator(Node*n)
//		{
//			ptr = n;
//		}
//		Iterator operator++()
//		{
//			ptr = ptr->next;
//			return *this;
//		}
//		Iterator operator++(int)
//		{
//			ptr = ptr->next;
//			return *this;
//		}
//		bool operator!=(Iterator iter)const
//		{
//			return !(iter.ptr==ptr);
//		}
//		const T& operator*()const
//		{
//			return ptr->data;
//		}
//		Node* operator&()
//		{
//			return ptr;
//		}
//		T* operator->()
//		{
//			return &(ptr->data);
//		}
//	};
//	List()
//	{
//		head = AllocNode(0);
//		tail = AllocNode(0);
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node*p;
//		for(p=head ; p->next ;)
//		{
//			Node*pn=p->next;
//			delete p;
//			p=pn;
//		}
//	}
//	void AddNode(const T&data)
//	{
//		Node*pn = new Node;
//		pn->data = data;
//		pn->prev = tail->prev;
//		pn->next = tail;
//		tail->prev->next = pn;
//		tail->prev = pn;
//	}
//	void RemoveNode()
//	{
//		Node*pn = tail->prev;
//
//		tail->prev->prev->next = tail;
//		tail->prev = tail->prev->prev;
//		delete pn;
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next);
//	}
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//};
//void main()
//{
//	List<int> lt;
//	
//	lt.AddNode(15);
//	lt.AddNode(20);
//	lt.AddNode(30);
//	lt.AddNode(5);
//	lt.AddNode(50);
//	lt.AddNode(10);
//
//	for(List<int>::Iterator iter = lt.Begin() ; iter!=lt.End() ; iter++ )
//	{
//		
//		cout<<*iter<<endl;
//	}
//	List<int>::Iterator iter = find(lt.Begin(),lt.End(),20);
//	cout<<endl<<*iter<<endl;
//}
//
//
//////////////////////자료구조 만들기/////////////////////
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//template <typename T>
//class List
//{
//public:
//	struct Node
//	{
//		T data;
//		Node*prev;
//		Node*next;
//	};
//private:
//	Node* AllocNode(const T&data)
//	{
//		Node *pn = new Node;
//		pn->data = data;
//		pn -> prev = NULL;
//		pn -> next = NULL;
//		return pn;
//	}
//	Node*head;
//	Node*tail;
//public:
//	class Iterator
//	{
//		Node*ptr;
//	public:
//		Iterator(Node*n)
//		{
//			ptr = n;
//		}
//		Iterator operator++()
//		{
//			ptr = ptr->next;
//			return *this;
//		}
//		Iterator operator++(int)
//		{
//			ptr = ptr->next;
//			return *this;
//		}
//		bool operator!=(Iterator iter)const
//		{
//			return !(iter.ptr==ptr);
//		}
//		const T& operator*()const
//		{
//			return ptr->data;
//		}
//		Node* operator&()
//		{
//			return ptr;
//		}
//		T* operator->()
//		{
//			return &(ptr->data);
//		}
//	};
//	List()
//	{
//		head = AllocNode(Point(0,0));
//		tail = AllocNode(Point(0,0));
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node*p;
//		for(p=head ; p->next ;)
//		{
//			Node*pn=p->next;
//			delete p;
//			p=pn;
//		}
//	}
//	void AddNode(const T&data)
//	{
//		Node*pn = new Node;
//		pn->data = data;
//		pn->prev = tail->prev;
//		pn->next = tail;
//		tail->prev->next = pn;
//		tail->prev = pn;
//	}
//	void RemoveNode()
//	{
//		Node*pn = tail->prev;
//
//		tail->prev->prev->next = tail;
//		tail->prev = tail->prev->prev;
//		delete pn;
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next);
//	}
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//};
//class Point
//{
//	int x,y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y){}
//	void Print()const
//	{
//		cout<<x<<','<<y<<endl;
//	}
//};
//void main()
//{
//	List<Point> lt;
//	lt.AddNode(Point(2,3));
//	lt.AddNode(Point(5,8));
//	lt.AddNode(Point(9,1));
//
//	List<Point>::Iterator iter = lt.Begin();
//	iter->Print();
//}
//
//
//#include<iostream>
//#include<map>
//#include<string>
//#include<list>
//#include<vector>
//using namespace std;
//void main()
//{
//	vector<int>v;
//	list<int> lt;
//	map<int,string> m;
//	
//	m[1] = "일이요";
//	
//	m.insert(pair<int,string>(3,"셋이요"));
//	m.insert(pair<int,string>(2,"둘이요"));
//
//	m[4] = "넷이요";
//
//	map<int,string>::iterator iter = m.begin();
//	map<int,string>::iterator eiter = m.end();
//	
//	//Up_data
//	m[1] = "ONE";
//	map<int,string>::iterator liter = m.lower_bound(2);
//	map<int,string>::iterator uiter = m.upper_bound(2);
//	if(liter!=uiter)
//	{
//		liter->second = "TWO";
//	}
//	
//	map<int,string>::iterator fiter = m.find(3);
//
//	if(fiter!=m.end())
//		fiter->second = "THREE";
//
//	for(map<int,string>::iterator iter = m.begin(); iter!=m.end(); iter++)
//		cout<<iter->second<<endl;
//}


/////////////////////////예제//////////////////////////
//
////6.
//#include<iostream>
//using namespace std;
//void main()
//{
//	int*p = new int(10);
//
//	cout<<*p<<endl;
//
//	delete p;
//}

//
////7.
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y){}
//	void Print()const
//	{
//		cout<<'('<<x<<','<<y<<')'<<endl;
//	}
//	const Point operator-(const Point& arg)
//	{
//		Point pt(x-arg.x,y-arg.y);
//		return pt;
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//ostream& operator<<(ostream& o, const Point&arg)
//{
//	o<<'('<<arg.GetX()<<','<<arg.GetY()<<')'<<"  ";
//	return o;
//}
//void main()
//{
//	Point pt1,pt2(2,3);
//	Point pt3;
//	pt1.Print(); //(0,0)
//	pt2.Print(); //(2,3)
//
//	pt3 = pt1 - pt2;
//	pt3.Print(); //(-2,-3)
//
//	cout<<pt1<<pt2<<endl; //(0,0) (2,3)
//}
//
//
////8.
//#include<iostream>
//#include<cstring>
//using namespace std;
//class String
//{
//	char* str;
//public:
//	String(char*_str)
//	{
//		str = new char[strlen(_str)+1];
//		strcpy(str,_str);
//	}
//	String(const String&arg)
//	{
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//	}
//	const String& operator=(const String& arg)
//	{
//		if(this == &arg)
//			return *this;
//		delete[]str;
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//		return *this;
//	}
//};
//void main()
//{
//	String s1("Hello!");
//	String s2 = s1;
//	String s3("ABC");
//	s3 = s1;
//}
//
//
////9.
//#include<iostream>
//using namespace std;
//template <typename T>
//class Array
//{
//	T*data;
//	int size;
//	int capacity;
//public:
//	Array(int cap=10):size(0),capacity(cap)
//	{
//		data = new T[capacity];
//	}
//	void Add(const T& _data)
//	{
//		data[size] = _data;
//		size++;
//	}
//	int Size()const{return size;}
//	void Remove(int idx)
//	{
//		for(int i = idx ; i<size ; i++)
//			data[i] = data[i+1];
//		size--;
//	}
//	const T& operator[](int idx)const
//	{
//		return data[idx];
//	}
//	T& operator[](int idx)
//	{
//		return data[idx];
//	}
//};
//void main()
//{
//	Array<int> arr(10); //10은 cap
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	for(int i = 0; i<arr.Size(); i++)
//		cout<<arr[i]<<endl;
//
//	arr.Remove(1); //index 1 원소 제거
//	for(int i = 0; i<arr.Size(); i++)
//		cout<<arr[i]<<endl;
//}
//
//
////10.
//#include<iostream>
//using namespace std;
//class Shape
//{
//public:
//	virtual void Draw()=0;
//};
//class Line : public Shape
//{
//	int x1;
//	int y1;
//	int x2;
//	int y2;
//public:
//	Line(int a,int b,int c,int d):x1(a),y1(b),x2(c),y2(d){}
//	void Draw()
//	{
//		cout<<"시작점"<<x1<<','<<y1<<" , "<<"끝점 "<<x2<<','<<y2<<endl;
//	}
//};
//class Rect : public Shape
//{
//	int x;
//	int y;
//	int width;
//	int height;
//public:
//	Rect(int a,int b,int c,int d):x(a),y(b),width(c),height(d){}
//	void Draw()
//	{
//		cout<<"시작 위치"<<x<<','<<y<<" , "<<"폭,높이 "<<width<<','<<height<<endl;
//	}
//
//};
//void main()
//{
//	Shape *ps = new Rect(10,10,100,100);
//	ps->Draw(); //시작위치 10,10, 폭,높이 100,100
//	delete ps;
//
//	ps = new Line(5,5, 10,10);
//
//	ps->Draw(); //시작점 5,5 끝점 10,10
//	delete ps;
//}

//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(80);
//	v.push_back(60);
//	v.push_back(40);
//	v.push_back(20);
//
//	for(vector<int>::iterator iter = v.begin() ; iter!=v.end() ; iter++ )
//		cout<<*iter<<endl;
//	vector<int>::iterator fiter = find(v.begin(),v.end(),40);
//	cout<<*fiter<<endl;
//
//	v.insert(fiter,50);
//	for(vector<int>::iterator iter = v.begin() ; iter!=v.end() ; iter++ )
//		cout<<*iter<<endl;
//	v.erase(fiter);
//}

//
//#include<iostream>
//#include<algorithm>
//#include<list>
//using namespace std;
//void main()
//{
//	list<int> lt;
//	lt.push_back(50);
//	lt.push_front(80);
//	lt.push_back(15);
//	lt.push_back(55);
//	lt.push_back(25);
//	lt.push_back(5);
//
//	for(list<int>::iterator iter=lt.begin(); iter!=lt.end() ; iter++)
//	{
//		cout<<*iter<<" ";
//	}
//	cout<<endl;
//	list<int>::iterator iter = find(lt.begin(),lt.end(),15);
//	lt.insert(iter,22);
//	lt.sort();
//	for(list<int>::iterator iter=lt.begin(); iter!=lt.end() ; iter++)
//	{
//		cout<<*iter<<" ";
//	}
//	cout<<endl;
//}

//
//#include<iostream>
//#include<algorithm>
//#include<map>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y){}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	bool operator<(const Point&arg)
//	{
//		return x<arg.x;
//	}
//};
//ostream& operator<<(ostream& o,const Point& arg)
//{
//	o<<arg.GetX()<<','<<arg.GetY();
//	return o;
//}
//void main()
//{
//	map<int,Point> m;
//
//	m.insert(pair<int,Point>(1,Point(1,1)));
//	m[2] = Point(2,2);
//	m[3] = Point(3,3);
//	m[4] = Point(4,4);
//	m[5] = Point(5,5);
//
//	for(map<int,Point>::iterator iter = m.begin() ; iter != m.end() ; iter++)
//		cout<<iter->second<<endl;
//	map<int,Point>::iterator iter = find(m.begin(),m.end(),pair<int,Point>(3,Point(3,3)));
//	cout<<(*iter).second<<endl;
//}
//////////////////////////실습///////////////////////////////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int>::iterator Find_if(vector<int>::iterator si, vector<int>::iterator ei, int data)
//{
//	for (; si != ei; ++si)
//	{
//		if (data == *si)
//			return si;
//	}
//	return ei;
//}
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	vector<int>::iterator iter = Find_if(v.begin(),v.end(),20);
//	v.erase(iter);
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << endl;
//}


//#include <iostream>
//#include <list>
//#include <algorithm>
//using namespace std;
//
//list<int>::iterator Find_if(list<int>::iterator si, list<int>::iterator ei, int data)
//{
//	for (; si != ei; ++si)
//	{
//		if (data == *si)
//			return si;
//	}
//	return ei;
//}
//void main()
//{
//	list<int> lt;
//
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//
//	list<int>::iterator iter = Find_if(lt.begin(), lt.end(), 20);
//	lt.erase(iter);
//	for (list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << endl;
//}

//#include <iostream>
//#include <map>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//void main()
//{
//	map<int, string> m;
//	m[1] = "one";
//	m[2] = "two";
//	m[3] = "three";
//
//	map<int, string>::iterator iter = m.find(2);
//	m.erase(iter);
//
//	for (map<int, string>::iterator iter = m.begin(); iter != m.end(); ++iter)
//		cout << (*iter).first << " "<<(*iter).second << endl;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y){}
//	int GetX()const
//	{
//		return x;
//	}
//	int GetY()const
//	{
//		return y;
//	}
//};
//template <typename T>
//class List
//{
//public:
//	struct Node
//	{
//		T data;
//		Node* prev;
//		Node* next;
//		Node(T d = T()) :data(d), prev(NULL), next(NULL){}
//	};
//	class Iterator
//	{
//		List<T>* plt;
//		Node* ptr;
//	public:
//		Iterator(List<T>* plist,Node* p = NULL) :plt(plist),ptr(p){}
//		bool operator!= (Iterator arg)
//		{
//			return ptr != arg.ptr;
//		}
//		Iterator operator ++()
//		{
//			plt->Next(ptr);
//			return *this;
//		}
//		const T& operator*() const
//		{
//			return ptr->GetData(ptr);
//		}
//	};
//private:
//	Node* head;
//	Node* tail;
//public:
//	List()
//	{
//		head = new Node(T());
//		tail = new Node(T());
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		for (Node* p = head; p;)
//		{
//			Node* pn = p->next;
//			delete p;
//			p = pn;
//		}
//	}
//	void AddNext(const T& data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* n = new Node(data);
//		ptail->next = n;
//		n->prev = ptail;
//		n->next = tail;
//		tail->prev = n;
//	}
//	void AddPrev(const T& data)
//	{
//		Node* nhead = head->next;
//
//		Node* n = new Node(data);
//		head->next = n;
//		n->prev = head;
//		n->next = nhead;
//		nhead->prev = n;
//	}
//	Node* GetHead()
//	{
//		return head->next;
//	}
//	bool HasNext(Node* p)
//	{
//		return p->next != NULL;
//	}
//	Node* Next(Node* p)
//	{
//		return p->next;
//	}
//	const T& GetData(Node* p)
//	{
//		return p->data;
//	}
//	void Remove(Node* p)
//	{
//		Node* pp = p->prev;
//		Node* np = p->next;
//		delete p;
//		pp->next = np;
//		np->prev = pp;
//	}
//	Iterator Begin()
//	{
//		return Iterator(this,GetHead());
//	}
//	Iterator End()
//	{
//		return Iterator(this,tail);
//	}
//};
//ostream& operator<<(ostream& out, const Point& arg)
//{
//	out << arg.GetX() << ',' << arg.GetY() << endl;
//	return out;
//}
//struct Pred
//{
//	bool operator()(const Point& l, const Point& r)
//	{
//		if (l.GetX() < r.GetX())
//			return true;
//		else if (l.GetX() > r.GetX())
//			return false;
//		else
//			return l.GetY() < r.GetY();
//	}
//};
//void main()
//{
//	List<Point*> lt;
//
//	lt.AddNext(new Point(1, 1));
//	lt.AddNext(new Point(2, 2));
//	lt.AddNext(new Point(3, 3));
//	lt.AddNext(new Point(4, 4));		
//	lt.AddNext(new Point(5, 5));
//
//	sort(lt.Begin(),lt.End(),Pred());
//	lt.Remove(lt.GetHead);
//	for (List<Point*>::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//	for (List<Point*>::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//		delete *iter;
//}

/////////////////////연습//////////////////////////
//#include<stdio.h>
//void Print(int*arr)
//{
//	int i;
//	for(i=0;i<5;i++)
//		printf("%3d",arr[i]);
//}
//void main()
//{
//	int arr[5] = {10,20,30,40,50};
//
//	Print(arr);
//}
//
//#include<stdio.h>
//void PrintArray(int(*p)[3])
//{
//	int i,j;
//	for(i=0;i<2;i++){
//		for(j=0;j<3;j++){
//			printf("%3d",p[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//void main()
//{
//	int arr[2][3] = {{1,2,3},{10,20,30}};
//
//	PrintArray(arr);
//}
//
//#include<stdio.h>
//int RangeSum(int*arr,int a,int b)
//{
//	int i;
//	int sum=0;  //초기화 꼭
//	for(i=a;i<=b;i++)
//		sum+=arr[i];
//	return sum;
//}
//void main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	printf("%d\n",RangeSum(arr,0,1));
//	printf("%d\n",RangeSum(arr,2,3));
//	printf("%d\n",RangeSum(arr,1,4));
//}
//
//
//#include<stdio.h>
//void main()
//{
//	char*s = "abEKDfsdDSKV21418V";
//	int i;
//	for(i=0;s[i];i++)
//	{
//		if('A'<=s[i] && s[i]<='Z')
//			printf("%c",s[i]);
//	}
//	printf("\n");
//}
//
//#include<stdio.h>
//typedef struct Data
//{
//	char*data1;
//	double data2;
//	int data3;
//}Data;
//void main()
//{
//	Data d = {"ABC",5.5,100};
//	printf("%s  %g  %d\n",d.data1,d.data2,d.data3);
//}

//////////////////////////////////////////////////////////
//#include<iostream>
//using namespace std;
//void main()
//{
//	int*p = new int(10);
//
//	cout<<*p<<endl;
//
//	delete p;
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x=0, int _y=0):x(_x),y(_y){}
//	void Print(){cout<<'('<<x<<','<<y<<')'<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	const Point operator-(const Point&arg)
//	{
//		return Point(x-arg.x,y-arg.y);
//	}
//};
//ostream& operator<<(ostream&o,const Point&arg)
//{
//	o<<'('<<arg.GetX()<<','<<arg.GetY()<<')';
//	return o;
//}
//void main()
//{
//	Point pt1,pt2(2,3);
//	Point pt3;
//	
//	pt1.Print();
//	pt2.Print();
//
//	pt3 = pt1-pt2;
//	pt3.Print();
//
//	cout<<pt1<<pt2<<endl;
//}
//
//
//class String
//{
//public:
//	String(const String&arg)
//	{
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//	}
//	const String& operator=(const String&arg)
//	{
//		if(this==&arg)
//			return *this;
//		
//	}
//};
//void main()
//{
//	String s1("Hello!");
//	String s2 = s1;
//	String s3("ABC");
//	s3 = s1;
//}
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//vector<int>::iterator Find_if(vector<int>::iterator si,vector<int>::iterator ei, int data)
//{
//	for(;si!=ei;si++)
//	{
//		if(*si == data)
//			return si;
//	}
//	return ei;
//}
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	vector<int>::iterator iter = Find_if(v.begin(),v.end(),20);
//	v.erase(iter);
//	for(vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
//		cout<<*iter<<endl;
//}
