//함수 중복
//함수 오버로딩
//#include<iostream>
//using namespace std;
//void Print(int n)
//{
//	cout<<"int : "<<n<<endl;
//}
//void Print(double n)
//{
//	cout<<"double : "<<n<<endl;
//}
//void Print(const char*s)
//{
//	cout<<"String : "<<s<<endl;
//}
//void main()
//{
//	Print(10);
//	Print("Hello!");
//	Print(5.67);
//}
//
////동적메모리 생성 방법
//#include<iostream>
//using namespace std;
//void main()
//{
//	int*p=new int;//new 뒤에 쓰는것이 반환 형식이 된다. 명시적 형변환이 필요없다.
//	*p=10;
//	delete p;//시작주소를 알려주고 동적메모리는 제거하는 기능
//}
//

////동적메모리 생성 방법
//#include<iostream>
//using namespace std;
//void main()
//{
//	double*p=new double;//new 뒤에 쓰는것이 반환 형식이 된다. 명시적 형변환이 필요없다.
//	*p=10.6789;
//	delete p;//시작주소를 알려주고 동적메모리는 제거하는 기능
//}
//
//
////동적메모리 생성 방법
//#include<iostream>
//using namespace std;
//void main()
//{
//	int*p=new int(10);//new 뒤에 쓰는것이 반환 형식이 된다. 명시적 형변환이 필요없다.
//					//초기화 문법
//	cout<<*p<<','<<p<<endl;
//	delete p;//시작주소를 알려주고 동적메모리는 제거하는 기능
//}
//
//
////동적메모리 생성 방법
//#include<iostream>
//using namespace std;
//void main()
//{
//	int*p=new int[10];//여러개의 메모리 생성하는법
//	for(int i=0;i<10;++i)
//		p[i]=i+1;
//	for(int i=0;i<10;i++)
//		cout<<p[i]<<endl;
//	delete []p; //new-delete, new[]-delete[] 짝을 이루어야한다.
//}
//
//
////동적메모리 생성 방법
//#include<iostream>
//using namespace std;
//int*AllocArray(int size)
//{
//	return new int[size];
//}
//void DeleteArray(int*p)
//{
//	delete []p;
//}
//void main()
//{
//	int*p=AllocArray(10);
//	for(int i=0;i<10;++i)
//		p[i]=i+1;
//	for(int i=0;i<10;i++)
//		cout<<p[i]<<endl;
//	DeleteArray(p);
//}
//
//
////동적메모리 생성 방법
//#include<iostream>
//using namespace std;
//void AllocArray(int**pp,int size)
//{
//	*pp = new int[size];
//}
//void DeleteArray(int*p)
//{
//	delete []p;
//}
//void main()
//{
//	int*p;
//	AllocArray(&p,10);
//	for(int i=0;i<10;++i)
//		p[i]=i+1;
//	for(int i=0;i<10;i++)
//		cout<<p[i]<<endl;
//	DeleteArray(p);
//}
//
//
////동적메모리 생성 방법
//#include<iostream>
//using namespace std;
//void AllocArray(int*& p,int size)
//{
//	p = new int[size];
//}
//void DeleteArray(int*p)
//{
//	delete []p;
//}
//void main()
//{
//	int*p;
//	AllocArray(p,10);
//	for(int i=0;i<10;++i)
//		p[i]=i+1;
//	for(int i=0;i<10;i++)
//		cout<<p[i]<<endl;
//	DeleteArray(p);
//}

//
//#include<iostream>//
//using namespace std;
//void main()
//{
//	int a=10;
//	int&b=a;
//
//	char*s1="ABC";
//	char*&s2=s1;
//}
//
//
//#include<iostream>//
//using namespace std;
//void AllocArray(int*& p,int size)//outprameter라서 변수의 참조형을 받아온다
//{
//	p = new int[size];
//}
//void DeleteArray(int*p)
//{
//	delete []p;
//}
//void InitArray(int*p,int size)
//{
//	for(int i=0;i<size;++i)
//		p[i]=i+1;
//}
//void PrintArray(int*p,int size){
//	for(int i=0;i<size;i++)
//		cout<<p[i]<<endl;
//}
//void main()
//{
//	int*p;
//	AllocArray(p,10);
//	InitArray(p,10);
//	PrintArray(p,10);
//	DeleteArray(p);
//}
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//template <typename T>
//void Print(T data) //함수템플릿
//{
//	cout<<"data:"<<data <<endl;
//}
//void main()
//{
//	Print<int>(100); //실제함수 (인스턴스)
//	Print<string>("Hello!"); //실제함수(인스턴스)
//}
//
//
//#include<iostream>//
//using namespace std;
//void Swap(int&a,int&b)
//{
//	int temp = a;
//	a=b;
//	b=temp;
//}
//void Print(int a,int b){
//	cout<<a<<','<<b<<endl;
//}
//void main()
//{
//	int a=10,b=20;
//
//	Swap(a,b);
//	Print(a,b);
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T> //템플릿의 매개변수
//void Swap(T&a,T&b)
//{
//	T temp = a;
//	a=b;
//	b=temp;
//}
//template <typename K> //템플릿의 매개변수
//void Print(K a,K b){
//	cout<<a<<','<<b<<endl;
//}
//void main()
//{
//	int a=10,b=20;
//
//	Swap<int>(a,b);
//	Print<int>(a,b);
//
//	double d1=1.1,d2=5.6;
//	Swap<double>(d1,d2);
//	Print<double>(d1,d2);
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T> //템플릿의 매개변수
//void Swap(T&a,T&b)
//{
//	T temp = a;
//	a=b;
//	b=temp;
//}
//template <typename K> //템플릿의 매개변수
//void Print(K a,K b){
//	cout<<a<<','<<b<<endl;
//}
//void main()
//{
//	int a=10,b=20;
//
//	Swap<int>(a,b); //진짜함수
//	Print<int>(a,b); //진짜함수 <>를 생략한거뿐임
//
//	double d1=1.1,d2=5.6;
//	Swap<double>(d1,d2);
//	Print<double>(d1,d2);
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T> //템플릿의 매개변수
//void Swap(T&a,T&b)
//{
//	T temp = a;
//	a=b;
//	b=temp;
//}
//template <typename K> //템플릿의 매개변수
//void Print(K a,K b){
//	cout<<a<<','<<b<<endl;
//}
//void main()
//{
//	int a=10,b=20;
//
//	Swap<int>(a,b); //진짜함수
//	Print<int>(a,b); //진짜함수 <>를 생략한거뿐임
//
//	double d1=1.1,d2=5.6;
//	Swap<double>(d1,d2);
//	Print<double>(d1,d2);
//}
//
//
//#include<iostream>
//#include<string.h>
//using namespace std;
//void main()
//{
//	char buf[100];
//	while(1)
//	{
//		cin>>buf;
//		cout<<"string: "<<buf<<endl;
//		if(strcmp(buf,"exit")==0)
//		{
//			break;
//		}
//	}
//}
//
//
//#include<iostream>
//#include<string> //c++에서는 c의 표준헤더의 .h를 없앴다.
//#include<cstring>
//using namespace std;
//void main()
//{
//	string buf; //buf의 형식 string클래스 buf는 string의 객체이다.
//	while(1)
//	{
//		cin>>buf;
//		if(buf=="exit"){ //c++에서는 가능
//			break;
//		}
//		cout<<"string: "<<buf<<endl;
//	}
//}
//
//
//#include<iostream>
//#include<string> //c++에서는 c의 표준헤더의 .h를 없앴다.
//#include<cstring>
//using namespace std;
//void main()
//{
//	string buf; //buf의 형식 string클래스 buf는 string의 객체이다.
//	
//	buf = "Hello!";
//	cout<<buf<<endl;
//	buf+="12345";
//	cout<<buf<<endl;
//	buf[7]='K';
//	cout<<buf<<endl;
//}
//
//
//#include<iostream>
//#include<string> //c++에서는 c의 표준헤더의 .h를 없앴다.
//#include<cstring>
//using namespace std;
//void PrintStringArray(string sarr[],int count) //string sarr[] or string*sarr
//{
//	for(int i=0;i<count;i++)
//		cout<<"["<<i<<"]"<<sarr[i]<<endl;
//
//}
//void main()
//{
//	string sarr[100]; //buf의 형식 string클래스 buf는 string의 객체이다.
//	int scount=0;
//	while(1)
//	{
//		cout<<"input string: ";
//		cin>>sarr[scount++];
//		if(sarr[scount-1]=="exit")
//			break;
//		cout<<"string: "<<sarr[scount-1]<<endl;
//	}
//	PrintStringArray(sarr,scount);
//}
//
//
//#include<iostream>
//#include<string> //c++에서는 c의 표준헤더의 .h를 없앴다.
//#include<cstring>
//using namespace std;
//void PrintStringArray(string sarr[],int count) //string sarr[] or string*sarr
//{
//	for(int i=0;i<count;i++)
//		cout<<"["<<i<<"]"<<sarr[i]<<endl;
//
//}
//void InputStringArray(string sarr[],int&scount){
//	cout<<"input string: ";
//		cin>>sarr[scount++];
//}
//void main()
//{
//	string sarr[100]; //buf의 형식 string클래스 buf는 string의 객체이다.
//	int scount=0;
//	while(1)
//	{
//		InputStringArray(sarr,scount);
//		if(sarr[scount-1]=="exit")
//			break;
//		cout<<"string: "<<sarr[scount-1]<<endl;
//	}
//	PrintStringArray(sarr,scount);
//}
//
//
//#include<iostream>
//#include<string> //c++에서는 c의 표준헤더의 .h를 없앴다.
//#include<cstring>
//using namespace std;
//void PrintStringArray(string sarr[],int count) //string sarr[] or string*sarr
//{
//	for(int i=0;i<count;i++)
//		cout<<"["<<i<<"]"<<sarr[i]<<endl;
//
//}
//void InputStringArray(string sarr[],int&scount){
//	cout<<"input string: ";
//		cin>>sarr[scount++];
//}
//bool EqualsString(string s1,string s2)
//{
//	return s1==s2;
//}
//void main()
//{
//	string sarr[100]; //buf의 형식 string클래스 buf는 string의 객체이다.
//	int scount=0;
//	while(1)
//	{
//		InputStringArray(sarr,scount);
//		if(sarr[scount-1]=="exit")//함수보다는 연산자가 더 직관성이 높다.
//			break;
//		cout<<"string: "<<sarr[scount-1]<<endl;
//	}
//	PrintStringArray(sarr,scount);
//}

//
//#include<iostream>
//#include<string> //c++에서는 c의 표준헤더의 .h를 없앴다.
//using namespace std;
//void main()
//{
//
//}