#include "Person.h"
#include<iostream>
using namespace std;
Person::Person(const String&n,const String&p):name(n),phone(p){}
Person::~Person(){}
void Person::SetName(const String&n){name=n;}
void Person::SetPhone(const String&p){phone=p;}
const String& Person::GetName()const{return name;}
const String& Person::GetPhone()const{return phone;}
void Person::Print()const{cout<<"name: "<<name<<','<<"phone: "<<phone<<endl;}