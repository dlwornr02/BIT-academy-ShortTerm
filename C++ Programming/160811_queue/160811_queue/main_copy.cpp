//#include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//int que[5];
//int front=0;
//int rear=0;
//void Push(int data)
//{
//   que[rear++]=data;
//}
//int Pop()
//{
//   return que[front++];
//}
//void main()
//{
//   Push(10);
//   Push(20);
//   Push(30);
//
//   cout<<Pop()<<endl;
//   cout<<Pop()<<endl;
//   cout<<Pop()<<endl;
//}


//include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//int que[5];
//int front=0;
//int rear=0;
//void Push(int data)
//{
//   que[rear++]=data;
//}
//int Pop()
//{
//   return que[front++];
//}
//void main()
//{
//   Push(10);
//   Push(20);
//   Push(30);
//
//   cout<<Pop()<<endl;
//   cout<<Pop()<<endl;
//   cout<<Pop()<<endl;
//
//   Push(10);
//   Push(20);
//   Push(30);
//
//   cout<<Pop()<<endl;
//   cout<<Pop()<<endl;
//   cout<<Pop()<<endl;
//}

//#include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//int que[5];
//int front=0;
//int rear=0;
//void Push(int data)
//{
//   if(front==(rear+1)%5)
//      return ;
//   que[rear = (rear+1)%5]=data;
//}
//int Pop()
//{
//   if(front==rear)
//      throw "front==rear";      
//   return que[front = (front+1)%5];
//}
//void main()
//{
//   Push(10);
//   Push(20);
//   Push(30);
//
//   cout<<Pop()<<endl;
//   cout<<Pop()<<endl;
//   cout<<Pop()<<endl;
//
//   Push(10);
//   Push(20);
//   Push(30);
//
//   cout<<Pop()<<endl;
//   cout<<Pop()<<endl;
//   cout<<Pop()<<endl;
//}

//#include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//struct Queue
//{
//int* que;
//int front;
//int rear;
//int capacity;
//};
//void InitQueue(Queue* q,int cap)
//{
//   q->capacity = cap;
//   q->que=new int[q->capacity];
//}
//void UninitQueue(Queue* q)
//{
//   delete [](q->que);
//}
//void Push(Queue* q,int data)
//{
//   if(q->front==(q->rear+1)%q->capacity)
//      return ;
//   q->que[q->rear = (q->rear+1)%q->capacity]=data;
//}
//int Pop(Queue* q)
//{
//   if(q->front==q->rear)
//      throw "front==rear";      
//   return q->que[q->front = (q->front+1)%q->capacity];
//}
//void main()
//{
//   Queue q;
//   InitQueue(&q,100);
//   Push(&q,10);
//   Push(&q,20);
//   Push(&q,30);
//
//   cout<<Pop(&q)<<endl;
//   cout<<Pop(&q)<<endl;
//   cout<<Pop(&q)<<endl;
//
//   UninitQueue(&q);
//}

//#include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//template <typename T>
//class Queue
//{
//   T* que;
//   int front;
//   int rear;
//   int capacity;
//public:
//   Queue(int cap=100):front(0),rear(0)
//   {
//      capacity = cap;
//      que=new T[capacity];
//   }
//   ~Queue()
//   {
//      delete []que;
//   }
//   void Push(const T& data)
//   {
//      if(front == (rear+1)%capacity)
//         return ;
//      que[rear = (rear+1)%capacity]=data;
//   }
//   const T& Pop()
//   {
//      if(front==rear)
//         throw "front==rear";      
//      return que[front = (front+1)%capacity];
//   }
//};
//void main()
//{
//   Queue<int> q;
//   q.Push(10);
//   q.Push(20);
//   q.Push(30);
//
//   cout<<q.Pop()<<endl;
//   cout<<q.Pop()<<endl;
//   cout<<q.Pop()<<endl;
//}

//#include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//template <typename T>
//class Queue
//{
//   T* que;
//   int front;
//   int rear;
//   int capacity;
//public:
//   Queue(int cap=100):front(0),rear(0)
//   {
//      capacity = cap;
//      que=new T[capacity];
//   }
//   ~Queue()
//   {
//      delete []que;
//   }
//   void Push(const T& data)
//   {
//      if(front == (rear+1)%capacity)
//         return ;
//      que[rear = (rear+1)%capacity]=data;
//   }
//   const T& Front()const
//   {   
//      return que[(front+1)%capacity];
//   }
//   void Pop()
//   {
//      front=(front+1)%capacity;
//   }
//};
//void main()
//{
//   Queue<int> q;
//   q.Push(10);
//   q.Push(20);
//   q.Push(30);
//
//   cout<<q.Front()<<endl;
//   q.Pop();
//   cout<<q.Front()<<endl;
//   q.Pop();
//   cout<<q.Front()<<endl;
//   q.Pop();
//}


//#include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//template <typename T>
//class Queue
//{
//   T* que;
//   int front;
//   int rear;
//   int capacity;
//public:
//   Queue(int cap=100):front(0),rear(0)
//   {
//      capacity = cap;
//      que=new T[capacity];
//   }
//   ~Queue()
//   {
//      delete []que;
//   }
//   void Push(const T& data)
//   {
//      if(front == (rear+1)%capacity)
//         return ;
//      que[rear = (rear+1)%capacity]=data;
//   }
//   const T& Front()const
//   {   
//      return que[(front+1)%capacity];
//   }
//   void Pop()
//   {
//      front=(front+1)%capacity;
//   }
//};
//void main()
//{
//   Queue<int> q;
//   
//   q.Push(10);
//   q.Push(20);
//   q.Push(30);
//
//   cout<<q.Front()<<endl;
//   q.Pop();
//   cout<<q.Front()<<endl;
//   q.Pop();
//   cout<<q.Front()<<endl;
//   q.Pop();
//}

//
//#include<iostream>
//#include<deque>
//#include<list>
//using namespace std;
//template <typename T,typename Cont=deque<T>>
//class Queue
//{
//	Cont que;
//public:
//	Queue(){}
//	~Queue(){}
//	void Push(const T& data)
//	{
//		que.push_back(data);
//	}
//	const T& Front()const
//	{   
//		return que.front();
//	}
//	void Pop()
//	{
//		que.pop_front();
//	}
//};
//void main()
//{
//	Queue<int,deque<int>> q;
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