///////////////////1번
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<conio.h>
//using namespace std;
//class Person
//{
//	char*name;
//	char*phone;
//public:
//	Person(const char*n="",const char*p="")
//	{
//		name=new char[strlen(n)+1];
//		phone=new char[strlen(p)+1];
//		strcpy(name,n);
//		strcpy(phone,p);
//	}
//	~Person(){delete[] name;delete[] phone;}
//	Person(const Person&arg)
//	{
//		name=new char[strlen(arg.name)+1];
//		phone=new char[strlen(arg.phone)+1];
//		strcpy(name,arg.name);
//		strcpy(phone,arg.phone);
//	}
//	const Person& operator=(const Person& arg)
//	{
//		if(this==&arg){
//			return *this;
//		}
//		delete name;
//		delete phone;
//		name=new char[strlen(arg.name)+1];
//		phone=new char[strlen(arg.phone)+1];
//		strcpy(name,arg.name);
//		strcpy(phone,arg.phone);
//		return *this;
//	}
//	void SetName(const char*n)
//	{
//		delete[]name;
//		name = new char[strlen(n)+1];
//		strcpy(name,n);
//	}
//	void SetPhone(const char*p){
//		delete[]phone;
//		phone = new char[strlen(p)+1];
//		strcpy(phone,p);
//	}
//	const char* GetName()const{return name;}
//	const char* GetPhone()const{return phone;}
//	void Print()const{cout<<"name: "<<name<<','<<"phone: "<<phone<<endl;}
//};
//class TelPhoneBook
//{
//	Person parr[100];
//	int pcount;
//public:
//	TelPhoneBook():pcount(0){}
//	~TelPhoneBook(){}
//	void Add()
//	{
//		char name[20];
//		char phone[20];
//		cout<<"이름입력: ";
//		cin>>name;
//		cout<<"전화입력: ";
//		cin>>phone;
//		//parr[pcount++]=Person(name,phone);
//		parr[pcount].SetName(name);
//		parr[pcount++].SetPhone(phone);
//	}
//	void Print()const
//	{
//
//		for(int i=0;i<pcount;i++)
//			//cout<<"name: "<<parr[i].GetName()<<','<<"phone: "<<parr[i].GetPhone()<<endl;*/
//			parr[i].Print();
//	}
//	void Search()const
//	{
//		char name[20];
//		cout<<"이름 입력 : ";
//		cin>>name;
//		for(int i=0;i<pcount;++i)
//			if(strcmp(name,parr[i].GetName())==0)
//			{
//				cout<<"["<<i<<"]: ";
//				parr[i].Print();
//				break;
//			}
//
//	}
//	void Remove()
//	{
//		char name[20];
//		cout<<"삭제할 이름 입력 : ";
//		cin>>name;
//		for(int i=0;i<pcount;++i)
//			if(strcmp(name,parr[i].GetName())==0)
//			{
//				for(int j=i;j<pcount-1;j++)
//					parr[j]=parr[j+1];
//				pcount--;
//			}
//	}
//};
//void MainMenu()
//{
//	cout<<"1.input phone"<<endl;
//	cout<<"2.print phone"<<endl;
//	cout<<"3.search phone"<<endl;
//	cout<<"4.remove phone"<<endl;
//	cout<<"0.exit program"<<endl;
//}
//void main()
//{
//	TelPhoneBook tpBook;
//	bool brun = true;
//	while(brun){
//		MainMenu();
//		switch(_getch())
//		{
//		case'1':
//			tpBook.Add();
//			break;
//		case'2':
//			tpBook.Print();
//			break;
//		case'3':
//			tpBook.Search();
//			break;
//		case'4':
//			tpBook.Remove();
//			break;
//		case'0':
//			brun=false;
//			break;
//		}
//	}
//}


/////////////////2번///////////////////
#pragma warning(disable:4996)
#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
class String
{
	char*buf;
public:
	String(const char*s="")
	{
		buf=new char[strlen(s)+1];
		strcpy(buf,s);
	}
	String(const String&arg)
	{
		buf=new char[strlen(arg.buf)+1];
		strcpy(buf,arg.buf);
	}
	const String& operator=(const String&arg)
	{
		delete[]buf;
		buf=new char[strlen(arg.buf)+1];
		strcpy(buf,arg.buf);
		return *this;
	}
	const String& operator+=(const String&arg)
	{
		char*s=new char[strlen(buf)+strlen(arg.buf)+1];
		strcpy(s,buf);
		strcat(s,arg.buf);
		delete []buf;
		buf=s;
		return *this;
	}
	const String& operator-=(const String&arg)
	{
		buf=new char[strlen(arg.buf)+1];
		strcpy(buf,arg.buf);
		return *this;
	}
	~String(){delete[]buf;}
	const char*GetString()const
	{
		return buf;
	}
	const String operator+(const String&arg) //새로운 객체가 생성되므로 반환타입에 참조안씀
	{
		char*s;
		s = new char[strlen(buf)+strlen(arg.buf)+1];
		strcpy(s,buf);
		strcat(s,arg.buf);
		
		String str(s);
		delete []s;
		return str;
	}
	const char& operator[](int idx)const //const객체와 비const객체에따라 따로 중복연산자를 정의해준다.
	{
		cout<<"const"<<endl;
		return buf[idx];
	}
	char& operator[](int idx) //참조를 사용해서 변환해준다.
	{
		return buf[idx];
	}
	operator const char*()const
	{
		return buf;
	}
	operator int()const
	{
		return strlen(buf);
	}
};
ostream& operator<<(ostream& out,const String&st)
{
	out<<st.GetString();
	return out;
}
class Person
{
	String name;
	String phone;
public:
	Person(const char*n="",const char*p=""):name(n),phone(p){}
	~Person(){delete name;delete phone;}
	Person(const Person&arg)
	{
		name = arg.name;
		phone = arg.phone;
	}
	const Person& operator=(const Person& arg)
	{
		name = arg.name;
		phone = arg.phone;
		if(this==&arg){
			return *this;
		}
		
		return *this;
	}
	void SetName(const char*n){name=String(n);}
	void SetPhone(const char*p){phone=String(p);}
	const char* GetName()const{return name;}
	const char* GetPhone()const{return phone;}
	void Print()const{cout<<"name: "<<name<<','<<"phone: "<<phone<<endl;}
};
class TelPhoneBook
{
	Person parr[100];
	int pcount;
public:
	TelPhoneBook():pcount(0){}
	~TelPhoneBook(){}
	void Add()
	{
		char name[20];
		char phone[20];
		cout<<"이름입력: ";
		cin>>name;
		cout<<"전화입력: ";
		cin>>phone;
		//parr[pcount++]=Person(name,phone);
		parr[pcount].SetName(name);
		parr[pcount++].SetPhone(phone);
	}
	void Print()const
	{

		for(int i=0;i<pcount;i++)
			//cout<<"name: "<<parr[i].GetName()<<','<<"phone: "<<parr[i].GetPhone()<<endl;*/
			parr[i].Print();
	}
	void Search()const
	{
		char name[20];
		cout<<"이름 입력 : ";
		cin>>name;
		for(int i=0;i<pcount;++i)
			if(strcmp(name,parr[i].GetName())==0)
			{
				cout<<"["<<i<<"]: ";
				parr[i].Print();
				break;
			}

	}
	void Remove()
	{
		char name[20];
		cout<<"삭제할 이름 입력 : ";
		cin>>name;
		for(int i=0;i<pcount;++i)
			if(strcmp(name,parr[i].GetName())==0)
			{
				for(int j=i;j<pcount-1;j++)
					parr[j]=parr[j+1];
				pcount--;
			}
	}
};
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
		case'0':
			brun=false;
			break;
		}
	}
}