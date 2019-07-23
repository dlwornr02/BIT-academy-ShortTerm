#include<iostream>
#include<deque>
#include<list>
using namespace std;
template <typename T,typename Cont=deque<T>>
class Queue
{
	Cont que;
public:
	Queue(){}
	~Queue(){}
	void Push(const T& data)
	{
		que.push_back(data);
	}
	const T& Front()const
	{   
		return que.front();
	}
	void Pop()
	{
		que.pop_front();
	}
};
void main()
{
	Queue<int,deque<int>> q;
	q.Push(10);
	q.Push(20);
	q.Push(30);

	cout<<q.Front()<<endl;
	q.Pop();
	cout<<q.Front()<<endl;
	q.Pop();
	cout<<q.Front()<<endl;
	q.Pop();
}