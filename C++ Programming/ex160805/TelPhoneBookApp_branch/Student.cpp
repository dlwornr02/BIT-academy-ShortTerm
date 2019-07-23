#include "Student.h"
#include<iostream>
using namespace std;

Student::Student(const String&n,const String&p,int g):Person(n,p),grade(g)
{
}

void Student::Print()const
{
	cout<<"name: "<<GetName()<<','<<"phone: "<<GetPhone()<<','<<"grade: "<<grade<<endl;
}