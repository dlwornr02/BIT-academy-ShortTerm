////////////////1.&������������ ����
//
//#include<iostream>
//using namespace std;
//template <typename T>
//void Swap(T&a,T&b)
//{
//	T temp;
//	temp=a;
//	a=b;
//	b=temp;
//}
//void Print(const int&a,const int&b)
//{
//	cout<<a<<','<<b<<endl;
//}
//void InitInteger(int&a,int&b)
//{
//	a=10;
//	b=20;
//}
//void main()
//{
//	int a,b;
//	InitInteger(a,b);
//	Print(a,b);
//	Swap(a,b);
//	Print(a,b);
//}

//////////////////2.�����ڿ� �Ҹ��� & ��ӱ��
//
//#include<iostream>
//using namespace std;
//class c1
//{
//public:
//	c1(){cout<<"=c1 ������="<<endl;}
//	~c1(){cout<<"=c1 �Ҹ���="<<endl;}
//};
//class c2 : public c1
//{
//public:
//	c2(){cout<<"==c2 ������=="<<endl;}
//	~c2(){cout<<"==c2 �Ҹ���=="<<endl;}
//};
//class c3
//{
//public:
//	c3(){cout<<"===c3 ������==="<<endl;}
//	~c3(){cout<<"===c3 �Ҹ���==="<<endl;}
//};
//class c4 : public c2
//{
//public:
//	c4(){cout<<"====c4 ������===="<<endl;}
//	~c4(){cout<<"====c4 �Ҹ���===="<<endl;}
//};
//void main()
//{
//	c1*p;
//	{c1 o1;}cout<<endl;
//	{c2 o2;}cout<<endl;
//	{c3 o3;}cout<<endl;
//	{c4 o4;}cout<<endl;
//	{p=new c4();  //c1�� ������������ c4�� ���������Ƿ� c2�� c4�� ������ ����ִ�.
//				  //�׷��Ƿ� �θ�Ŭ������ �Ҹ��ڸ� virtualŰ����� �������ش�.
//	delete p;}
//	cout<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class c1
//{
//public:
//	c1(){cout<<"=c1 ������="<<endl;}
//	~c1(){cout<<"=c1 �Ҹ���="<<endl;}
//};
//class c2 : public c1
//{
//public:
//	c2(){cout<<"==c2 ������=="<<endl;}
//	~c2(){cout<<"==c2 �Ҹ���=="<<endl;}
//};
//class c3
//{
//public:
//	c3(){cout<<"===c3 ������==="<<endl;}
//	~c3(){cout<<"===c3 �Ҹ���==="<<endl;}
//};
//class c4 : public c2
//{
//public:
//	c4(){cout<<"====c4 ������===="<<endl;}
//	~c4(){cout<<"====c4 �Ҹ���===="<<endl;}
//};
//void main()
//{
//	c2*p;
//	c1 o1;
//	c2 o2;
//	c3 o3;
//	c4 o4;
//	{p=new c4();  //c1�� ������������ c4�� ���������Ƿ� c2�� c4�� ������ ����ִ�.
//				  //�׷��Ƿ� �θ�Ŭ������ �Ҹ��ڸ� virtualŰ����� �������ش�.
//	delete p;}
//	cout<<endl;
//}


//
//////////////////////////////////////////////////////////////////////
///////////////////////3.��������ڿ� ������Կ�����
//#include<iostream>
//using namespace std;
//class String
//{
//	char*str;
//public:
//	String(char*_str=""):str(0)
//	{
//		str = new char[strlen(_str)+1];
//		strcpy(str,_str);
//	}
//	String(const String&arg)
//	{
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//	}
//	const String& operator=(const String&arg)
//	{
//		if(this==&arg)
//			return *this;
//		str = new char[strlen(arg.str)+1];
//		strcpy(str,arg.str);
//		return *this;
//	}
//	~String(){delete[]str;}
//	void Print()
//	{
//		cout<<str<<endl;
//	}
//};
//void main()
//{
//	String st1("ABC");
//	String st2(st1);
//	String st3;
//	String st4("Hello");
//
//	st3=st2;
//	st1.Print();
//	st2.Print();
//	st3.Print();
//	st4.Print();
//	st4=st1;
//	st4.Print();
//
//}

///////////////////4.new ������,delete������
//////////////////////5.������ virtual�޼���
//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//	string name;
//	int age;
//public:
//	Person(const string&_name,const int _age):name(_name),age(_age){}
//	virtual void Print(){cout<<name<<','<<age<<endl;}
//	const string& GetName(){return name;}
//	int GetAge(){return age;}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const string&_name,int _age,int g):Person(_name,_age),grade(g){}
//	void Print(){cout<<GetName()<<GetAge()<<','<<grade<<endl;}
//};
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string&_name,int _age,string g):Person(_name,_age),position(g){}
//	void Print(){cout<<GetName()<<GetAge()<<position<<endl;}
//};
//void main()
//{
//	Person*p;
//	Student st1("���籹",26,3);
//	p=&st1;
//	p->Print();
//	Professor pf1("���籤",23,"�л�");
//	p=&pf1;
//	p->Print();
//}

//////////////////////////////////////////�߰�
/////////////////////////6.string class�����//
#include<iostream>
#include<cstring>
using namespace std;
class String
{
	char*str;
public:
	String(const char*_str)
	{
		str = new char[strlen(_str)+1];
		strcpy(str,_str);
	}
	~String(){delete[]str;}
	String(const String&arg)
	{
		str = new char[strlen(arg.str)+1];
		strcpy(str,arg.str);
	}
	const String& operator=(const String&arg)
	{
		if(this==&arg)
			return *this;
		str = new char[strlen(arg.str)+1];
		strcpy(str,arg.str);
		return *this;
	}
	const char* GetString()const{return str;}
	const String operator+(const String&arg)const
	{
		char*buf=new char[strlen(str)+strlen(arg.str)+1];
		strcpy(buf,str);
		strcat(buf,arg.str);
		String s(buf);
		return s;
	}
	const String& operator+=(const String&arg)
	{
		char*buf=new char[strlen(str)+strlen(arg.str)+1];
		strcpy(buf,str);
		strcat(buf,arg.str);
		delete[]str;
		str = buf;
		return *this;
	}
	const char& operator[](int idx)const{return str[idx];}
	char& operator[](int idx){return str[idx];}
};
ostream& operator<<(ostream&o,const String&arg)
{
	o<<arg.GetString();
	return o;
}
void main()
{
	String str("ABC");
	String str2("Hello");
	String str3("");
	str3=str+str2+str;
	//operator+= �� +�� �ٸ���.+=�� �ڽ��� ��ü�������� ��ȯ +�� ���ο� ��ü�� ����
	str[1]='I';
	cout<<str<<endl;
	cout<<str2<<endl;
	cout<<str<<endl;
	cout<<str3<<endl;

}
////////////////////////7.Array class or Vector class template�� ����
//#include<iostream>
//using namespace std;
//template <typename T>
//class Array
//{
//	T*parr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):size(0),capacity(cap)
//	{
//		parr = new T[capacity];
//	}
//	~Array(){delete[]parr;}
//	Array(const Array&arg):size(arg.size),capacity(arg.capacity)
//	{
//		parr = new T[capacity];
//		for(int i=0 ; i<arg.size ; i++)
//			parr[i] = arg.parr[i];
//	}
//	const Array& operator=(const Array&arg)
//	{
//		if(this==&arg)
//			return *this;
//		delete []parr;
//		size = arg.size;
//		parr = new T[arg.capacity];
//		for(int i=0 ; i<arg.size ; i++)
//			parr[i] = arg.parr[i];
//		return*this;
//	}
//	void Add(const T&data)
//	{
//		if(size>=capacity)
//			return;
//		parr[size++] = data;
//	}
//	int Size()const{return size;}
//	int GetCapacity()const{return capacity;}
//	const T& operator[](int idx)const{return parr[idx];}
//	T& operator[](int idx){return parr[idx];}
//	void Remove(int idx)
//	{
//		for(int i=idx;i<size-1;i++)
//			parr[i]=parr[i+1];
//		size--;
//	}
//};







//////////////////////////////8.������ �ߺ� string class�� ������ ������ ������ �ߺ�
//#include<iostream>
//using namespace std;
//class Point
//{
//	int*x,*y;
//public:
//	Point(int _x=0,int _y=0)
//	{
//		x = new int(_x);
//		y = new int(_y);
//	}
//	Point(const Point&arg)
//	{
//		x= new int(*arg.x);
//		y= new int(*arg.y);
//	}
//	const Point& operator=(const Point&arg)
//	{
//		if(this==&arg)
//			return *this;
//		delete x;
//		delete y;
//		x= new int(*arg.x);
//		y= new int(*arg.y);
//		return *this;
//	}
//	~Point(){delete x;delete y;}
//	int GetX()const{return *x;}
//	int GetY()const{return *y;}
//	const Point operator+(const Point&arg)const
//	{
//		const Point pt(*x+*arg.x,*y+*arg.y);
//		return pt;
//	}
//	const Point& operator+=(const Point&arg)
//	{
//		*x += *arg.x;
//		*y += *arg.y;
//		return *this;
//	}
//	const Point& operator++(int)
//	{
//		Point pt(*this);
//		(*x)++;
//		(*y)++;
//		return pt;
//	}
//	const Point operator-(const Point&arg)const
//	{
//		Point pt(*x-*arg.x,*y-*arg.y);
//		return pt;
//	}
//	const Point& operator-=(const Point&arg)
//	{
//		*x -= *arg.x;
//		*y -= *arg.y;
//		return *this;
//	}
//	const Point& operator--()
//	{
//		(*x)--;
//		(*y)--;
//		return *this;
//	}
//	const Point& operator++()
//	{
//		(*x)++;
//		(*y)++;
//		return *this;
//	}
//	const Point& operator--(int)
//	{
//		Point pt(*this);
//		(*x)--;
//		(*y)--;
//		return pt;
//	}
//	bool operator==(const Point&arg)
//	{
//		return ((*x==*arg.x)&&(*y==*arg.y));
//	}
//	bool operator!=(const Point&arg)
//	{
//		return !((*x==*arg.x)&&(*y==*arg.y));
//	}
//};
//ostream& operator<<(ostream&o,const Point&arg)
//{
//	o<<arg.GetX()<<','<<arg.GetY();
//	return o;
//}
//void main()
//{
//	Point pt1(1,2);
//	Point pt2(3,4);
//	Point pt3(pt1);
//	Point pt4;
//	Point pt5;
//
//	pt3 = pt1 + pt2;
//	pt4 = pt1 - pt2;
//	++pt2;
//	--pt1;
//	pt3--;
//	cout<<pt1<<endl;
//	cout<<pt2<<endl;
//	cout<<pt3<<endl;
//	cout<<pt4<<endl;
//}
//////////////////////////////9.container(vector,list,map)3���� ����
//////////////////////////���� �߰�,����,����,���
//#include<iostream>
//#include<vector>
//using namespace std;
//void main()
//{
//	vector<int> v;
//	v.push_back(10); //�߰�
//	v.push_back(20); //�߰�
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	
//	v.insert(v.begin()+3,20); //�߰��� �߰�
//	v.pop_back(); //����������
//	v.erase(v.begin()+3); //�߰�������
//	v[2]=100;  //����
//	for(vector<int>::iterator iter=v.begin();iter!=v.end();iter++) //���
//	{
//		cout<<*iter<<" "; //���
//	} //���
//	cout<<endl;
//	for(vector<int>::size_type i=0;i<v.size();i++)
//	{
//		cout<<v[i]<<" ";
//	}
//	cout<<endl;
//}
//
//#include<iostream>
//#include<list>
//using namespace std;
//void main()
//{
//	list<int> lt;
//	lt.push_back(10); //�߰�
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//	lt.push_front(200);
//	list<int>::iterator iter = lt.begin();
//	iter++;
//	iter++;
//	lt.insert(iter,50);
//	
//	list<int>::iterator siter = lt.begin();
//	list<int>::iterator eiter = lt.end();
//
//	for(list<int>::iterator iter=siter;iter!=eiter;iter++)
//	{
//		cout<<*iter<<" ";
//	}
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//void main()
//{
//	map<int,string> m;  //key,value�� ����
//	//insert�ϴ¹��
//	m[1]="���籹";
//	m[2]="������";
//	
//	m.insert(pair<int,string>(3,"three"));
//	m.insert(pair<int,string>(5,"five"));
//	m.insert(pair<int,string>(6,"six"));
//	//����,update�ϴ¹��
//	m[3]="Three";//1.�ٷ� ����
//	//2.iterator�� �ص� 
//	map<int,string>::iterator liter = m.lower_bound(5);
//	map<int,string>::iterator uiter = m.upper_bound(5);
//	if(liter!=uiter)
//		liter->second = "FIVE";
//	for(map<int,string>::iterator iter = m.begin();iter!=m.end();iter++)
//	{
//		cout<<iter->first<<',' << iter->second<<endl; //iterator�� ������ ���Ұ� �������� �����Ƿ� ȭ��ǥ ������ ��밡��
//	}
//}
//
/////////////////////////////10.�˰��� ����
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//class Greater
//{
//public:
//	bool operator()(int a,int b)
//	{
//		return a>b;
//	}
//};
//class Increment
//{
//public:
//	void operator()(int&n)
//	{
//		n++;
//	}
//};
//class Find
//{
//public:
//	bool operator()(int a)const
//	{
//		return (50<=a && a<=60);
//	}
//};
//void main()
//{
//	vector<int>v;
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(80);
//	v.push_back(1000);
//	v.push_back(5);
//	vector<int>::iterator lliter = find_if(v.begin(),v.end(),Find()); //find�˰��� find_if �˰���
//	if(v.end()!=lliter)
//		cout<<*lliter<<endl;
//	for(vector<int>::iterator iter=v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//	sort(v.begin(),v.end(),Greater()); //sort�˰���
//	for(vector<int>::iterator iter=v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//	for_each(v.begin(),v.end(),Increment()); //for_each �˰���
//	for(vector<int>::iterator iter=v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
