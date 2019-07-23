#include<iostream>
#include<conio.h>
#include"Person.h"
#include"TelphoneBook.h"
using namespace std;
void MainMenu()
{
	cout<<"1.input phone"<<endl;
	cout<<"2.print phone"<<endl;
	cout<<"3.search phone"<<endl;
	cout<<"4.remove phone"<<endl;
	cout<<"5.sorting phone"<<endl;
	cout<<"0.exit program"<<endl;
}
void main()
{
	TelPhoneBook tpBook;
	bool brun = true;
	while(brun){
		MainMenu();
		switch(_getch())
		{
		case'1':
			tpBook.Add();
			break;
		case'2':
			tpBook.Print();
			break;
		case'3':
			tpBook.Search();
			break;
		case'4':
			tpBook.Remove();
			break;
		case'5':
			tpBook.Sort();
			break;
		case'0':
			brun=false;
			break;
		}
	}
}