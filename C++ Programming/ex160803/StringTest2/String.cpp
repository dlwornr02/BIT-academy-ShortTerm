//#pragma warning(disable:4996)
//#include<iostream>
//#include"String.h"
//#include<cstring>
//using namespace std;
//namespace IT{
//String::String(const char*s) //초기값은 써주지않는다.
//{
//	buf=new char[strlen(s)+1];
//	strcpy(buf,s);
//}
//String::String(const String&arg)
//{
//	buf=new char[strlen(arg.buf)+1];
//	strcpy(buf,arg.buf);
//}
//const String& String::operator=(const String&arg)
//{
//	delete[]buf;
//	buf=new char[strlen(arg.buf)+1];
//	strcpy(buf,arg.buf);
//	return *this;
//}
//const String& String::operator+=(const String&arg)
//{
//	char*s=new char[strlen(buf)+strlen(arg.buf)+1];
//	strcpy(s,buf);
//	strcat(s,arg.buf);
//	delete []buf;
//	buf=s;
//	return *this;
//}
//const String& String::operator-=(const String&arg)
//{
//	buf=new char[strlen(arg.buf)+1];
//	strcpy(buf,arg.buf);
//	return *this;
//}
//String::~String(){delete[]buf;}
//const char*String::GetString()const
//{
//	return buf;
//}
//const String String::operator+(const String&arg) //새로운 객체가 생성되므로 반환타입에 참조안씀
//{
//	char*s;
//	s = new char[strlen(buf)+strlen(arg.buf)+1];
//	strcpy(s,buf);
//	strcat(s,arg.buf);
//
//	String str(s);
//	delete []s;
//	return str;
//}
//const char& String::operator[](int idx)const //const객체와 비const객체에따라 따로 중복연산자를 정의해준다.
//{
//	cout<<"const"<<endl;
//	return buf[idx];
//}
//char& String::operator[](int idx) //참조를 사용해서 변환해준다.
//{
//	return buf[idx];
//}
//String::operator const char*()const
//{
//	return buf;
//}
//String::operator int()const
//{
//	return strlen(buf);
//}
//std::ostream& operator<<(std::ostream& out,const String&st)
//{
//	out<<st.GetString();
//	return out;
//}
//}
#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
#include "String.h"
using namespace std;

IT::String::String(const char* s)
{
   buf = new char[strlen(s)+1];
   strcpy(buf, s);
}
IT::String::String(const String& arg)
{
   buf = new char[strlen(arg.buf)+1];
   strcpy(buf, arg.buf);
}
IT::String::~String() { delete [] buf; }
const char* IT::String::GetString()const
{
   return buf;
}
const IT::String IT::String::operator+(const IT::String& arg)
{      
   char* s = new char[strlen(buf)+strlen(arg.buf)+1];
   strcpy(s, buf);
   strcat(s, arg.buf);

   String str(s);
   delete []s;

   return str;
}
const IT::String& IT::String::operator=(const IT::String& arg)
{
   delete [] buf;
   buf = new char[strlen(arg.buf)+1];
   strcpy(buf, arg.buf);

   return *this;
}
const IT::String& IT::String::operator+=(const IT::String& arg)
{
   char* s = new char[strlen(buf)+strlen(arg.buf)+1];
   strcpy(s, buf);
   strcat(s, arg.buf);
      
   delete []buf;
   buf = s;

   return *this;
}
const char& IT::String::operator[](int idx)const
{      
   cout << "const" << endl;
   return buf[idx];
}
char& IT::String::operator[](int idx)
{      
   return buf[idx];
}
IT::String::operator const char*()const
{
   return buf;
}
IT::String::operator int()const
{
   return strlen(buf);
}
std::ostream& operator<<(std::ostream& out,const IT::String& s)
{
   out << s.GetString() ;
   return out;
}