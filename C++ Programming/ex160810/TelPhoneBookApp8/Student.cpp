#include "Student.h"
#include<iostream>
using namespace std;

Student::Student(const string&n,const string&p,int g):Person(n,p),grade(g)
{
	type = "Student";//typeid(Student).name();
}

void Student::Print(ostream&out)const
{
	out<<"name: "<<GetName()<<','<<"phone: "<<GetPhone()<<','<<"grade: "<<grade<<endl;
}