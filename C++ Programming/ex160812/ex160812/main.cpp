//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void main()
//{
//	Node n1={10,NULL};
//	Node n2={20,NULL};
//	Node n3={30,NULL};
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void main()
//{
//	Node n1={10,NULL};
//	Node n2={20,NULL};
//	Node n3={30,NULL};
//
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n1;
//
//	cout<<n1.data<<endl;
//	cout<<n2.data<<endl;
//	cout<<n3.data<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void main()
//{
//	Node n1={10,NULL};
//	Node n2={20,NULL};
//	Node n3={30,NULL};
//
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n1;
//
//	Node*p = &n1;
//
//	cout<<p->data<<endl;
//	cout<<p->link->data<<endl;
//	cout<<p->link->link->data<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void main()
//{
//	Node n1={10,NULL};
//	Node n2={20,NULL};
//	Node n3={30,NULL};
//
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n1;
//
//	Node*p = &n1;
//
//	cout<<p->data<<endl;
//	p=p->link;  ////////////////////////////////////짱중요 중요중요중요중요중요중요중요중요
//				/////////////////선형(순차적인연결)이든 비선형(ㄹㅇ나ㅣ렁니ㅏㅓㅇ니ㅏ)이든 중요하다.
//	cout<<p->data<<endl;
//	p=p->link;
//	cout<<p->data<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void main()
//{
//	Node n1={10,NULL};
//	Node n2={20,NULL};
//	Node n3={30,NULL};
//
//	n1.link = &n2;
//	n2.link = &n3;
//
//	for(Node*p = &n1;p!=NULL;p=p->link)
//		cout<<p->data<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void PrintNode(Node*head)
//{
//	for(Node*p = head;p!=NULL;p=p->link)
//		cout<<p->data<<endl;
//}
//void main()
//{
//	Node n1={10,NULL};
//	Node n2={20,NULL};
//	Node n3={30,NULL};
//
//	n1.link = &n2;
//	n2.link = &n3;
//
//	PrintNode(&n1);
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void PrintNode(Node*head)
//{
//	for(Node*p = head;p!=NULL;p=p->link)
//		cout<<p->data<<endl;
//}
//void main()
//{
//	Node*head = NULL;
//	head = new Node;
//	head->data = 10;
//	head->link = NULL;
//
//	PrintNode(head);
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void PrintNode(Node*head)
//{
//	for(Node*p = head;p!=NULL;p=p->link)
//		cout<<p->data<<endl;
//}
//void main()
//{
//	Node*head = NULL;
//	Node*p = NULL;
//
//	p = new Node;
//	p->data = 10;
//	p->link = NULL;
//	head = p;
//
//	p = new Node;
//	p->data = 20;
//	p->link = NULL;
//	head->link = p;
//
//	p = new Node;
//	p->data = 30;
//	p->link = NULL;
//	head->link->link = p;
//
//	p = new Node;
//	p->data = 40;
//	p->link = NULL;
//	head->link->link->link = p;
//
//	p = new Node;
//	p->data = 50;
//	p->link = NULL;
//	head->link->link->link->link = p;
//	
//
//	PrintNode(head);
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void PrintNode(Node*head)
//{
//	for(Node*p = head;p!=NULL;p=p->link)
//		cout<<p->data<<endl;
//}
//Node* AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//void main()
//{
//	Node*head = NULL;
//	Node*p = NULL;
//
//	p = AllocNode(10);
//	head = p;
//
//	p = AllocNode(20);
//	head->link = p;
//
//	p = AllocNode(30);
//	head->link->link = p;
//
//	p = AllocNode(40);
//	head->link->link->link = p;
//
//	p = AllocNode(50);
//	head->link->link->link->link = p;
//	
//	PrintNode(head);
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void PrintNode(Node*head)
//{
//	for(Node*p = head;p!=NULL;p=p->link)
//		cout<<p->data<<endl;
//}
//Node* AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//void main()
//{
//	Node*head = NULL;
//	Node*p = NULL;
//
//	p = AllocNode(10);
//	head = p;
//
//	p = AllocNode(20);//두개는 node에 node를 달아주는 역할을 한다.
//	head->link = p;
//
//	p = AllocNode(30);
//	head->link->link = p;
//
//	p = AllocNode(40);
//	head->link->link->link = p;
//
//	p = AllocNode(50);
//	head->link->link->link->link = p;
//	
//	PrintNode(head);
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void PrintNode(Node*head)
//{
//	for(Node*p = head;p!=NULL;p=p->link)
//		cout<<p->data<<endl;
//}
//Node* AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//void AddNode(Node*&head,int data)
//{
//	Node*p=head;
//	while(p->link)
//		p=p->link;
//	p->link = AllocNode(data);
//}
//void main()
//{
//	Node*head = NULL;
//	Node*p = NULL;
//
//	p = AllocNode(10);
//	head = p;
//
//	AddNode(head,20);
//	AddNode(head,30);
//	AddNode(head,40);
//	AddNode(head,50);
//	
//	PrintNode(head);
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void PrintNode(Node*head)
//{
//	for(Node*p = head;p!=NULL;p=p->link)
//		cout<<p->data<<endl;
//}
//Node* AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//void AddNode(Node*&head,int data)
//{
//	Node*p=head;
//	if(head == NULL)
//	{
//		head = AllocNode(data);
//		return;
//	}
//	while(p->link)
//		p=p->link;
//	p->link = AllocNode(data);
//}
//void main()
//{
//	Node*head = NULL;
//
//	AddNode(head,10);
//	AddNode(head,20);
//	AddNode(head,30);
//	AddNode(head,40);
//	AddNode(head,50);
//	
//	PrintNode(head);
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void PrintNode(Node*head)
//{
//	for(Node*p = head;p!=NULL;p=p->link)
//		cout<<p->data<<endl;
//}
//Node* AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//void AddNode(Node**head,int data)
//{
//	Node*p=*head;
//	if(*head == NULL)
//	{
//		*head = AllocNode(data);
//		return;
//	}
//	while(p->link)
//		p=p->link;
//	p->link = AllocNode(data);
//}
//void main()
//{
//	Node*head = NULL;
//
//	AddNode(&head,10);
//	AddNode(&head,20);
//	AddNode(&head,30);
//	AddNode(&head,40);
//	AddNode(&head,50);
//	
//	PrintNode(head);
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void PrintNode(Node*head)
//{
//	for(Node*p = head;p!=NULL;p=p->link)
//		cout<<p->data<<endl;
//}
//Node* AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//Node* AddNode(Node*head,int data)
//{
//	Node*p=head;
//	if(head == NULL)
//	{
//		return AllocNode(data);
//	}
//	while(p->link)
//		p=p->link;
//	p->link = AllocNode(data);
//	return head;
//}
//void main()
//{
//	Node*head = NULL;
//
//	head = AddNode(head,10);
//	head = AddNode(head,20);
//	head = AddNode(head,30);
//	head = AddNode(head,40);
//	head = AddNode(head,50);
//
//	PrintNode(head);
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void PrintNode(Node*head)
//{
//	for(Node*p = head;p!=NULL;p=p->link)
//		cout<<p->data<<endl;
//}
//Node* AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//Node* AddNode(Node*head,int data)
//{
//	Node*p=head;
//	if(head == NULL)
//	{
//		return AllocNode(data);
//	}
//	Node*n = AllocNode(data);
//	n->link = head;
//	return n;
//}
//void main()
//{
//	Node*head = NULL;
//
//	head = AddNode(head,10);
//	head = AddNode(head,20);
//	head = AddNode(head,30);
//	head = AddNode(head,40);
//	head = AddNode(head,50);
//
//	PrintNode(head);
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void PrintNode(Node*head)
//{
//	for(Node*p = head;p!=NULL;p=p->link)
//		cout<<p->data<<endl;
//}
//Node* AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//Node* AddNode(Node*head,int data)
//{
//	Node*p=head;
//	if(head == NULL)
//	{
//		return AllocNode(data);
//	}
//	Node*n = AllocNode(data);
//	n->link = head;
//	return n;
//}
//void main()
//{
//	Node*head = NULL;
//
//	head = AddNode(head,10);
//	head = AddNode(head,20);
//	head = AddNode(head,30);
//	head = AddNode(head,40);
//	head = AddNode(head,50);
//
//	PrintNode(head);
//
//	for(Node*p = head;p;)
//	{
//		Node*pn = p->link;
//		delete p;
//		p=pn;
//	}
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//void PrintNode(Node*head)
//{
//	for(Node*p = head;p!=NULL;p=p->link)
//		cout<<p->data<<endl;
//}
//Node* AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//Node* AddNode(Node*head,int data)
//{
//	Node*p=head;
//	if(head == NULL)
//	{
//		return AllocNode(data);
//	}
//	Node*n = AllocNode(data);
//	n->link = head;
//	return n;
//}
//void DestroyNode(Node*head)
//{
//	for(Node*p = head;p;)
//	{
//		Node*pn = p->link;
//		delete p;
//		p=pn;
//	}
//}
//
//void main()
//{
//	Node*head = NULL;
//
//	head = AddNode(head,10);
//	head = AddNode(head,20);
//	head = AddNode(head,30);
//	head = AddNode(head,40);
//	head = AddNode(head,50);
//
//	PrintNode(head);
//
//	DestroyNode(head);
//}
//
//
//#include<iostream>
//using namespace std;
//void c()
//{
//	cout<<"c"<<endl;
//}
//void b()
//{
//	c();
//	cout<<"b"<<endl;
//}
//void a()
//{
//	b();
//	cout<<"a"<<endl;
//}
//void main()
//{
//	a();
//	cout<<"main"<<endl;
//
//}
//
//
//#include<iostream>
//using namespace std;
//void c()
//{
//	cout<<"c"<<endl;
//}
//void b()
//{
//	cout<<"b"<<endl;
//	c();
//}
//void a()
//{
//	cout<<"a"<<endl;
//	b();
//}
//void main()
//{
//	cout<<"main"<<endl;
//	a();
//}
//
//
//#include<iostream>
//using namespace std;
//void Print(int n)
//{
//	cout<<n<<endl;
//	Print(n-1); //종료조건이 없어서 완벽한 재귀함수가 아니다.
//				//자신의 함수를 다시 호출하지않는 것이 종료조건이다.
//}
//void main()
//{
//	Print(3);
//}
//
//
//#include<iostream>
//using namespace std;
//void Print(int n)
//{
//	cout<<n<<endl;
//	if(n>0)
//		Print(n-1);
//}
//void main()
//{
//	Print(3);
//}
//
//
//#include<iostream>
//using namespace std;
//void Print(int n)
//{
//	cout<<n<<endl;
//	if(n>0)
//		Print(n);  //종료조건에 맞게 인수를 넣어줘야한다.
//					//종료조건에 값이 수렴해야한다.
//}
//void main()
//{
//	Print(3);
//}
//
//
//#include<iostream>
//using namespace std;
//void Print(int n)
//{
//	cout<<"+"<<n<<endl;
//	if(n>0)
//		Print(n-1);  //종료조건에 맞게 인수를 넣어줘야한다.
//					//종료조건에 값이 수렴해야한다.
//	cout<<"-"<<n<<endl;
//}
//void main()
//{
//	Print(3);
//}
//
//
//#include<iostream>
//using namespace std;
//void Print(int n)
//{
//	cout<<"+"<<n<<endl;
//	if(n>0)
//	{	Print(n-1);  //종료조건에 맞게 인수를 넣어줘야한다.
//		Print(n-1);  //종료조건에 맞게 인수를 넣어줘야한다.
//					//종료조건에 값이 수렴해야한다.
//	}
//	cout<<"-"<<n<<endl;
//}
//void main()
//{
//	Print(3);
//}
//
//
//#include<iostream>
//using namespace std;
//void Print(int n)
//{
//	cout<<"+"<<n<<endl;
//	if(n>0)
//	{	Print(n-1);
//		Print(n-2); 
//		Print(n-3);
//	}
//	cout<<"-"<<n<<endl;
//}
//void main()
//{
//	Print(100);
//}
//
//
//#include<iostream>
//using namespace std;
//void Print(int n)
//{
//	cout<<"+"<<n<<endl;
//	if(n>0)
//	{
//		for(int i = 0; i<n ; i++) //  <=  이면 재귀함수가 아니다.
//			Print(i);
//	}
//	cout<<"-"<<n<<endl;
//}
//void main()
//{
//	Print(3);
//}
//
//
//#include<iostream>
//using namespace std;
//int Factorial(int n)
//{
//	return n==1 ? 1 : Factorial(n-1)*n;
//}
//void main()
//{
//	cout<<Factorial(5)<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//void Factorial(int n,int*presult)
//{
//	if(n==1)
//		*presult = 1;
//	else
//	{
//		int r;
//		Factorial(n-1,&r);
//		*presult = r*n;
//	}
//}
//void main()
//{
//	int result;
//	Factorial(3,&result);
//	cout<<result<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//void Factorial(int n,int*presult)
//{
//	if(n==1)
//		*presult = 1;
//	else
//	{
//		Factorial(n-1,presult);
//		*presult = *presult*n;
//	}
//}
//void main()
//{
//	int result;
//	Factorial(3,&result);
//	cout<<result<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//void Factorial(int n,int*presult)
//{
//	if(n==1)
//		*presult = 1;
//	else
//	{
//		Factorial(n-1,presult);
//		*presult = *presult*n;
//	}
//}
//void main()
//{
//	int result;
//	Factorial(3,&result);
//	cout<<result<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//int Fibonacci(int n)
//{
//	if(n==1)
//		return 1;
//	else if(n==2)
//		return 2;
//	else
//		return Fibonacci(n-1)+Fibonacci(n-2);
//	return 0;
//}
//void main()
//{
//	cout<<Fibonacci(5)<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//void Fibonacci(int n,int*result)
//{
//	if(n==1)
//		*result=1;
//	else if(n==2)
//		*result=2;
//	else
//	{
//		int n_1,n_2;
//		Fibonacci(n-1,&n_1);
//		Fibonacci(n-2,&n_2);
//		*result=n_1 + n_2;
//	}
//}
//void main()
//{
//	int result;
//	Fibonacci(5,&result);
//	cout<<result<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//void Fibonacci(int n,int*result)
//{
//	if(n==1)
//		*result=1;
//	else if(n==2)
//		*result=2;
//	else
//	{
//		int n_1,n_2;
//		Fibonacci(n-1,&n_1);
//		Fibonacci(n-2,&n_2);
//		*result=n_1 + n_2;
//	}
//}
//void main()
//{
//	int result;
//	Fibonacci(5,&result);
//	cout<<result<<endl;
//}
//
//
//#include<iostream>
//#include<windows.h>
//using namespace std;
//int map[10][10]=
//{
//	0,0,0,0,0,0,0,0,0,0,
//	1,1,0,0,1,1,1,0,0,0,
//	0,1,0,1,1,0,1,0,1,1,
//	0,1,1,1,0,0,1,0,1,0,
//	0,0,0,1,0,0,0,0,1,0,
//	0,0,0,1,0,0,0,0,1,0,
//	0,0,0,1,1,1,1,1,1,0,
//	0,0,0,0,1,0,0,0,1,0,
//	0,1,1,1,1,0,0,5,1,0,
//	0,1,0,1,0,0,0,0,0,0,
//};
//void PrintMap(int map[][10])
//{
//	system("cls");
//	for(int i=0;i<10;++i)
//	{
//		for(int j = 0 ; j<10;j++)
//			cout<<map[i][j]<<" ";
//		cout<<endl;
//	}
//	Sleep(300);
//
//}
//void main()
//{
//	for(int i = 0;i<5;i++)
//		PrintMap(map);
//}
//
//
//#include<iostream>
//#include<windows.h>
//using namespace std;
//int map[10][10]=
//{
//	0,0,0,0,0,0,0,0,0,0,
//	1,1,0,0,1,1,1,0,0,0,
//	0,1,0,1,1,0,1,0,1,1,
//	0,1,1,1,0,0,1,0,1,0,
//	0,0,0,1,0,0,0,0,1,0,
//	0,0,0,1,0,0,0,0,1,0,
//	0,0,0,1,1,1,1,1,1,0,
//	0,0,0,0,1,0,0,0,1,0,
//	0,1,1,1,1,0,0,5,1,0,
//	0,1,0,1,0,0,0,0,0,0,
//};
//void PrintMap(int map[][10])
//{
//	system("cls");
//	for(int i=0;i<10;++i)
//	{
//		for(int j = 0 ; j<10;j++)
//			cout<<map[i][j]<<" ";
//		cout<<endl;
//	}
//	Sleep(300);
//
//}
//void Maze(int i,int j,int map[][10])
//{
//	if(i<0 || 10<=i || j<0 || j>=10)
//		return;
//	if(map[i][j]==5)
//	{
//		map[i][j]=9;
//		PrintMap(map);
//		return;
//	}
//	if(map[i][j]==1)
//	{
//		map[i][j]=2;
//		PrintMap(map);
//		Maze(i-1,j,map);
//		Maze(i,j+1,map);
//		Maze(i+1,j,map);
//		Maze(i,j-1,map);
//	}
//}
//void main()
//{
//	Maze(1,0,map);
//}
//
//
//#include<iostream>
//#include<windows.h>
//using namespace std;
//int map[10][10]=
//{
//	0,0,0,0,0,0,0,0,0,0,
//	1,1,0,0,1,1,1,0,0,0,
//	0,1,0,1,1,0,1,0,1,1,
//	0,1,1,1,0,0,1,0,1,0,
//	0,0,0,1,0,0,0,0,1,0,
//	0,0,0,1,0,0,0,0,1,0,
//	0,0,0,1,1,1,1,1,1,0,
//	0,0,0,0,1,0,0,0,1,0,
//	0,1,1,1,1,0,0,5,1,0,
//	0,1,0,1,0,0,0,0,0,0,
//};
//void PrintMap(int map[][10])
//{
//	system("cls");
//	for(int i=0;i<10;++i)
//	{
//		for(int j = 0 ; j<10;j++)
//			cout<<map[i][j]<<" ";
//		cout<<endl;
//	}
//	Sleep(300);
//
//}
//bool Maze(int i,int j,int map[][10])
//{
//	if(i<0 || 10<=i || j<0 || j>=10)
//		return false;
//	if(map[i][j]==5)
//	{
//		map[i][j]=9;
//		PrintMap(map);
//		return true;
//	}
//	if(map[i][j]==1)
//	{
//		map[i][j]=2;
//		PrintMap(map);
//
//		if(Maze(i-1,j,map))
//			return true;
//		if(Maze(i,j+1,map))
//			return true;
//		if(Maze(i+1,j,map))
//			return true;
//		if(Maze(i,j-1,map))
//			return true;
//	}
//	return false;
//}
//void main()
//{
//	bool bFind = Maze(1,0,map);
//	cout<<bFind<<endl;
//}
//
//
//#include<iostream>
//#include<windows.h>
//using namespace std;
//int map[10][10]=
//{
//	2,2,2,2,2,2,2,2,2,2,
//	1,1,2,2,1,1,1,0,0,0,
//	5,1,0,1,1,0,1,0,1,1,
//	5,1,1,1,0,0,1,0,1,0,
//	5,5,5,1,0,0,0,0,1,0,
//	5,5,5,1,0,0,0,0,1,0,
//	5,5,5,1,1,1,1,1,1,0,
//	5,5,5,5,1,0,0,0,1,0,
//	5,1,1,1,1,0,0,5,1,0,
//	5,1,0,1,0,0,0,0,0,0,
//};
//void PrintMap(int map[][10])
//{
//	system("cls");
//	for(int i=0;i<10;++i)
//	{
//		for(int j = 0 ; j<10;j++)
//			cout<<map[i][j]<<" ";
//		cout<<endl;
//	}
//	Sleep(300);
//
//}
//void _Fill(int i,int j,int oldColor,int newColor)
//{
//	if(i<0 || 10<=i || j<0 || 10<=j)
//		return;
//	if(oldColor == map[i][j])
//	{
//		map[i][j] = newColor;
//		PrintMap(map);
//		_Fill(i-1,j,oldColor,newColor);
//		_Fill(i,j+1,oldColor,newColor);
//		_Fill(i+1,j,oldColor,newColor);
//		_Fill(i,j-1,oldColor,newColor);
//
//	}
//}
//void Fill(int i,int j, int newColor)
//{
//	int oldColor=map[i][j];
//	if(oldColor==newColor)
//		return;
//	_Fill(i,j,oldColor,newColor); //위임이라고한다. biligation
//}
//void main()
//{
//	Fill(5,1, 8);
//}

//
//
//#include<iostream>
//#include<windows.h>
//using namespace std;
//template <typename T>
//class Vector
//{
//	T*buf;
//	int size;
//	int capacity;
//public:
//	Vector():buf(0),size(0),capacity(0)
//	{
//	}
//	~Vector()
//	{
//		if(buf)
//			delete[]buf;
//	}
//	void Add(const T& data)  //메모리정책을 두배정책으로 만들어보자!
//	{
//		if(buf==NULL)
//		{
//			capacity = 1;
//			buf = new T[capacity];
//			buf[size++] = data;
//		}
//		else
//		{
//			if(capacity>=size)
//			{
//				capacity*=2;
//				T*t = new T[capacity];
//				for(int i=0;i<size;i++)
//					t[i] = buf[i];
//				delete[]buf;
//				buf = t;
//
//				buf[size++] = data;
//			}
//			else
//				buf[size++] = data;
//		}
//	}
//	int Size()const{return size;}
//	const T& operator[](int i)const{return buf[i];}
//};
//void main()
//{
//	Vector<int> v;
//	v.Add(10);
//	v.Add(20);
//	v.Add(30);
//	v.Add(40);
//	v.Add(50);
//
//	for(int i = 0; i<v.Size();i++)
//		cout<<v[i]<<endl;
//}
//
//
//#include<iostream>
//#include<windows.h>
//using namespace std;
//template <typename T>
//class Vector
//{
//	T*buf;
//	int size;
//	int capacity;
//public:
//	Vector():buf(0),size(0),capacity(0)
//	{
//	}
//	~Vector()
//	{
//		if(buf)
//			delete[]buf;
//	}
//	void Add(const T& data)  //메모리정책을 두배정책으로 만들어보자!
//	{
//		if(buf==NULL)
//		{
//			capacity = 1;
//			buf = new T[capacity];
//		}
//
//		else if(capacity>=size)
//		{
//			capacity*=2;
//			T*t = new T[capacity];
//			for(int i=0;i<size;i++)
//				t[i] = buf[i];
//			delete[]buf;
//			buf = t;
//		}
//
//		buf[size++] = data;
//
//	}
//	int Size()const{return size;}
//	const T& operator[](int i)const{return buf[i];}
//};
//void main()
//{
//	Vector<int> v;
//	v.Add(10);
//	v.Add(20);
//	v.Add(30);
//	v.Add(40);
//	v.Add(50);
//
//	for(int i = 0; i<v.Size();i++)
//		cout<<v[i]<<endl;
//}


//////////////////Vector Class 작성/////////////////////
//일반적으로 연속메모리기반은 iterator를 만들때 포인터를 이용한다.
#include<iostream>
using namespace std;
template <typename T>
class Vector
{
	T*buf;
	int size;
	int capacity;
public:
	class Iterator
	{
		T*ptr;
	public:
		Iterator(T* p=NULL):ptr(p){}
		bool operator!=(Iterator arg)const //iterator는 기본적으로 const 안붙여줌
		{
			return ptr != arg.ptr;
		}
		Iterator operator++()
		{
			++ptr;
			return *this;
		}
		T& operator*()
		{
			return *ptr;
		}
	};
public:
	Vector():buf(0),size(0),capacity(0)
	{
	}
	~Vector()
	{
		if(buf)
			delete[]buf;
	}
	void Add(const T& data)  //메모리정책을 두배정책으로 만들어보자!
	{
		if(buf==NULL)
		{
			capacity = 1;
			buf = new T[capacity];
		}

		else if(capacity>=size)
		{
			capacity*=2;
			T*t = new T[capacity];
			for(int i=0;i<size;i++)
				t[i] = buf[i];
			delete[]buf;
			buf = t;
		}

		buf[size++] = data;

	}
	int Size()const{return size;}
	const T& operator[](int i)const{return buf[i];}
	Iterator Begin()
	{
		return Iterator(buf);
	}
	Iterator End()
	{
		return Iterator(buf+size); //size를 더해서 끝표식자로 사용한다.
	}
};
void main()
{
	Vector<int> v;
	v.Add(10);
	v.Add(20);
	v.Add(30);
	v.Add(40);
	v.Add(50);

	for(Vector<int>::Iterator iter = v.Begin(); iter!=v.End();++iter)
		cout<<*iter<<endl;
}