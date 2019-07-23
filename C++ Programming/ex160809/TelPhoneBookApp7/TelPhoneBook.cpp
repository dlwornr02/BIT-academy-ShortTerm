#include<iostream>
#include<algorithm>
#include "TelPhoneBook.h"
#include "Person.h"
#include "Student.h"
#include "professor.h"
using namespace std;
	TelPhoneBook::TelPhoneBook(){}
	TelPhoneBook::~TelPhoneBook()
	{
		for(int i=0;i<parr.size();i++)
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
	
	parr.push_back(p);
	//parr[pcount].SetName(name);
	//parr[pcount++].SetPhone(phone);
}
void TelPhoneBook::Print()const
{

	for(int i=0;i<parr.size();i++)
	{	//cout<<"name: "<<parr[i].GetName()<<','<<"phone: "<<parr[i].GetPhone()<<endl;*/
		cout<<"["<<(i+1)<<"]: ";
		parr[i]->Print();
	}
}
void TelPhoneBook::Search()const
{
	char name[20];
	cout<<"이름 입력 : ";
	cin>>name;
	for(int i=0;i<parr.size();++i)
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
	for(int i=0;i<parr.size();++i)
		if(parr[i]->GetName()==name)
		{
			delete parr[i];
			parr.erase(parr.begin()+i); //erase는 iterator를 인자로 받아야한다.
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
