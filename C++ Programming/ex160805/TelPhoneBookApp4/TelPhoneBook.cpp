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
	cout<<"�̸��Է�: ";
	cin>>name;
	cout<<"��ȭ�Է�: ";
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
	cout<<"�̸� �Է� : ";
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
	cout<<"������ �̸� �Է� : ";
	cin>>name;
	for(int i=0;i<parr.Size();++i)
		if(parr[i].GetName()==name)
		{
			parr.Remove(i);
			break;
		}
}
