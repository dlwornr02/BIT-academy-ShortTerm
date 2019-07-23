#include "professor.h"
#include<iostream>
using namespace std;
professor::professor(const String&n,const String&p,const String&pos):Person(n,p),position(pos)
{}

void professor::Print()const
{
	cout<<"name: "<<GetName()<<','<<"phone: "<<GetPhone()<<','<<"position: "<<position<<endl;
}