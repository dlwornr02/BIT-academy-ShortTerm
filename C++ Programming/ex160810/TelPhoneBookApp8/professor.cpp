#include "professor.h"
#include<iostream>
using namespace std;
professor::professor(const string&n,const string&p,const string&pos):Person(n,p),position(pos){type = "Professor";}

void professor::Print(ostream&out)const
{
	out<<"name: "<<GetName()<<','<<"phone: "<<GetPhone()<<','<<"position: "<<position<<endl;
}