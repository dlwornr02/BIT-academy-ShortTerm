#include<iostream>
#include<algorithm>
#include<fstream>
#include "TelPhoneBook.h"
#include "Person.h"
#include "Student.h"
#include "professor.h"
using namespace std;
	TelPhoneBook::TelPhoneBook()
	{
		_ReadBinaryFile();
	}
	TelPhoneBook::~TelPhoneBook()
	{
		_WriteBinaryFile();
		for(int i=0;i<(int)parr.size();i++)
			delete parr[i];
	}
void TelPhoneBook::Add()
{
	int choose;
	cout<<"1. Student, 2.Professor ����: ";

	cin>>choose;
	char name[20];
	char phone[20];
	cout<<"�̸��Է�: ";
	cin>>name;
	cout<<"��ȭ�Է�: ";
	cin>>phone;
	Person*p=0;
	switch(choose)
	{
	case 1:
		int grade;
		cout<<"�г� �Է�:";
		cin>>grade;
		p=new Student(name, phone, grade);
		break;
	case 2:
		char pos[20];
		cout<<"�����Է�:";
		cin>>pos;
		p=new professor(name,phone,pos);
		break;
	}
	
	parr.push_back(p);
	//parr[pcount].SetName(name);
	//parr[pcount++].SetPhone(phone);
}
void TelPhoneBook::_WritePerson(ostream& out)const
{
	for(int i=0;i<(int)parr.size();i++)
	{
		out<<"["<<(i+1)<<"]: ";
		parr[i]->Print(out); //�����Լ�
	}
}
void TelPhoneBook::Print()const
{

	_WritePerson(cout);
}
void TelPhoneBook::Search()const
{
	char name[20];
	cout<<"�̸� �Է� : ";
	cin>>name;
	for(int i=0;i<(int)parr.size();++i)
		if(parr[i]->GetName() == name)
		{
			cout<<"["<<i<<"]: ";
			parr[i]->Print(cout);
			break;
		}

}
void TelPhoneBook::Remove()
{
	char name[20];
	cout<<"������ �̸� �Է� : ";
	cin>>name;
	for(int i=0;i<(int)parr.size();++i)
		if(parr[i]->GetName()==name)
		{
			delete parr[i];
			parr.erase(parr.begin()+i); //erase�� iterator�� ���ڷ� �޾ƾ��Ѵ�.
			break;
		}
}
void TelPhoneBook::Sort()
{
	cout<<"sorting[1.name, 2.phone, 3.type] type input :";
	int type;
	cin>>type;
	if(type==1)
		sort(parr.begin(),parr.end(), Person::PredName());
	else if(type==2)
		sort(parr.begin(),parr.end(), Person::PredPhone());
	else if(type==3)
		sort(parr.begin(),parr.end(), Person::PredType());
	else
		;////////////////////

}
void TelPhoneBook::WriteTextFile()const
{
	ofstream fout("TelPhone.txt");

	_WritePerson(fout);


}
void TelPhoneBook::_WriteBinaryFile()const
{
	ofstream fout("telphone.mbf",ios::binary);
	int size = (int)parr.size();
	fout.write((char*)&size, sizeof(int));

	for(int i=0;i<size;i++)
	{
		parr[i]->Write(fout);
	}
}
void TelPhoneBook::_ReadBinaryFile()
{
	ifstream fin("telphone.mbf",ios::binary);
	int size;
	fin.read((char*)&size, sizeof(int));
	for(int i=0;i<size;i++)
	{
		char type;
		fin.read(&type,sizeof(char));
		Person*p;
		switch(type)
		{
		case 'S':
			{
				p = new Student;
				p->Read(fin);
			}
			break;
		case 'P':
			{
				p = new professor;
				p->Read(fin);
			}
			break;
		default:
			throw exception("type�� S or P �̴�.");
		}
		parr.push_back(p);

	}

}
