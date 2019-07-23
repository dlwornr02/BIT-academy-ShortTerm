#include<iostream>
#include<string>
using namespace std;
class String{
	string*buf;
	int capacity;
	int len;
	int size;
public:
	String(int cap=10):capacity(cap)
	{
		size=0;
		buf=new string[cap];
	}
	void InputString()
	{
		cout<<"String : ";
		cin>>buf[size++];
	}
	void OutputString()const
	{
		for(int i=0;i<size;i++)
		cout<<"["<<i<<"]"<<":"<<buf[i]<<endl;
	}
	bool EqualsExit()const
	{
		return buf[size-1]=="exit";
	}
};
void main()
{
	String str(100);
	while(1)
	{
		str.InputString();
		if(str.EqualsExit())
			break;
	}
	str.OutputString();
}