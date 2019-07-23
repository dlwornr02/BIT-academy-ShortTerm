#include "professor.h"
#include<iostream>
using namespace std;
professor::professor(const string&n,const string&p,const string&pos):Person(n,p),position(pos){type = "Professor";}

void professor::Print()const
{
	cout<<"name: "<<GetName()<<','<<"phone: "<<GetPhone()<<','<<"position: "<<position<<endl;
}