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
	cout<<"0.exit program"<<endl;
}
void main()
{
	try
	{
		TelPhoneBook tpBook; //내부적으로 배열인지 리스트인지 모르므로
							 //예외를 main까지 던지는건 좋지 않다
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
			case'0':
				brun=false;
				break;
			}
		}
	}
	catch(const exception&ex)
	{
		cout<<ex.what()<<endl;
	}
}