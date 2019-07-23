#include<iostream>
#include "TelPhoneBook.h"
#include "Person.h"
using namespace std;
	TelPhoneBook::TelPhoneBook(){}
	TelPhoneBook::~TelPhoneBook(){}
void TelPhoneBook::Add()
{
	char name[20];
	char phone[20];
	cout<<"이름입력: ";
	cin>>name;
	cout<<"전화입력: ";
	cin>>phone;
	parr.Add(Person(name,phone));
	//parr[pcount].SetName(name);
	//parr[pcount++].SetPhone(phone);
}
void TelPhoneBook::Print()const
{

	for(int i=0;i<parr.Size();i++)
		//cout<<"name: "<<parr[i].GetName()<<','<<"phone: "<<parr[i].GetPhone()<<endl;*/
		parr[i].Print();
}
void TelPhoneBook::Search()const
{
	char name[20];
	cout<<"이름 입력 : ";
	cin>>name;
	for(int i=0;i<parr.Size();++i)
		if(name,parr[i].GetName() == name)
		{
			cout<<"["<<i<<"]: ";
			parr[i].Print();
			break;
		}

}
void TelPhoneBook::Remove()
{
	char name[20];
	cout<<"삭제할 이름 입력 : ";
	cin>>name;
	for(int i=0;i<parr.Size();++i)
		if(parr[i].GetName()==name)
		{
			parr.Remove(i);
			break;
		}
}
