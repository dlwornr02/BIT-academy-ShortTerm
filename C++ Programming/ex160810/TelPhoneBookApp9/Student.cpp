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
void Student::Write(std::ostream& out)const
{
	char type = 'S';
	out.write(&type,sizeof(char));
	int slen = GetName().size()+1;
	out.write((char*)&slen,sizeof(int));
	out.write(GetName().c_str(),slen);
	
	out.write(&type,sizeof(char));
	slen = GetPhone().size()+1;
	out.write((char*)&slen,sizeof(int));
	out.write(GetPhone().c_str(),slen);

	out.write((char*)&grade,sizeof(int));
}
void Student::Read(std::istream& in)
{
	char name[100];
	char phone[100];
	int slen;
	in.read((char*)&slen, sizeof(int));
	in.read(name,slen);

	in.read((char*)&slen,sizeof(int));
	in.read(phone,slen);

	in.read((char*)&grade,sizeof(int));
	SetName(name);
	SetPhone(phone);
}
