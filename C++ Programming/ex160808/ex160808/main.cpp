//
//
//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for(unsigned i=0;i<v.size();i++)
//		cout<<v[i]<<endl;
//}
//
//#include<iostream>
//#include<vector>
//using namespace std;
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for(vector<int>::size_type i=0;i<v.size();i++) //v.size()�� unsigned���̶� warning�߻�
//		cout<<v[i]<<endl;						   //���������� Ÿ���� �����Ѵ�.
//}
//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//template<typename T>
//class Vector
//{
//public:
//	class Data //Vector�� ����class��� �Ѵ�.
//	{
//	};
//	typedef unsigned int Size_Type; //�� type�̴�
//	typedef Data Data_Type;
//};
//void main()
//{
//	Vector<int>::Data d1;
//	Vector<int>::Data_Type d2;
//	Vector<int>::Size_Type s1;
//	unsigned int s2; //������ �Ʒ��� �� ���� Ÿ���̴�.
//}
//
/////////////////////////////////////////////////////////////////////////////
//#include<iostream>
//#include<vector>
//using namespace std;
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for(vector<int>::size_type i=0;i<v.size();i++) //v.size()�� unsigned���̶� warning�߻�
//		cout<<v.at(i)<<endl;						   //���������� Ÿ���� �����Ѵ�.
//	cout<<v.front()<<','<<v.back()<<endl;
//	cout<<v[0]<<','<<v[v.size()-1]<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	v.pop_back();
//	for(vector<int>::size_type i=0;i<v.size();i++) //v.size()�� unsigned���̶� warning�߻�
//		cout<<v.at(i)<<endl;						   //���������� Ÿ���� �����Ѵ�.
//}
//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	v.insert(v.begin()+2,100); //insert�� erase�� iterator�̴�.
//
//	for(vector<int>::size_type i=0;i<v.size();i++) //v.size()�� unsigned���̶� warning�߻�
//		cout<<v.at(i)<<endl;						   //���������� Ÿ���� �����Ѵ�.
//}
//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	v.erase(v.begin()+2); //insert�� erase�� iterator�̴�.
//
//	for(vector<int>::size_type i=0;i<v.size();i++) //v.size()�� unsigned���̶� warning�߻�
//		cout<<v.at(i)<<endl;						   //���������� Ÿ���� �����Ѵ�.
//}
//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	v[0]=100;//�����̹Ƿ� �޸𸮹ٲٱ� ����
//}
//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	int*p=&v[0];//�����̹Ƿ� �޸𸮹ٲٱ� ����
//				//vector���� �����ϴ� �������� �޸𸮸� ���� ������
//
//	for(int i=0;i<5;i++)
//		cout<<p[i]<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//void PrintVector(const vector<int>&v)
//{
//	for(vector<int>::size_type i=0;i<v.size();i++)
//		cout<<v[i]<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(10);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(20);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(30);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(40);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(50);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(60);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(70);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(80);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(90);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(100);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//}
//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//void PrintVector(const vector<int>&v)
//{
//	for(vector<int>::size_type i=0;i<v.size();i++)
//		cout<<v[i]<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//
//	v.reserve(6);  //reserve(),capacity()�޼���� vector���ۿ� ����.
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(10);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(20);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(30);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(40);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(50);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(60);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(70);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(80);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(90);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(100);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//}
//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//void PrintVector(const vector<int>&v)
//{
//	for(vector<int>::size_type i=0;i<v.size();i++)
//		cout<<v[i]<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//
//	v.reserve(6);  //reserve(),capacity()�޼���� vector���ۿ� ����.
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(10);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(20);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(30);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(40);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;
//	v.push_back(50);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(60);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(70);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(80);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(90);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//	v.push_back(100);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector�� �������ִ� �޼����̴�.
//}
//
//
//#include<iostream>
//#include<list>
//using namespace std;
//void main()
//{
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	cout<<lt.front()<<','<<lt.back()<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//using namespace std;
//void main()
//{
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	list<int>::iterator iter;
//	iter = lt.begin();
//
//	cout<<*iter<<endl;
//	++iter; //�ϳ��� �̵��ϴ� ����
//	cout<<*iter<<endl;
//	++iter;
//	cout<<*iter<<endl;
//	++iter;
//	cout<<*iter<<endl;
//	++iter;
//	cout<<*iter<<endl;
//	++iter;
//}
//
//
//#include<iostream>
//#include<list>
//using namespace std;
//void main()
//{
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
//		cout<<*iter<<" ";
//	//end()�� ������ ������ ����Ų��.
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//using namespace std;
//void main()
//{
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	lt.pop_front();
//	lt.push_front(100);
//	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
//		cout<<*iter<<" ";
//	//end()�� ������ ������ ����Ų��.
//	cout<<endl;
//}

//
//#include<iostream>
//#include<list>
//using namespace std;
//void main()
//{
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	lt.insert(list<int>::begin()+2,100); //���Ӹ޸� ����� �ƴ϶� �ȵȴ�
//
//	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
//		cout<<*iter<<" ";
//	//end()�� ������ ������ ����Ų��.
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//using namespace std;
//void main()
//{
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	list<int>::iterator iter = lt.begin();
//	++iter;
//	++iter;
//	lt.insert(iter,100);
//
//	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
//		cout<<*iter<<" ";
//	//end()�� ������ ������ ����Ų��.
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//using namespace std;
//void main()
//{
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	list<int>::iterator iter = lt.begin();
//	++iter;
//	++iter;
//	lt.erase(iter);
//
//	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
//		cout<<*iter<<" ";
//	//end()�� ������ ������ ����Ų��.
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//using namespace std;
//void main()
//{
//	vector<int> v;
//	v.push_back(100);
//	v.push_back(200);
//	v.push_back(300);
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	list<int>::iterator iter = lt.begin();
//	++iter;
//	++iter;
//	lt.insert(iter,v.begin(),v.end());
//
//	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
//		cout<<*iter<<" ";
//	//end()�� ������ ������ ����Ų��.
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//using namespace std;
//void main()
//{
//	vector<int> v;
//	v.push_back(100);
//	v.push_back(200);
//	v.push_back(300);
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	list<int>::iterator iter = lt.begin();
//	++iter;
//	++iter;
//	lt.insert(iter,v.begin(),v.end()-1); //�������̱⸸�ϸ� ��δ� ������ �� �ִ�.
//
//	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
//		cout<<*iter<<" ";
//	//end()�� ������ ������ ����Ų��.
//	cout<<endl;
//}
//
//
#include<iostream>
#include<list>
#include<vector>
using namespace std;
void main()
{
	vector<int> v;
	v.push_back(100);
	v.push_back(200);
	v.push_back(300);
	list<int> lt;
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	list<int>::iterator iter = lt.begin();
	++iter;
	++iter;
	lt.insert(iter,v.begin(),v.end()-1); //�������̱⸸�ϸ� ��δ� ������ �� �ִ�.

	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
		cout<<*iter<<" ";
	//end()�� ������ ������ ����Ų��.
	cout<<endl;
	for(vector<int>::iterator iter=v.begin();iter!=v.end();iter++)
		cout<<*iter<<" ";
	//end()�� ������ ������ ����Ų��.
	cout<<endl;
}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//using namespace std;
//void main()
//{
//	list<int> t;
//	t.push_back(100);
//	t.push_back(200);
//	t.push_back(300);
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	list<int>::iterator iter = lt.begin();
//	++iter;
//	++iter;
//	lt.insert(iter,t.begin(),t.end()); //�������̱⸸�ϸ� ��δ� ������ �� �ִ�.
//
//	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
//		cout<<*iter<<" ";
//	//end()�� ������ ������ ����Ų��.
//	cout<<endl;
//	for(list<int>::iterator iter=t.begin();iter!=t.end();iter++)
//		cout<<*iter<<" ";
//	//end()�� ������ ������ ����Ų��.
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//using namespace std;
//void main()
//{
//	list<int> t;
//	t.push_back(100);
//	t.push_back(200);
//	t.push_back(300);
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	list<int>::iterator iter = lt.begin();
//	++iter;
//	++iter;
//	lt.splice(iter,t,t.begin(),t.end()); //�������̱⸸�ϸ� ��δ� ������ �� �ִ�.
//
//	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
//		cout<<*iter<<" ";
//	//end()�� ������ ������ ����Ų��.
//	cout<<endl;
//	for(list<int>::iterator iter=t.begin();iter!=t.end();iter++)
//		cout<<*iter<<" ";
//	//end()�� ������ ������ ����Ų��.
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//using namespace std;
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for(vector<int>::iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	PrintVector(v);
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for(vector<int>::iterator iter=v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//	for(vector<int>::reverse_iterator iter=v.rbegin();iter!=v.rend();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for(vector<int>::const_iterator iter=v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//	for(vector<int>::const_reverse_iterator iter=v.rbegin();iter!=v.rend();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator iter = v.begin()+2;
//	cout<<*iter<<endl;
//
//	vector<int>::const_iterator citer = iter; //�Ϲ� iterator�� const_iterator�� ��ȯ�����ϴ�.
//	cout<<*citer<<endl;
//}
//
//////////////////////////////////////////////////
//#include<iostream>
//#include<list>
//#include<vector>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::const_iterator citer = v.begin()+2; 
//	cout<<*citer<<endl;
//
//	vector<int>::iterator iter = citer; //�ȵ�
//	cout<<*iter<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator iter = v.begin()+2;
//	cout<<*iter<<endl;
//
//	vector<int>::reverse_iterator riter = iter; //��ȯ�ȵ�
//	cout<<*riter<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator iter = v.begin()+2;
//	cout<<*iter<<endl;
//
//	vector<int>::reverse_iterator riter = iter; //�ȵ�
//	cout<<*riter<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::reverse_iterator riter = v.rbegin()+2;
//	cout<<*riter<<endl;
//
//	vector<int>::iterator iter = riter.base();  //base�޼��带 �̿��Ͽ� �Ϲ�iterator�� ��ȯ����
//	cout<<*iter<<endl; //�Ϲ�iterator�� ����Ű�� ���� �����ϰ��ִ� ���� ����.
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::reverse_iterator riter = v.rbegin()+2;
//	cout<<*riter<<endl;
//
//	vector<int>::iterator iter = riter.base();  //base�޼��带 �̿��Ͽ� �Ϲ�iterator�� ��ȯ����
//	cout<<*iter<<endl; //�Ϲ�iterator�� ����Ű�� ���� �����ϰ��ִ� ���� ����. reverse_iterator�� �ٸ���
//
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::reverse_iterator riter = v.rbegin();
//	cout<<*riter<<endl;
//
//	vector<int>::iterator iter = riter.base();  //base�޼��带 �̿��Ͽ� reverse_iterator�� �Ϲ�iterator�� ��ȯ����
//	cout<<*iter<<endl; //�Ϲ�iterator�� ����Ű�� ���� �����ϰ��ִ� ���� ����. reverse_iterator�� �ٸ���.
//					   //��ǥ���� ����Ϸ��ؼ� ������.
//
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator siter = v.begin();
//	vector<int>::iterator eiter = v.end();
//
//	for(vector<int>::iterator iter = siter;iter!=eiter;iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator siter = v.begin();
//	vector<int>::iterator eiter = v.end();
//
//	reverse_iterator<vector<int>> sriter(siter);
//	for(vector<int>::iterator iter = siter;iter!=eiter;iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator siter = v.begin();
//	vector<int>::iterator eiter = v.end();
//
//	//reverse_iterator<vector<int>> sriter(siter);
//	for(vector<int>::reverse_iterator iter = v.rbegin();iter!=v.rend();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator siter = v.begin();
//	vector<int>::iterator eiter = v.end();
//
//	reverse_iterator<vector<int>::iterator> eriter(siter); //�Ϲ�iterator�� reverse_iterator�� ��ȯ
//	reverse_iterator<vector<int>::iterator> sriter(eiter);
//	for(vector<int>::reverse_iterator iter = sriter;iter!=eriter;iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator siter = v.begin();
//	vector<int>::iterator eiter = v.end();
//
//	reverse_iterator<vector<int>::iterator> eriter(siter); //�Ϲ�iterator�� reverse_iterator�� ��ȯ
//	reverse_iterator<vector<int>::iterator> sriter(eiter);
//	for(vector<int>::reverse_iterator iter = sriter;iter!=eriter;iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//
//	siter = eriter.base();
//	eiter = sriter.base();
//
//	for(vector<int>::iterator iter = siter;iter!=eiter;iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	vector<int>v2;
//	v2.push_back(100);
//	v2.push_back(200);
//	v2.push_back(300);
//
//	copy(v2.begin(),v2.end(),v1.begin()); //�����
//	for(vector<int>::iterator iter = v1.begin();iter!=v1.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//
//	vector<int>v2;
//	v2.push_back(100);
//	v2.push_back(200);
//	v2.push_back(300);
//
//	copy(v2.begin(),v2.end(),v1.begin()); //������ؾ��ϴµ� �޸𸮰� 2�����̶� ������.
//	for(vector<int>::iterator iter = v1.begin();iter!=v1.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//
//	vector<int>v2;
//	v2.push_back(100);
//	v2.push_back(200);
//	v2.push_back(300);
//
//	copy(v2.begin(),v2.end(),inserter(v1,v1.begin())); //���Ҹ� ����� �ϴ°��̾ƴ϶� ���� �������ִ� ���� inserter�� �̿��Ѵ�.
//	for(vector<int>::iterator iter = v1.begin();iter!=v1.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//
//	vector<int>v2;
//	v2.push_back(100);
//	v2.push_back(200);
//	v2.push_back(300);
//
//	copy(v2.begin(),v2.end(),back_inserter(v1)); //���Ҹ� ����� �ϴ°��̾ƴ϶� ���� �������ִ� ���� inserter�� �̿��Ѵ�.
//	for(vector<int>::iterator iter = v1.begin();iter!=v1.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//
//	vector<int>v2;
//	v2.push_back(100);
//	v2.push_back(200);
//	v2.push_back(300);
//
//	copy(v2.begin(),v2.end(),front_inserter(v1)); //vector�� �⺻������ �տ��ٰ� �߰��� ����
//	for(vector<int>::iterator iter = v1.begin();iter!=v1.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<iterator>
//using namespace std;
//void PrintVector(const vector<int>& v) 
//{
//	for(vector<int>::const_iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//void main()
//{
//	list<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//
//	list<int>v2;
//	v2.push_back(100);
//	v2.push_back(200);
//	v2.push_back(300);
//
//	copy(v2.begin(),v2.end(),front_inserter(v1)); //vector�� �⺻������ �տ��ٰ� �߰��� ����
//												  //list�� ������
//	for(list<int>::iterator iter = v1.begin();iter!=v1.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<deque>
//#include<iterator>
//using namespace std;
//void main() //vector�� ���� ������ �����̳�
//{
//	deque<int> dq;
//	dq.push_back(10);
//	dq.push_back(20);
//	dq.push_back(30);
//
//	for(deque<int>::size_type i = 0;i<dq.size();i++)
//		cout<<dq[i]<<" ";
//	cout<<endl;
//	for(deque<int>::iterator iter = dq.begin();iter!=dq.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<list>
//#include<vector>
//#include<deque>
//#include<iterator>
//using namespace std;
//void main() //vector�� ���� ������ �����̳�
//{
//	deque<int> dq;
//	dq.push_back(10);
//	dq.push_back(20);
//	dq.push_back(30);
//
//	for(deque<int>::size_type i = 0;i<dq.size();i++)
//		cout<<dq[i]<<" ";
//	cout<<endl;
//	for(deque<int>::iterator iter = dq.begin();iter!=dq.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void Print(vector<int>::iterator si,vector<int>::iterator ei) 
////�Լ���ü�� iterator���� ���������� �����ʴ´�. �޸𸮰� ũ���ʱ⶧���� �����ؼ� ����Ѵ�.
//{
//	for(;si!=ei;si++)
//	{
//		cout<<*si<<" ";
//	}
//	cout<<endl;
//}
//void main() //vector�� ���� ������ �����̳�
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	Print(v.begin(),v.end());
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//template <typename Iter>//�������� typename�� class�� ���⵵ �ߴ�.
//void Print(Iter si,Iter ei) 
////�Լ���ü�� iterator���� ���������� �����ʴ´�. �޸𸮰� ũ���ʱ⶧���� �����ؼ� ����Ѵ�.
//{
//	for(;si!=ei;si++)
//	{
//		cout<<*si<<" ";
//	}
//	cout<<endl;
//}
//void main() //vector�� ���� ������ �����̳�
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	Print(v.begin(),v.end());
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//template <typename Iter>//�������� typename�� class�� ���⵵ �ߴ�.
//void Print(Iter si,Iter ei)  //�������� �Ű������� �޴´�.iterator�� ���� ��.
//	//�������� ��� ����ϴ� ��¾˰����̴�.
////�Լ���ü�� iterator���� ���������� �����ʴ´�. �޸𸮰� ũ���ʱ⶧���� �����ؼ� ����Ѵ�.
//{
//	for(;si!=ei;si++)
//	{
//		cout<<*si<<" ";
//	}
//	cout<<endl;
//}
//template <typename Iter,typename F>
//void Print(Iter si,Iter ei,F f)  
////�Լ���ü�� iterator���� ���������� �����ʴ´�. �޸𸮰� ũ���ʱ⶧���� �����ؼ� ����Ѵ�.
//{
//	for(;si!=ei;si++)
//	{
//		f(*si); //call-back
//	}
//	cout<<endl;
//}
////////////////////////////////////////////
//void client(int n)
//{
//	cout<<n<<endl;
//}
//void main() //vector�� ���� ������ �����̳�
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	Print(v.begin(),v.end()); 
//	Print(v.begin(),v.end(),client); 
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//template <typename Iter>//�������� typename�� class�� ���⵵ �ߴ�.
//void Print(Iter si,Iter ei)  //�������� �Ű������� �޴´�.iterator�� ���� ��.
//	//�������� ��� ����ϴ� ��¾˰����̴�.
////�Լ���ü�� iterator���� ���������� �����ʴ´�. �޸𸮰� ũ���ʱ⶧���� �����ؼ� ����Ѵ�.
//{
//	for(;si!=ei;si++)
//	{
//		cout<<*si<<" ";
//	}
//	cout<<endl;
//}
//template <typename Iter,typename F>
//void Print(Iter si,Iter ei,F f)  
////�Լ���ü�� iterator���� ���������� �����ʴ´�. �޸𸮰� ũ���ʱ⶧���� �����ؼ� ����Ѵ�.
//{
//	for(;si!=ei;si++)
//	{
//		f(*si); //call-back
//	}
//	cout<<endl;
//}
////////////////////////////////////////////
//void client(int n)
//{
//	cout<<n<<endl;
//}
//void client2(int n)
//{
//	cout<<"===="<<n<<":"<<endl;
//}
//void main() //vector�� ���� ������ �����̳�
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	Print(v.begin(),v.end()); 
//	Print(v.begin(),v.end(),client); 
//	Print(v.begin(),v.end(),client2); 
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
/////////////////////////////
//void client(int n)
//{
//	cout << n << " ";
//}
//void main() //vector�� ���� ������ �����̳�
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	for_each(v.begin(),v.end(),client); //for_each�޼��� 
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
/////////////////////////////
//int sum=0;
//void client(int n)
//{
//	sum+=n;
//}
//void main() //vector�� ���� ������ �����̳�
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	for_each(v.begin(),v.end(),client); //for_each�޼���
//	cout<<"sum = "<<sum<<endl;
//}
//
////
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
/////////////////////////////
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//ostream& operator<<(ostream&o,const Point&pt)
//{
//	o<<pt.GetX()<<','<<pt.GetY();
//	return o;
//}
//
//void main() //vector�� ���� ������ �����̳�
//{
//	vector<Point>v;
//	v.push_back(Point(2,3));
//	v.push_back(Point(4,5));
//	v.push_back(Point(7,8));
//
//	for(vector<Point>::iterator iter = v.begin();iter!=v.end();iter++)
//	{
//		const Point&pt = *iter;
//		cout<<pt<<endl;
//	}
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
/////////////////////////////
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//};
//void main() //vector�� ���� ������ �����̳�
//{
//	vector<Point*>v;
//	v.push_back(new Point(2,3));
//	v.push_back(new Point(4,5));
//	v.push_back(new Point(7,8));
//
//	for(vector<Point*>::iterator iter = v.begin();iter!=v.end();iter++)
//	{
//		const Point* p = *iter;
//		p->Print();
//	}
//	cout<<endl;
//
//	for(vector<Point*>::iterator iter = v.begin();iter!=v.end();iter++)
//		delete *iter;
//}
//
//
//#include<iostream>
//#include<cstring>
//class String
//{
//	char*str;
//public:
//	String()
//}
