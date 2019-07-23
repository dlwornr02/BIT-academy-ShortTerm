#include "Person.h"
#include<iostream>
using namespace std;
Person::Person(const string&n,const string&p):name(n),phone(p){}
Person::~Person(){}
void Person::SetName(const string&n){name=n;}
void Person::SetPhone(const string&p){phone=p;}
const string& Person::GetName()const{return name;}
const string& Person::GetPhone()const{return phone;}
const string& Person::GetType()const{return type;}
void Person::Print(ostream& out)const{out<<"name: "<<name<<','<<"phone: "<<phone<<endl;}


////////////////////////////
bool Person::PredName::operator()(const Person* a,const Person* b)const
{
	return a->GetName() < b->GetName();
}
bool Person::PredPhone::operator()(const Person* a,const Person* b)const
{
	return a->GetPhone() < b->GetPhone();
}
bool Person::PredType::operator()(const Person* a,const Person* b)const
{
	return a->GetType() < b->GetType();
}