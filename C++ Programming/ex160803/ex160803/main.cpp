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
//const Point operator+(int n,const Point&pt) //�����Լ� ������ �ߺ�
//{
//	return Point(n+pt.GetX(),n+pt.GetY());
//}
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,4);
//
//	pt2=5+pt1; //���׿����ڿ��� �������� �ڽ��� ��ü���ƴϸ� ����Լ� �������ߺ��� �� �� ����.
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
//	friend const Point operator+(int n,const Point&pt); //�������Լ� ��������
//														//Ŭ������ ��� ����� ����� �� �ִ� ������ ���� �Լ��� �����Ҷ� friendŰ���� ���
//};
//const Point operator+(int n,const Point&pt) //�����Լ� ������ �ߺ�//�������ϰ� ���� ���Ǵ� �Լ�
//{
//	return Point(n+pt.x,n+pt.y);  //���� : ĸ��ȭ�� ������
//								  //���� : �Լ�ȣ���� �����ʾƼ� ���ɸ鿡�� �پ
//}
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,4);
//
//	pt2=5+pt1; //���׿����ڿ��� �������� �ڽ��� ��ü���ƴϸ� ����Լ� �������ߺ��� �� �� ����.
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
//	friend const Point operator+(int n,const Point&pt); //�������Լ� ��������
//														//Ŭ������ ��� ����� ����� �� �ִ� ������ ���� �Լ��� �����Ҷ� friendŰ���� ���
//};
//const Point operator+(int n,const Point&pt) //�����Լ� ������ �ߺ�//�������ϰ� ���� ���Ǵ� �Լ�
//{
//	return Point(n+pt.x,n+pt.y);  //���� : ĸ��ȭ�� ������
//								  //���� : �Լ�ȣ���� �����ʾƼ� ���ɸ鿡�� �پ
//}
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,4);
//
//	pt2=5+pt1; //���׿����ڿ��� �������� �ڽ��� ��ü���ƴϸ� ����Լ� �������ߺ��� �� �� ����.
//			   //operator+(5,pt1);
//	pt2.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//#define Max(a,b) ((a>b) ? a : b) //���������ڰ� �ι� ����ȴ�.
//								//��ũ���Լ��� ������ call-return�� ���� �ʴ´�.
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
//inline int Max(int a,int b){ //��������� ���� �����ڵ带 ������ Ű�����̴�
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
//	friend const Point operator+(int n,const Point&pt); //�������Լ� ��������
//														//Ŭ������ ��� ����� ����� �� �ִ� ������ ���� �Լ��� �����Ҷ� friendŰ���� ���
//};
//inline Point::Point(int x,int y):x(x),y(y){}
//inline void Point::Print()const{cout<<x<<','<<y<<endl;}
//inline int Point::GetX()const{return x;}
//inline int Point::GetY()const{return y;}
//inline const Point Point::operator+(int n)const{
//		return Point(x+n,y+n);
//	}
//const Point operator+(int n,const Point&pt) //�����Լ� ������ �ߺ�//�������ϰ� ���� ���Ǵ� �Լ�
//{
//	return Point(n+pt.x,n+pt.y);  //���� : ĸ��ȭ�� ������
//								  //���� : �Լ�ȣ���� �����ʾƼ� ���ɸ鿡�� �پ
//}
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,4);
//
//	pt2=5+pt1; //���׿����ڿ��� �������� �ڽ��� ��ü���ƴϸ� ����Լ� �������ߺ��� �� �� ����.
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
//	cout<<50<<endl; //<<�� ���׿�����
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
//	cout<<50; //<<�� ���׿�����
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
//void operator<<(ostream& o,const Point&pt) //ostream��ü�� ������� ���ϰԵ��־ �� ������ ����Ѵ�.
//										   //ostream��ü�� ����� const�� ���� �� ����. ���ɶ����� ���ŵǹǷ�
//										   //operator<<()�� ��const�Լ��̴�.
//{
//	o<<pt.GetX()<<pt.GetY()<<endl;
//}
//void main()
//{
//	Point pt(3,4);
//	cout<<pt; //�����Լ��θ� �������ߺ��� �����ϴ�.
//			  //cout��ü�� �������Լ��� ȣ���ؾ��ϹǷ� ����Լ��δ� ���Ѵ�
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
//void operator<<(ostream& o,const Point&pt) //ostream��ü�� ������� ���ϰԵ��־ �� ������ ����Ѵ�.
//										   //ostream��ü�� ����� const�� ���� �� ����. ���ɶ����� ���ŵǹǷ�
//										   //operator<<()�� ��const�Լ��̴�.
//{
//	o<<pt.GetX()<<pt.GetY()<<endl;
//}
//void main()
//{
//	Point pt(3,4);
//	cout << pt << " " << 100 << endl; //��ȯ���� void�� �ȵȴ�.
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
//ostream& operator<<(ostream& o,const Point&pt) //ostream��ü�� ������� ���ϰԵ��־ �� ������ ����Ѵ�.
//										   //ostream��ü�� ����� const�� ���� �� ����. ���ɶ����� ���ŵǹǷ�
//										   //operator<<()�� ��const�Լ��̴�.
//{
//	o<<pt.GetX()<<pt.GetY()<<endl;
//	return o;
//}
//void main()
//{
//	Point pt(3,4);
//	cout << pt << " " << 100 << endl; //��ȯ���� ostream�� ��ü�� ���ָ� ����
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
//ostream& operator<<(ostream& o,const Point&pt) //ostream��ü�� ������� ���ϰԵ��־ �� ������ ����Ѵ�.
//										   //ostream��ü�� ����� const�� ���� �� ����. ���ɶ����� ���ŵǹǷ�
//										   //operator<<()�� ��const�Լ��̴�.
//{
//	o<<pt.GetX()<<','<<pt.GetY()<<endl;
//	return o;
//}
//istream& operator>>(istream& i,Point&pt)
//{
//	cout<<"x,y ���� �Է�: "; //friendŰ�����̿��ϴ���
//							//pt��ü�� ���Խ����ִ��� �������� ����߿� �Ѱ��� ����
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
//ostream& operator<<(ostream& o,const Point&pt) //ostream��ü�� ������� ���ϰԵ��־ �� ������ ����Ѵ�.
//										   //ostream��ü�� ����� const�� ���� �� ����. ���ɶ����� ���ŵǹǷ�
//										   //operator<<()�� ��const�Լ��̴�.
//{
//	o<<pt.GetX()<<','<<pt.GetY()<<endl;
//	return o;
//}
//istream& operator>>(istream& i,Point&pt)
//{
//	cout<<"x,y ���� �Է�: "; //friendŰ�����̿��ϴ���
//							//x,y���� pt��ü�� ���Խ����ִ��� �������� ����߿� �Ѱ��� ����
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
#include<iostream> //StringŬ���� �����ǳ���
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
//	const String operator+(const String&arg) //���ο� ��ü�� �����ǹǷ� ��ȯŸ�Կ� �����Ⱦ�
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
//	const String operator+(const String&arg) //���ο� ��ü�� �����ǹǷ� ��ȯŸ�Կ� �����Ⱦ�
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
//	char& operator[](int idx)const //������ ����ؼ� ��ȯ���ش�.
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
//	cout<<s1[0]<<endl; //�迭�̳� ���Ϳ��� ���̻��
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
//		return buf[idx];
//	}
//	char& operator[](int idx) //������ ����ؼ� ��ȯ���ش�.
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
//	n=pt;  //pt.operator int() �޼��尡 �ִ��� �����Ϸ��� �˻�����
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
//	pt = Point(n); //������ �μ��� �޴� �����ڰ������� ����ȯ�� �����ϴٴ¸�
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
//	Point(int x,int y=0):x(x),y(y){} //int���� �μ��ι޴� �����ڸ� ������ �Ǳ⶧���� ����
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
//	pt = Point(n); //������ �μ��� �޴� �����ڰ������� ����ȯ�� �����ϴٴ¸�
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
//	pt = Point(n); //������ �μ��� �޴� �����ڰ������� ����ȯ�� �����ϴٴ¸�
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
//	explicit Point(int x=0,int y=0):x(x),y(y){}  //��������θ� ȣ�Ⱑ���ϴ�.
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
//	pt = Point(10);//������� ȣ��
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
//	s1+=String("1234"); //���� �ڵ�� ����
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
//	s1 = String("12345");//���� �ڵ�� ����
//						 //String��ü���� Ȯ���غ��� ����
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
//	const char*s = s1; //�߿�
//						//���ڿ�<->��ü���� ���� ����ȯ����
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
//void main()
//{
//	String s1("Hello!");
//	String s2("ABC");
//
//	const char*s = s1; //�߿�
//						//���ڿ�<->��ü���� ���� ����ȯ����
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
	const String operator+(const String&arg) //���ο� ��ü�� �����ǹǷ� ��ȯŸ�Կ� �����Ⱦ�
	{
		char*s;
		s = new char[strlen(buf)+strlen(arg.buf)+1];
		strcpy(s,buf);
		strcat(s,arg.buf);
		
		String str(s);
		delete []s;
		return str;
	}
	const char& operator[](int idx)const //const��ü�� ��const��ü������ ���� �ߺ������ڸ� �������ش�.
	{
		cout<<"const"<<endl;
		return buf[idx];
	}
	char& operator[](int idx) //������ ����ؼ� ��ȯ���ش�.
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

	const char*s = s1; //�߿�
						//���ڿ�<->��ü���� ���� ����ȯ����
	int size = s1;

	cout<< s <<endl;
	cout<< size <<endl;
}