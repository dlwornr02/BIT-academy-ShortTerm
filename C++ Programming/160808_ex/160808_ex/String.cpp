#include<iostream>
#include<cstring>
#include "String.h"
using namespace std;
String::String(char*_str)
{
	str = new char[strlen(_str)+1];
	strcpy(str,_str);
}
String::~String(){delete[] str;}
String::String(const String&arg)
{
	str = new char[strlen(arg.str)+1];
	strcpy(str,arg.str);
}
const String& String::operator=(const String& arg)
{
	if(this==&arg)
		return *this;
	delete []str;
	str = new char[strlen(arg.str)+1];
	strcpy(str,arg.str);
	return *this;
}
const String& String::operator+(const String&arg)
{
	char*temp = new char[strlen(str)+strlen(arg.str)+1];
	strcpy(temp,str);
	strcat(temp,arg.str);
	delete[] str;
	str =temp;
	return *this;
}
const String& String::operator+=(const String&arg)
{
	char*temp = new char[strlen(str)+strlen(arg.str)+1];
	strcpy(temp,str);
	strcat(temp,arg.str);
	delete[] str;
	str =temp;
	return *this;
}
char* String::GetString()const
{
	return str;
}
bool String::operator==(const String&arg)const
{
	return (strcmp(str,arg.str)==0);
}
bool String::operator!=(const String&arg)const
{
	return (this==&arg);
}
const char& String::operator[](int idx)const
{
	return str[idx];
}
char& String::operator[](int idx)
{
	return str[idx];
}
std::ostream& operator<<(std::ostream& o, const String&arg)
{
	o<<arg.GetString();
	return o;
}