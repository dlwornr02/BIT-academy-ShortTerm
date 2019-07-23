#include<iostream>
#include "TelPhoneBook.h"
#include "Person.h"
#include "Student.h"
#include "professor.h"
using namespace std;
	TelPhoneBook::TelPhoneBook():parr(1000){}
	TelPhoneBook::~TelPhoneBook()
	{
		for(int i=0;i<parr.Size();i++)
			delete parr[i];
	}
void TelPhoneBook::Add()
{
	int choose;
	cout<<"1. Student, 2.Professor 선택: ";

	cin>>choose;
	char name[20];
	char phone[20];
	cout<<"이름입력: ";
	cin>>name;
	cout<<"전화입력: ";
	cin>>phone;
	Person*p=0;
	switch(choose)
	{
	case 1:
		int grade;
		cout<<"학년 입력:";
		cin>>grade;
		p=new Student(name, phone, grade);
		break;
	case 2:
		char pos[20];
		cout<<"직위입력:";
		cin>>pos;
		p=new professor(name,phone,pos);
		break;
	}
	
	parr.Add(p);
	//parr[pcount].SetName(name);
	//parr[pcount++].SetPhone(phone);
}
void TelPhoneBook::Print()const
{

	for(int i=0;i<parr.Size();i++)
		//cout<<"name: "<<parr[i].GetName()<<','<<"phone: "<<parr[i].GetPhone()<<endl;*/
		parr[i]->Print();
}
void TelPhoneBook::Search()const
{
	char name[20];
	cout<<"이름 입력 : ";
	cin>>name;
	for(int i=0;i<parr.Size();++i)
		if(parr[i]->GetName() == name)
		{
			cout<<"["<<i<<"]: ";
			parr[i]->Print();
			break;
		}

}
void TelPhoneBook::Remove()
{
	char name[20];
	cout<<"삭제할 이름 입력 : ";
	cin>>name;
	for(int i=0;i<parr.Size();++i)
		if(parr[i]->GetName()==name)
		{
			delete parr[i];
			parr.Remove(i);
			break;
		}
}
