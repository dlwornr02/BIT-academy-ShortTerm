#include "Person.h"
#include<cstring>
#include<iostream>
using namespace std;
Person::Person(const char*n,const char*p)
{
	strcpy(name,n);
	strcpy(phone,p);
}
void Person::SetName(const char*n){strcpy(name,n);}
void Person::SetPhone(const char*p){strcpy(phone,p);}
const char* Person::GetName()const{return name;}
const char* Person::GetPhone()const{return phone;}
void Person::Print()const{cout<<"name: "<<name<<','<<"phone: "<<phone<<endl;}
