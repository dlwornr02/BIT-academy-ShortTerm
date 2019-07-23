//#include<iostream>
//using namespace std;
//void func1()
//{
//	throw "func1() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func1()..."<<endl;
//}
////////////////////////////////
//void main()
//{
//	try
//	{
//	func1();
//	}
//	catch(...)//...은 최상위객체 어떤예외라도 잡을수있다.
//	{
//		cout<<"예외가 발생!"<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1()
//{
//	throw "func1() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func1()..."<<endl;
//}
////////////////////////////////
//void main()
//{
//	try
//	{
//	func1();
//	}
//	catch(const char*ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	{
//		cout<<"예외가 발생!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw "func1() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func3()..."<<endl;
//}
////////////////////////////////
//void main()
//{
//	try
//	{
//		func1(false);
//		func2(false);
//		func3(false);
//	}
//	catch(const char*ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	{
//		cout<<"예외가 발생!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw "func1() 예외객체"; //문자열로 던질수있는데 이건 연습이고 원래 객체를 던져야한다.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func3()..."<<endl;
//}
////////////////////////////////
//void main()
//{
//	try
//	{
//		func1(false);
//		func2(true); //예외가발생하면 아래문장은 실행되지 않는다.
//	}
//	catch(const char*ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	{
//		cout<<"예외가 발생!"<<ex<<endl;
//	}
//	try
//	{
//		func3(false);
//	}
//	catch(const char*ex)
//	{
//		cout<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw "func1() 예외객체"; //문자열로 던질수있는데 이건 연습이고 원래 객체를 던져야한다.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func3()..."<<endl;
//}
//void InitFunc()
//{
//	cout<<"InitFunc().."<<endl;
//}
//void UninitFunc()
//{
//	cout<<"UninitFunc().."<<endl;
//}
////////////////////////////////
//void main()
//{
//	try
//	{
//		InitFunc();
//		func1(false);
//		func2(true); //예외가발생하면 아래문장은 실행되지 않는다.
//		func3(false);
//		UninitFunc();
//	}
//	catch(const char*ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	{
//		UninitFunc(); //c++언어는 Uninit을 두개다해준다.
//		cout<<"예외가 발생!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw "func1() 예외객체"; //문자열로 던질수있는데 이건 연습이고 원래 객체를 던져야한다.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func3()..."<<endl;
//}
//void InitFunc()
//{
//	cout<<"InitFunc().."<<endl;
//}
//void UninitFunc()
//{
//	cout<<"UninitFunc().."<<endl;
//}
////////////////////////////////
//void main()
//{
//	try
//	{
//		InitFunc();
//		func1(false);
//		func2(true); //예외가발생하면 아래문장은 실행되지 않는다.
//		func3(false);
//	}
//	catch(const char*ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	{
//		cout<<"예외가 발생!"<<ex<<endl;
//	}
//	finally //예외 발생여부에 상관없이 실행한다. c++에서는 안됨 다른언어에서 사용되는 문법
//	{
//		UninitFunc();
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw "func1() 예외객체"; //문자열로 던질수있는데 이건 연습이고 원래 객체를 던져야한다.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func3()..."<<endl;
//}
//void InitFunc()
//{
//	cout<<"InitFunc().."<<endl;
//}
//void UninitFunc()
//{
//	cout<<"UninitFunc().."<<endl;
//}
////////////////////////////////
//void main()
//{
//	try
//	{
//		InitFunc();
//		func1(false);
//		func2(true); //예외가발생하면 아래문장은 실행되지 않는다.
//		func3(false);
//		UninitFunc();
//	}
//	catch(const char*ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	{
//		UninitFunc();
//		cout<<"예외가 발생!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw "func1() 예외객체"; //문자열로 던질수있는데 이건 연습이고 원래 객체를 던져야한다.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func3()..."<<endl;
//}
//void InitFunc()
//{
//	cout<<"InitFunc().."<<endl;
//}
//void UninitFunc()
//{
//	cout<<"UninitFunc().."<<endl;
//}
////////////////////////////////
//void main()
//{
//	try
//	{
//		int *pn = new int;
//		func1(false);
//		func2(true); //예외가발생하면 아래문장은 실행되지 않는다.
//		func3(false);
//		delete pn;
//	}
//	catch(const char*ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	{
//		delete pn;
//		cout<<"예외가 발생!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw "func1() 예외객체"; //문자열로 던질수있는데 이건 연습이고 원래 객체를 던져야한다.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func3()..."<<endl;
//}
//void InitFunc()
//{
//	cout<<"InitFunc().."<<endl;
//}
//void UninitFunc()
//{
//	cout<<"UninitFunc().."<<endl;
//}
//class FuncWrapper
//{
//public:
//	FuncWrapper(){InitFunc();}
//	~FuncWrapper(){UninitFunc();}
//	void Run()
//	{
//		func1(false);
//		func2(true); //예외가발생하면 아래문장은 실행되지 않는다.
//		func3(false);
//	}
//};
////////////////////////////////
//void main()
//{
//	try
//	{
//		FuncWrapper f; //초기화-마무리가 필요하다면 객체를 하나 생성해서 생성자와 소멸자를 이용한다.
//		f.Run();
//	}
//	catch(const char*ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	{
//		cout<<"예외가 발생!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag,int*p)
//{
//	if(bFlag)
//		throw "func1() 예외객체"; //문자열로 던질수있는데 이건 연습이고 원래 객체를 던져야한다.
//	cout<<"func1()..."<<*p<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func3()..."<<endl;
//}
//int* InitFunc()
//{
//	cout<<"InitFunc().."<<endl;
//	return new int(10);
//}
//void UninitFunc(int*p)
//{
//	cout<<"UninitFunc().."<<endl;
//	delete p;
//}
////class FuncWrapper
////{
////public:
////	FuncWrapper(){InitFunc();}
////	~FuncWrapper(){UninitFunc();}
////	void Run()
////	{
////		func1(false);
////		func2(true); //예외가발생하면 아래문장은 실행되지 않는다.
////		func3(false);
////	}
////};
////////////////////////////////////////////////////////
//void main()
//{
//	try
//	{
//		int*p = InitFunc(); //초기화-마무리가 필요하다면 객체를 하나 생성해서 생성자와 소멸자를 이용한다.
//		func1(false,p);
//		func2(true);
//		func3(false);
//		UninitFunc(p);
//	}
//	catch(const char*ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	{
//		UninitFunc(p);  //불편한작업 ==> 객체를 이용한다.
//		cout<<"예외가 발생!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag,int*p)
//{
//	if(bFlag)
//		throw "func1() 예외객체"; //문자열로 던질수있는데 이건 연습이고 원래 객체를 던져야한다.
//	cout<<"func1()..."<<*p<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func3()..."<<endl;
//}
//int* InitFunc()
//{
//	cout<<"InitFunc().."<<endl;
//	return new int(10);
//}
//void UninitFunc(int*p)
//{
//	cout<<"UninitFunc().."<<endl;
//	delete p;
//}
//class FuncWrapper
//{
//	int*p;
//public:
//	FuncWrapper(){p=InitFunc();}
//	~FuncWrapper(){UninitFunc(p);}
//	void Run()
//	{
//		func1(false,p);
//		func2(true); //예외가발생하면 아래문장은 실행되지 않는다.
//		func3(true);
//	}
//};
////////////////////////////////////////////////////////
//void main()
//{
//	//try
//	{
//		FuncWrapper f;
//		f.Run();
//	}
//	//catch(const char*ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	//{
//	//	cout<<"예외가 발생!"<<ex<<endl;
//	//}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag,int*p)
//{
//	if(bFlag)
//		throw "func1() 예외객체"; //문자열로 던질수있는데 이건 연습이고 원래 객체를 던져야한다.
//	cout<<"func1()..."<<*p<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func3()..."<<endl;
//}
//int* InitFunc()
//{
//	cout<<"InitFunc().."<<endl;
//	return new int(10);
//}
//void UninitFunc(int*p)
//{
//	cout<<"UninitFunc().."<<endl;
//	delete p;
//}
//class FuncWrapper
//{
//	int*p;
//public:
//	FuncWrapper(){p=InitFunc();}
//	~FuncWrapper(){UninitFunc(p);}
//	void Run()
//	{
//		func1(false,p);
//		try
//		{
//			func2(true); //예외가발생하면 아래문장은 실행되지 않는다.
//		}
//		catch(const char*ex)
//		{
//			cout<<"FuncWrapper::Run() exception!"<<endl;
//		}
//		func3(false);
//	}
//};
////////////////////////////////////////////////////////
//void main()
//{
//	try
//	{
//		FuncWrapper f;
//		f.Run();
//	}
//	catch(const char*ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	{
//		cout<<"예외가 발생!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw "func1() 예외객체"; //문자열로 던질수있는데 이건 연습이고 원래 객체를 던져야한다.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func3()..."<<endl;
//}
////////////////////////////////////////////////////////
//void main()
//{
//	try
//	{
//		func1(false);
//		func2(false);
//		func3(false);
//	}
//	catch(const char*ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	{
//		cout<<"예외가 발생!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//class Exception
//{
//	string message;
//public:
//	Exception(const string&msg):message(msg){}
//	const char*What()const{return message.c_str();}
//};
//
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw Exception("func1 exception.."); //문자열로 던질수있는데 이건 연습이고 원래 객체를 던져야한다.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func3()..."<<endl;
//}
////////////////////////////////////////////////////////
//void main()
//{
//	try
//	{
//		func1(true);
//		func2(false);
//		func3(false);
//	}
//	catch(const char*ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	{
//		cout<<"예외가 발생!"<<ex<<endl;
//	}
//	catch(const Exception&ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	{
//		cout<<"예외가 발생!"<<ex.What()<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//class Exception
//{
//	string message;
//public:
//	Exception(const string&msg):message(msg){}
//	const char*What()const{return message.c_str();}
//};
//
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw Exception("func1 exception.."); //문자열로 던질수있는데 이건 연습이고 원래 객체를 던져야한다.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() 예외객체"; //문자열로 던질수있는데 이건 연습 객체를 던져야한다.
//	cout<<"func3()..."<<endl;
//}
////////////////////////////////////////////////////////
//void main()
//{
//	try
//	{
//		func1(false);
//		func2(true);
//		func3(false);
//	}
//	catch(const char*ex)//...은 최상위객체 어떤예외라도 잡을수있다.
//	{
//		cout<<"예외가 발생!"<<ex<<endl;
//	}
//	catch(const Exception&ex)//...은 최상위객체 어떤예외fdsafdsa라도 잡을수있다.
//	{
//		cout<<"예외가 발생!"<<ex.What()<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//class Exception
//{
//	string message;
//public:
//	Exception(const string&msg):message(msg){}
//	virtual const char*What()const{return message.c_str();}
//};
//class Func1Exception : public Exception
//{
//public:
//	Func1Exception(const string&msg):Exception(msg)
//	{
//	}
//	const char*What()const{return Exception::What();}
//};
//class Func2Exception : public Exception
//{
//public:
//	Func2Exception(const string&msg):Exception(msg)
//	{
//	}
//	const char*What()const{return Exception::What();}
//	int GetRange()const
//	{
//		return 100;
//	}
//};
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw Func1Exception("func1 exception..");
//	cout<<"func1()..."<<endl;
//};
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw Func2Exception("func2 exception.."); 
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw Exception("func3() 예외객체");
//	cout<<"func3()..."<<endl;
//}
////////////////////////////////////////////////////////
//void main()
//{
//	try
//	{
//		func1(false);
//		func2(false);
//		func3(true);
//	}
//	catch(const Func2Exception&ex)
//	{
//		cout<<"예외 값: "<<ex.GetRange()<<endl;
//		cout<<"예외 발생!"<<ex.What()<<endl;
//	}
//	catch(const Exception&ex)//Exception클래스 하나로 여러가지 오류처리가능
//	{
//		cout<<"예외가 발생!"<<ex.What()<<endl;
//	}
//}
//
//
//#include<iostream>
//#include<exception>
//using namespace std;
//class Func1Exception : public exception
//{
//public:
//	Func1Exception(const char*msg):exception(msg)
//	{
//	}
//	const char*what()const{return exception::what();}
//};
//class Func2Exception : public exception
//{
//public:
//	Func2Exception(const char*msg):exception(msg)
//	{
//	}
//	const char*what()const{return exception::what();}
//	int GetRange()const
//	{
//		return 100;
//	}
//};
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw Func1Exception("func1 exception..");
//	cout<<"func1()..."<<endl;
//};
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw Func2Exception("func2 exception.."); 
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw exception("func3() 예외객체");
//	cout<<"func3()..."<<endl;
//}
////////////////////////////////////////////////////////
//void main()
//{
//	try
//	{
//		func1(false);
//		func2(false);
//		func3(true);
//	}
//	catch(const Func2Exception&ex)
//	{
//		cout<<"예외 값: "<<ex.GetRange()<<endl;
//		cout<<"예외 발생!"<<ex.what()<<endl;
//	}
//	catch(const exception&ex)//Exception클래스 하나로 여러가지 오류처리가능
//	{
//		cout<<"예외가 발생!"<<ex.what()<<endl;
//	}
//	catch(...)//Exception클래스 하나로 여러가지 오류처리가능
//	{
//		cout<<"Exception!!"<<endl;
//	}
//}


/////////////////////////////////////////////////////////////////////////
//
//#include<iostream>
//#include<exception>
//#include<string>
//using namespace std;
//class CapacityException : public exception
//{
//	int capacity;
//	string msg;
//public:
//	CapacityException(int cap):capacity(cap)
//	{
//		char buf[500];
//		sprintf(buf,"capacity : %d overflow",capacity); //buf에 뒤의값 저장
//		msg = buf;
//	}
//	const char* what()const{return msg.c_str();}
//};
//class RangeException : public exception
//{
//	string msg;
//	int lower;
//	int upper;
//	int current;
//
//public:
//	RangeException(int l,int u,int c):lower(l),upper(u),current(c)
//	{
//		char buf[500];
//		sprintf(buf,"%d ~ %d 사이의 값을 사용 : 현 index &d",lower,upper,current); //buf에 뒤의값 저장
//		msg = buf;
//	}
//	const char*what()const{return msg.c_str();}
//	int GetLower()const {return lower;}
//	int GetUpper()const {return upper;}
//};
//template <typename T=int> //T의 타입을 클라이언트가 결정하게하는것이 class template
//						  //cpp파일에는 template안씀
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
//	{
//		if(capacity> 1000000)
//			throw CapacityException(cap);
//		else
//			arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
//	{
//		if(this == &arg) //delete를 하기때문에 check해야한다.
//			return *this;
//		delete []arr;
//		size = arg.size;
//		capacity=arg.capacity;
//		arr = new T[capacity];
//		for(int i=0;i<arg.size;i++)
//			arr[i]=arg.arr[i];
//		return *this;
//	}
//	~Array()
//	{
//		if(capacity<=1000000) 
//			delete []arr;
//	}
//	void Add(const T& data) //언떤형식인지모르므로 const형참조사용
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	const T& At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw RangeException(0,size-1,idx);
//	}
//	const T& operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //비const객체에서 사용
//	{
//		return arr[idx];
//	}
//	void Remove(int idx)
//	{
//		for(int i=idx;i<size-1;i++)
//			arr[i]=arr[i+1];
//		size--;
//	}
//};
//void main()
//{
//	try
//	{
//		Array<int>arr(10000);
//		arr.Add(10);
//		arr.Add(20);
//		arr.Add(30);
//		for(int i=0;i<arr.Size();i++)
//			cout<<arr.At(i)<<endl;
//	}
//	catch(const exception&ex)
//	{
//		cout<<ex.what()<<endl;
//	}
//}


///////////////////////////////////////////////////////////////////////
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<exception>
//#include<string>
//using namespace std;
//class CapacityException : public exception
//{
//	int capacity;
//	string msg;
//public:
//	CapacityException(int cap):capacity(cap)
//	{
//		char buf[500];
//		sprintf(buf,"capacity : %d overflow",capacity); //buf에 뒤의값 저장
//		msg = buf;
//	}
//	const char* what()const{return msg.c_str();}
//};
//class RangeException : public exception
//{
//	string msg;
//	int lower;
//	int upper;
//	int current;
//
//public:
//	RangeException(int l,int u,int c):lower(l),upper(u),current(c)
//	{
//		char buf[500];
//		sprintf(buf,"%d ~ %d 사이의 값을 사용 : 현 index &d",lower,upper,current); //buf에 뒤의값 저장
//		msg = buf;
//	}
//	const char*what()const{return msg.c_str();}
//	int GetLower()const {return lower;}
//	int GetUpper()const {return upper;}
//};
//template <typename T=int> 
//class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
//	{
//		if(capacity> 1000000)
//			throw CapacityException(cap);
//		else
//			arr = new T[capacity];
//	}
//	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
//	{
//		arr = new T[capacity];
//		for(int i = 0; i<size; i++)
//			arr[i]=arg.arr[i];
//	}
//	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
//	{
//		if(this == &arg) //delete를 하기때문에 check해야한다.
//			return *this;
//		delete []arr;
//		size = arg.size;
//		capacity=arg.capacity;
//		arr = new T[capacity];
//		for(int i=0;i<arg.size;i++)
//			arr[i]=arg.arr[i];
//		return *this;
//	}
//	~Array()
//	{
//		if(capacity<=1000000) 
//			delete []arr;
//	}
//	void Add(const T& data) //언떤형식인지모르므로 const형참조사용
//	{
//		if(size>=capacity){
//			return;
//			//throw exception("out of capacity");
//		}
//		arr[size]=data;
//		size++;
//	}
//	int Size()const{return size;}
//	const T& At(int idx)const 
//	{
//		if(0<idx && idx < size)
//			return arr[idx];
//		else
//			throw RangeException(0,size-1,idx);
//	}
//	const T& operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
//								 //일반적으로 []연산자는 오류처리를 하지않는다.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //비const객체에서 사용
//	{
//		return arr[idx];
//	}
//	void Remove(int idx)
//	{
//		for(int i=idx;i<size-1;i++)
//			arr[i]=arr[i+1];
//		size--;
//	}
//};
//void main()
//{
//	try
//	{
//		Array<int> arr(10000);
//		arr.Add(10);
//		arr.Add(20);
//		arr.Add(30);
//		cout<<arr.At(8)<<endl; //독립된문장이므로 분리해야한다.
//		for(int i=0;i<arr.Size();i++)
//			cout<<arr.At(i)<<endl;
//	}
//	catch(const exception&ex)
//	{
//		cout<<ex.what()<<endl;
//	}
//}

#pragma warning(disable:4996)
#include<iostream>
#include<exception>
#include<string>
using namespace std;
class CapacityException : public exception
{
	int capacity;
	string msg;
public:
	CapacityException(int cap):capacity(cap)
	{
		char buf[500];
		sprintf(buf,"capacity : %d overflow",capacity); //buf에 뒤의값 저장
		msg = buf;
	}
	const char* what()const{return msg.c_str();}
};
class RangeException : public exception
{
	string msg;
	int lower;
	int upper;
	int current;

public:
	RangeException(int l,int u,int c):lower(l),upper(u),current(c)
	{
		char buf[500];
		sprintf(buf,"%d ~ %d 사이의 값을 사용 : 현 index %d",lower,upper,current); //buf에 뒤의값 저장
		msg = buf;
	}
	const char*what()const{return msg.c_str();}
	int GetLower()const {return lower;}
	int GetUpper()const {return upper;}
};
template <typename T=int> 
class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
{
	T*arr;
	int capacity;
	int size;
public:
	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
	{
		if(capacity> 1000000)
			throw CapacityException(cap);
		else
			arr = new T[capacity];
	}
	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
	{
		arr = new T[capacity];
		for(int i = 0; i<size; i++)
			arr[i]=arg.arr[i];
	}
	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
	{
		if(this == &arg) //delete를 하기때문에 check해야한다.
			return *this;
		delete []arr;
		size = arg.size;
		capacity=arg.capacity;
		arr = new T[capacity];
		for(int i=0;i<arg.size;i++)
			arr[i]=arg.arr[i];
		return *this;
	}
	~Array()
	{
		if(capacity<=1000000) 
			delete []arr;
	}
	void Add(const T& data) //언떤형식인지모르므로 const형참조사용
	{
		if(size>=capacity){
			return;
			//throw exception("out of capacity");
		}
		arr[size]=data;
		size++;
	}
	int Size()const{return size;}
	const T& At(int idx)const 
	{
		if(0<=idx && idx < size)
			return arr[idx];
		else
			throw RangeException(0,size-1,idx);
	}
	const T& operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
								 //일반적으로 []연산자는 오류처리를 하지않는다.
	{
		return arr[idx];
	}
	const T& operator[](int idx) //비const객체에서 사용
	{
		return arr[idx];
	}
	void Remove(int idx)
	{
		for(int i=idx;i<size-1;i++)
			arr[i]=arr[i+1];
		size--;
	}
};
void AccessData(Array<int>& arr)
{
	try{
			cout<<arr.At(8)<<endl; //독립된문장이므로 분리해야한다.
		}
		catch(const exception&ex)
		{
			cout<<ex.what()<<endl;
		}
}
void main()
{
	try
	{
		Array<int> arr(10000);
		arr.Add(10);
		arr.Add(20);
		arr.Add(30);
		AccessData(arr);
		for(int i=0;i<arr.Size();i++)
			cout<<arr.At(i)<<endl;
	}
	catch(const exception&ex)
	{
		cout<<ex.what()<<endl;
	}
}