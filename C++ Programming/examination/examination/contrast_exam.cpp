////////////////1.&참조연산자의 이해
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

//////////////////2.생성자와 소멸자 & 상속기반
//
//#include<iostream>
//using namespace std;
//class c1
//{
//public:
//	c1(){cout<<"=c1 생성자="<<endl;}
//	~c1(){cout<<"=c1 소멸자="<<endl;}
//};
//class c2 : public c1
//{
//public:
//	c2(){cout<<"==c2 생성자=="<<endl;}
//	~c2(){cout<<"==c2 소멸자=="<<endl;}
//};
//class c3
//{
//public:
//	c3(){cout<<"===c3 생성자==="<<endl;}
//	~c3(){cout<<"===c3 소멸자==="<<endl;}
//};
//class c4 : public c2
//{
//public:
//	c4(){cout<<"====c4 생성자===="<<endl;}
//	~c4(){cout<<"====c4 소멸자===="<<endl;}
//};
//void main()
//{
//	c1*p;
//	{c1 o1;}cout<<endl;
//	{c2 o2;}cout<<endl;
//	{c3 o3;}cout<<endl;
//	{c4 o4;}cout<<endl;
//	{p=new c4();  //c1의 포인터형으로 c4를 가리켯으므로 c2와 c4는 여전히 살아있다.
//				  //그러므로 부모클래스의 소멸자를 virtual키워드로 선언해준다.
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
//	c1(){cout<<"=c1 생성자="<<endl;}
//	~c1(){cout<<"=c1 소멸자="<<endl;}
//};
//class c2 : public c1
//{
//public:
//	c2(){cout<<"==c2 생성자=="<<endl;}
//	~c2(){cout<<"==c2 소멸자=="<<endl;}
//};
//class c3
//{
//public:
//	c3(){cout<<"===c3 생성자==="<<endl;}
//	~c3(){cout<<"===c3 소멸자==="<<endl;}
//};
//class c4 : public c2
//{
//public:
//	c4(){cout<<"====c4 생성자===="<<endl;}
//	~c4(){cout<<"====c4 소멸자===="<<endl;}
//};
//void main()
//{
//	c2*p;
//	c1 o1;
//	c2 o2;
//	c3 o3;
//	c4 o4;
//	{p=new c4();  //c1의 포인터형으로 c4를 가리켯으므로 c2와 c4는 여전히 살아있다.
//				  //그러므로 부모클래스의 소멸자를 virtual키워드로 선언해준다.
//	delete p;}
//	cout<<endl;
//}


//
//////////////////////////////////////////////////////////////////////
///////////////////////3.복사생성자와 복사대입연산자
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

///////////////////4.new 연산자,delete연산자
//////////////////////5.다형성 virtual메서드
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
//	Student st1("이재국",26,3);
//	p=&st1;
//	p->Print();
//	Professor pf1("이재광",23,"학생");
//	p=&pf1;
//	p->Print();
//}

//////////////////////////////////////////추가
/////////////////////////6.string class만들기//
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
	//operator+= 과 +는 다르다.+=은 자신의 객체참조값을 반환 +는 새로운 객체를 전달
	str[1]='I';
	cout<<str<<endl;
	cout<<str2<<endl;
	cout<<str<<endl;
	cout<<str3<<endl;

}
////////////////////////7.Array class or Vector class template로 구현
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







//////////////////////////////8.연산자 중복 string class와 별개로 순수한 연산자 중복
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
//////////////////////////////9.container(vector,list,map)3개만 공부
//////////////////////////원소 추가,삭제,수정,출력
//#include<iostream>
//#include<vector>
//using namespace std;
//void main()
//{
//	vector<int> v;
//	v.push_back(10); //추가
//	v.push_back(20); //추가
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	
//	v.insert(v.begin()+3,20); //중간에 추가
//	v.pop_back(); //마지막삭제
//	v.erase(v.begin()+3); //중간에삭제
//	v[2]=100;  //수정
//	for(vector<int>::iterator iter=v.begin();iter!=v.end();iter++) //출력
//	{
//		cout<<*iter<<" "; //출력
//	} //출력
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
//	lt.push_back(10); //추가
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
//	map<int,string> m;  //key,value로 보관
//	//insert하는방법
//	m[1]="이재국";
//	m[2]="박재진";
//	
//	m.insert(pair<int,string>(3,"three"));
//	m.insert(pair<int,string>(5,"five"));
//	m.insert(pair<int,string>(6,"six"));
//	//수정,update하는방법
//	m[3]="Three";//1.바로 수정
//	//2.iterator를 준뒤 
//	map<int,string>::iterator liter = m.lower_bound(5);
//	map<int,string>::iterator uiter = m.upper_bound(5);
//	if(liter!=uiter)
//		liter->second = "FIVE";
//	for(map<int,string>::iterator iter = m.begin();iter!=m.end();iter++)
//	{
//		cout<<iter->first<<',' << iter->second<<endl; //iterator가 가지는 원소가 참조값을 가지므로 화살표 연산자 사용가능
//	}
//}
//
/////////////////////////////10.알고리즘 응용
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
//	vector<int>::iterator lliter = find_if(v.begin(),v.end(),Find()); //find알고리즘 find_if 알고리즘
//	if(v.end()!=lliter)
//		cout<<*lliter<<endl;
//	for(vector<int>::iterator iter=v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//	sort(v.begin(),v.end(),Greater()); //sort알고리즘
//	for(vector<int>::iterator iter=v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//	for_each(v.begin(),v.end(),Increment()); //for_each 알고리즘
//	for(vector<int>::iterator iter=v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
