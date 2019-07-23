//
//
//연결리스트
//linked-list자료구조
//
//단일연결 리스트 : node들이 한방향으로 이어져있는 list
//이중연결 리스트 : node들이 양방향으로 데이터를 알고있는 list
//
//List의 Reverse Iterator 만들어보기
//Array도 Reverse
//
//내일은 three,hash
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//Node* AllocNode(int data)
//{
//	Node*p;
//	p=new Node;
//	p->data = data;
//	return p;
//}
//void main()
//{
//	Node*head = NULL;
//	head = AllocNode(10);
//	head->link = AllocNode(20);
//	head->link->link = AllocNode(30);
//	head->link->link->link = AllocNode(40);
//	head->link->link->link->link = AllocNode(50);
//
//	Node*n = AllocNode(100);
//	n->link=head->link->link->link;
//	head->link->link=n;
//
//	for(Node*p=head;p;p=p->link)
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
//Node* AllocNode(int data)
//{
//	Node*p;
//	p=new Node;
//	p->data = data;
//	p->link=NULL;
//	return p;
//}
//void main()
//{
//	Node*head = NULL;
//	head = AllocNode(10);
//	head->link = AllocNode(20);
//	head->link->link = AllocNode(30);
//	head->link->link->link = AllocNode(40);
//	head->link->link->link->link = AllocNode(50);
//
//	Node*n = AllocNode(100);
//	Node*p=head->link;
//	n->link=p->link;
//	p->link=n;
//
//	for(Node*p=head;p;p=p->link)
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
//Node* AllocNode(int data)
//{
//	Node*p;
//	p=new Node;
//	p->data = data;
//	p->link=NULL;
//	return p;
//}
//void main()
//{
//	Node*head = NULL;
//	head = AllocNode(10);
//	head->link = AllocNode(20);
//	head->link->link = AllocNode(30);
//	head->link->link->link = AllocNode(40);
//	head->link->link->link->link = AllocNode(50);
//
//	Node*n = AllocNode(100);
//	Node*p=head->link->link->link;
//	n->link=p->link;
//	p->link=n;
//
//	for(Node*p=head;p;p=p->link)
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
//Node* AllocNode(int data)
//{
//	Node*p;
//	p=new Node;
//	p->data = data;
//	p->link=NULL;
//	return p;
//}
//void PrintNode(Node*head)
//{
//	for(Node*p=head;p;p=p->link)
//		cout<<p->data<<endl;
//}
//void main()
//{
//	Node*head = NULL;
//	head = AllocNode(10);
//	head->link = AllocNode(20);
//	head->link->link = AllocNode(30);
//	head->link->link->link = AllocNode(40);
//	head->link->link->link->link = AllocNode(50);
//
//	Node*n = AllocNode(100);
//	Node*p=head->link->link->link;
//	n->link=p->link;
//	p->link=n;
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
//Node* AllocNode(int data)
//{
//	Node*p;
//	p=new Node;
//	p->data = data;
//	p->link=NULL;
//	return p;
//}
//void PrintNode(Node*head)
//{
//	for(Node*p=head;p;p=p->link)
//		cout<<p->data<<endl;
//}
//void DestroyNode(Node*head)
//{
//	for(Node*p=head;p;p=p->link)
//	{
//		Node*pn = p -> link;
//		delete p;
//		p=pn;
//	}
//}
//void main()
//{
//	Node*head = NULL;
//	head = AllocNode(10);
//	head->link = AllocNode(20);
//	head->link->link = AllocNode(30);
//	head->link->link->link = AllocNode(40);
//	head->link->link->link->link = AllocNode(50);
//
//	Node*n = AllocNode(100);
//	Node*p=head->link->link->link;
//	n->link=p->link;
//	p->link=n;
//
//	PrintNode(head);
//
//	DestroyNode(head);
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
//Node* AllocNode(int data)
//{
//	Node*p;
//	p=new Node;
//	p->data = data;
//	p->link=NULL;
//	return p;
//}
//void PrintNode(Node*head)
//{
//	for(Node*p=head;p;p=p->link)
//		cout<<p->data<<endl;
//}
//void DestroyNode(Node*head)
//{
//	for(Node*p=head;p;p=p->link)
//	{
//		Node*pn = p -> link;
//		delete p;
//		p=pn;
//	}
//}
//Node* AddNode(int data,Node*head)
//{
//
//}
//void main()
//{
//	Node*head = NULL;
//	Node*tail = NULL;
//	head = AddNode(10,head);
//
//	PrintNode(head);
//	DestroyNode(head);
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
//struct List
//{
//	Node*head;
//	Node*tail;
//};
//Node* AllocNode(int data)
//{
//	Node*p;
//	p=new Node;
//	p->data = data;
//	p->link=NULL;
//	return p;
//}
//void PrintNode(List*plt)
//{
//	for(Node*p=plt->head;p;p=p->link)
//		cout<<p->data<<endl;
//}
//void DestroyNode(List*plt)
//{
//	for(Node*p=plt->head;p;p=p->link)
//	{
//		Node*pn = p -> link;
//		delete p;
//		p=pn;
//	}
//}
//void AddNode(List*plt)
//{
//	plt->head = plt->tail = AllocNode(10);
//
//}
//void main()
//{
//	List lt;
//	AddNode(&lt);
//	PrintNode(&lt);
//	DestroyNode(&lt);
//}
//
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*link;
//};
//struct List
//{
//	Node*head;
//	Node*tail;
//};
//Node* AllocNode(int data)
//{
//	Node*p;
//	p=new Node;
//	p->data = data;
//	p->link=NULL;
//	return p;
//}
//void PrintNode(List*plt)
//{
//	for(Node*p=plt->head;p;p=p->link)
//		cout<<p->data<<endl;
//}
//void DestroyNode(List*plt)
//{
//	for(Node*p=plt->head;p;)
//	{
//		Node*pn = p -> link;
//		delete p;
//		p=pn;
//	}
//}
//void InitList(List*plt)
//{
//	plt->head = plt->tail = AllocNode(0); //dummy Node라고 한다.
//}
//void UninitList(List*plt)
//{
//	for(Node*p=plt->head;p;){
//		Node*pn = p->link;
//		delete p;
//		p=pn;
//	}
//}
//void AddList(List*plt,int data)
//{
//	Node*p=plt->head;
//	while(p->link)
//		p=p->link;
//	p->link = AllocNode(data);
//}
//void PrintList(List*plt)
//{
//	for(Node*p=plt->head->link;p;p=p->link)
//		cout << p->data<<endl;
//}
//void main()
//{
//	List lt;
//	InitList(&lt);
//	AddList(&lt,10);
//	AddList(&lt,20);
//	AddList(&lt,30);
//
//	PrintList(&lt);
//
//	UninitList(&lt);
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
//struct List
//{
//	Node*head;
//	Node*tail;
//};
//Node* AllocNode(int data)
//{
//	Node*p;
//	p=new Node;
//	p->data = data;
//	p->link=NULL;
//	return p;
//}
//void PrintNode(List*plt)
//{
//	for(Node*p=plt->head;p;p=p->link)
//		cout<<p->data<<endl;
//}
//void DestroyNode(List*plt)
//{
//	for(Node*p=plt->head;p;)
//	{
//		Node*pn = p -> link;
//		delete p;
//		p=pn;
//	}
//}
//void InitList(List*plt)
//{
//	plt->head = plt->tail = AllocNode(0); //dummy Node라고 한다.
//}
//void UninitList(List*plt)
//{
//	for(Node*p=plt->head;p;){
//		Node*pn = p->link;
//		delete p;
//		p=pn;
//	}
//}
//void AddList(List*plt,int data)
//{
//	plt->tail->link = AllocNode(data);
//	plt->tail = plt->tail->link;
//}
//void PrintList(List*plt)
//{
//	for(Node*p=plt->head->link;p;p=p->link)
//		cout << p->data<<endl;
//}
//void main()
//{
//	List lt;
//	InitList(&lt);
//	AddList(&lt,10);
//	AddList(&lt,20);
//	AddList(&lt,30);
//
//	PrintList(&lt);
//
//	UninitList(&lt);
//}
//
//////////////////////////////이중연결 리스트 시작
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*prev;
//	Node*next;
//};
//Node*AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->prev = n->next = NULL;
//	return n;
//}
//void main()
//{
//	Node*head = NULL;
//	head = AllocNode(10);
//
//	for(Node*p=head;p;p=p->next)
//		cout<<p->data<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*prev;
//	Node*next;
//};
//Node*AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->prev = n->next = NULL;
//	return n;
//}
//void main()
//{
//	Node*head = NULL;
//
//	head = AllocNode(10);
//	
//	head -> next = AllocNode(20);
//	head ->prev = head;
//	
//	head -> next ->next= AllocNode(30);
//	head ->next -> prev = head -> prev;
//
//	head -> next ->next -> next= AllocNode(40);
//	head ->next -> next -> prev = head -> next -> prev;
//	
//	
//	for(Node*p=head;p;p=p->next)
//		cout<<p->data<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*prev;
//	Node*next;
//};
//Node*AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->prev = n->next = NULL;
//	return n;
//}
//void main()
//{
//	Node*head = NULL;
//	Node*n=NULL;
//	head = AllocNode(10);
//	
//	n = AllocNode(20);
//	head ->next = n;
//	n->prev = head;
//	
//	n = AllocNode(30);
//	head ->next -> next = n;
//	n->prev=head->next;
//	
//	for(Node*p=head;p;p=p->next)
//		cout<<p->data<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*prev;
//	Node*next;
//};
//struct List
//{
//	Node*head;
//	Node*tail;
//};
//Node*AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->prev = n->next = NULL;
//	return n;
//}
//void InitList(List*plt)
//{
//	plt->head = AllocNode(0); //dummy_Node생성
//	plt->tail = AllocNode(0); //dummy_Node생성
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt)
//{
//
//}
//void AddList(List*plt,int data)
//{
//	Node*ptail=plt->tail->prev;
//	Node*tail = plt->tail;
//	Node*n = AllocNode(data);
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail ->prev = n;
//}
//void PrintList(List*plt)
//{
//	for(Node*p=plt->head->next;p!=plt->tail;p=p->next)
//		cout<<p->data<<" ";
//	cout<<endl;
//}
//void main()
//{
//	List lt;
//	InitList(&lt);
//
//	AddList(&lt,10);
//	AddList(&lt,20);
//	AddList(&lt,30);
//	AddList(&lt,40);
//	AddList(&lt,50);
//
//	PrintList(&lt);
//
//	UninitList(&lt);
//
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*prev;
//	Node*next;
//};
//struct List
//{
//	Node*head;
//	Node*tail;
//};
//Node*AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->prev = n->next = NULL;
//	return n;
//}
//void InitList(List*plt)
//{
//	plt->head = AllocNode(0); //dummy_Node생성
//	plt->tail = AllocNode(0); //dummy_Node생성
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt)
//{
//	for(Node*p=plt->head;p;)
//	{
//		Node*pn;
//		pn=p->next;
//		delete p;
//		p=pn;
//	}
//
//}
//void AddList(List*plt,int data)
//{
//	Node*ptail=plt->tail->prev;
//	Node*tail = plt->tail;
//	Node*n = AllocNode(data);
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail ->prev = n;
//
//}
//void PrintList(List*plt)
//{
//	for(Node*p=plt->head->next;p!=plt->tail;p=p->next)
//		cout<<p->data<<" ";
//	cout<<endl;
//}
//void main()
//{
//	List lt;
//	InitList(&lt);
//
//	AddList(&lt,10);
//	AddList(&lt,20);
//	AddList(&lt,30);
//	AddList(&lt,40);
//	AddList(&lt,50);
//
//	PrintList(&lt);
//
//	UninitList(&lt);
//
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*prev;
//	Node*next;
//};
//struct List
//{
//	Node*head;
//	Node*tail;
//};
//Node*AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->prev = n->next = NULL;
//	return n;
//}
//void InitList(List*plt)
//{
//	plt->head = AllocNode(0); //dummy_Node생성
//	plt->tail = AllocNode(0); //dummy_Node생성
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt)
//{
//	for(Node*p=plt->head;p;)
//	{
//		Node*pn;
//		pn=p->next;
//		delete p;
//		p=pn;
//	}
//
//}
//void AddBackList(List*plt,int data)
//{
//	Node*ptail=plt->tail->prev;
//	Node*tail = plt->tail;
//	Node*n = AllocNode(data);
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail ->prev = n;
//
//}
//void PrintBackList(List*plt)
//{
//	for(Node*p=plt->head->next;p!=plt->tail;p=p->next)
//		cout<<p->data<<" ";
//	cout<<endl;
//}
//void main()
//{
//	List lt;
//	InitList(&lt);
//
//	AddBackList(&lt,10);
//	AddBackList(&lt,20);
//	AddBackList(&lt,30);
//	AddBackList(&lt,40);
//	AddBackList(&lt,50);
//
//	PrintBackList(&lt);
//
//	UninitList(&lt);
//
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*prev;
//	Node*next;
//};
//struct List
//{
//	Node*head;
//	Node*tail;
//};
//Node*AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->prev = n->next = NULL;
//	return n;
//}
//void InitList(List*plt)
//{
//	plt->head = AllocNode(0); //dummy_Node생성
//	plt->tail = AllocNode(0); //dummy_Node생성
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt)
//{
//	for(Node*p=plt->head;p;)
//	{
//		Node*pn;
//		pn=p->next;
//		delete p;
//		p=pn;
//	}
//
//}
//void AddBackList(List*plt,int data)
//{
//	Node*ptail=plt->tail->prev;
//	Node*tail = plt->tail;
//	Node*n = AllocNode(data);
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail ->prev = n;
//
//}
//void AddFrontList(List*plt,int data)
//{
//	Node*nhead=plt->head->next;
//	Node*head = plt->head;
//	Node*n = AllocNode(data);
//
//	nhead->prev = n;
//	n->next = nhead;
//	n->prev = head;
//	head -> next = n;
//
//}
//void PrintBackList(List*plt)
//{
//	for(Node*p=plt->head->next;p!=plt->tail;p=p->next)
//		cout<<p->data<<" ";
//	cout<<endl;
//}
//void main()
//{
//	List lt;
//	InitList(&lt);
//
//	AddBackList(&lt,10);
//	AddBackList(&lt,20);
//	AddBackList(&lt,30);
//	AddBackList(&lt,40);
//	AddBackList(&lt,50);
//
//	AddFrontList(&lt,100);
//
//	PrintBackList(&lt);
//
//	UninitList(&lt);
//
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*prev;
//	Node*next;
//};
//struct List
//{
//	Node*head;
//	Node*tail;
//};
//Node*AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->prev = n->next = NULL;
//	return n;
//}
//void InitList(List*plt)
//{
//	plt->head = AllocNode(0); //dummy_Node생성
//	plt->tail = AllocNode(0); //dummy_Node생성
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt)
//{
//	for(Node*p=plt->head;p;)
//	{
//		Node*pn;
//		pn=p->next;
//		delete p;
//		p=pn;
//	}
//
//}
//void AddBackList(List*plt,int data)
//{
//	Node*ptail=plt->tail->prev;
//	Node*tail = plt->tail;
//	Node*n = AllocNode(data);
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail ->prev = n;
//
//}
//void AddFrontList(List*plt,int data)
//{
//	Node*nhead=plt->head->next;
//	Node*head = plt->head;
//	Node*n = AllocNode(data);
//
//	nhead->prev = n;
//	n->next = nhead;
//	n->prev = head;
//	head -> next = n;
//
//}
//void PrintBackList(List*plt)
//{
//	for(Node*p=plt->head->next;p!=plt->tail;p=p->next)
//		cout<<p->data<<" ";
//	cout<<endl;
//}
//void PrintFrontList(List*plt)
//{
//	for(Node*p=plt->tail->prev;p!=plt->head;p=p->prev)
//		cout<<p->data<<" ";
//	cout<<endl;
//}
//void main()
//{
//	List lt;
//	InitList(&lt);
//
//	AddBackList(&lt,10);
//	AddBackList(&lt,20);
//	AddBackList(&lt,30);
//	AddBackList(&lt,40);
//	AddBackList(&lt,50);
//
//	AddFrontList(&lt,100);
//
//	PrintBackList(&lt);
//	
//	PrintFrontList(&lt);
//
//	UninitList(&lt);
//
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*prev;
//	Node*next;
//};
//struct List
//{
//	Node*head;
//	Node*tail;
//};
//Node*AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->prev = n->next = NULL;
//	return n;
//}
//void InitList(List*plt)
//{
//	plt->head = AllocNode(0); //dummy_Node생성
//	plt->tail = AllocNode(0); //dummy_Node생성
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt)
//{
//	for(Node*p=plt->head;p;)
//	{
//		Node*pn;
//		pn=p->next;
//		delete p;
//		p=pn;
//	}
//
//}
//void AddBackList(List*plt,int data)
//{
//	Node*ptail=plt->tail->prev;
//	Node*tail = plt->tail;
//	Node*n = AllocNode(data);
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail ->prev = n;
//
//}
//void AddFrontList(List*plt,int data)
//{
//	Node*nhead=plt->head->next;
//	Node*head = plt->head;
//	Node*n = AllocNode(data);
//
//	nhead->prev = n;
//	n->next = nhead;
//	n->prev = head;
//	head -> next = n;
//
//}
//void PrintBackList(List*plt)
//{
//	for(Node*p=plt->head->next;p!=plt->tail;p=p->next)
//		cout<<p->data<<" ";
//	cout<<endl;
//}
//void PrintFrontList(List*plt)
//{
//	for(Node*p=plt->tail->prev;p!=plt->head;p=p->prev)
//		cout<<p->data<<" ";
//	cout<<endl;
//}
//void main()
//{
//	List lt;
//	InitList(&lt);
//
//	AddBackList(&lt,10);
//	AddBackList(&lt,20);
//	AddBackList(&lt,30);
//	AddBackList(&lt,40);
//	AddBackList(&lt,50);
//
//	PrintBackList(&lt); //List의 interface가 아니다
//	
//	UninitList(&lt);
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*prev;
//	Node*next;
//};
//struct List
//{
//	Node*head;
//	Node*tail;
//};
//Node*AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->prev = n->next = NULL;
//	return n;
//}
//void InitList(List*plt)
//{
//	plt->head = AllocNode(0); //dummy_Node생성
//	plt->tail = AllocNode(0); //dummy_Node생성
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt)
//{
//	for(Node*p=plt->head;p;)
//	{
//		Node*pn;
//		pn=p->next;
//		delete p;
//		p=pn;
//	}
//
//}
//void AddBackList(List*plt,int data)
//{
//	Node*ptail=plt->tail->prev;
//	Node*tail = plt->tail;
//	Node*n = AllocNode(data);
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail ->prev = n;
//
//}
//void AddFrontList(List*plt,int data)
//{
//	Node*nhead=plt->head->next;
//	Node*head = plt->head;
//	Node*n = AllocNode(data);
//
//	nhead->prev = n;
//	n->next = nhead;
//	n->prev = head;
//	head -> next = n;
//
//}
//Node* GetHead(List*plt)
//{
//	return plt->head->next;
//}
//bool HasNext(List*plt,Node*cur)
//{
//	return cur!=plt->tail;
//}
//Node*Next(List*plt,Node*cur)
//{
//	return cur->next;
//}
//int GetData(List*plt,Node*cur)
//{
//	return cur->data;
//}
//void main()
//{
//	List lt;
//	InitList(&lt);
//
//	AddBackList(&lt,10);
//	AddBackList(&lt,20);
//	AddBackList(&lt,30);
//	AddBackList(&lt,40);
//	AddBackList(&lt,50);
//
//	for(Node*p= GetHead(&lt);HasNext(&lt,p);p=Next(&lt,p))
//		cout<<GetData(&lt,p)<<" ";
//	cout<<endl;
//	
//	UninitList(&lt);
//}
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*prev;
//	Node*next;
//};
//struct List
//{
//	Node*head;
//	Node*tail;
//};
//Node*AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->prev = n->next = NULL;
//	return n;
//}
//void InitList(List*plt)
//{
//	plt->head = AllocNode(0); //dummy_Node생성
//	plt->tail = AllocNode(0); //dummy_Node생성
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt)
//{
//	for(Node*p=plt->head;p;)
//	{
//		Node*pn;
//		pn=p->next;
//		delete p;
//		p=pn;
//	}
//
//}
//void AddBackList(List*plt,int data)
//{
//	Node*ptail=plt->tail->prev;
//	Node*tail = plt->tail;
//	Node*n = AllocNode(data);
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail ->prev = n;
//
//}
//void AddFrontList(List*plt,int data)
//{
//	Node*nhead=plt->head->next;
//	Node*head = plt->head;
//	Node*n = AllocNode(data);
//
//	nhead->prev = n;
//	n->next = nhead;
//	n->prev = head;
//	head -> next = n;
//
//}
//void EraseList(List*plt,Node*cur)
//{
//	Node*pn;
//	pn=cur->prev;
//	pn->next=cur->next;
//	delete cur;
//}
//////////////////////////////////////////////
//Node* GetHead(List*plt)
//{
//	return plt->head->next;
//}
//bool HasNext(List*plt,Node*cur)
//{
//	return cur!=plt->tail;
//}
//Node*Next(List*plt,Node*cur)
//{
//	return cur->next;
//}
//int GetData(List*plt,Node*cur)
//{
//	return cur->data;
//}
//
///////////////////////////////////////////
//void main()
//{
//	List lt;
//	InitList(&lt);
//
//	AddBackList(&lt,10);
//	AddBackList(&lt,20);
//	AddBackList(&lt,30);
//	AddBackList(&lt,40);
//	AddBackList(&lt,50);
//
//	Node*p = GetHead(&lt);
//	p = Next(&lt,p);
//	EraseList(&lt,p);
//	for(Node*p= GetHead(&lt);HasNext(&lt,p);p=Next(&lt,p))
//		cout<<GetData(&lt,p)<<" ";
//	cout<<endl;
//	
//	UninitList(&lt);
//} //tail에서 head쪽으로 하는것도 해보세요
//
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*prev;
//	Node*next;
//};
//struct List
//{
//	Node*head;
//	Node*tail;
//};
//Node*AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->prev = n->next = NULL;
//	return n;
//}
//void InitList(List*plt)
//{
//	plt->head = AllocNode(0); //dummy_Node생성
//	plt->tail = AllocNode(0); //dummy_Node생성
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt)
//{
//	for(Node*p=plt->head;p;)
//	{
//		Node*pn;
//		pn=p->next;
//		delete p;
//		p=pn;
//	}
//
//}
//void AddBackList(List*plt,int data)
//{
//	Node*ptail=plt->tail->prev;
//	Node*tail = plt->tail;
//	Node*n = AllocNode(data);
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail ->prev = n;
//
//}
//void AddFrontList(List*plt,int data)
//{
//	Node*nhead=plt->head->next;
//	Node*head = plt->head;
//	Node*n = AllocNode(data);
//
//	nhead->prev = n;
//	n->next = nhead;
//	n->prev = head;
//	head -> next = n;
//
//}
//void EraseList(List*plt,Node*cur)
//{
//	Node*pn;
//	pn=cur->prev;
//	pn->next=cur->next;
//	delete cur;
//}
//////////////////////////////////////////////
//Node* GetHead(List*plt)
//{
//	return plt->head->next;
//}
//bool HasNext(List*plt,Node*cur)
//{
//	return cur!=plt->tail;
//}
//Node*Next(List*plt,Node*cur)
//{
//	return cur->next;
//}
//int GetData(List*plt,Node*cur)
//{
//	return cur->data;
//}
//
///////////////////////////////////////////
//void main()
//{
//	List lt;
//	InitList(&lt);
//
//	AddBackList(&lt,10);
//	AddBackList(&lt,20);
//	AddBackList(&lt,30);
//	AddBackList(&lt,40);
//	AddBackList(&lt,50);
//
//	Node*p = GetHead(&lt);
//	EraseList(&lt,p);
//	for(Node*p= GetHead(&lt);HasNext(&lt,p);p=Next(&lt,p))
//		cout<<GetData(&lt,p)<<" ";
//	cout<<endl;
//	
//	UninitList(&lt);
//} //tail에서 head쪽으로 하는것도 해보세요
//
//
/////////////////////////////////////////////////////////////////////////////
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*prev;
//	Node*next;
//};
//struct List
//{
//	Node*head;
//	Node*tail;
//};
//Node*AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->prev = n->next = NULL;
//	return n;
//}
//void InitList(List*plt)
//{
//	plt->head = AllocNode(0); //dummy_Node생성
//	plt->tail = AllocNode(0); //dummy_Node생성
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt)
//{
//	for(Node*p=plt->head;p;)
//	{
//		Node*pn;
//		pn=p->next;
//		delete p;
//		p=pn;
//	}
//
//}
//void AddBackList(List*plt,int data)
//{
//	Node*ptail=plt->tail->prev;
//	Node*tail = plt->tail;
//	Node*n = AllocNode(data);
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail ->prev = n;
//
//}
//void AddFrontList(List*plt,int data)
//{
//	Node*nhead=plt->head->next;
//	Node*head = plt->head;
//	Node*n = AllocNode(data);
//
//	nhead->prev = n;
//	n->next = nhead;
//	n->prev = head;
//	head -> next = n;
//
//}
//void EraseList(List*plt,Node*cur)
//{
//	Node*pn;
//	pn=cur->prev;
//	pn->next=cur->next;
//	delete cur;
//}
//void InsertList(List*lt,Node*cur,int data)
//{
//	Node*pcur;
//
//	pcur = AllocNode(data);
//	pcur = cur->prev;
//	pcur->next = cur;
//	cur->prev = pcur;
//}
//
//////////////////////////////////////////////
//Node* GetHead(List*plt)
//{
//	return plt->head->next;
//}
//bool HasNext(List*plt,Node*cur)
//{
//	return cur!=plt->tail;
//}
//Node*Next(List*plt,Node*cur)
//{
//	return cur->next;
//}
//int GetData(List*plt,Node*cur)
//{
//	return cur->data;
//}
//
///////////////////////////////////////////
//void main()
//{
//	List lt;
//	InitList(&lt);
//
//	AddBackList(&lt,10);
//	AddBackList(&lt,20);
//	AddBackList(&lt,30);
//	AddBackList(&lt,40);
//	AddBackList(&lt,50);
//
//	Node*p = GetHead(&lt);
//	p = Next(&lt,p);
//	InsertList(&lt,p,100);
//	for(Node*p= GetHead(&lt);HasNext(&lt,p);p=Next(&lt,p))
//		cout<<GetData(&lt,p)<<" ";
//	cout<<endl;
//	
//	UninitList(&lt);
//} //tail에서 head쪽으로 하는것도 해보세요
//
//
/////////////////////////////////////////////////////////////////////////////
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*prev;
//	Node*next;
//};
//struct List
//{
//	Node*head;
//	Node*tail;
//};
//typedef Node* POSITION;
//Node*AllocNode(int data)
//{
//	Node*n = new Node;
//	n->data = data;
//	n->prev = n->next = NULL;
//	return n;
//}
//void InitList(List*plt)
//{
//	plt->head = AllocNode(0); //dummy_Node생성
//	plt->tail = AllocNode(0); //dummy_Node생성
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt)
//{
//	for(Node*p=plt->head;p;)
//	{
//		Node*pn;
//		pn=p->next;
//		delete p;
//		p=pn;
//	}
//
//}
//void AddBackList(List*plt,int data)
//{
//	Node*ptail=plt->tail->prev;
//	Node*tail = plt->tail;
//	Node*n = AllocNode(data);
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail ->prev = n;
//
//}
//void AddFrontList(List*plt,int data)
//{
//	Node*nhead=plt->head->next;
//	Node*head = plt->head;
//	Node*n = AllocNode(data);
//
//	nhead->prev = n;
//	n->next = nhead;
//	n->prev = head;
//	head -> next = n;
//
//}
//void EraseList(List*plt,Node*cur)
//{
//	Node*pn;
//	pn=cur->prev;
//	pn->next=cur->next;
//	delete cur;
//}
//void InsertList(List*lt,Node*cur,int data)
//{
//	Node*pcur = cur->prev;
//	Node*n;
//	n = AllocNode(data);
//	
//	pcur->next = n;
//	n->prev = pcur;
//	cur->prev = n;
//	n->next = cur;
//}
//
//////////////////////////////////////////////
//Node* GetHead(List*plt)
//{
//	return plt->head->next;
//}
//bool HasNext(List*plt,Node*cur)
//{
//	return cur!=plt->tail;
//}
//Node*Next(List*plt,Node*cur)
//{
//	return cur->next;
//}
//int GetData(List*plt,Node*cur)
//{
//	return cur->data;
//}
//
///////////////////////////////////////////
//void main()
//{
//	List lt;
//	InitList(&lt);
//
//	AddBackList(&lt,10);
//	AddBackList(&lt,20);
//	AddBackList(&lt,30);
//	AddBackList(&lt,40);
//	AddBackList(&lt,50);
//
//	POSITION p = GetHead(&lt);
//	p = Next(&lt,p);
//	InsertList(&lt,p,100);
//	for(POSITION p= GetHead(&lt);HasNext(&lt,p);p=Next(&lt,p))
//		cout<<GetData(&lt,p)<<" ";
//	cout<<endl;
//	
//	UninitList(&lt);
//} //tail에서 head쪽으로 Print 하는것도 해보세요. 마지막원소지우는것등등해보세요
//
//
/////////////////////////////////////////////////////////////////////////////
//#include<iostream>
//using namespace std;
//class List
//{
//public:
//	struct Node
//	{
//		int data;
//		Node*prev;
//		Node*next;
//	};
//private:
//	Node*head;
//	Node*tail;
//	Node*AllocNode(int data) //내부에서만 사용한다.
//	{
//		Node*n = new Node;
//		n->data = data;
//		n->prev = n->next = NULL;
//		return n;
//	}
//public:
//	
//	void InitList()
//	{
//		head = AllocNode(0); //dummy_Node생성
//		tail = AllocNode(0); //dummy_Node생성
//		head->next = tail;
//		tail->prev = head;
//	}
//	void UninitList()
//	{
//		for(Node*p=head;p;)
//		{
//			Node*pn;
//			pn=p->next;
//			delete p;
//			p=pn;
//		}
//
//	}
//	void AddBackList(int data)
//	{
//		Node*ptail=tail->prev;
//		Node*n = AllocNode(data);
//
//		ptail->next = n;
//		n->prev = ptail;
//		n->next = tail;
//		tail ->prev = n;
//
//	}
//	void AddFrontList(int data)
//	{
//		Node*nhead=head->next;
//		Node*n = AllocNode(data);
//
//		nhead->prev = n;
//		n->next = nhead;
//		n->prev = head;
//		head -> next = n;
//
//	}
//	void EraseList(Node*cur)
//	{
//		Node*pn;
//		pn=cur->prev;
//		pn->next=cur->next;
//		delete cur;
//	}
//	void InsertList(Node*cur,int data)
//	{
//		Node*pcur = cur->prev;
//		Node*n;
//		n = AllocNode(data);
//
//		pcur->next = n;
//		n->prev = pcur;
//		cur->prev = n;
//		n->next = cur;
//	}
//
//	////////////////////////////////////////////
//	Node* GetHead()
//	{
//		return head->next;
//	}
//	bool HasNext(Node*cur)
//	{
//		return cur!=tail;
//	}
//	Node*Next(Node*cur)
//	{
//		return cur->next;
//	}
//	int GetData(Node*cur)
//	{
//		return cur->data;
//	}
//};
///////////////////////////////////////////
//void main()
//{
//	List lt;
//	lt.InitList();
//
//	lt.AddBackList(10);
//	lt.AddBackList(20);
//	lt.AddBackList(30);
//	lt.AddBackList(40);
//	lt.AddBackList(50);
//
//	List::Node* p = lt.GetHead();
//	p = lt.Next(p);
//	lt.InsertList(p,100);
//	for(List::Node* p= lt.GetHead();lt.HasNext(p);p=lt.Next(p))
//		cout<<lt.GetData(p)<<" ";
//	cout<<endl;
//	
//	lt.UninitList();
//}
//
//
/////////////////////////////////////////////////////////////////////////////
//#include<iostream>
//using namespace std;
//class List
//{
//public:
//	struct Node
//	{
//		int data;
//		Node*prev;
//		Node*next;
//	};
//private:
//	Node*head;
//	Node*tail;
//	Node*AllocNode(int data) //내부에서만 사용한다.
//	{
//		Node*n = new Node;
//		n->data = data;
//		n->prev = n->next = NULL;
//		return n;
//	}
//public:
//	
//	List()
//	{
//		head = AllocNode(0); //dummy_Node생성
//		tail = AllocNode(0); //dummy_Node생성
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		for(Node*p=head;p;)
//		{
//			Node*pn;
//			pn=p->next;
//			delete p;
//			p=pn;
//		}
//
//	}
//	void AddBack(int data)
//	{
//		Node*ptail=tail->prev;
//		Node*n = AllocNode(data);
//
//		ptail->next = n;
//		n->prev = ptail;
//		n->next = tail;
//		tail ->prev = n;
//
//	}
//	void AddFront(int data)
//	{
//		Node*nhead=head->next;
//		Node*n = AllocNode(data);
//
//		nhead->prev = n;
//		n->next = nhead;
//		n->prev = head;
//		head -> next = n;
//
//	}
//	void Erase(Node*cur)
//	{
//		Node*pn;
//		pn=cur->prev;
//		pn->next=cur->next;
//		delete cur;
//	}
//	void Insert(Node*cur,int data)
//	{
//		Node*pcur = cur->prev;
//		Node*n;
//		n = AllocNode(data);
//
//		pcur->next = n;
//		n->prev = pcur;
//		cur->prev = n;
//		n->next = cur;
//	}
//
//	////////////////////////////////////////////
//	Node* GetHead()
//	{
//		return head->next;
//	}
//	bool HasNext(Node*cur)
//	{
//		return cur!=tail;
//	}
//	Node*Next(Node*cur)
//	{
//		return cur->next;
//	}
//	int GetData(Node*cur)
//	{
//		return cur->data;
//	}
//};
///////////////////////////////////////////
//void main()
//{
//	List lt;
//
//	lt.AddBack(10);
//	lt.AddBack(20);
//	lt.AddBack(30);
//	lt.AddBack(40);
//	lt.AddBack(50);
//
//	List::Node* p = lt.GetHead();
//	p = lt.Next(p);
//	lt.Insert(p,100);
//	for(List::Node* p= lt.GetHead();lt.HasNext(p);p=lt.Next(p))
//		cout<<lt.GetData(p)<<" ";
//	cout<<endl;
//	
//}
//
//
/////////////////////////////////////////////////////////////////////////////
//#include<iostream>
//using namespace std;
//template<typename T>
//class List
//{
//public:
//	struct Node
//	{
//		T data;
//		Node*prev;
//		Node*next;
//	};
//private:
//	Node*head;
//	Node*tail;
//	Node*AllocNode(const T& data) //내부에서만 사용한다.
//	{
//		Node*n = new Node;
//		n->data = data;
//		n->prev = n->next = NULL;
//		return n;
//	}
//public:
//	
//	List()
//	{
//		head = AllocNode(T()); //dummy_Node생성
//		tail = AllocNode(T()); //dummy_Node생성
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		for(Node*p=head;p;)
//		{
//			Node*pn;
//			pn=p->next;
//			delete p;
//			p=pn;
//		}
//
//	}
//	void AddBack(const T& data)
//	{
//		Node*ptail=tail->prev;
//		Node*n = AllocNode(data);
//
//		ptail->next = n;
//		n->prev = ptail;
//		n->next = tail;
//		tail ->prev = n;
//
//	}
//	void AddFront(const T& data)
//	{
//		Node*nhead=head->next;
//		Node*n = AllocNode(data);
//
//		nhead->prev = n;
//		n->next = nhead;
//		n->prev = head;
//		head -> next = n;
//
//	}
//	void Erase(Node*cur)
//	{
//		Node*pn;
//		pn=cur->prev;
//		pn->next=cur->next;
//		delete cur;
//	}
//	void Insert(Node*cur,const T& data)
//	{
//		Node*pcur = cur->prev;
//		Node*n;
//		n = AllocNode(data);
//
//		pcur->next = n;
//		n->prev = pcur;
//		cur->prev = n;
//		n->next = cur;
//	}
//
//	////////////////////////////////////////////
//	Node* GetHead()
//	{
//		return head->next;
//	}
//	bool HasNext(Node*cur)
//	{
//		return cur!=tail;
//	}
//	Node*Next(Node*cur)
//	{
//		return cur->next;
//	}
//	const T& GetData(Node*cur)
//	{
//		return cur->data;
//	}
//};
///////////////////////////////////////////
//void main()
//{
//	List<int> lt;
//
//	lt.AddBack(10);
//	lt.AddBack(20);
//	lt.AddBack(30);
//	lt.AddBack(40);
//	lt.AddBack(50);
//
//	List<int>::Node* p = lt.GetHead();
//	p = lt.Next(p);
//	lt.Insert(p,100);
//	for(List<int>::Node* p= lt.GetHead();lt.HasNext(p);p=lt.Next(p))
//		cout<<lt.GetData(p)<<" ";
//	cout<<endl;
//	
//}
//
//
///////////////iterator기본 인터페이스//////////////////////////////////////////////////////////////
//#include<iostream>
//using namespace std;
//template<typename T>
//class List
//{
//public:
//	struct Node
//	{
//		T data;
//		Node*prev;
//		Node*next;
//	};
//	class Iterator
//	{
//	public:
//		bool operator!=(Iterator arg)const
//		{
//			return false;
//		}
//		Iterator operator++()
//		{
//			return Iterator();
//		}
//		const T& operator*()const
//		{
//			return T();
//		}
//	};
//private:
//	Node*head;
//	Node*tail;
//	Node*AllocNode(const T& data) //내부에서만 사용한다.
//	{
//		Node*n = new Node;
//		n->data = data;
//		n->prev = n->next = NULL;
//		return n;
//	}
//public:
//	
//	List()
//	{
//		head = AllocNode(T()); //dummy_Node생성
//		tail = AllocNode(T()); //dummy_Node생성
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		for(Node*p=head;p;)
//		{
//			Node*pn;
//			pn=p->next;
//			delete p;
//			p=pn;
//		}
//
//	}
//	void AddBack(const T& data)
//	{
//		Node*ptail=tail->prev;
//		Node*n = AllocNode(data);
//
//		ptail->next = n;
//		n->prev = ptail;
//		n->next = tail;
//		tail ->prev = n;
//
//	}
//	void AddFront(const T& data)
//	{
//		Node*nhead=head->next;
//		Node*n = AllocNode(data);
//
//		nhead->prev = n;
//		n->next = nhead;
//		n->prev = head;
//		head -> next = n;
//
//	}
//	void Erase(Node*cur)
//	{
//		Node*pn;
//		pn=cur->prev;
//		pn->next=cur->next;
//		delete cur;
//	}
//	void Insert(Node*cur,const T& data)
//	{
//		Node*pcur = cur->prev;
//		Node*n;
//		n = AllocNode(data);
//
//		pcur->next = n;
//		n->prev = pcur;
//		cur->prev = n;
//		n->next = cur;
//	}
//	Iterator Begin()
//	{
//		return Iterator();
//	}
//	
//	Iterator End()
//	{
//		return Iterator();
//	}
//	////////////////////////////////////////////
//	
//};
///////////////////////////////////////////
//void main()
//{
//	List<int> lt;
//
//	lt.AddBack(10);
//	lt.AddBack(20);
//	lt.AddBack(30);
//	lt.AddBack(40);
//	lt.AddBack(50);
//
//	/*for(List<int>::Iterator Iter= lt.Begin();++Iter);lt.Insert(iter,100));*/
//	for(List<int>::Iterator iter = lt.Begin() ; iter!=lt.End() ; iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
///////////////iterator기본 인터페이스//////////////////////////////////////////////////////////////
//#include<iostream>
//using namespace std;
//template<typename T>
//class List
//{
//public:
//	struct Node
//	{
//		T data;
//		Node*prev;
//		Node*next;
//	};
//	class Iterator
//	{
//		Node*ptr;
//	public:
//		Iterator(Node* p):ptr(p){}
//		bool operator!=(Iterator arg)const
//		{
//			return ptr!=arg.ptr;
//		}
//		Iterator operator++()
//		{
//			ptr=ptr->next;
//			return *this;
//		}
//		const T& operator*()const
//		{
//			return ptr->data;
//		}
//	};
//private:
//	Node*head;
//	Node*tail;
//	Node*AllocNode(const T& data) //내부에서만 사용한다.
//	{
//		Node*n = new Node;
//		n->data = data;
//		n->prev = n->next = NULL;
//		return n;
//	}
//public:
//	
//	List()
//	{
//		head = AllocNode(T()); //dummy_Node생성
//		tail = AllocNode(T()); //dummy_Node생성
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		for(Node*p=head;p;)
//		{
//			Node*pn;
//			pn=p->next;
//			delete p;
//			p=pn;
//		}
//
//	}
//	void AddBack(const T& data)
//	{
//		Node*ptail=tail->prev;
//		Node*n = AllocNode(data);
//
//		ptail->next = n;
//		n->prev = ptail;
//		n->next = tail;
//		tail ->prev = n;
//
//	}
//	void AddFront(const T& data)
//	{
//		Node*nhead=head->next;
//		Node*n = AllocNode(data);
//
//		nhead->prev = n;
//		n->next = nhead;
//		n->prev = head;
//		head -> next = n;
//
//	}
//	void Erase(Node*cur)
//	{
//		Node*pn;
//		pn=cur->prev;
//		pn->next=cur->next;
//		delete cur;
//	}
//	void Insert(Node*cur,const T& data)
//	{
//		Node*pcur = cur->prev;
//		Node*n;
//		n = AllocNode(data);
//
//		pcur->next = n;
//		n->prev = pcur;
//		cur->prev = n;
//		n->next = cur;
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next);
//	}
//	
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//	////////////////////////////////////////////
//	
//};
///////////////////////////////////////////
//void main()
//{
//	List<int> lt;
//
//	lt.AddBack(10);
//	lt.AddBack(20);
//	lt.AddBack(30);
//	lt.AddBack(40);
//	lt.AddBack(50);
//
//	/*List<int>::Iterator Iter= lt.Begin();
//	++Iter;
//	lt.Insert(iter,100));*/
//	for(List<int>::Iterator iter = lt.Begin() ; iter!=lt.End() ; iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
///////////////iterator기본 인터페이스//////////////////////////////////////////////////////////////
//#include<iostream>
//using namespace std;
//template<typename T>
//class List
//{
//public:
//	struct Node
//	{
//		T data;
//		Node*prev;
//		Node*next;
//	};
//	class Iterator
//	{
//		Node*ptr;
//	public:
//		Iterator(Node* p):ptr(p){}
//		bool operator!=(Iterator arg)const
//		{
//			return ptr!=arg.ptr;
//		}
//		Iterator operator++()
//		{
//			ptr=ptr->next;
//			return *this;
//		}
//		const T& operator*()const
//		{
//			return ptr->data;
//		}
//		Node* operator&()
//		{
//			return ptr;
//		}
//	};
//private:
//	Node*head;
//	Node*tail;
//	Node*AllocNode(const T& data) //내부에서만 사용한다.
//	{
//		Node*n = new Node;
//		n->data = data;
//		n->prev = n->next = NULL;
//		return n;
//	}
//public:
//	
//	List()
//	{
//		head = AllocNode(T()); //dummy_Node생성
//		tail = AllocNode(T()); //dummy_Node생성
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		for(Node*p=head;p;)
//		{
//			Node*pn;
//			pn=p->next;
//			delete p;
//			p=pn;
//		}
//
//	}
//	void AddBack(const T& data)
//	{
//		Node*ptail=tail->prev;
//		Node*n = AllocNode(data);
//
//		ptail->next = n;
//		n->prev = ptail;
//		n->next = tail;
//		tail ->prev = n;
//
//	}
//	void AddFront(const T& data)
//	{
//		Node*nhead=head->next;
//		Node*n = AllocNode(data);
//
//		nhead->prev = n;
//		n->next = nhead;
//		n->prev = head;
//		head -> next = n;
//
//	}
//	void Erase(Node*cur)
//	{
//		Node*pn;
//		pn=cur->prev;
//		pn->next=cur->next;
//		delete cur;
//	}
//	void Insert(Iterator iter,const T& data)
//	{
//		Node*cur = &iter; //연산자중복으로 Node의 주소를 반환하게 해준다.
//		Node*pcur = cur->prev;
//		Node*n;
//		n = AllocNode(data);
//
//		pcur->next = n;
//		n->prev = pcur;
//		cur->prev = n;
//		n->next = cur;
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next);
//	}
//	
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//	////////////////////////////////////////////
//	
//};
///////////////////////////////////////////
//void main()
//{
//	List<int> lt;
//
//	lt.AddBack(10);
//	lt.AddBack(20);
//	lt.AddBack(30);
//	lt.AddBack(40);
//	lt.AddBack(50);
//
//	List<int>::Iterator iter= lt.Begin();
//	++iter;
//	lt.Insert(iter,100);
//	for(List<int>::Iterator iter = lt.Begin() ; iter!=lt.End() ; iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//template<typename T>
//class List
//{
//public:
//	struct Node
//	{
//		T data;
//		Node*prev;
//		Node*next;
//	};
//	class Iterator
//	{
//		Node*ptr;
//	public:
//		Iterator(Node* p):ptr(p){}
//		bool operator!=(Iterator arg)const
//		{
//			return ptr!=arg.ptr;
//		}
//		Iterator operator++()
//		{
//			ptr=ptr->next;
//			return *this;
//		}
//		const T& operator*()const
//		{
//			return ptr->data;
//		}
//		Node* operator&()
//		{
//			return ptr;
//		}
//	};
//private:
//	Node*head;
//	Node*tail;
//	Node*AllocNode(const T& data) //내부에서만 사용한다.
//	{
//		Node*n = new Node;
//		n->data = data;
//		n->prev = n->next = NULL;
//		return n;
//	}
//public:
//	
//	List()
//	{
//		head = AllocNode(T()); //dummy_Node생성
//		tail = AllocNode(T()); //dummy_Node생성
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		for(Node*p=head;p;)
//		{
//			Node*pn;
//			pn=p->next;
//			delete p;
//			p=pn;
//		}
//
//	}
//	void AddBack(const T& data)
//	{
//		Node*ptail=tail->prev;
//		Node*n = AllocNode(data);
//
//		ptail->next = n;
//		n->prev = ptail;
//		n->next = tail;
//		tail ->prev = n;
//
//	}
//	void AddFront(const T& data)
//	{
//		Node*nhead=head->next;
//		Node*n = AllocNode(data);
//
//		nhead->prev = n;
//		n->next = nhead;
//		n->prev = head;
//		head -> next = n;
//
//	}
//	void Erase(Iterator iter)
//	{
//		Node*cur = &iter;
//		Node*pn;
//		pn=cur->prev;
//		pn->next=cur->next;
//		delete cur;
//	}
//	void Insert(Iterator iter,const T& data)
//	{
//		Node*cur = &iter; //연산자중복으로 Node의 주소를 반환하게 해준다.
//		Node*pcur = cur->prev;
//		Node*n;
//		n = AllocNode(data);
//
//		pcur->next = n;
//		n->prev = pcur;
//		cur->prev = n;
//		n->next = cur;
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next);
//	}
//	
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//	////////////////////////////////////////////
//	
//};
///////////////////////////////////////////
//void main()
//{
//	List<int> lt;
//
//	lt.AddBack(10);
//	lt.AddBack(20);
//	lt.AddBack(30);
//	lt.AddBack(40);
//	lt.AddBack(50);
//
//	List<int>::Iterator iter= lt.Begin();
//	++iter;
//	lt.Erase(iter);
//	for(List<int>::Iterator iter = lt.Begin() ; iter!=lt.End() ; iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//template<typename T>
//class List
//{
//public:
//	struct Node
//	{
//		T data;
//		Node*prev;
//		Node*next;
//	};
//	class Iterator
//	{
//		Node*ptr;
//	public:
//		Iterator(Node* p):ptr(p){}
//		bool operator!=(Iterator arg)const
//		{
//			return ptr!=arg.ptr;
//		}
//		Iterator operator++()
//		{
//			ptr=ptr->next;
//			return *this;
//		}
//		const T& operator*()const
//		{
//			return ptr->data;
//		}
//		Node* operator&()
//		{
//			return ptr;
//		}
//		T* operator->()
//		{
//			return &(ptr->data);
//		}
//	};
//private:
//	Node*head;
//	Node*tail;
//	Node*AllocNode(const T& data) //내부에서만 사용한다.
//	{
//		Node*n = new Node;
//		n->data = data;
//		n->prev = n->next = NULL;
//		return n;
//	}
//public:
//	
//	List()
//	{
//		head = AllocNode(T()); //dummy_Node생성
//		tail = AllocNode(T()); //dummy_Node생성
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		for(Node*p=head;p;)
//		{
//			Node*pn;
//			pn=p->next;
//			delete p;
//			p=pn;
//		}
//
//	}
//	void AddBack(const T& data)
//	{
//		Node*ptail=tail->prev;
//		Node*n = AllocNode(data);
//
//		ptail->next = n;
//		n->prev = ptail;
//		n->next = tail;
//		tail ->prev = n;
//
//	}
//	void AddFront(const T& data)
//	{
//		Node*nhead=head->next;
//		Node*n = AllocNode(data);
//
//		nhead->prev = n;
//		n->next = nhead;
//		n->prev = head;
//		head -> next = n;
//
//	}
//	void Erase(Iterator iter)
//	{
//		Node*cur = &iter;
//		Node*pn;
//		pn=cur->prev;
//		pn->next=cur->next;
//		delete cur;
//	}
//	void Insert(Iterator iter,const T& data)
//	{
//		Node*cur = &iter; //연산자중복으로 Node의 주소를 반환하게 해준다.
//		Node*pcur = cur->prev;
//		Node*n;
//		n = AllocNode(data);
//
//		pcur->next = n;
//		n->prev = pcur;
//		cur->prev = n;
//		n->next = cur;
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next);
//	}
//	
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//	////////////////////////////////////////////
//	
//};
///////////////////////////////////////////
//class Point
//{
//	int x,y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y){}
//	void Print()const{cout<<x<<","<<y<<endl;}
//};
//void main()
//{
//	List<Point> lt;
//
//	lt.AddBack(Point(2,3));
//	lt.AddBack(Point(4,5));
//	lt.AddBack(Point(5,6));
//	lt.AddBack(Point(5,5));
//	lt.AddBack(Point(3,4));
//
//	/*List<int>::Iterator iter= lt.Begin();
//	++iter;
//	lt.Erase(iter);*/
//	for(List<Point>::Iterator iter = lt.Begin() ; iter!=lt.End() ; iter++)
//		iter->Print(); //iter.operator->()->Print();
//	cout<<endl;
//}
//

#include<iostream>
using namespace std;
template<typename T>
class List
{
public:
	struct Node
	{
		T data;
		Node*prev;
		Node*next;
	};
	class Iterator
	{
		Node*ptr;
	public:
		Iterator(Node* p):ptr(p){}
		bool operator!=(Iterator arg)const
		{
			return ptr!=arg.ptr;
		}
		Iterator operator++()
		{
			ptr=ptr->next;
			return *this;
		}
		const T& operator*()const
		{
			return ptr->data;
		}
		Node* operator&()
		{
			return ptr;
		}
		T* operator->()
		{
			return &(ptr->data);
		}
	};
private:
	Node*head;
	Node*tail;
	Node*AllocNode(const T& data) //내부에서만 사용한다.
	{
		Node*n = new Node;
		n->data = data;
		n->prev = n->next = NULL;
		return n;
	}
public:
	
	List()
	{
		head = AllocNode(T()); //dummy_Node생성
		tail = AllocNode(T()); //dummy_Node생성
		head->next = tail;
		tail->prev = head;
	}
	~List()
	{
		for(Node*p=head;p;)
		{
			Node*pn;
			pn=p->next;
			delete p;
			p=pn;
		}

	}
	void AddBack(const T& data)
	{
		Node*ptail=tail->prev;
		Node*n = AllocNode(data);

		ptail->next = n;
		n->prev = ptail;
		n->next = tail;
		tail ->prev = n;

	}
	void AddFront(const T& data)
	{
		Node*nhead=head->next;
		Node*n = AllocNode(data);

		nhead->prev = n;
		n->next = nhead;
		n->prev = head;
		head -> next = n;

	}
	void Erase(Iterator iter)
	{
		Node*cur = &iter;
		Node*pn;
		pn=cur->prev;
		pn->next=cur->next;
		delete cur;
	}
	void Insert(Iterator iter,const T& data)
	{
		Node*cur = &iter; //연산자중복으로 Node의 주소를 반환하게 해준다.
		Node*pcur = cur->prev;
		Node*n;
		n = AllocNode(data);

		pcur->next = n;
		n->prev = pcur;
		cur->prev = n;
		n->next = cur;
	}
	Iterator Begin()
	{
		return Iterator(head->next);
	}
	
	Iterator End()
	{
		return Iterator(tail);
	}
	////////////////////////////////////////////
	
};
/////////////////////////////////////////
class Point
{
	int x,y;
public:
	Point(int _x=0,int _y=0):x(_x),y(_y){}
	void Print()const{cout<<x<<","<<y<<endl;}
};
void main()
{
	List<Point*> lt;

	lt.AddBack(new Point(2,3));
	lt.AddBack(new Point(4,5));
	lt.AddBack(new Point(5,6));
	lt.AddBack(new Point(5,5));
	lt.AddBack(new Point(3,4));

	List<Point*>::Iterator iter= lt.Begin();
	++iter;
	delete *iter; //fasgjdsalghkdsfghkghfdbvdfkbverhiughkjswaghfskdja
	lt.Erase(iter);
	for(List<Point*>::Iterator iter = lt.Begin() ; iter!=lt.End() ; iter++)
		(*iter)->Print(); //iter.operator->()->Print();
	cout<<endl;

	for(List<Point*>::Iterator iter = lt.Begin() ; iter!=lt.End() ; iter++)
		delete *iter;
}
////////////////////////////////////////////////////////fdsafgsdfsfsafsa//
//
//
//#include<iostream>
//using namespace std;
//template<typename T>
//class List
//{
//public:
//	struct Node
//	{
//		T data;
//		Node*prev;
//		Node*next;
//	};
//	class Iterator
//	{
//		Node*ptr;
//	public:
//		Iterator(Node* p):ptr(p){}
//		bool operator!=(Iterator arg)const
//		{
//			return ptr!=arg.ptr;
//		}
//		Iterator operator++()
//		{
//			ptr=ptr->next;
//			return *this;
//		}
//		const T& operator*()const
//		{
//			return ptr->data;
//		}
//		Node* operator&()
//		{
//			return ptr;
//		}
//		T* operator->()
//		{
//			return &(ptr->data);
//		}
//	};
//private:
//	Node*head;
//	Node*tail;
//	Node*AllocNode(const T& data) //내부에서만 사용한다.
//	{
//		Node*n = new Node;
//		n->data = data;
//		n->prev = n->next = NULL;
//		return n;
//	}
//public:
//	
//	List()
//	{
//		head = AllocNode(T()); //dummy_Node생성
//		tail = AllocNode(T()); //dummy_Node생성
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		for(Node*p=head;p;)
//		{
//			Node*pn;
//			pn=p->next;
//			delete p;
//			p=pn;
//		}
//
//	}
//	void AddBack(const T& data)
//	{
//		Node*ptail=tail->prev;
//		Node*n = AllocNode(data);
//
//		ptail->next = n;
//		n->prev = ptail;
//		n->next = tail;
//		tail ->prev = n;
//
//	}
//	void AddFront(const T& data)
//	{
//		Node*nhead=head->next;
//		Node*n = AllocNode(data);
//
//		nhead->prev = n;
//		n->next = nhead;
//		n->prev = head;
//		head -> next = n;
//
//	}
//	void RemoveBack()
//	{
//		Node* ptail = tail->prev;
//		Node* pptail = ptail -> prev;
//		delete ptail;
//		pptail -> next = tail;
//		tail -> prev - pptail;
//	}
//	void Erase(Iterator iter)
//	{
//		Node*cur = &iter;
//		Node*pn;
//		pn=cur->prev;
//		pn->next=cur->next;
//		delete cur;
//	}
//	void Insert(Iterator iter,const T& data)
//	{
//		Node*cur = &iter; //연산자중복으로 Node의 주소를 반환하게 해준다.
//		Node*pcur = cur->prev;
//		Node*n;
//		n = AllocNode(data);
//
//		pcur->next = n;
//		n->prev = pcur;
//		cur->prev = n;
//		n->next = cur;
//	}
//	const T& Back()const
//	{
//		return tail->prev->data;
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next);
//	}
//	
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//	////////////////////////////////////////////
//	
//};
//template<typename T>
//class Stack
//{
//	List<T> lt;
//public:
//	void Push(const T&data)
//	{
//		lt.AddBack(data);
//	}
//	void Pop()
//	{
//		lt.RemoveBack();
//	}
//	const T& Top()
//	{
//		return lt.Back();
//	}
//};
//void main()
//{
//	Stack<int> st;
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
////////////////////////////gsdgsdgfhfhut438&^%@^$%@^*#*!@#!//////////
//
//
//#include<iostream>
//using namespace std;
//template<typename T>
//class List
//{
//public:
//	struct Node
//	{
//		T data;
//		Node*prev;
//		Node*next;
//	};
//	class Iterator
//	{
//		Node*ptr;
//	public:
//		Iterator(Node* p):ptr(p){}
//		bool operator!=(Iterator arg)const
//		{
//			return ptr!=arg.ptr;
//		}
//		Iterator operator++()
//		{
//			ptr=ptr->next;
//			return *this;
//		}
//		const T& operator*()const
//		{
//			return ptr->data;
//		}
//		Node* operator&()
//		{
//			return ptr;
//		}
//		T* operator->()
//		{
//			return &(ptr->data);
//		}
//	};
//private:
//	Node*head;
//	Node*tail;
//	Node*AllocNode(const T& data) //내부에서만 사용한다.
//	{
//		Node*n = new Node;
//		n->data = data;
//		n->prev = n->next = NULL;
//		return n;
//	}
//public:
//	
//	List()
//	{
//		head = AllocNode(T()); //dummy_Node생성
//		tail = AllocNode(T()); //dummy_Node생성
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		for(Node*p=head;p;)
//		{
//			Node*pn;
//			pn=p->next;
//			delete p;
//			p=pn;
//		}
//
//	}
//	void AddBack(const T& data)
//	{
//		Node*ptail=tail->prev;
//		Node*n = AllocNode(data);
//
//		ptail->next = n;
//		n->prev = ptail;
//		n->next = tail;
//		tail ->prev = n;
//
//	}
//	void AddFront(const T& data)
//	{
//		Node*nhead=head->next;
//		Node*n = AllocNode(data);
//
//		nhead->prev = n;
//		n->next = nhead;
//		n->prev = head;
//		head -> next = n;
//
//	}
//	void RemoveBack()
//	{
//		Node* ptail = tail->prev;
//		Node* pptail = ptail -> prev;
//		pptail -> next = tail;
//		tail -> prev - pptail;
//	}
//	void Erase(Iterator iter)
//	{
//		Node*cur = &iter;
//		Node*pn;
//		pn=cur->prev;
//		pn->next=cur->next;
//		delete cur;
//	}
//	void Insert(Iterator iter,const T& data)
//	{
//		Node*cur = &iter; //연산자중복으로 Node의 주소를 반환하게 해준다.
//		Node*pcur = cur->prev;
//		Node*n;
//		n = AllocNode(data);
//
//		pcur->next = n;
//		n->prev = pcur;
//		cur->prev = n;
//		n->next = cur;
//	}
//	const T& Back()const
//	{
//		return tail->prev->data;
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next);
//	}
//	
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//	////////////////////////////////////////////
//	
//};
//template<typename T>
//class Queue
//{
//	List<T> lt;
//public:
//	void Push(const T&data)
//	{
//		lt.AddBack(data);
//	}
//	void Pop()
//	{
//		List<T>::Iterator iter = lt.Begin();
//		lt.Erase(iter);
//	}
//	const T& Front()
//	{
//		List<T>::Iterator iter = lt.Begin();
//		return *iter;
//	}
//};
//void main()
//{
//	Queue<int> q;
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
//
//
//#include<iostream>
//using namespace std;
//template<typename T>
//class List
//{
//public:
//	struct Node
//	{
//		T data;
//		Node*prev;
//		Node*next;
//	};
//	class Iterator
//	{
//		Node*ptr;
//	public:
//		Iterator(Node* p):ptr(p){}
//		bool operator!=(Iterator arg)const
//		{
//			return ptr!=arg.ptr;
//		}
//		Iterator operator++()
//		{
//			ptr=ptr->next;
//			return *this;
//		}
//		const T& operator*()const
//		{
//			return ptr->data;
//		}
//		Node* operator&()
//		{
//			return ptr;
//		}
//		T* operator->()
//		{
//			return &(ptr->data);
//		}
//	};
//private:
//	Node*head;
//	Node*tail;
//	Node*AllocNode(const T& data) //내부에서만 사용한다.
//	{
//		Node*n = new Node;
//		n->data = data;
//		n->prev = n->next = NULL;
//		return n;
//	}
//public:
//	
//	List()
//	{
//		head = AllocNode(T()); //dummy_Node생성
//		tail = AllocNode(T()); //dummy_Node생성
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		for(Node*p=head;p;)
//		{
//			Node*pn;
//			pn=p->next;
//			delete p;
//			p=pn;
//		}
//
//	}
//	void AddBack(const T& data)
//	{
//		Node*ptail=tail->prev;
//		Node*n = AllocNode(data);
//
//		ptail->next = n;
//		n->prev = ptail;
//		n->next = tail;
//		tail ->prev = n;
//
//	}
//	void AddFront(const T& data)
//	{
//		Node*nhead=head->next;
//		Node*n = AllocNode(data);
//
//		nhead->prev = n;
//		n->next = nhead;
//		n->prev = head;
//		head -> next = n;
//
//	}
//	void RemoveBack()
//	{
//		Node* ptail = tail->prev;
//		Node* pptail = ptail -> prev;
//		delete ptail;
//		pptail -> next = tail;
//		tail -> prev - pptail;
//	}
//	void Erase(Iterator iter)
//	{
//		Node*cur = &iter;
//		Node*pn;
//		pn=cur->prev;
//		pn->next=cur->next;
//		delete cur;
//	}
//	void Insert(Iterator iter,const T& data)
//	{
//		Node*cur = &iter; //연산자중복으로 Node의 주소를 반환하게 해준다.
//		Node*pcur = cur->prev;
//		Node*n;
//		n = AllocNode(data);
//
//		pcur->next = n;
//		n->prev = pcur;
//		cur->prev = n;
//		n->next = cur;
//	}
//	const T& Back()const
//	{
//		return tail->prev->data;
//	}
//	const T& Front()const
//	{
//		return head->next->data;
//	}
//	void RemoveFront()
//	{
//		Node*nhead = head->next;
//		Node*nnhead = nhead->next;
//		delete nhead;
//		head->next = nnhead;
//		nnhead->prev = head;
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next);
//	}
//	
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
/////////////////////////////////////////////////
//	
//};
//template<typename T>
//class Queue
//{
//	List<T> lt;
//public:
//	void Push(const T&data)
//	{
//		lt.AddBack(data);
//	}
//	void Pop()
//	{
//		lt.RemoveFront();
//	}
//	const T& Front()
//	{
//		return lt.Front();
//	}
//};
//
//void main()
//{
//	Queue<int> q;
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