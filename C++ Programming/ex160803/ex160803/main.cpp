//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x,int y):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	const Point operator+(int n)const{
//		return Point(x+n,y+n);
//	}
//};
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,4);
//
//	pt2=pt1+5;
//	pt2.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x,int y):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	const Point operator+(int n)const{
//		return Point(x+n,y+n);
//	}
//};
//const Point operator+(int n,const Point&pt) //전역함수 연산자 중복
//{
//	return Point(n+pt.GetX(),n+pt.GetY());
//}
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,4);
//
//	pt2=5+pt1; //이항연산자에서 왼쪽항이 자신의 객체가아니면 멤버함수 연산자중복을 할 수 없다.
//			   //operator+(5,pt1);
//	pt2.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x,int y):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	const Point operator+(int n)const{
//		return Point(x+n,y+n);
//	}
//	friend const Point operator+(int n,const Point&pt); //프렌드함수 가끔사용됨
//														//클래스의 모든 멤버를 사용할 수 있는 권한을 갖는 함수를 정의할때 friend키워드 사용
//};
//const Point operator+(int n,const Point&pt) //전역함수 연산자 중복//포인터하고 같이 사용되는 함수
//{
//	return Point(n+pt.x,n+pt.y);  //단점 : 캡슐화가 깨진다
//								  //장점 : 함수호출을 하지않아서 성능면에서 뛰어남
//}
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,4);
//
//	pt2=5+pt1; //이항연산자에서 왼쪽항이 자신의 객체가아니면 멤버함수 연산자중복을 할 수 없다.
//			   //operator+(5,pt1);
//	pt2.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x,int y):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	const Point operator+(int n)const{
//		return Point(x+n,y+n);
//	}
//	friend const Point operator+(int n,const Point&pt); //프렌드함수 가끔사용됨
//														//클래스의 모든 멤버를 사용할 수 있는 권한을 갖는 함수를 정의할때 friend키워드 사용
//};
//const Point operator+(int n,const Point&pt) //전역함수 연산자 중복//포인터하고 같이 사용되는 함수
//{
//	return Point(n+pt.x,n+pt.y);  //단점 : 캡슐화가 깨진다
//								  //장점 : 함수호출을 하지않아서 성능면에서 뛰어남
//}
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,4);
//
//	pt2=5+pt1; //이항연산자에서 왼쪽항이 자신의 객체가아니면 멤버함수 연산자중복을 할 수 없다.
//			   //operator+(5,pt1);
//	pt2.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//#define Max(a,b) ((a>b) ? a : b) //전위연산자가 두번 실행된다.
//								//매크로함수의 장점은 call-return을 하지 않는다.
//void main()
//{
//	int a=10;
//	int b=20;
//	cout<<Max(++a,++b)<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//inline int Max(int a,int b){ //성능향상을 위해 삽입코드를 만들어내는 키워드이다
//	return ((a>b) ? a : b);
//}
//void main()
//{
//	int a=10;
//	int b=20;
//	cout<<Max(++a,++b)<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x,int y):x(x),y(y){}
//	void Print()const;
//	int GetX()const;
//	int GetY()const;
//	const Point operator+(int n)const;
//	
//	friend const Point operator+(int n,const Point&pt); //프렌드함수 가끔사용됨
//														//클래스의 모든 멤버를 사용할 수 있는 권한을 갖는 함수를 정의할때 friend키워드 사용
//};
//inline Point::Point(int x,int y):x(x),y(y){}
//inline void Point::Print()const{cout<<x<<','<<y<<endl;}
//inline int Point::GetX()const{return x;}
//inline int Point::GetY()const{return y;}
//inline const Point Point::operator+(int n)const{
//		return Point(x+n,y+n);
//	}
//const Point operator+(int n,const Point&pt) //전역함수 연산자 중복//포인터하고 같이 사용되는 함수
//{
//	return Point(n+pt.x,n+pt.y);  //단점 : 캡슐화가 깨진다
//								  //장점 : 함수호출을 하지않아서 성능면에서 뛰어남
//}
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,4);
//
//	pt2=5+pt1; //이항연산자에서 왼쪽항이 자신의 객체가아니면 멤버함수 연산자중복을 할 수 없다.
//			   //operator+(5,pt1);
//	pt2.Print();
//}
//

//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x,int y):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//void main()
//{
//	cout<<50<<endl; //<<는 이항연산자
//	cout.operator<<(5).operator<<(endl);
//}
//
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x,int y):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//void main()
//{
//	cout<<50; //<<는 이항연산자
//	cout.operator<<(5);
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x,int y):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//void operator<<(ostream& o,const Point&pt) //ostream객체는 복사되지 못하게되있어서 꼭 참조를 써야한다.
//										   //ostream객체는 절대로 const를 붙일 수 없다. 사용될때마다 갱신되므로
//										   //operator<<()는 비const함수이다.
//{
//	o<<pt.GetX()<<pt.GetY()<<endl;
//}
//void main()
//{
//	Point pt(3,4);
//	cout<<pt; //전역함수로만 연산자중복이 가능하다.
//			  //cout객체가 연산자함수를 호출해야하므로 멤버함수로는 못한다
//}
//

//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x,int y):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//void operator<<(ostream& o,const Point&pt) //ostream객체는 복사되지 못하게되있어서 꼭 참조를 써야한다.
//										   //ostream객체는 절대로 const를 붙일 수 없다. 사용될때마다 갱신되므로
//										   //operator<<()는 비const함수이다.
//{
//	o<<pt.GetX()<<pt.GetY()<<endl;
//}
//void main()
//{
//	Point pt(3,4);
//	cout << pt << " " << 100 << endl; //반환값이 void라서 안된다.
//}
//
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x,int y):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//ostream& operator<<(ostream& o,const Point&pt) //ostream객체는 복사되지 못하게되있어서 꼭 참조를 써야한다.
//										   //ostream객체는 절대로 const를 붙일 수 없다. 사용될때마다 갱신되므로
//										   //operator<<()는 비const함수이다.
//{
//	o<<pt.GetX()<<pt.GetY()<<endl;
//	return o;
//}
//void main()
//{
//	Point pt(3,4);
//	cout << pt << " " << 100 << endl; //반환값을 ostream의 객체로 해주면 가능
//}
//
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x,int y):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	friend istream& operator>>(istream& i,Point&pt);
//};
//ostream& operator<<(ostream& o,const Point&pt) //ostream객체는 복사되지 못하게되있어서 꼭 참조를 써야한다.
//										   //ostream객체는 절대로 const를 붙일 수 없다. 사용될때마다 갱신되므로
//										   //operator<<()는 비const함수이다.
//{
//	o<<pt.GetX()<<','<<pt.GetY()<<endl;
//	return o;
//}
//istream& operator>>(istream& i,Point&pt)
//{
//	cout<<"x,y 정수 입력: "; //friend키워드이용하던가
//							//pt객체에 대입시켜주던가 여러가지 방법중에 한가지 선택
//	i>>pt.x;
//	i>>pt.y;
//	return i;
//}
//void main()
//{
//	Point pt(0,0);
//	cin>>pt;
//	cout<<pt<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x,int y):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	friend istream& operator>>(istream& i,Point&pt);
//};
//ostream& operator<<(ostream& o,const Point&pt) //ostream객체는 복사되지 못하게되있어서 꼭 참조를 써야한다.
//										   //ostream객체는 절대로 const를 붙일 수 없다. 사용될때마다 갱신되므로
//										   //operator<<()는 비const함수이다.
//{
//	o<<pt.GetX()<<','<<pt.GetY()<<endl;
//	return o;
//}
//istream& operator>>(istream& i,Point&pt)
//{
//	cout<<"x,y 정수 입력: "; //friend키워드이용하던가
//							//x,y만들어서 pt객체에 대입시켜주던가 여러가지 방법중에 한가지 선택
//	i>>pt.x;
//	i>>pt.y;
//	return i;
//}
//void main()
//{
//	Point pt(0,0);
//	cin>>pt;
//	cout<<pt<<endl;
//}

/*
#include<iostream> //String클래스 무조건나옴
#include<string>
#include<cstring>
#pragma warning(disable:4996)
using namespace std;

class String
{
	char* str;
public:
	String(const char* s=""):str(0)
	{
		str = new char[strlen(s)+1];
		strcpy(str,s);
	}
	~String(){delete[]str;}
	char* operator+(String&arg)
	{
		static char*s;
		s = new char[strlen(str)+strlen(arg.str)+2];
		strcpy(s,str);
		strcat(s,arg.str);
		return s;
	}
};
void main()
{
	String s1("Hello!");
	String s2("ABC");
	String s3;
	s3 = s1+s2;
	//cout<<s3<<endl;
}
*/
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class String
//{
//	char buf[100];
//public:
//	String(const char*s="")
//	{
//		strcpy(buf,s);
//	}
//};
//ostream& operator<<(ostream& out,const String&st)
//{
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	String s2("ABC");
//	String s3;
//	s3=s1+s2;
//	cout<<s3<<endl;
//}
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class String
//{
//	char buf[100];
//public:
//	String(const char*s="")
//	{
//		strcpy(buf,s);
//	}
//	const char*GetString()const
//	{
//		return buf;
//	}
//};
//ostream& operator<<(ostream& out,const String&st)
//{
//	out<<st.GetString();
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	String s2("ABC");
//	String s3;
//	cout<<s1<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class String
//{
//	char buf[100];
//public:
//	String(const char*s="")
//	{
//		strcpy(buf,s);
//	}
//	const char*GetString()const
//	{
//		return buf;
//	}
//	const String operator+(const String&arg) //새로운 객체가 생성되므로 반환타입에 참조안씀
//	{
//		return String("aaaa");
//	}
//};
//ostream& operator<<(ostream& out,const String&st)
//{
//	out<<st.GetString();
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	String s2("ABC");
//	String s3;
//	s3=s1+s2;
//	cout<<s3<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class String
//{
//	char buf[100];
//public:
//	String(const char*s="")
//	{
//		strcpy(buf,s);
//	}
//	const char*GetString()const
//	{
//		return buf;
//	}
//	const String operator+(const String&arg) //새로운 객체가 생성되므로 반환타입에 참조안씀
//	{
//		char s[500];
//		strcpy(s,buf);
//		strcat(s,arg.buf);
//		return String(s);
//	}
//};
//ostream& operator<<(ostream& out,const String&st)
//{
//	out<<st.GetString();
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	String s2("ABC");
//	String s3;
//	s3=s1+s2;
//	cout<<s3<<endl;
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
//
//};
//ostream& operator<<(ostream& out,const String&st)
//{
//	out<<st.GetString();
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	String s2("ABC");
//	String s3;
//	s3=s1+s2;
//	cout<<s3<<endl;
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
//
//};
//ostream& operator<<(ostream& out,const String&st)
//{
//	out<<st.GetString();
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	String s2("ABC");
//	String s3;
//	s3=s1+s2;
//	cout<<s3<<endl;
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
//
//};
//ostream& operator<<(ostream& out,const String&st)
//{
//	out<<st.GetString();
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	String s2("ABC");
//	String s3;
//	s3=s1+=s2;
//	cout<<s1<<endl;
//	cout<<s3<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<string>
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
//	char& operator[](int idx)const //참조를 사용해서 변환해준다.
//	{
//		return buf[idx];
//	}
//};
//ostream& operator<<(ostream& out,const String&st)
//{
//	out<<st.GetString();
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	
//	s1[0]='k';
//	cout<<s1[0]<<endl; //배열이나 백터에서 많이사용
//	cout<<s1[1]<<endl;
//	cout<<s1[2]<<endl;
//	cout<<s1[3]<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<string>
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
//		return buf[idx];
//	}
//	char& operator[](int idx) //참조를 사용해서 변환해준다.
//	{
//		return buf[idx];
//	}
//};
//ostream& operator<<(ostream& out,const String&st)
//{
//	out<<st.GetString();
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	for(int i=0;s1[i];i++)
//		cout<<s1[i]<<endl;
//	const String s2("ABC");
//	for(int i=0;s2[i];i++)
//		cout<<s2[i]<<endl;
//	
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<string>
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
//};
//ostream& operator<<(ostream& out,const String&st)
//{
//	out<<st.GetString();
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	for(int i=0;s1[i];i++)
//		cout<<s1[i]<<endl;
//	const String s2("ABC");
//	for(int i=0;s2[i];i++)
//		cout<<s2[i]<<endl;
//	
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
//	Point(int x,int y):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	operator int()const{return x;}
//};
//void main()
//{
//	int n=10;
//	Point pt(2,3);
//
//	n=pt;  //pt.operator int() 메서드가 있는지 컴파일러가 검사해줌
//	cout<<n<<endl;
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
//	operator int()const{return x;}
//};
//void main()
//{
//	int n=10;
//	Point pt(2,3);
//
//	//pt = n;  
//	pt = Point(n); //정수를 인수로 받는 생성자가있으면 형변환이 가능하다는말
//	pt.Print();
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
//	Point(int x,int y=0):x(x),y(y){} //int형을 인수로받는 생성자만 있으면 되기때문에 가능
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	operator int()const{return x;}
//};
//void main()
//{
//	int n=10;
//	Point pt(2,3);
//
//	//pt = n;  
//	pt = Point(n); //정수를 인수로 받는 생성자가있으면 형변환이 가능하다는말
//	pt.Print();
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
//	Point(int x,int y):x(x),y(y){} 
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	operator int()const{return x;}
//};
//void main()
//{
//	int n=10;
//	Point pt(2,3);
//
//	//pt = n;  
//	pt = Point(n); //정수를 인수로 받는 생성자가있으면 형변환이 가능하다는말
//	pt.Print();
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
//	explicit Point(int x=0,int y=0):x(x),y(y){}  //명시적으로만 호출가능하다.
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	operator int()const{return x;}
//};
//void main()
//{
//	int n=10;
//	Point pt(2,3);
//
//	//pt = n; 
//	pt = Point(10);//명시적인 호출
//	pt.Print();
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
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
//};
//ostream& operator<<(ostream& out,const String&st)
//{
//	out<<st.GetString();
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	String s2("ABC");
//
//	//s1+="1234";
//	s1+=String("1234"); //위의 코드와 동일
//	cout<<s1<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
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
//};
//ostream& operator<<(ostream& out,const String&st)
//{
//	out<<st.GetString();
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	String s2("ABC");
//
//	//s1="12345"; 
//	s1 = String("12345");//위의 코드와 동일
//						 //String객체인지 확인해본후 실행
//	cout<<s1<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
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
//};
//ostream& operator<<(ostream& out,const String&st)
//{
//	out<<st.GetString();
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	String s2("ABC");
//
//	const char*s = s1; //중요
//						//문자열<->객체간에 서로 형변환가능
//
//	cout<< s <<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
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
//void main()
//{
//	String s1("Hello!");
//	String s2("ABC");
//
//	const char*s = s1; //중요
//						//문자열<->객체간에 서로 형변환가능
//	int size = s1;
//
//	cout<< s <<endl;
//	cout<< size <<endl;
//}


#pragma warning(disable:4996)
#include<iostream>
using namespace std;
class String
{
	char*buf;
public:
	String(const char*s="")
	{
		buf=new char[strlen(s)+1];
		strcpy(buf,s);
	}
	String(const String&arg)
	{
		buf=new char[strlen(arg.buf)+1];
		strcpy(buf,arg.buf);
	}
	const String& operator=(const String&arg)
	{
		delete[]buf;
		buf=new char[strlen(arg.buf)+1];
		strcpy(buf,arg.buf);
		return *this;
	}
	const String& operator+=(const String&arg)
	{
		char*s=new char[strlen(buf)+strlen(arg.buf)+1];
		strcpy(s,buf);
		strcat(s,arg.buf);
		delete []buf;
		buf=s;
		return *this;
	}
	const String& operator-=(const String&arg)
	{
		buf=new char[strlen(arg.buf)+1];
		strcpy(buf,arg.buf);
		return *this;
	}
	~String(){delete[]buf;}
	const char*GetString()const
	{
		return buf;
	}
	const String operator+(const String&arg) //새로운 객체가 생성되므로 반환타입에 참조안씀
	{
		char*s;
		s = new char[strlen(buf)+strlen(arg.buf)+1];
		strcpy(s,buf);
		strcat(s,arg.buf);
		
		String str(s);
		delete []s;
		return str;
	}
	const char& operator[](int idx)const //const객체와 비const객체에따라 따로 중복연산자를 정의해준다.
	{
		cout<<"const"<<endl;
		return buf[idx];
	}
	char& operator[](int idx) //참조를 사용해서 변환해준다.
	{
		return buf[idx];
	}
	operator const char*()const
	{
		return buf;
	}
	operator int()const
	{
		return strlen(buf);
	}
};
ostream& operator<<(ostream& out,const String&st)
{
	out<<st.GetString();
	return out;
}
void main()
{
	String s1("Hello!");
	String s2("ABC");

	const char*s = s1; //중요
						//문자열<->객체간에 서로 형변환가능
	int size = s1;

	cout<< s <<endl;
	cout<< size <<endl;
}