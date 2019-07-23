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
//	for(vector<int>::size_type i=0;i<v.size();i++) //v.size()는 unsigned형이라서 warning발생
//		cout<<v[i]<<endl;						   //내부적으로 타입이 존재한다.
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
//	class Data //Vector의 내부class라고 한다.
//	{
//	};
//	typedef unsigned int Size_Type; //다 type이다
//	typedef Data Data_Type;
//};
//void main()
//{
//	Vector<int>::Data d1;
//	Vector<int>::Data_Type d2;
//	Vector<int>::Size_Type s1;
//	unsigned int s2; //위에나 아래나 다 같은 타입이다.
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
//	for(vector<int>::size_type i=0;i<v.size();i++) //v.size()는 unsigned형이라서 warning발생
//		cout<<v.at(i)<<endl;						   //내부적으로 타입이 존재한다.
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
//	for(vector<int>::size_type i=0;i<v.size();i++) //v.size()는 unsigned형이라서 warning발생
//		cout<<v.at(i)<<endl;						   //내부적으로 타입이 존재한다.
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
//	v.insert(v.begin()+2,100); //insert와 erase는 iterator이다.
//
//	for(vector<int>::size_type i=0;i<v.size();i++) //v.size()는 unsigned형이라서 warning발생
//		cout<<v.at(i)<<endl;						   //내부적으로 타입이 존재한다.
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
//	v.erase(v.begin()+2); //insert와 erase는 iterator이다.
//
//	for(vector<int>::size_type i=0;i<v.size();i++) //v.size()는 unsigned형이라서 warning발생
//		cout<<v.at(i)<<endl;						   //내부적으로 타입이 존재한다.
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
//	v[0]=100;//참조이므로 메모리바꾸기 가능
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
//	int*p=&v[0];//참조이므로 메모리바꾸기 가능
//				//vector만이 가능하다 연속적인 메모리를 갖기 때문에
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
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(60);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(70);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(80);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(90);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(100);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
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
//	v.reserve(6);  //reserve(),capacity()메서드는 vector에밖에 없다.
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
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(60);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(70);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(80);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(90);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(100);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
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
//	v.reserve(6);  //reserve(),capacity()메서드는 vector에밖에 없다.
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
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(60);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(70);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(80);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(90);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
//	v.push_back(100);
//	cout<<"size:"<<v.size()<<','<<"capacity:"<<v.capacity()<<endl;//vector만 가지고있는 메서드이다.
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
//	++iter; //하나씩 이동하는 역할
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
//	//end()는 끝원소 다음을 가리킨다.
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
//	//end()는 끝원소 다음을 가리킨다.
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
//	lt.insert(list<int>::begin()+2,100); //연속메모리 기반이 아니라서 안된다
//
//	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
//		cout<<*iter<<" ";
//	//end()는 끝원소 다음을 가리킨다.
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
//	//end()는 끝원소 다음을 가리킨다.
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
//	//end()는 끝원소 다음을 가리킨다.
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
//	//end()는 끝원소 다음을 가리킨다.
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
//	lt.insert(iter,v.begin(),v.end()-1); //순차열이기만하면 모두다 삽입할 수 있다.
//
//	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
//		cout<<*iter<<" ";
//	//end()는 끝원소 다음을 가리킨다.
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
	lt.insert(iter,v.begin(),v.end()-1); //순차열이기만하면 모두다 삽입할 수 있다.

	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
		cout<<*iter<<" ";
	//end()는 끝원소 다음을 가리킨다.
	cout<<endl;
	for(vector<int>::iterator iter=v.begin();iter!=v.end();iter++)
		cout<<*iter<<" ";
	//end()는 끝원소 다음을 가리킨다.
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
//	lt.insert(iter,t.begin(),t.end()); //순차열이기만하면 모두다 삽입할 수 있다.
//
//	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
//		cout<<*iter<<" ";
//	//end()는 끝원소 다음을 가리킨다.
//	cout<<endl;
//	for(list<int>::iterator iter=t.begin();iter!=t.end();iter++)
//		cout<<*iter<<" ";
//	//end()는 끝원소 다음을 가리킨다.
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
//	lt.splice(iter,t,t.begin(),t.end()); //순차열이기만하면 모두다 삽입할 수 있다.
//
//	for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++)
//		cout<<*iter<<" ";
//	//end()는 끝원소 다음을 가리킨다.
//	cout<<endl;
//	for(list<int>::iterator iter=t.begin();iter!=t.end();iter++)
//		cout<<*iter<<" ";
//	//end()는 끝원소 다음을 가리킨다.
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
//	vector<int>::const_iterator citer = iter; //일반 iterator는 const_iterator로 변환가능하다.
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
//	vector<int>::iterator iter = citer; //안됨
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
//	vector<int>::reverse_iterator riter = iter; //변환안됨
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
//	vector<int>::reverse_iterator riter = iter; //안됨
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
//	vector<int>::iterator iter = riter.base();  //base메서드를 이용하여 일반iterator로 변환가능
//	cout<<*iter<<endl; //일반iterator는 가리키는 값과 참조하고있는 값이 같다.
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
//	vector<int>::iterator iter = riter.base();  //base메서드를 이용하여 일반iterator로 변환가능
//	cout<<*iter<<endl; //일반iterator는 가리키는 값과 참조하고있는 값이 같다. reverse_iterator는 다르다
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
//	vector<int>::iterator iter = riter.base();  //base메서드를 이용하여 reverse_iterator를 일반iterator로 변환가능
//	cout<<*iter<<endl; //일반iterator는 가리키는 값과 참조하고있는 값이 같다. reverse_iterator는 다르다.
//					   //끝표식을 출력하려해서 오류다.
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
//	reverse_iterator<vector<int>::iterator> eriter(siter); //일반iterator를 reverse_iterator로 변환
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
//	reverse_iterator<vector<int>::iterator> eriter(siter); //일반iterator를 reverse_iterator로 변환
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
//	copy(v2.begin(),v2.end(),v1.begin()); //덮어쓰기
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
//	copy(v2.begin(),v2.end(),v1.begin()); //덮어쓰기해야하는데 메모리가 2개뿐이라서 터진다.
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
//	copy(v2.begin(),v2.end(),inserter(v1,v1.begin())); //원소를 덮어쓰기 하는것이아니라 새로 삽입해주는 동작 inserter를 이용한다.
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
//	copy(v2.begin(),v2.end(),back_inserter(v1)); //원소를 덮어쓰기 하는것이아니라 새로 삽입해주는 동작 inserter를 이용한다.
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
//	copy(v2.begin(),v2.end(),front_inserter(v1)); //vector는 기본적으로 앞에다가 추가를 못함
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
//	copy(v2.begin(),v2.end(),front_inserter(v1)); //vector는 기본적으로 앞에다가 추가를 못함
//												  //list는 가능함
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
//void main() //vector와 가장 유사한 컨테이너
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
//void main() //vector와 가장 유사한 컨테이너
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
////함수객체와 iterator에는 참조변수를 쓰지않는다. 메모리가 크지않기때문에 복사해서 사용한다.
//{
//	for(;si!=ei;si++)
//	{
//		cout<<*si<<" ";
//	}
//	cout<<endl;
//}
//void main() //vector와 가장 유사한 컨테이너
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
//template <typename Iter>//옛날에는 typename을 class로 쓰기도 했다.
//void Print(Iter si,Iter ei) 
////함수객체와 iterator에는 참조변수를 쓰지않는다. 메모리가 크지않기때문에 복사해서 사용한다.
//{
//	for(;si!=ei;si++)
//	{
//		cout<<*si<<" ";
//	}
//	cout<<endl;
//}
//void main() //vector와 가장 유사한 컨테이너
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
//template <typename Iter>//옛날에는 typename을 class로 쓰기도 했다.
//void Print(Iter si,Iter ei)  //순차열을 매개변수로 받는다.iterator의 쌍이 들어감.
//	//순차열을 모두 출력하는 출력알고리즘이다.
////함수객체와 iterator에는 참조변수를 쓰지않는다. 메모리가 크지않기때문에 복사해서 사용한다.
//{
//	for(;si!=ei;si++)
//	{
//		cout<<*si<<" ";
//	}
//	cout<<endl;
//}
//template <typename Iter,typename F>
//void Print(Iter si,Iter ei,F f)  
////함수객체와 iterator에는 참조변수를 쓰지않는다. 메모리가 크지않기때문에 복사해서 사용한다.
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
//void main() //vector와 가장 유사한 컨테이너
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
//template <typename Iter>//옛날에는 typename을 class로 쓰기도 했다.
//void Print(Iter si,Iter ei)  //순차열을 매개변수로 받는다.iterator의 쌍이 들어감.
//	//순차열을 모두 출력하는 출력알고리즘이다.
////함수객체와 iterator에는 참조변수를 쓰지않는다. 메모리가 크지않기때문에 복사해서 사용한다.
//{
//	for(;si!=ei;si++)
//	{
//		cout<<*si<<" ";
//	}
//	cout<<endl;
//}
//template <typename Iter,typename F>
//void Print(Iter si,Iter ei,F f)  
////함수객체와 iterator에는 참조변수를 쓰지않는다. 메모리가 크지않기때문에 복사해서 사용한다.
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
//void main() //vector와 가장 유사한 컨테이너
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
//void main() //vector와 가장 유사한 컨테이너
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	for_each(v.begin(),v.end(),client); //for_each메서드 
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
//void main() //vector와 가장 유사한 컨테이너
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	for_each(v.begin(),v.end(),client); //for_each메서드
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
//void main() //vector와 가장 유사한 컨테이너
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
//void main() //vector와 가장 유사한 컨테이너
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
