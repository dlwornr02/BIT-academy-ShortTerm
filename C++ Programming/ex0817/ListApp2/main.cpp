#include"List.h"
#include<iostream>
using namespace std;
void main()
{
	List<int> lt;

	lt.AddBack(10);
	lt.AddBack(20);
	lt.AddBack(30);

	for(List<int>::Iterator iter = lt.Begin(); iter!=lt.End();iter++)
		cout<<*iter<<" ";
	cout<<endl;
}