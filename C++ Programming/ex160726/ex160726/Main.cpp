//�Լ� �ߺ�
//�Լ� �����ε�
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
////�����޸� ���� ���
//#include<iostream>
//using namespace std;
//void main()
//{
//	int*p=new int;//new �ڿ� ���°��� ��ȯ ������ �ȴ�. ����� ����ȯ�� �ʿ����.
//	*p=10;
//	delete p;//�����ּҸ� �˷��ְ� �����޸𸮴� �����ϴ� ���
//}
//

////�����޸� ���� ���
//#include<iostream>
//using namespace std;
//void main()
//{
//	double*p=new double;//new �ڿ� ���°��� ��ȯ ������ �ȴ�. ����� ����ȯ�� �ʿ����.
//	*p=10.6789;
//	delete p;//�����ּҸ� �˷��ְ� �����޸𸮴� �����ϴ� ���
//}
//
//
////�����޸� ���� ���
//#include<iostream>
//using namespace std;
//void main()
//{
//	int*p=new int(10);//new �ڿ� ���°��� ��ȯ ������ �ȴ�. ����� ����ȯ�� �ʿ����.
//					//�ʱ�ȭ ����
//	cout<<*p<<','<<p<<endl;
//	delete p;//�����ּҸ� �˷��ְ� �����޸𸮴� �����ϴ� ���
//}
//
//
////�����޸� ���� ���
//#include<iostream>
//using namespace std;
//void main()
//{
//	int*p=new int[10];//�������� �޸� �����ϴ¹�
//	for(int i=0;i<10;++i)
//		p[i]=i+1;
//	for(int i=0;i<10;i++)
//		cout<<p[i]<<endl;
//	delete []p; //new-delete, new[]-delete[] ¦�� �̷����Ѵ�.
//}
//
//
////�����޸� ���� ���
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
////�����޸� ���� ���
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
////�����޸� ���� ���
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
//void AllocArray(int*& p,int size)//outprameter�� ������ �������� �޾ƿ´�
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
//void Print(T data) //�Լ����ø�
//{
//	cout<<"data:"<<data <<endl;
//}
//void main()
//{
//	Print<int>(100); //�����Լ� (�ν��Ͻ�)
//	Print<string>("Hello!"); //�����Լ�(�ν��Ͻ�)
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
//template <typename T> //���ø��� �Ű�����
//void Swap(T&a,T&b)
//{
//	T temp = a;
//	a=b;
//	b=temp;
//}
//template <typename K> //���ø��� �Ű�����
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
//template <typename T> //���ø��� �Ű�����
//void Swap(T&a,T&b)
//{
//	T temp = a;
//	a=b;
//	b=temp;
//}
//template <typename K> //���ø��� �Ű�����
//void Print(K a,K b){
//	cout<<a<<','<<b<<endl;
//}
//void main()
//{
//	int a=10,b=20;
//
//	Swap<int>(a,b); //��¥�Լ�
//	Print<int>(a,b); //��¥�Լ� <>�� �����ѰŻ���
//
//	double d1=1.1,d2=5.6;
//	Swap<double>(d1,d2);
//	Print<double>(d1,d2);
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T> //���ø��� �Ű�����
//void Swap(T&a,T&b)
//{
//	T temp = a;
//	a=b;
//	b=temp;
//}
//template <typename K> //���ø��� �Ű�����
//void Print(K a,K b){
//	cout<<a<<','<<b<<endl;
//}
//void main()
//{
//	int a=10,b=20;
//
//	Swap<int>(a,b); //��¥�Լ�
//	Print<int>(a,b); //��¥�Լ� <>�� �����ѰŻ���
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
//#include<string> //c++������ c�� ǥ������� .h�� ���ݴ�.
//#include<cstring>
//using namespace std;
//void main()
//{
//	string buf; //buf�� ���� stringŬ���� buf�� string�� ��ü�̴�.
//	while(1)
//	{
//		cin>>buf;
//		if(buf=="exit"){ //c++������ ����
//			break;
//		}
//		cout<<"string: "<<buf<<endl;
//	}
//}
//
//
//#include<iostream>
//#include<string> //c++������ c�� ǥ������� .h�� ���ݴ�.
//#include<cstring>
//using namespace std;
//void main()
//{
//	string buf; //buf�� ���� stringŬ���� buf�� string�� ��ü�̴�.
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
//#include<string> //c++������ c�� ǥ������� .h�� ���ݴ�.
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
//	string sarr[100]; //buf�� ���� stringŬ���� buf�� string�� ��ü�̴�.
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
//#include<string> //c++������ c�� ǥ������� .h�� ���ݴ�.
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
//	string sarr[100]; //buf�� ���� stringŬ���� buf�� string�� ��ü�̴�.
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
//#include<string> //c++������ c�� ǥ������� .h�� ���ݴ�.
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
//	string sarr[100]; //buf�� ���� stringŬ���� buf�� string�� ��ü�̴�.
//	int scount=0;
//	while(1)
//	{
//		InputStringArray(sarr,scount);
//		if(sarr[scount-1]=="exit")//�Լ����ٴ� �����ڰ� �� �������� ����.
//			break;
//		cout<<"string: "<<sarr[scount-1]<<endl;
//	}
//	PrintStringArray(sarr,scount);
//}

//
//#include<iostream>
//#include<string> //c++������ c�� ǥ������� .h�� ���ݴ�.
//using namespace std;
//void main()
//{
//
//}