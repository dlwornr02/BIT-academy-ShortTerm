#include<cstring>
#include "String.h"

String::String(const char*s)
{
	str = new char[strlen(s)+1];
	strcpy(str,s);
}
String::String(const String&arg) //복사생성자
{
	str = new char[strlen(arg.str)+1];
	strcpy(str,arg.str);

}
String::~String()
{
	delete []str;
}
void String::Assign(const String&arg)
{
	delete []str;
	str = new char[strlen(arg.str)+1];
	strcpy(str,arg.str);

}
const char*String::GetString()const{return str;}

