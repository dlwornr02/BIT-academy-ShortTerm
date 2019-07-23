//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//void main()
//{
//	map<string,string> m;
//	m["1"]="일";
//	m["3"]="삼";
//	m["5"]="오";
//
//	map<string,string>::iterator iter = m.lower_bound("3");
//	map<string,string>::iterator liter = m.upper_bound("3");
//	cout<<(*iter).second<<endl;
//	cout<<iter->second<<endl;
//}
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(){}
//	bool operator<(const Point&arg)const
//	{
//
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//}
//struct PrintFunctor
//{
//	void operator()(const Point&pt)
//	{
//		cout <<pt.GetX()<<','<<pt.GetY()<<" ";
//	}
//};
//struct Pred
//{
//	bool operator()(const Point&pt1,const Point&pt2)
//	{
//		return pt1.GetX()<pt2.GetX();
//	}
//};
//void main()
//{
//	vector<Point>v;
//	v.push_back(Point(3,3));
//	v.push_back(Point(2,4));
//	v.push_back(Point(3,1));
//
//	sort(v.begin(),v.end(),(Pred()));
//	for_each(v.begin(),v.end(),PrintFunctor());
//
//	sort(v.begin(),v.end(),Pred());
//	for_each(v.begin(),v.end(),PrintFunctor());
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class Shape
//{
//
//public:
//	virtual ~Shape(){}
//	virtual void Draw()const=0;
//}
//class Rect : public Shape
//{
//	string str;
//public:
//	Rect(const string& n=""):str(n){}
//	void Draw()const{cout<<str<<endl;}
//};
//class Ellipse : public Shape
//{
//	string str;
//public:
//	Ellipse(const string& n=""):str(n){}
//	void Draw()const{cout<<str<<endl;}
//};
//void main()
//{
//	Shape*shapes[5] = {new Rect("사각형1"),new Ellipse("원1"),new Rect("사각형2"),new Ellipse("원2"),new Ellipse("원3")};
//
//	for(int i=0;i<5;i++)
//		shapes[i]->Draw();
//	for(int i=0;i<5;i++)
//		delete shapes[i];
//}

//#include<iostream>
//using namespace std;
//template <typename T>
//class Array
//{
//	T*arr;
//	int capacity;
//	int size;
//public:
//	Array(int cap=0):arr(0),size(0),capacity(cap){arr = new T[capacity];}
//	void Add(const T&data)
//	{
//		arr[size++]=data;
//	}
//	int Size()const{return size;}
//	const T&operator[](int idx)const{return arr[idx];}
//	void Remove(int idx)
//	{
//		for(int i = idx;i<size-1;i++)
//			arr[i] = arr[i+1];
//		size--;
//	}
//};
//void main()
//{
//	Array<int> arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	arr.Add(40);
//	arr.Add(50);
//
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<" ";
//	cout<<endl;
//
//	arr.Remove(2);
//	for(int i=0;i<arr.Size();i++)
//		cout<<arr[i]<<" ";
//	cout<<endl;
//}
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,*py;
//public:
//	Point(int x=0,int y=0):x(x)
//	{
//		py = new int(y);
//	}
//	~Point(){delete py;}
//	Point(const Point& arg):x(arg.x)
//	{
//		py = new int(*arg.py);
//	}
//	const Point& operator=(const Point&arg)
//	{
//		x=arg.x;
//		*py = *arg.py;
//		return *this;
//	}
//	void Print()const
//	{
//		cout<<x<<','<<*py<<endl;
//	}
//};
//void main()
//{
//	Point*p;
//	Point*parr;
//	p=new Point(2,3);
//	p->Print();//2,3
//
//	parr=new Point[5];
//	for(int i=0;i<5;i++)
//	{
//		parr[i] = Point(i+1,i+1);
//	}
//	for(int i=0;i<5;i++)
//		parr[i].Print();
//
//	delete p;
//	delete[]parr;
//}
//
//
//#include<iostream>
//using namespace std;
//int stack[5];
//int top = 0;
//
//void Push(int data)
//{
//}
//int Pop()
//{
//	return 0;
//}
//void main()
//{
//
//}
//
//
//#include<iostream>
//using namespace std;
//int stack[5];
//int top = 0;
//
//void Push(int data)
//{
//	stack[top++]=data;
//}
//int Pop()
//{
//	return stack[--top];
//}
//void main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	cout<<Pop()<<endl;
//	Push(40);
//	cout<<Pop()<<endl;
//	cout<<Pop()<<endl;
//	cout<<Pop()<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//int stack[5];
//int top = 0;
//
//void Push(int data)
//{
//	stack[top++]=data;
//}
//int Pop()
//{
//	return stack[--top];
//}
//void main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	cout<<Pop()<<endl;
//	cout<<Pop()<<endl;
//	cout<<Pop()<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//void Push(int stack[],int&top,int data)
//{
//	stack[top++]=data;
//}
//int Pop(int stack[],int&top)
//{
//	return stack[--top];
//}
//void main()
//{
//	int stack[5];
//	int top = 0;
//
//	Push(stack,top,10);
//	Push(stack,top,20);
//	Push(stack,top,30);
//
//	cout<<Pop(stack,top)<<endl;
//	cout<<Pop(stack,top)<<endl;
//	cout<<Pop(stack,top)<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//void Push(int stack[],int&top,int data)
//{
//	stack[top++]=data;
//}
//int Pop(int stack[],int&top)
//{
//	return stack[--top];
//}
//void main()
//{
//	int stack[5];
//	int top = 0;
//
//	int stack2[5];
//	int top2=0;
//				   
//	Push(stack,top,10);
//	Push(stack,top,20);
//	Push(stack,top,30);
//
//	cout<<Pop(stack,top)<<endl;
//	cout<<Pop(stack,top)<<endl;
//	cout<<Pop(stack,top)<<endl;
//
//	Push(stack2,top2,100);
//	Push(stack2,top2,200);
//	Push(stack2,top2,300);
//
//	cout<<Pop(stack2,top2)<<endl;
//	cout<<Pop(stack2,top2)<<endl;
//	cout<<Pop(stack2,top2)<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//struct Stack
//{
//	int stack[5];
//	int top;
//};
//void Push(Stack*ps,int data)
//{
//	ps->stack[ps->top++]=data;
//}
//int Pop(Stack*ps)
//{
//	return ps->stack[--ps->top];
//}
////////////////////////////////////////////////△||▽
//void main()
//{
//	Stack st={0};
//	Stack st2={0};
//
//	Push(&st,10);
//	Push(&st,20);
//	Push(&st,30);
//
//	cout<<Pop(&st)<<endl;
//	cout<<Pop(&st)<<endl;
//	cout<<Pop(&st)<<endl;
//
//	Push(&st2,100);
//	Push(&st2,200);
//	Push(&st2,300);
//		 
//	cout<<Pop(&st2)<<endl;
//	cout<<Pop(&st2)<<endl;
//	cout<<Pop(&st2)<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//struct Stack
//{
//	int stack[5];
//	int top;
//};
//void Push(Stack*ps,int data)
//{
//	ps->stack[ps->top++]=data;
//}
//int Pop(Stack*ps)
//{
//	return ps->stack[--ps->top];
//}
//void InitStack(Stack*ps)
//{
//	ps->top=0;
//}
//void UninitStack(Stack*ps)
//{
//	ps->top=0;
//}
////////////////////////////////////////////////△||▽
//void main()
//{
//	Stack st;
//	Stack st2;
//
//	InitStack(&st);
//	InitStack(&st2);
//
//	Push(&st,10);
//	Push(&st,20);
//	Push(&st,30);
//
//	cout<<Pop(&st)<<endl;
//	cout<<Pop(&st)<<endl;
//	cout<<Pop(&st)<<endl;
//
//	Push(&st2,100);
//	Push(&st2,200);
//	Push(&st2,300);
//
//	cout<<Pop(&st2)<<endl;
//	cout<<Pop(&st2)<<endl;
//	cout<<Pop(&st2)<<endl;
//
//	UninitStack(&st);
//	UninitStack(&st2);
//}
//
//
//#include<iostream>
//using namespace std;
//struct Stack
//{
//	int*stack;
//	int top;
//	int capacity;
//};
//void Push(Stack*ps,int data)
//{
//	ps->stack[ps->top++]=data;
//}
//int Pop(Stack*ps)
//{
//	return ps->stack[--ps->top];
//}
//void InitStack(Stack*ps)
//{
//	ps->capacity=100;
//	ps->top=0;
//	ps->stack = new int[ps->capacity];
//}
//void UninitStack(Stack*ps)
//{
//	delete[] ps->stack;
//}
////////////////////////////////////////////////△||▽
//void main()
//{
//	Stack st;
//	Stack st2;
//
//	InitStack(&st);
//	InitStack(&st2);
//
//	Push(&st,10);
//	Push(&st,20);
//	Push(&st,30);
//
//	cout<<Pop(&st)<<endl;
//	cout<<Pop(&st)<<endl;
//	cout<<Pop(&st)<<endl;
//
//	Push(&st2,100);
//	Push(&st2,200);
//	Push(&st2,300);
//
//	cout<<Pop(&st2)<<endl;
//	cout<<Pop(&st2)<<endl;
//	cout<<Pop(&st2)<<endl;
//
//	UninitStack(&st);
//	UninitStack(&st2);
//}
//
//
//#include<iostream>
//using namespace std;
//struct Stack
//{
//	int*stack;
//	int top;
//	int capacity;
//};
//void Push(Stack*ps,int data)
//{
//	if(ps->top < ps->capacity)
//		ps->stack[ps->top++]=data;
//}
//int Pop(Stack*ps)
//{
//	return ps->stack[--ps->top];
//}
//void InitStack(Stack*ps, int cap)
//{
//	ps->capacity=cap;
//	ps->top=0;
//	ps->stack = new int[ps->capacity];
//}
//void UninitStack(Stack*ps)
//{
//	delete[] ps->stack;
//}
////////////////////////////////////////////////△||▽
//void main()
//{
//	Stack st;
//
//	InitStack(&st, 100);
//
//	Push(&st,10);
//	Push(&st,20);
//	Push(&st,30);
//
//	cout<<Pop(&st)<<endl;
//	cout<<Pop(&st)<<endl;
//	cout<<Pop(&st)<<endl;
//
//	UninitStack(&st);
//}
//
//
//#include<iostream>
//using namespace std;
//class Stack
//{
//	int*stack;
//	int top;
//	int capacity;
//public:
//	Stack(int cap=100)
//	{
//	capacity=cap;
//	top=0;
//	stack = new int[capacity];
//	}
//	~Stack()
//	{
//		delete[] stack;
//	}
//	void Push(int data)
//	{
//		if(top < capacity)
//			stack[top++]=data;
//	}
//	int Pop()
//	{
//		return stack[--top];
//	}
//};
////////////////////////////////////////////////△||▽
//void main()
//{
//	Stack st;
//
//	st.Push(10);
//	st.Push(20);
//	st.Push(30);
//
//	cout<<st.Pop()<<endl;
//	cout<<st.Pop()<<endl;
//	cout<<st.Pop()<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class Stack
//{
//	int*stack;
//	int top;
//	int capacity;
//public:
//	Stack(int cap=100)
//	{
//	capacity=cap;
//	top=0;
//	stack = new int[capacity];
//	}
//	~Stack()
//	{
//		delete[] stack;
//	}
//	void Push(int data)
//	{
//		if(top < capacity)
//			stack[top++]=data;
//	}
//	int Top()const
//	{
//		return stack[top-1];
//	}
//	void Pop()
//	{
//		--top;
//	}
//};
////////////////////////////////////////////////△||▽
//void main()
//{
//	Stack st;
//
//	st.Push(10);
//	st.Push(20);
//	st.Push(30);
//
//	cout<<st.Top()<<endl;
//	st.Pop();
//	cout<<st.Top()<<endl;
//	st.Pop();
//	cout<<st.Top()<<endl;
//	st.Pop();
//}
//
//
//#include<iostream>
//using namespace std;
//template <typename T>
//class Stack
//{
//	T*stack;
//	int top;
//	int capacity;
//public:
//	Stack(int cap=100)
//	{
//	capacity=cap;
//	top=0;
//	stack = new T[capacity];
//	}
//	~Stack()
//	{
//		delete[] stack;
//	}
//	void Push(const T&data)
//	{
//		if(top < capacity)
//			stack[top++]=data;
//	}
//	const T& Top()const
//	{
//		return stack[top-1];
//	}
//	void Pop()
//	{
//		--top;
//	}
//};
////////////////////////////////////////////////△||▽
//void main()
//{
//	Stack<double> st;
//
//	st.Push(10.1);
//	st.Push(20.2);
//	st.Push(30.3);
//
//	cout<<st.Top()<<endl;
//	st.Pop();
//	cout<<st.Top()<<endl;
//	st.Pop();
//	cout<<st.Top()<<endl;
//	st.Pop();
//}
//
//
//#include<iostream>
//#include<deque>
//using namespace std;
//template < typename T,typename Cont_=deque<T> >
//class Stack
//{
//	Cont_ stack;
//public:
//	Stack(){}
//	~Stack(){}
//	void Push(const T&data)
//	{
//		stack.push_back(data);
//	}
//	const T& Top()const
//	{
//		return stack.back();
//	}
//	void Pop()
//	{
//		stack.pop_back();
//	}
//};
////////////////////////////////////////////////△||▽
//void main()
//{
//	Stack<double> st;
//
//	st.Push(10.1);
//	st.Push(20.2);
//	st.Push(30.3);
//
//	cout<<st.Top()<<endl;
//	st.Pop();
//	cout<<st.Top()<<endl;
//	st.Pop();
//	cout<<st.Top()<<endl;
//	st.Pop();
//}
//
//
//#include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//template < typename T,typename Cont_=deque<T> >
//class Stack
//{
//	Cont_ stack;
//public:
//	Stack(){}
//	~Stack(){}
//	void Push(const T&data)
//	{
//		stack.push_back(data);
//	}
//	const T& Top()const
//	{
//		return stack.back();
//	}
//	void Pop()
//	{
//		stack.pop_back();
//	}
//};
////////////////////////////////////////////////△||▽
//void main()
//{
//	Stack<double,list<double>> st;
//
//	st.Push(10.1);
//	st.Push(20.2);
//	st.Push(30.3);
//
//	cout<<st.Top()<<endl;
//	st.Pop();
//	cout<<st.Top()<<endl;
//	st.Pop();
//	cout<<st.Top()<<endl;
//	st.Pop();
//}
//
//
//#include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//int que[5];
//int front=0;
//int rear=0;
//
//void Push(int data)
//{
//	que[rear++]=data;
//}
//int Pop()
//{
//	return que[front++];
//}
//
//void main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	cout<<Pop()<<endl;
//	cout<<Pop()<<endl;
//	cout<<Pop()<<endl;
//}
//
//
//#include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//int que[5];
//int front=0;
//int rear=0;
//
//void Push(int data)
//{
//	//rear=(rear+1)%5;
//	que[rear]=data;
//}
//int Pop()
//{
//	//front=(front+1)%5;
//	return que[front];
//}
//
//void main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	cout<<Pop()<<endl;
//	cout<<Pop()<<endl;
//	cout<<Pop()<<endl;
//
//	Push(10);
//	Push(20);
//	Push(30);
//
//	cout<<Pop()<<endl;
//	cout<<Pop()<<endl;
//	cout<<Pop()<<endl;
//}
//
////////////////////////////////////////////////////////////////////
//#include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//int que[5];
//int front=0;
//int rear=0;
//
//void Push(int data)
//{
//	if(front==(rear+1)%5)
//		que[rear = (rear+1)%5]=data;
//}
//int Pop()
//{
//	if(front==rear)
//		throw"front==rear";
//		
//	return que[front=(front+1)%5];
//	
//}
//
//void main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	cout<<Pop()<<endl;
//	cout<<Pop()<<endl;
//	cout<<Pop()<<endl;
//
//	Push(10);
//	Push(20);
//	Push(30);
//
//	cout<<Pop()<<endl;
//	cout<<Pop()<<endl;
//	cout<<Pop()<<endl;
//}
//
//
//#include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//struct Queue{
//int*que;
//int front;
//int rear;
//int capacity;
//};
//void InitQueue(Queue*q,int p)
//{
//	q->capacity = p;
//	q->que=new int[q->capacity];
//}
//void Push(Queue*q,int data)
//{
//	if(q->front==(q->rear+1)%q->capacity)
//		return;
//		q->que[q->rear = (q->rear+1)%q->capacity]=data;
//}
//int Pop(Queue*q)
//{
//	if(q->front==q->rear)
//		throw"front==rear";
//		
//	return q->que[q->front=(q->front+1)%q->capacity];
//	
//}
//void UninitQueue(Queue*q)
//{
//	delete[]q->que;
//}
//
//void main()
//{
//	Queue q;
//
//	InitQueue(&q,100);
//	Push(&q,10);
//	Push(&q,20);
//	Push(&q,30);
//
//	cout<<Pop(&q)<<endl;
//	cout<<Pop(&q)<<endl;
//	cout<<Pop(&q)<<endl;
//
//	UninitQueue(&q);
//}
//
//
//#include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//template <typename T>
//class Queue{
//	T*que;
//	int front;
//	int rear;
//	int capacity;
//public:
//	Queue(int cap=100)
//	{
//		capacity = cap;
//		que=new T[capacity];
//	}
//	void Push(const T& data)
//	{
//		if(front==(rear+1)%capacity)
//			return;
//		que[rear = (rear+1)%capacity]=data;
//	}
//	const T& Pop()
//	{
//		if(front==rear)
//			throw"front==rear";
//
//		return que[front=(front+1)%capacity];
//
//	}
//	~Queue()
//	{
//		delete[]que;
//	}
//};
//void main()
//{
//	Queue<int> q;
//
//	
//	q.Push(10);
//	q.Push(20);
//	q.Push(30);
//
//	cout<<q.Pop()<<endl;
//	cout<<q.Pop()<<endl;
//	cout<<q.Pop()<<endl;
//
//}
//
//
//#include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//template <typename T>
//class Queue{
//	T*que;
//	int front;
//	int rear;
//	int capacity;
//public:
//	Queue(int cap=100)
//	{
//		capacity = cap;
//		que=new T[capacity];
//	}
//	~Queue()
//	{
//		delete[]que;
//	}
//	void Push(const T& data)
//	{
//		if(front==(rear+1)%capacity)
//			return;
//		que[rear = (rear+1)%capacity]=data;
//	}
//	void Pop()
//	{
//		if(front==rear)
//			throw"front==rear";
//
//		front=(front+1)%capacity;
//
//	}
//	const T& Front()
//	{
//		return que[(front+1)%capacity];
//	}
//};
//void main()
//{
//	Queue<int,deque<int>> q;
//
//	
//	q.Push(10);
//	q.Push(20);
//	q.Push(30);
//
//	cout<<q.Front()<<endl;
//	q.Pop();
//	cout<<q.Front()<<endl;
//	q.Pop();
//	cout<<q.Front()<<endl;
//	q.Pop();
//}


////////////////////////과제 컨테이너 이용해서 구현 ㄱㄱ(deque,list등)
#include<iostream>
#include<deque>
#include<list>
using namespace std;
template <typename T>
class Queue{
	T*que;
	int front;
	int rear;
	int capacity;
public:
	Queue(int cap=100)
	{
		capacity = cap;
		que=new T[capacity];
	}
	~Queue()
	{
		delete[]que;
	}
	void Push(const T& data)
	{
		if(front==(rear+1)%capacity)
			return;
		que[rear = (rear+1)%capacity]=data;
	}
	void Pop()
	{
		if(front==rear)
			throw"front==rear";

		front=(front+1)%capacity;

	}
	const T& Front()
	{
		return que[(front+1)%capacity];
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
