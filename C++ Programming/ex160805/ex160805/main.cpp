//#include<iostream>
//using namespace std;
//void func1()
//{
//	throw "func1() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<endl;
//}
////////////////////////////////
//void main()
//{
//	try
//	{
//	func1();
//	}
//	catch(...)//...�� �ֻ�����ü ����ܶ� �������ִ�.
//	{
//		cout<<"���ܰ� �߻�!"<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1()
//{
//	throw "func1() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<endl;
//}
////////////////////////////////
//void main()
//{
//	try
//	{
//	func1();
//	}
//	catch(const char*ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	{
//		cout<<"���ܰ� �߻�!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw "func1() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
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
//	catch(const char*ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	{
//		cout<<"���ܰ� �߻�!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw "func1() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� �����̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func3()..."<<endl;
//}
////////////////////////////////
//void main()
//{
//	try
//	{
//		func1(false);
//		func2(true); //���ܰ��߻��ϸ� �Ʒ������� ������� �ʴ´�.
//	}
//	catch(const char*ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	{
//		cout<<"���ܰ� �߻�!"<<ex<<endl;
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
//		throw "func1() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� �����̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
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
//		func2(true); //���ܰ��߻��ϸ� �Ʒ������� ������� �ʴ´�.
//		func3(false);
//		UninitFunc();
//	}
//	catch(const char*ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	{
//		UninitFunc(); //c++���� Uninit�� �ΰ������ش�.
//		cout<<"���ܰ� �߻�!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw "func1() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� �����̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
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
//		func2(true); //���ܰ��߻��ϸ� �Ʒ������� ������� �ʴ´�.
//		func3(false);
//	}
//	catch(const char*ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	{
//		cout<<"���ܰ� �߻�!"<<ex<<endl;
//	}
//	finally //���� �߻����ο� ������� �����Ѵ�. c++������ �ȵ� �ٸ����� ���Ǵ� ����
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
//		throw "func1() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� �����̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
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
//		func2(true); //���ܰ��߻��ϸ� �Ʒ������� ������� �ʴ´�.
//		func3(false);
//		UninitFunc();
//	}
//	catch(const char*ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	{
//		UninitFunc();
//		cout<<"���ܰ� �߻�!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw "func1() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� �����̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
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
//		func2(true); //���ܰ��߻��ϸ� �Ʒ������� ������� �ʴ´�.
//		func3(false);
//		delete pn;
//	}
//	catch(const char*ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	{
//		delete pn;
//		cout<<"���ܰ� �߻�!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw "func1() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� �����̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
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
//		func2(true); //���ܰ��߻��ϸ� �Ʒ������� ������� �ʴ´�.
//		func3(false);
//	}
//};
////////////////////////////////
//void main()
//{
//	try
//	{
//		FuncWrapper f; //�ʱ�ȭ-�������� �ʿ��ϴٸ� ��ü�� �ϳ� �����ؼ� �����ڿ� �Ҹ��ڸ� �̿��Ѵ�.
//		f.Run();
//	}
//	catch(const char*ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	{
//		cout<<"���ܰ� �߻�!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag,int*p)
//{
//	if(bFlag)
//		throw "func1() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� �����̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<*p<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
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
////		func2(true); //���ܰ��߻��ϸ� �Ʒ������� ������� �ʴ´�.
////		func3(false);
////	}
////};
////////////////////////////////////////////////////////
//void main()
//{
//	try
//	{
//		int*p = InitFunc(); //�ʱ�ȭ-�������� �ʿ��ϴٸ� ��ü�� �ϳ� �����ؼ� �����ڿ� �Ҹ��ڸ� �̿��Ѵ�.
//		func1(false,p);
//		func2(true);
//		func3(false);
//		UninitFunc(p);
//	}
//	catch(const char*ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	{
//		UninitFunc(p);  //�������۾� ==> ��ü�� �̿��Ѵ�.
//		cout<<"���ܰ� �߻�!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag,int*p)
//{
//	if(bFlag)
//		throw "func1() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� �����̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<*p<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
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
//		func2(true); //���ܰ��߻��ϸ� �Ʒ������� ������� �ʴ´�.
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
//	//catch(const char*ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	//{
//	//	cout<<"���ܰ� �߻�!"<<ex<<endl;
//	//}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag,int*p)
//{
//	if(bFlag)
//		throw "func1() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� �����̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<*p<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
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
//			func2(true); //���ܰ��߻��ϸ� �Ʒ������� ������� �ʴ´�.
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
//	catch(const char*ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	{
//		cout<<"���ܰ� �߻�!"<<ex<<endl;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//void func1(bool bFlag)
//{
//	if(bFlag)
//		throw "func1() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� �����̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
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
//	catch(const char*ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	{
//		cout<<"���ܰ� �߻�!"<<ex<<endl;
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
//		throw Exception("func1 exception.."); //���ڿ��� �������ִµ� �̰� �����̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
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
//	catch(const char*ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	{
//		cout<<"���ܰ� �߻�!"<<ex<<endl;
//	}
//	catch(const Exception&ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	{
//		cout<<"���ܰ� �߻�!"<<ex.What()<<endl;
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
//		throw Exception("func1 exception.."); //���ڿ��� �������ִµ� �̰� �����̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func1()..."<<endl;
//}
//void func2(bool bFlag)
//{
//	if(bFlag)
//		throw "func2() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
//	cout<<"func2()..."<<endl;
//}
//void func3(bool bFlag)
//{
//	if(bFlag)
//		throw "func3() ���ܰ�ü"; //���ڿ��� �������ִµ� �̰� ���� ��ü�� �������Ѵ�.
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
//	catch(const char*ex)//...�� �ֻ�����ü ����ܶ� �������ִ�.
//	{
//		cout<<"���ܰ� �߻�!"<<ex<<endl;
//	}
//	catch(const Exception&ex)//...�� �ֻ�����ü �����fdsafdsa�� �������ִ�.
//	{
//		cout<<"���ܰ� �߻�!"<<ex.What()<<endl;
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
//		throw Exception("func3() ���ܰ�ü");
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
//		cout<<"���� ��: "<<ex.GetRange()<<endl;
//		cout<<"���� �߻�!"<<ex.What()<<endl;
//	}
//	catch(const Exception&ex)//ExceptionŬ���� �ϳ��� �������� ����ó������
//	{
//		cout<<"���ܰ� �߻�!"<<ex.What()<<endl;
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
//		throw exception("func3() ���ܰ�ü");
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
//		cout<<"���� ��: "<<ex.GetRange()<<endl;
//		cout<<"���� �߻�!"<<ex.what()<<endl;
//	}
//	catch(const exception&ex)//ExceptionŬ���� �ϳ��� �������� ����ó������
//	{
//		cout<<"���ܰ� �߻�!"<<ex.what()<<endl;
//	}
//	catch(...)//ExceptionŬ���� �ϳ��� �������� ����ó������
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
//		sprintf(buf,"capacity : %d overflow",capacity); //buf�� ���ǰ� ����
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
//		sprintf(buf,"%d ~ %d ������ ���� ��� : �� index &d",lower,upper,current); //buf�� ���ǰ� ����
//		msg = buf;
//	}
//	const char*what()const{return msg.c_str();}
//	int GetLower()const {return lower;}
//	int GetUpper()const {return upper;}
//};
//template <typename T=int> //T�� Ÿ���� Ŭ���̾�Ʈ�� �����ϰ��ϴ°��� class template
//						  //cpp���Ͽ��� template�Ⱦ�
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
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
//	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
//	{
//		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
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
//	void Add(const T& data) //�����������𸣹Ƿ� const���������
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
//	const T& operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //��const��ü���� ���
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
//		sprintf(buf,"capacity : %d overflow",capacity); //buf�� ���ǰ� ����
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
//		sprintf(buf,"%d ~ %d ������ ���� ��� : �� index &d",lower,upper,current); //buf�� ���ǰ� ����
//		msg = buf;
//	}
//	const char*what()const{return msg.c_str();}
//	int GetLower()const {return lower;}
//	int GetUpper()const {return upper;}
//};
//template <typename T=int> 
//class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
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
//	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
//	{
//		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
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
//	void Add(const T& data) //�����������𸣹Ƿ� const���������
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
//	const T& operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
//								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
//	{
//		return arr[idx];
//	}
//	const T& operator[](int idx) //��const��ü���� ���
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
//		cout<<arr.At(8)<<endl; //�����ȹ����̹Ƿ� �и��ؾ��Ѵ�.
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
		sprintf(buf,"capacity : %d overflow",capacity); //buf�� ���ǰ� ����
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
		sprintf(buf,"%d ~ %d ������ ���� ��� : �� index %d",lower,upper,current); //buf�� ���ǰ� ����
		msg = buf;
	}
	const char*what()const{return msg.c_str();}
	int GetLower()const {return lower;}
	int GetUpper()const {return upper;}
};
template <typename T=int> 
class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
{
	T*arr;
	int capacity;
	int size;
public:
	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
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
	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
	{
		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
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
	void Add(const T& data) //�����������𸣹Ƿ� const���������
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
	const T& operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
	{
		return arr[idx];
	}
	const T& operator[](int idx) //��const��ü���� ���
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
			cout<<arr.At(8)<<endl; //�����ȹ����̹Ƿ� �и��ؾ��Ѵ�.
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