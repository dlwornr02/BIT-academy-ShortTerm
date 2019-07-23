#include "professor.h"
#include<iostream>
using namespace std;
professor::professor(const string&n,const string&p,const string&pos):Person(n,p),position(pos){type = "Professor";}

void professor::Print(ostream&out)const
{
	out<<"name: "<<GetName()<<','<<"phone: "<<GetPhone()<<','<<"position: "<<position<<endl;
}
void professor::Write(std::ostream& out)const
{
	

	char type = 'S';
	out.write(&type,sizeof(char));
	int slen = GetName().size()+1;
	out.write((char*)&slen,sizeof(int));
	out.write(GetName().c_str(),slen);
	
	slen = GetPhone().size()+1;
	out.write((char*)&slen,sizeof(int));
	out.write(GetPhone().c_str(),slen);

	slen = position.size()+1;
	out.write((char*)&slen,sizeof(int));
	out.write(position.c_str(),slen);
}
void professor::Read(std::istream& in)
{
	char name[100];
	char phone[100];
	char position[100];
	int slen;
	in.read((char*)&slen, sizeof(int));
	in.read(name,slen);

	in.read((char*)&slen,sizeof(int));
	in.read(phone,slen);

	in.read((char*)&slen,sizeof(int));
	in.read(position,slen);
	SetName(name);
	SetPhone(phone);
	this->position = position;
}

