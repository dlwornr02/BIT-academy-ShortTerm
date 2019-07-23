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
//	List<int> lt;
//
//	lt.AddBack(10);
//	lt.AddBack(20);
//	lt.AddBack(30);
//
//	for(List<int>::Iterator iter = lt.Begin(); iter!=lt.End();iter++)
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
//	List();
//	~List();
//	void AddBack(const T& data);
//	void AddFront(const T& data);
//	void RemoveBack();
//	void Erase(Iterator iter);
//	void Insert(Iterator iter,const T& data);
//	const T& Back()const;
//	const T& Front()const;
//	void RemoveFront();
//	Iterator Begin();
//	Iterator End();
//};
//template<typename T>
//List<T>::List()
//{
//	head = AllocNode(T()); //dummy_Node생성
//	tail = AllocNode(T()); //dummy_Node생성
//	head->next = tail;
//	tail->prev = head;
//}
//template<typename T>
//List<T>::~List()
//{
//	for(Node*p=head;p;)
//	{
//		Node*pn;
//		pn=p->next;
//		delete p;
//		p=pn;
//	}
//
//}
//template<typename T>
//void List<T>::AddBack(const T& data)
//{
//	Node*ptail=tail->prev;
//	Node*n = AllocNode(data);
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail ->prev = n;
//
//}
//template<typename T>
//void List<T>::AddFront(const T& data)
//{
//	Node*nhead=head->next;
//	Node*n = AllocNode(data);
//
//	nhead->prev = n;
//	n->next = nhead;
//	n->prev = head;
//	head -> next = n;
//
//}
//template<typename T>
//void List<T>::RemoveBack()
//{
//	Node* ptail = tail->prev;
//	Node* pptail = ptail -> prev;
//	delete ptail;
//	pptail -> next = tail;
//	tail -> prev - pptail;
//}
//template<typename T>
//void List<T>::Erase(Iterator iter)
//{
//	Node*cur = &iter;
//	Node*pn;
//	pn=cur->prev;
//	pn->next=cur->next;
//	delete cur;
//}
//template<typename T>
//void List<T>::Insert(Iterator iter,const T& data)
//{
//	Node*cur = &iter; //연산자중복으로 Node의 주소를 반환하게 해준다.
//	Node*pcur = cur->prev;
//	Node*n;
//	n = AllocNode(data);
//
//	pcur->next = n;
//	n->prev = pcur;
//	cur->prev = n;
//	n->next = cur;
//}
//template<typename T>
//const T& List<T>::Back()const
//{
//	return tail->prev->data;
//}
//template<typename T>
//const T& List<T>::Front()const
//{
//	return head->next->data;
//}
//template<typename T>
//void List<T>::RemoveFront()
//{
//	Node*nhead = head->next;
//	Node*nnhead = nhead->next;
//	delete nhead;
//	head->next = nnhead;
//	nnhead->prev = head;
//}
//template<typename T>
//typename List<T>::Iterator List<T>::Begin() //template형식의 내부타입이란걸 typename으로 표식해줌
//{
//	return Iterator(head->next);
//}
//template<typename T>
//typename List<T>::Iterator List<T>::End()
//{
//	return Iterator(tail);
//}
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
//	List<int> lt;
//
//	lt.AddBack(10);
//	lt.AddBack(20);
//	lt.AddBack(30);
//
//	for(List<int>::Iterator iter = lt.Begin(); iter!=lt.End();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
/////////2진검색알고리즘///////
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int _Bin_Search(int list[],int left,int right,int data)
//{
//	if((left<=right))
//	{
//		int middle = (left+right)/2;
//		if(list[middle]<data)
//		{
//			return _Bin_Search(list,middle+1,right,data);
//		}
//		else if(list[middle]>data)
//		{
//			return _Bin_Search(list,left,middle-1,data);
//		}
//		else
//			return middle;
//	}
//	return -1;
//}
//int Bin_Search(int list[],int size,int data)
//{
//	return _Bin_Search(list,0,size-1,data); //다른 함수에 위임한다.
//}
//
//void main()
//{
//	//int list[10] = {40,60,20,30,70,55,90,35,75,22};
//	int list[10] = {20,22,30,35,40,55,60,70,75.90}; //정렬이 되어있어야 2진검색 가능
//
//	int idx = Bin_Search(list,10,22);
//	if(idx!=-1)
//		cout<<"["<<idx<<"]:"<<list[idx]<<endl;
//}
//
//
/////////2진검색알고리즘///////
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int Bin_Search(int list[],int size,int data)
//{
//	int left = 0;
//	int right = size-1;
//	while(left<=right)
//	{
//		int middle = (left+right)/2;
//		if(list[middle]<data)
//		{
//			left = middle + 1;
//		}
//		else if(list[middle]>data)
//		{
//			right = middle -1;
//		}
//		else 
//		{
//			return middle;
//		}
//
//	}
//}
//
//void main()
//{
//	//int list[10] = {40,60,20,30,70,55,90,35,75,22};
//	int list[10] = {20,22,30,35,40,55,60,70,75.90}; //정렬이 되어있어야 2진검색 가능
//
//	int idx = Bin_Search(list,10,22);
//	if(idx!=-1)
//		cout<<"["<<idx<<"]:"<<list[idx]<<endl;
//}
//
//
//////////TREE 자료구조///////2진트리
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*parent;
//	Node*lChild;
//	Node*rChild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = new Node;
//	n->data = data;
//	n->lChild = n->rChild = NULL;
//	return n;
//}
//void Inorder(Node*root)
//{
//	if(root == NULL)
//		return;
//	Inorder(root->lChild);
//	cout<<root->data<<" ";
//	Inorder(root->rChild);
//}
//void Preorder(Node*root)
//{
//	if(root == NULL)
//		return;
//	cout<<root->data<<" ";
//	Inorder(root->lChild);
//	Inorder(root->rChild);
//}
//void Postorder(Node*root)
//{
//	if(root == NULL)
//		return;
//	Inorder(root->lChild);
//	Inorder(root->rChild);
//	cout<<root->data<<" ";
//}
//void main()
//{
//	Node* root = NULL;
//	root = AllocNode(50);
//	root->lChild = AllocNode(30);
//	root->rChild = AllocNode(80);
//	root->lChild->lChild = AllocNode(10);
//	root->lChild->rChild = AllocNode(40);
//	root->rChild->lChild = AllocNode(60);
//	root->rChild->rChild = AllocNode(100);
//	//재귀함수로 해야한다. 재귀함수는 되게 어려움
//	Inorder(root);
//	cout<<endl;
//	Preorder(root);
//	cout<<endl;
//	Postorder(root);
//	cout<<endl;
//}
//
//
//////////TREE 자료구조///////2진트리
//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*parent;
//	Node*lChild;
//	Node*rChild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = new Node;
//	n->data = data;
//	n->lChild = n->rChild = NULL;
//	return n;
//}
//void Inorder(Node*root)
//{
//	if(root)
//	{
//		Inorder(root->lChild);
//		cout<<root->data<<" ";
//		Inorder(root->rChild);
//	}
//}
//void Preorder(Node*root)
//{
//	if(root)
//	{
//		cout<<root->data<<" ";
//		Preorder(root->lChild);
//		Preorder(root->rChild);
//	}
//}
//void Postorder(Node*root)
//{
//	if(root){
//		Postorder(root->lChild);
//		Postorder(root->rChild);
//		cout<<root->data<<" ";
//	}
//}
//void Levelorder(Node*root)
//{
//	queue<Node*> q;
//
//	if(root==NULL)
//		return;
//	q.push(root);
//	while(!q.empty()) //empty()메서드 : 비어있을 때 true 
//	{
//		Node* cur = q.front();
//		cout<<cur->data<<" ";
//		q.pop();
//		if(cur->lChild)
//			q.push(cur->lChild);
//		if(cur->rChild)
//			q.push(cur->rChild);
//	}
//	
//}
//void main()
//{
//	Node* root = NULL;
//	root = AllocNode(50);
//	root->lChild = AllocNode(30);
//	root->rChild = AllocNode(80);
//	root->lChild->lChild = AllocNode(10);
//	root->lChild->rChild = AllocNode(40);
//	root->rChild->lChild = AllocNode(60);
//	root->rChild->rChild = AllocNode(100);
//	//재귀함수로 해야한다. 재귀함수는 되게 어려움
//	Inorder(root);
//	cout<<endl;
//	Preorder(root);
//	cout<<endl;
//	Postorder(root);
//	cout<<endl;
//	Levelorder(root);
//	cout<<endl;
//}
//
//
//////////TREE 자료구조///////2진트리
//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*parent;
//	Node*lChild;
//	Node*rChild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = new Node;
//	n->data = data;
//	n->lChild = n->rChild = NULL;
//	return n;
//}
//void Inorder(Node*root)
//{
//	if(root)
//	{
//		Inorder(root->lChild);
//		cout<<root->data<<" ";
//		Inorder(root->rChild);
//	}
//}
//void Preorder(Node*root)
//{
//	if(root)
//	{
//		cout<<root->data<<" ";
//		Preorder(root->lChild);
//		Preorder(root->rChild);
//	}
//}
//void Postorder(Node*root)
//{
//	if(root){
//		Postorder(root->lChild);
//		Postorder(root->rChild);
//		cout<<root->data<<" ";
//	}
//}
//void Levelorder(Node*root)
//{
//	queue<Node*> q;
//
//	if(root==NULL)
//		return;
//	q.push(root);
//	while(!q.empty()) //empty()메서드 : 비어있을 때 true 
//	{
//		Node* cur = q.front();
//		cout<<cur->data<<" ";
//		q.pop();
//		if(cur->lChild)
//			q.push(cur->lChild);
//		if(cur->rChild)
//			q.push(cur->rChild);
//	}
//	
//}
//void DestroyTree(Node*root) //Destroy는 postorder방법으로 제거 가능
//{
//	if(root)
//	{
//		DestroyTree(root->lChild);
//		DestroyTree(root->rChild);
//		delete root;
//	}
//}
//void main()
//{
//	Node* root = NULL;
//	root = AllocNode(50);
//	root->lChild = AllocNode(30);
//	root->rChild = AllocNode(80);
//	root->lChild->lChild = AllocNode(10);
//	root->lChild->rChild = AllocNode(40);
//	root->rChild->lChild = AllocNode(60);
//	root->rChild->rChild = AllocNode(100);
//	//재귀함수로 해야한다. 재귀함수는 되게 어려움
//	Inorder(root);
//	cout<<endl;
//
//	DestroyTree(root);
//
//}
//
//
//////////TREE 자료구조///////2진트리
//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*parent;
//	Node*lChild;
//	Node*rChild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = new Node;
//	n->data = data;
//	n->lChild = n->rChild = NULL;
//	return n;
//}
//void Inorder(Node*root)
//{
//	if(root)
//	{
//		Inorder(root->lChild);
//		cout<<root->data<<" ";
//		Inorder(root->rChild);
//	}
//}
//void Preorder(Node*root)
//{
//	if(root)
//	{
//		cout<<root->data<<" ";
//		Preorder(root->lChild);
//		Preorder(root->rChild);
//	}
//}
//void Postorder(Node*root)
//{
//	if(root){
//		Postorder(root->lChild);
//		Postorder(root->rChild);
//		cout<<root->data<<" ";
//	}
//}
//void Levelorder(Node*root)
//{
//	queue<Node*> q;
//
//	if(root==NULL)
//		return;
//	q.push(root);
//	while(!q.empty()) //empty()메서드 : 비어있을 때 true 
//	{
//		Node* cur = q.front();
//		cout<<cur->data<<" ";
//		q.pop();
//		if(cur->lChild)
//			q.push(cur->lChild);
//		if(cur->rChild)
//			q.push(cur->rChild);
//	}
//	
//}
//void DestroyTree(Node*root) //Destroy는 levelorder방법으로도 제거 가능
//{
//	queue<Node*> q;
//
//	if(root==NULL)
//		return;
//	q.push(root);
//	while(!q.empty()) //empty()메서드 : 비어있을 때 true 
//	{
//		Node* cur = q.front();
//		q.pop();
//		if(cur->lChild)
//			q.push(cur->lChild);
//		if(cur->rChild)
//			q.push(cur->rChild);
//		delete cur;
//	}
//}
//void main()
//{
//	Node* root = NULL;
//	root = AllocNode(50);
//	root->lChild = AllocNode(30);
//	root->rChild = AllocNode(80);
//	root->lChild->lChild = AllocNode(10);
//	root->lChild->rChild = AllocNode(40);
//	root->rChild->lChild = AllocNode(60);
//	root->rChild->rChild = AllocNode(100);
//	//재귀함수로 해야한다. 재귀함수는 되게 어려움
//	Inorder(root);
//	cout<<endl;
//
//	DestroyTree(root);
//
//}
//
//
//////////TREE 자료구조///////2진트리
//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*parent;
//	Node*lChild;
//	Node*rChild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = new Node;
//	n->data = data;
//	n->lChild = n->rChild = NULL;
//	return n;
//}
//void Inorder(Node*root)
//{
//	if(root)
//	{
//		Inorder(root->lChild);
//		cout<<root->data<<" ";
//		Inorder(root->rChild);
//	}
//}
//void Preorder(Node*root)
//{
//	if(root)
//	{
//		cout<<root->data<<" ";
//		Preorder(root->lChild);
//		Preorder(root->rChild);
//	}
//}
//void Postorder(Node*root)
//{
//	if(root){
//		Postorder(root->lChild);
//		Postorder(root->rChild);
//		cout<<root->data<<" ";
//	}
//}
//void Levelorder(Node*root)
//{
//	queue<Node*> q;
//
//	if(root==NULL)
//		return;
//	q.push(root);
//	while(!q.empty()) //empty()메서드 : 비어있을 때 true 
//	{
//		Node* cur = q.front();
//		cout<<cur->data<<" ";
//		q.pop();
//		if(cur->lChild)
//			q.push(cur->lChild);
//		if(cur->rChild)
//			q.push(cur->rChild);
//	}
//	
//}
//void DestroyTree(Node*root) //Destroy는 levelorder방법으로도 제거 가능
//{
//	queue<Node*> q;
//
//	if(root==NULL)
//		return;
//	q.push(root);
//	while(!q.empty()) //empty()메서드 : 비어있을 때 true 
//	{
//		Node* cur = q.front();
//		q.pop();
//		if(cur->lChild)
//			q.push(cur->lChild);
//		if(cur->rChild)
//			q.push(cur->rChild);
//		delete cur;
//	}
//}
//Node* AddNode(Node*root,int data)
//{
//	if(root == NULL)
//		return AllocNode(data);
//	if(data < root->data)
//	{
//		root->lChild = AddNode(root->lChild , data);
//	}
//	else
//	{
//		root->rChild = AddNode(root->rChild , data);//return 된 값을 자기자신의 값에 달아주는 구조로 재귀함수를 호출한다.
//	}
//	return root;
//}
//void main()
//{
//	Node* root = NULL;
//	root = AddNode(root,50);
//	root = AddNode(root,30);
//	root = AddNode(root,80);
//	root = AddNode(root,10);
//	root = AddNode(root,40);
//	root = AddNode(root,60);
//	root = AddNode(root,100);
//	
//	Inorder(root);
//	cout<<endl;
//
//	DestroyTree(root);
//
//}
//
//
//////////TREE 자료구조///////2진트리
//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node*parent;
//	Node*lChild;
//	Node*rChild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = new Node;
//	n->data = data;
//	n->lChild = n->rChild = NULL;
//	return n;
//}
//void Inorder(Node*root)
//{
//	if(root)
//	{
//		Inorder(root->lChild);
//		cout<<root->data<<" ";
//		Inorder(root->rChild);
//	}
//}
//void Preorder(Node*root)
//{
//	if(root)
//	{
//		cout<<root->data<<" ";
//		Preorder(root->lChild);
//		Preorder(root->rChild);
//	}
//}
//void Postorder(Node*root)
//{
//	if(root){
//		Postorder(root->lChild);
//		Postorder(root->rChild);
//		cout<<root->data<<" ";
//	}
//}
//void Levelorder(Node*root)
//{
//	queue<Node*> q;
//
//	if(root==NULL)
//		return;
//	q.push(root);
//	while(!q.empty()) //empty()메서드 : 비어있을 때 true 
//	{
//		Node* cur = q.front();
//		cout<<cur->data<<" ";
//		q.pop();
//		if(cur->lChild)
//			q.push(cur->lChild);
//		if(cur->rChild)
//			q.push(cur->rChild);
//	}
//	
//}
//void DestroyTree(Node*root) //Destroy는 levelorder방법으로도 제거 가능
//{
//	queue<Node*> q;
//
//	if(root==NULL)
//		return;
//	q.push(root);
//	while(!q.empty()) //empty()메서드 : 비어있을 때 true 
//	{
//		Node* cur = q.front();
//		q.pop();
//		if(cur->lChild)
//			q.push(cur->lChild);
//		if(cur->rChild)
//			q.push(cur->rChild);
//		delete cur;
//	}
//}
//Node* AddNode(Node*root,int data)
//{
//	if(root == NULL)
//		return AllocNode(data);
//	Node*proot = root;
//	Node*parent;
//	while(proot!=NULL)
//	{
//		if( (data < proot->data))
//		{
//			parent = proot;
//			proot = proot->lChild;
//			if(proot==NULL)
//			{
//				parent->lChild = AllocNode(data);
//			}
//		}
//		else
//		{
//			parent = proot;
//			proot = proot->rChild;
//			if(proot==NULL)
//			{
//				parent->rChild = AllocNode(data);
//			}
//		}
//	}
//	return root;
//}
//
//void main()
//{
//	Node* root = NULL;
//	root = AddNode(root,50);
//	root = AddNode(root,30);
//	root = AddNode(root,80);
//	root = AddNode(root,40);
//	
//	Inorder(root);
//	cout<<endl;
//
//	DestroyTree(root);
//
//}