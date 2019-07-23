#include<iostream>
#include<algorithm>
using namespace std;
void PrintArray(int list[], int size)
{
	for(int i = 0 ; i < size ; i++)
	{
		cout<<list[i]<<" ";
	}
	cout<<endl;
}
void main()
{

	int list[8] = {80,50,10,20,40,60,100,90};
	int size = 8;

	PrintArray(list, size);
	make_heap(list,list+size);
	PrintArray(list,size);
}

//#include<iostream>
//#include<stack>
//using namespace std;
//int Calculate(const char*s)
//{
//	stack<int>st;
//	for(int i=0; s[i] ; i++ )
//	{
//		if('0'<=s[i]&& s[i]<='9')
//		{
//			st.push(s[i]-'0');
//		}
//		else{
//			int op1,op2;
//			op2 = st.top();
//			st.pop();
//			op1 = st.top();
//			st.pop();
//			switch(s[i])
//			{
//			case '+':
//				st.push(op1+op2);
//				break;
//			case '-':
//				st.push(op1-op2);
//				break;
//			case '*':
//				st.push(op1*op2);
//				break;
//			case '/':
//				st.push(op1/op2);
//				break;
//			}
//		}
//	}
//	return st.top();
//}
//void main()
//{
//	const char* s = "237*+45*+";
//
//	cout<<Calculate(s)<<endl;
//}
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
//Node* AddNode(Node*root, int data)
//{
//	if(root==NULL)
//	{
//		return AllocNode(data);
//	}
//	if(root->data > data)
//	{
//		root->lChild = AddNode(root->lChild,data);
//	}
//	else
//	{
//		root->rChild = AddNode(root->rChild,data);
//	}
//	return root;
//}
//void Inorder(Node*root)
//{
//	if(root)
//	{
//		Inorder(root->lChild);
//		cout<<root->data<<endl;
//		Inorder(root->rChild);
//	}
//}
//void DestroyNode(Node*root) //Destroy는 levelorder방법으로도 제거 가능
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
//Node* RemoveNode(Node*root,int data)
//{
//	if(root==NULL)
//	{
//		return NULL;
//	}
//	else if(root->data > data)
//		root->lChild = RemoveNode(root->lChild,data);
//	else if(root->data < data)
//		root->rChild = RemoveNode(root->rChild,data);
//	else
//	{
//		if(root->lChild==NULL && root->rChild==NULL)
//		{
//			delete root;
//			return NULL;
//		}
//		else if(root->lChild !=NULL && root->rChild == NULL)
//		{
//			Node*parent = root->lChild;
//			delete root;
//			return parent;
//		}
//		else if(root->lChild == NULL && root->rChild != NULL)
//		{
//			Node*parent = root->rChild;
//			delete root;
//			return parent;
//		}
//		else
//		{
//			Node*proot = root;
//			Node*rch = root->rChild;
//			while(rch->lChild)
//			{
//				proot = rch;
//				rch = rch->lChild;
//			}
//			root->data = rch->data;
//			if(proot == root)
//			{
//				proot->rChild = rch->rChild;
//				delete rch;
//				return root;
//			}
//			proot->lChild = rch->rChild;
//			delete rch;
//			return root;
//		}
//	}
//	return root;
//}
//Node* FindNode(Node*root,int data)
//{
//	if(root==NULL)
//		return NULL;
//	if(root->data > data)
//	{
//		return FindNode(root->lChild,data);
//	}
//	else if(root->data < data)
//	{
//		return FindNode(root->rChild,data);
//	}
//	else
//	{
//		return root;
//	}
//}
//void main()
//{
//	Node*root = NULL;
//	root = AddNode(root,50);
//	root = AddNode(root,80);
//	root = AddNode(root,10);
//	root = AddNode(root,90);
//
//	root = RemoveNode(root,50);
//	Inorder(root);
//
//	/*Node*p = FindNode(root,1000);
//	if(p!=NULL)
//		cout<<endl<<p->data<<endl<<endl;*/
//
//	Inorder(root);
//
//	DestroyNode(root);
//}
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
//Node* RemoveNode(Node* root, int data)
//{
//	if(root==NULL)
//		return NULL;
//	if(root->data > data)
//		root->lChild = RemoveNode(root->lChild,data);
//	else if(root->data < data)
//		root->rChild = RemoveNode(root->rChild,data);
//	else
//	{
//		if(root->lChild==NULL && root->rChild == NULL)
//		{
//			delete root;
//			return NULL;
//		}
//		else if(root->lChild != NULL && root->rChild == NULL)
//		{
//			Node*lChild = root->lChild;
//			delete root;
//			return lChild;
//		}
//	}
//
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
//	root = AddNode(root, 55);
//	root = AddNode(root, 56);
//	root = AddNode(root, 51);
//	
//	root = RemoveNode(root,60);
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
//Node* RemoveNode(Node* root, int data)
//{
//	if(root==NULL)
//		return NULL;
//	if(root->data > data)
//		root->lChild = RemoveNode(root->lChild,data);
//	else if(root->data < data)
//		root->rChild = RemoveNode(root->rChild,data);
//	else
//	{
//		if(root->lChild==NULL && root->rChild == NULL)
//		{
//			delete root;
//			return NULL;
//		}
//		else if(root->lChild != NULL && root->rChild == NULL)
//		{
//			Node*lChild = root->lChild;
//			delete root;
//			return lChild;
//		}
//		else if(root->lChild == NULL && root->rChild != NULL)
//		{
//			Node*rChild = root->rChild;
//			delete root;
//			return rChild;
//		}
//		else //차수가 2인 Node제거
//		{
//			Node*pp = root;
//			Node*p = root ->rChild;
//			while(p->lChild)
//			{
//				pp=p;
//				p=p->lChild;
//			}
//			root->data = p->data;
//			pp->lChild = p->rChild;
//			delete p;
//		}
//	}
//
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
//	root = AddNode(root, 55);
//	root = AddNode(root, 56);
//	root = AddNode(root, 51);
//	root = AddNode(root, 90);
//	root = AddNode(root, 95);
//	root = AddNode(root, 110);
//
//	
//	root = RemoveNode(root,80);
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
//Node* RemoveNode(Node* root, int data)
//{
//	if(root==NULL)
//		return NULL;
//	if(root->data > data)
//		root->lChild = RemoveNode(root->lChild,data);
//	else if(root->data < data)
//		root->rChild = RemoveNode(root->rChild,data);
//	else
//	{
//		if(root->lChild==NULL && root->rChild == NULL)
//		{
//			delete root;
//			return NULL;
//		}
//		else if(root->lChild != NULL && root->rChild == NULL)
//		{
//			Node*lChild = root->lChild;
//			delete root;
//			return lChild;
//		}
//		else if(root->lChild == NULL && root->rChild != NULL)
//		{
//			Node*rChild = root->rChild;
//			delete root;
//			return rChild;
//		}
//		else //차수가 2인 Node제거
//		{
//			Node*pp = root;
//			Node*p = root ->rChild;
//			while(p->lChild)
//			{
//				pp=p;
//				p=p->lChild;
//			}
//			root->data = p->data;
//			pp->lChild = p->rChild;
//			if(pp==root) //루프가 한번도 안돌았을때
//				pp->rChild = p->rChild;
//			delete p;
//			return root;
//		}
//	}
//
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
//	root = RemoveNode(root,50);
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
//Node* RemoveNode(Node* root, int data)
//{
//	if(root==NULL)
//		return NULL;
//	if(root->data > data)
//		root->lChild = RemoveNode(root->lChild,data);
//	else if(root->data < data)
//		root->rChild = RemoveNode(root->rChild,data);
//	else
//	{
//		if(root->lChild==NULL && root->rChild == NULL)
//		{
//			delete root;
//			return NULL;
//		}
//		else if(root->lChild != NULL && root->rChild == NULL)
//		{
//			Node*lChild = root->lChild;
//			delete root;
//			return lChild;
//		}
//		else if(root->lChild == NULL && root->rChild != NULL)
//		{
//			Node*rChild = root->rChild;
//			delete root;
//			return rChild;
//		}
//		else //차수가 2인 Node제거
//		{
//			Node*pp = root;
//			Node*p = root ->rChild;
//			while(p->lChild)
//			{
//				pp=p;
//				p=p->lChild;
//			}
//			root->data = p->data;
//			pp->lChild = p->rChild;
//			if(pp==root) //루프가 한번도 안돌았을때
//				pp->rChild = p->rChild;
//			delete p;
//			return root;
//		}
//	}
//
//	return root;
//}
//Node* FindNode(Node* root,int data)
//{
//	if(root == NULL)
//		return NULL;
//	if(root->data > data)
//		return FindNode(root->lChild,data);
//	else if(root->data < data)
//		return FindNode(root->rChild,data);
//	else 
//		return root;
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
//	Node*p = FindNode(root,40);
//	if(p)
//		cout<<p->data<<endl;
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
//Node* RemoveNode(Node* root, int data)
//{
//	if(root==NULL)
//		return NULL;
//	if(root->data > data)
//		root->lChild = RemoveNode(root->lChild,data);
//	else if(root->data < data)
//		root->rChild = RemoveNode(root->rChild,data);
//	else
//	{
//		if(root->lChild==NULL && root->rChild == NULL)
//		{
//			delete root;
//			return NULL;
//		}
//		else if(root->lChild != NULL && root->rChild == NULL)
//		{
//			Node*lChild = root->lChild;
//			delete root;
//			return lChild;
//		}
//		else if(root->lChild == NULL && root->rChild != NULL)
//		{
//			Node*rChild = root->rChild;
//			delete root;
//			return rChild;
//		}
//		else //차수가 2인 Node제거
//		{
//			Node*pp = root;
//			Node*p = root ->rChild;
//			while(p->lChild)
//			{
//				pp=p;
//				p=p->lChild;
//			}
//			root->data = p->data;
//			pp->lChild = p->rChild;
//			if(pp==root) //루프가 한번도 안돌았을때
//				pp->rChild = p->rChild;
//			delete p;
//			return root;
//		}
//	}
//
//	return root;
//}
//Node* FindNode(Node* root,int data)
//{
//	Node*p=root;
//	while(p)
//	{
//		if(p->data > data)
//			p=p->lChild;
//		else if(p->data < data)
//			p = p->rChild;
//		else
//			return p;
//	}
//	return NULL;
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
//	Node*p = FindNode(root,1000);
//	if(p)
//		cout<<p->data<<endl;
//	Inorder(root);
//	cout<<endl;
//
//	DestroyTree(root);
//
//}
//
//
//#include<iostream>
//using namespace std;
//int Calculate(const char*s)
//{
//	for(int i = 0 ; s[i] ; i++)
//		cout<<s[i]<<endl;
//	return 0;
//}
//void main()
//{
//	const char* s = "237*+45*+";
//
//	cout<<Calculate(s)<<endl;
//}
//
//
//#include<iostream>
//#include<stack>
//using namespace std;
//int Calculate(const char*s)
//{
//	stack<int> st;
//
//	for(int i = 0 ; s[i] ; i++)
//	{
//		switch(s[i])
//		{
//		case '+':
//			{
//				int op1,op2;
//				op2  = st.top();
//				st.pop();
//				op1  = st.top();
//				st.pop();
//				st.push(op1+op2);
//			}
//			break;
//		case '-':
//			break;
//		case '*':
//			break;
//		case '/':
//			break;
//		default:
//			st.push(s[i]-'0'); //숫자로 저장
//		}
//	}
//	return 0;
//}
//void main()
//{
//	const char* s = "237*+45*+";
//
//	cout<<Calculate(s)<<endl;
//}
//
//
//#include<iostream>
//#include<stack>
//using namespace std;
//int Calculate(const char*s)
//{
//	stack<int> st;
//
//	for(int i = 0 ; s[i] ; i++)
//	{
//		if('0'<=s[i] && s[i]<='9')
//			st.push(s[i]-'0');
//		else
//		{
//			int op1,op2;
//			op2  = st.top();
//			st.pop();
//			op1  = st.top();
//			st.pop();
//			switch(s[i])
//			{
//			case '+':
//				st.push(op1+op2);
//				break;
//			case '-':
//				st.push(op1-op2);
//				break;
//			case '*':
//				st.push(op1*op2);
//				break;
//			case '/':
//				st.push(op1/op2);
//				break;
//			}
//		}
//	}
//	return st.top();
//}
//void main()
//{
//	const char* s = "237*+45*+";
//
//	cout<<Calculate(s)<<endl;
//}
//
//
//#include<iostream>
//#include<stack>
//using namespace std;
//int Calculate(const char*s)
//{
//	stack<int> st;
//
//	for(int i = 0 ; s[i] ; i++)
//	{
//		if('0'<=s[i] && s[i]<='9')
//			st.push(s[i]-'0');
//		else
//		{
//			int op1,op2;
//			op2  = st.top();
//			st.pop();
//			op1  = st.top();
//			st.pop();
//			switch(s[i])
//			{
//			case '+':
//				st.push(op1+op2);
//				break;
//			case '-':
//				st.push(op1-op2);
//				break;
//			case '*':
//				st.push(op1*op2);
//				break;
//			case '/':
//				st.push(op1/op2);
//				break;
//			}
//		}
//	}
//	return st.top();
//}
//void main()
//{
//	const char* s = "237*+45*+";
//
//	cout<<Calculate(s)<<endl;
//}
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//void PrintArray(int list[], int size)
//{
//   for(int i=0; i<size; ++i)
//      cout << list[i] << " ";
//   cout << endl;
//}
//void main()
//{
//   int list[8] = {100,80,50,10,20,40,60,90};
//   int size = 8;
//
//   PrintArray(list, size);
//   make_heap(list,list+size);
//   PrintArray(list, size);
//}
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//void PrintArray(int list[], int size)
//{
//   for(int i=0; i<size; ++i)
//      cout << list[i] << " ";
//   cout << endl;
//}
//void main()
//{
//   int list[10] = {100,80,50,10,20,40,60,90};
//   int size = 8;
//
//   PrintArray(list, size);
//   make_heap(list,list+size);
//   PrintArray(list, size);
//
//   list[size++] = 95;
//   push_heap(list, list+size);
//   PrintArray(list, size);
//}
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//void PrintArray(int list[], int size)
//{
//	cout<<"size: "<<size<<endl;
//   for(int i=0; i<size; ++i)
//      cout << list[i] << " ";
//   cout << endl;
//}
//void main()
//{
//   int list[10] = {0};
//   int size = 0;
//
//   list[size++] = 95;
//   push_heap(list, list+size);
//   PrintArray(list, size);
//   list[size++] = 70;
//   push_heap(list, list+size);
//   PrintArray(list, size);
//   list[size++] = 20;
//   push_heap(list, list+size);
//   PrintArray(list, size);
//   list[size++] = 30;
//   push_heap(list, list+size);
//   PrintArray(list, size);
//   list[size++] = 80;
//   push_heap(list, list+size);
//   PrintArray(list, size);
//}
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//void PrintArray(int list[], int size)
//{
//	cout<<"size: "<<size<<endl;
//   for(int i=0; i<size; ++i)
//      cout << list[i] << " ";
//   cout << endl;
//}
//void main()
//{
//   int list[10] = {95,70,20,30,80};
//   int size = 0;
//
//   PrintArray(list, size);
//   size++;
//   PrintArray(list, size);
//
//}
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//void PrintArray(int list[], int size)
//{
//	cout<<"size: "<<size<<endl;
//   for(int i=0; i<size; ++i)
//      cout << list[i] << " ";
//   cout << endl;
//}
//void main()
//{
//   int list[10] = {95,70,20,30,80,50};
//   int size = 0;
//
//   for(int i = 0 ; i<6 ; i++)
//	   push_heap(list,list + ++size);
//   PrintArray(list,size);
//}
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//void PrintArray(int list[], int size)
//{
//	cout<<"size: "<<size<<endl;
//   for(int i=0; i<size; ++i)
//      cout << list[i] << " ";
//   cout << endl;
//}
//void main()
//{
//   int list[10] = {95,70,20,30,80,50};
//   int size = 6;
//
//   make_heap(list,list+size); //한방에 가능
//   PrintArray(list,size);
//}
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//void PrintArray(int list[], int size)
//{
//	cout<<"size: "<<size<<endl;
//   for(int i=0; i<size; ++i)
//      cout << list[i] << " ";
//   cout << endl;
//}
//void main()
//{
//   int list[10] = {95,70,20,30,80,50};
//   int size = 6;
//
//   make_heap(list,list+size); //한방에 가능
//   PrintArray(list,size);
//
//   sort_heap(list, list+size);
//   PrintArray(list,size);
//   
//}
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//void PrintArray(int list[], int size)
//{
//	cout<<"size: "<<size<<" - ";
//   for(int i=1; i<=size; ++i)
//      cout << list[i] << " ";
//   cout << endl;
//}
//void Swap(int& a,int& b)
//{
//	int temp = a;
//	a=b;
//	b=temp;
//}
//void Push_heap(int list[])
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = child/2;
//	while(parent>0)
//	{
//		if(list[child] > list[parent])
//			Swap(list[child],list[parent]);
//		else
//			break;
//		child = parent;
//		parent = child/2;
//	}
//}
//void main()
//{
//   int list[10] = {0,50,70,80,30,20,95,60,90};
//
//   PrintArray(list,list[0]);
//   Push_heap(list);
//   PrintArray(list,list[0]);
//   Push_heap(list);
//   PrintArray(list,list[0]);
//   Push_heap(list);
//   PrintArray(list,list[0]);
//   Push_heap(list);
//   PrintArray(list,list[0]);
//   Push_heap(list);
//   PrintArray(list,list[0]);
//   Push_heap(list);
//   PrintArray(list,list[0]);
//   Push_heap(list);
//   PrintArray(list,list[0]);
//   Push_heap(list);
//   PrintArray(list,list[0]);
//}
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//void PrintArray(int list[], int size)
//{
//	cout<<"size: "<<size<<" - ";
//   for(int i=1; i<=size; ++i)
//      cout << list[i] << " ";
//   cout << endl;
//}
//void Swap(int& a,int& b)
//{
//	int temp = a;
//	a=b;
//	b=temp;
//}
//void Push_heap(int list[])
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = child/2;
//	while(parent>0)
//	{
//		if(list[child] > list[parent])
//			Swap(list[child],list[parent]);
//		else
//			break;
//		child = parent;
//		parent = child/2;
//	}
//}
//void Make_heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for(int i=0; i<size ; i++)
//		Push_heap(list);
//}
//void main()
//{
//   int list[10] = {8,50,70,80,30,20,95,60,90};
//
//   Make_heap(list);
//   PrintArray(list,list[0]);
//}
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//void PrintArray(int list[], int size)
//{
//	cout<<"size: "<<size<<" - ";
//   for(int i=1; i<=size; ++i)
//      cout << list[i] << " ";
//   cout << endl;
//}
//void Swap(int& a,int& b)
//{
//	int temp = a;
//	a=b;
//	b=temp;
//}
//void Push_heap(int list[])
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = child/2;
//	while(parent>0)
//	{
//		if(list[child] > list[parent])
//			Swap(list[child],list[parent]);
//		else
//			break;
//		child = parent;
//		parent = child/2;
//	}
//}
//void Make_heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for(int i=0; i<size ; i++)
//		Push_heap(list);
//}
//void Pop_heap(int list[])
//{
//	int size = --list[0];
//	Swap(list[1],list[size+1]);
//	int parent = 1;
//	int child = parent * 2;
//	while(child <= size)
//	{
//		if( (child+1<=size) && (list[child] < list[child+1]))
//			child = child + 1;
//		if(list[child] > list[parent])
//		{
//			Swap(list[child],list[parent]);
//			parent = child;
//			child = parent*2;
//		}
//		else
//			break;
//	}
//
//}
//void main()
//{
//   int list[10] = {8,50,70,80,30,20,95,60,90};
//
//   Make_heap(list);
//   PrintArray(list,list[0]);
//   Pop_heap(list);
//   PrintArray(list,list[0]);
//   Pop_heap(list);
//   PrintArray(list,list[0]);
//   Pop_heap(list);
//   PrintArray(list,list[0]);
//   Pop_heap(list);
//   PrintArray(list,list[0]);
//   Pop_heap(list);
//   PrintArray(list,list[0]);
//   Pop_heap(list);
//   PrintArray(list,list[0]);
//   Pop_heap(list);
//   PrintArray(list,list[0]);
//   Pop_heap(list);
//   PrintArray(list,list[0]);
//}
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//void PrintArray(int list[], int size)
//{
//	cout<<"size: "<<size<<" - ";
//   for(int i=1; i<=size; ++i)
//      cout << list[i] << " ";
//   cout << endl;
//}
//void Swap(int& a,int& b)
//{
//	int temp = a;
//	a=b;
//	b=temp;
//}
//void Push_heap(int list[])
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = child/2;
//	while(parent>0)
//	{
//		if(list[child] > list[parent])
//			Swap(list[child],list[parent]);
//		else
//			break;
//		child = parent;
//		parent = child/2;
//	}
//}
//void Make_heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for(int i=0; i<size ; i++)
//		Push_heap(list);
//}
//void Pop_heap(int list[])
//{
//	int size = --list[0];
//	Swap(list[1],list[size+1]);
//	int parent = 1;
//	int child = parent * 2;
//	while(child <= size)
//	{
//		if( (child+1<=size) && (list[child] < list[child+1]))
//			child = child + 1;
//		if(list[child] > list[parent])
//		{
//			Swap(list[child],list[parent]);
//			parent = child;
//			child = parent*2;
//		}
//		else
//			break;
//	}
//
//}
//void Sort_heap(int list[])
//{
//	int size = list[0];
//
//	for(int i = 0; i<size; i++)
//		Pop_heap(list);
//}
//void main()
//{
//   int list[10] = {8,50,70,80,30,20,95,60,90};
//
//   Make_heap(list);
//   Sort_heap(list);
//   PrintArray(list,8);
//
//
//}
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//void PrintArray(int list[], int size)
//{
//	cout<<"size: "<<size<<" - ";
//   for(int i=1; i<=size; ++i)
//      cout << list[i] << " ";
//   cout << endl;
//}
//void Swap(int& a,int& b)
//{
//	int temp = a;
//	a=b;
//	b=temp;
//}
//void Push_heap(int list[])
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = child/2;
//	while(parent>0)
//	{
//		if(list[child] > list[parent])
//			Swap(list[child],list[parent]);
//		else
//			break;
//		child = parent;
//		parent = child/2;
//	}
//}
//void Make_heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for(int i=0; i<size ; i++)
//		Push_heap(list);
//}
//void Pop_heap(int list[])
//{
//	int size = --list[0];
//	Swap(list[1],list[size+1]);
//	int parent = 1;
//	int child = parent * 2;
//	while(child <= size)
//	{
//		if( (child+1<=size) && (list[child] < list[child+1]))
//			child = child + 1;
//		if(list[child] > list[parent])
//		{
//			Swap(list[child],list[parent]);
//			parent = child;
//			child = parent*2;
//		}
//		else
//			break;
//	}
//
//}
//void Sort_heap(int list[])
//{
//	int size = list[0];
//
//	for(int i = 0; i<size; i++)
//		Pop_heap(list);
//}
//class Heap
//{
//	int* list;
//	int size;
//public:
//	Heap():list(0),size(0)
//	{
//		list = new int[100];
//		list[0] = 0;
//	}
//	~Heap(){delete[] list;}
//	void Push(int data)
//	{
//		list[++size] = data;
//		Push_heap(list);
//	}
//	void Print()const
//	{
//		for(int i = 1;i<=size;i++)
//			cout<<list[i]<<" ";
//		cout<<endl;
//	}
//};
//void main()
//{
//   //int list[10] = {8,50,70,80,30,20,95,60,90};
//	//95 90 80 50 20 70 60 30
//	Heap h;
//	h.Push(50);
//	h.Push(70);
//	h.Push(80);
//	h.Push(30);
//	h.Push(25);
//	h.Push(85);
//	h.Push(60);
//	h.Push(95);
//	h.Print();
//
//}
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//void PrintArray(int list[], int size)
//{
//	cout<<"size: "<<size<<" - ";
//   for(int i=1; i<=size; ++i)
//      cout << list[i] << " ";
//   cout << endl;
//}
//void Swap(int& a,int& b)
//{
//	int temp = a;
//	a=b;
//	b=temp;
//}
//void Push_heap(int list[])
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = child/2;
//	while(parent>0)
//	{
//		if(list[child] > list[parent])
//			Swap(list[child],list[parent]);
//		else
//			break;
//		child = parent;
//		parent = child/2;
//	}
//}
//void Make_heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for(int i=0; i<size ; i++)
//		Push_heap(list);
//}
//void Pop_heap(int list[])
//{
//	int size = --list[0];
//	Swap(list[1],list[size+1]);
//	int parent = 1;
//	int child = parent * 2;
//	while(child <= size)
//	{
//		if( (child+1<=size) && (list[child] < list[child+1]))
//			child = child + 1;
//		if(list[child] > list[parent])
//		{
//			Swap(list[child],list[parent]);
//			parent = child;
//			child = parent*2;
//		}
//		else
//			break;
//	}
//
//}
//void Sort_heap(int list[])
//{
//	int size = list[0];
//
//	for(int i = 0; i<size; i++)
//		Pop_heap(list);
//}
//class Heap
//{
//	int* list;
//	int size;
//public:
//	Heap():list(0),size(0)
//	{
//		list = new int[100];
//		list[0] = 0;
//	}
//	~Heap(){delete[] list;}
//	void Push(int data)
//	{
//		list[++size] = data;
//		Push_heap(list);
//	}
//	void Print()const
//	{
//		for(int i = 1;i<=size;i++)
//			cout<<list[i]<<" ";
//		cout<<endl;
//	}
//	int Pop()
//	{
//		Pop_heap(list);
//		size = list[0];
//		return list[size+1];
//	}
//};
//void main()
//{
//   //int list[10] = {8,50,70,80,30,20,95,60,90};
//	//95 90 80 50 20 70 60 30
//	Heap h;
//	h.Push(50);
//	h.Push(70);
//	h.Push(80);
//	h.Push(30);
//	h.Push(25);
//	h.Push(85);
//	h.Push(60);
//	h.Push(95);
//	h.Print();
//
//	cout<<h.Pop()<<endl;
//	cout<<h.Pop()<<endl;
//	cout<<h.Pop()<<endl;
//	cout<<h.Pop()<<endl;
//	cout<<h.Pop()<<endl;
//	cout<<h.Pop()<<endl;
//	cout<<h.Pop()<<endl;
//	cout<<h.Pop()<<endl;
//
//}
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//class Heap
//{
//	int* list;
//	int size;
//	void Pop_heap(int list[])
//	{
//		int size = --list[0];
//		swap(list[1],list[size+1]);
//		int parent = 1;
//		int child = parent * 2;
//		while(child <= size)
//		{
//			if( (child+1<=size) && (list[child] < list[child+1]))
//				child = child + 1;
//			if(list[child] > list[parent])
//			{
//				swap(list[child],list[parent]);
//				parent = child;
//				child = parent*2;
//			}
//			else
//				break;
//		}
//
//	}
//	void Push_heap(int list[])
//	{
//		int size = ++list[0];
//		int child = size;
//		int parent = child/2;
//		while(parent>0)
//		{
//			if(list[child] > list[parent])
//				swap(list[child],list[parent]);
//			else
//				break;
//			child = parent;
//			parent = child/2;
//		}
//	}
//public:
//	Heap():list(0),size(0)
//	{
//		list = new int[100];
//		list[0] = 0;
//	}
//	~Heap(){delete[] list;}
//	void Push(int data)
//	{
//		list[++size] = data;
//		Push_heap(list);
//	}
//	void Print()const
//	{
//		for(int i = 1;i<=size;i++)
//			cout<<list[i]<<" ";
//		cout<<endl;
//	}
//	int Pop()
//	{
//		Pop_heap(list);
//		size = list[0];
//		return list[size+1];
//	}
//};
//void main()
//{
//   //int list[10] = {8,50,70,80,30,20,95,60,90};
//	//95 90 80 50 20 70 60 30
//	Heap h;
//	h.Push(50);
//	h.Push(70);
//	h.Push(80);
//	h.Print();
//
//	cout<<h.Pop()<<endl;
//	cout<<h.Pop()<<endl;
//	cout<<h.Pop()<<endl;
//}
//
//
//#include<iostream>
//#include<algorithm>
//#include<list>
//using namespace std;
////기본적인 Hash의 interface
//struct Hash
//{
//	list<int> bucket[10];
//};
//int HashFunction(int key)
//{
//	return 0;
//}
//void Add(Hash*ph,int key)
//{
//
//}
//void Remove(Hash*ph,int key)
//{
//
//}
//bool Find(Hash*ph,int key)
//{
//	return false;
//}
//void Print(Hash*ph)
//{
//
//}
//void main()
//{
//	Hash h;
//	Add(&h,50);
//	Add(&h,72);
//	Add(&h,89);
//
//	Print(&h);
//}
//
//
//#include<iostream>
//#include<algorithm>
//#include<list>
//using namespace std;
//struct Hash
//{
//	list<int> bucket[10];
//};
//int HashFunction(int key,int size)
//{
//	return key%size;
//}
//void Add(Hash*ph,int key)
//{
//	int addr = HashFunction(key, 10);  //원소의 개수를 인수로 넣어준다.
//	ph->bucket[addr].push_back(key);
//}
//void Remove(Hash*ph,int key)
//{
//
//}
//bool Find(Hash*ph,int key)
//{
//	return false;
//}
//void Print(Hash*ph)
//{
//	for(int i=0;i<10;i++)
//	{
//		cout<<"["<<i<<"] : ";
//		for(list<int>::iterator iter = ph->bucket[i].begin();iter!=ph->bucket[i].end();iter++)
//			cout<<*iter<<" ";
//		cout<<endl;
//	}
//}
//void main()
//{
//	Hash h;
//	Add(&h,50);
//	Add(&h,72);
//	Add(&h,89);
//
//	Print(&h);
//}
//
//
//#include<iostream>
//#include<algorithm>
//#include<list>
//using namespace std;
//struct Hash
//{
//	list<int> bucket[10];
//};
//int HashFunction(int key,int size)
//{
//	return key%size;
//}
//void Add(Hash*ph,int key)
//{
//	int addr = HashFunction(key, 10);  //원소의 개수를 인수로 넣어준다.
//	ph->bucket[addr].push_back(key);
//}
//void Remove(Hash*ph,int key)
//{
//	int addr = HashFunction(key,10);
//	list<int>::iterator iter = find(ph->bucket[addr].begin(),ph->bucket[addr].end(),key);
//	if(iter!=ph->bucket[addr].end())
//		ph->bucket[addr].erase(iter);
//}
//bool Find(Hash*ph,int key)
//{
//	int addr = HashFunction(key,10);
//	list<int>::iterator iter = find(ph->bucket[addr].begin(),ph->bucket[addr].end(),key);
//	if(iter!=ph->bucket[addr].end())
//		return true;
//	else
//		return false;
//}
//void Print(Hash*ph)
//{
//	for(int i=0;i<10;i++)
//	{
//		cout<<"["<<i<<"] : ";
//		for(list<int>::iterator iter = ph->bucket[i].begin();iter!=ph->bucket[i].end();iter++)
//			cout<<*iter<<" ";
//		cout<<endl;
//	}
//}
//void main()
//{
//	Hash h;
//	Add(&h,50);
//	Add(&h,72);
//	Add(&h,89);
//
//	Remove(&h,72);
//	Print(&h);
//}
//
//
//#include<iostream>
//#include<algorithm>
//#include<list>
//using namespace std;
//struct Hash
//{
//	list<int> bucket[10];
//};
//int HashFunction(int key,int size)
//{
//	return key%size;
//}
//void Add(Hash*ph,int key)
//{
//	int addr = HashFunction(key, 10);  //원소의 개수를 인수로 넣어준다.
//	ph->bucket[addr].push_back(key);
//}
//void Remove(Hash*ph,int key)
//{
//	int addr = HashFunction(key,10);
//	list<int>::iterator iter = find(ph->bucket[addr].begin(),ph->bucket[addr].end(),key);
//	if(iter!=ph->bucket[addr].end())
//		ph->bucket[addr].erase(iter);
//}
//bool Find(Hash*ph,int key)
//{
//	int addr = HashFunction(key,10);
//	list<int>::iterator iter = find(ph->bucket[addr].begin(),ph->bucket[addr].end(),key);
//	if(iter!=ph->bucket[addr].end())
//		return true;
//	else
//		return false;
//}
//void Print(Hash*ph)
//{
//	for(int i=0;i<10;i++)
//	{
//		cout<<"["<<i<<"] : ";
//		for(list<int>::iterator iter = ph->bucket[i].begin();iter!=ph->bucket[i].end();iter++)
//			cout<<*iter<<" ";
//		cout<<endl;
//	}
//}
//void main()
//{
//	Hash h;
//	//충돌이 일어난다.
//	Add(&h,50);
//	Add(&h,70);
//	Add(&h,80);
//	Add(&h,90);
//	Add(&h,20);
//
//	Remove(&h,72);
//	Print(&h);
//}
//
//
//#include<iostream>
//#include<algorithm>
//#include<list>
//using namespace std;
//struct Hash
//{
//	list<int> bucket[10]; //10으로 고정 안함=>
//	int (*pHF)(int ,int);
//};
//int HashFunction(int key,int size)
//{
//	return key%size;
//}
//void Add(Hash*ph,int key)
//{
//	int addr = ph->pHF(key, 10);  //원소의 개수를 인수로 넣어준다.
//	ph->bucket[addr].push_back(key);
//}
//void Remove(Hash*ph,int key)
//{
//	int addr = ph->pHF(key,10);
//	list<int>::iterator iter = find(ph->bucket[addr].begin(),ph->bucket[addr].end(),key);
//	if(iter!=ph->bucket[addr].end())
//		ph->bucket[addr].erase(iter);
//}
//bool Find(Hash*ph,int key)
//{
//	int addr = ph->pHF(key,10);
//	list<int>::iterator iter = find(ph->bucket[addr].begin(),ph->bucket[addr].end(),key);
//	if(iter!=ph->bucket[addr].end())
//		return true;
//	else
//		return false;
//}
//void Print(Hash*ph)
//{
//	for(int i=0;i<10;i++)
//	{
//		cout<<"["<<i<<"] : ";
//		for(list<int>::iterator iter = ph->bucket[i].begin();iter!=ph->bucket[i].end();iter++)
//			cout<<*iter<<" ";
//		cout<<endl;
//	}
//}
//void InitHash(Hash*ph, int (*pf)(int,int)=NULL)
//{
//	if(pf)
//		ph->pHF =  pf;
//	else
//		ph->pHF = HashFunction;
//}
//void UninitHash(Hash*ph)
//{
//}
//////////////////////////////////////////////
//int MyHF(int key, int size)
//{
//	int addr = ((key >> 2) | 0x06) %size;
//	return addr;
//}
//void main()
//{
//	Hash h;
//	//충돌이 일어난다.=>client가 hashFunction을 바꿀수있게 해줘야한다.
//	InitHash(&h,MyHF);
//	Add(&h,50);
//	Add(&h,70);
//	Add(&h,80);
//	Add(&h,90);
//	Add(&h,20);
//
//	Remove(&h,72);
//	Print(&h);
//	UninitHash(&h);
//}
//
//
//
//#include<iostream>
//#include<algorithm>
//#include<list>
//using namespace std;
//struct Hash
//{
//	list<int> *bucket;
//	int tableSize;
//	int (*pHF)(int ,int);
//};
//int HashFunction(int key,int size)
//{
//	return key%size;
//}
//void Add(Hash*ph,int key)
//{
//	int addr = ph->pHF(key, ph->tableSize);  //원소의 개수를 인수로 넣어준다.
//	ph->bucket[addr].push_back(key);
//}
//void Remove(Hash*ph,int key)
//{
//	int addr = ph->pHF(key,ph->tableSize);
//	list<int>::iterator iter = find(ph->bucket[addr].begin(),ph->bucket[addr].end(),key);
//	if(iter!=ph->bucket[addr].end())
//		ph->bucket[addr].erase(iter);
//}
//bool Find(Hash*ph,int key)
//{
//	int addr = ph->pHF(key,ph->tableSize);
//	list<int>::iterator iter = find(ph->bucket[addr].begin(),ph->bucket[addr].end(),key);
//	if(iter!=ph->bucket[addr].end())
//		return true;
//	else
//		return false;
//}
//void Print(Hash*ph)
//{
//	for(int i=0;i<ph->tableSize;i++)
//	{
//		cout<<"["<<i<<"] : ";
//		for(list<int>::iterator iter = ph->bucket[i].begin();iter!=ph->bucket[i].end();iter++)
//			cout<<*iter<<" ";
//		cout<<endl;
//	}
//}
//void InitHash(Hash*ph, int (*pf)(int,int)=NULL)
//{
//	ph->tableSize = 20;
//	ph->bucket = new list<int>[ph->tableSize];
//	if(pf)
//		ph->pHF =  pf;
//	else
//		ph->pHF = HashFunction;
//}
//void UninitHash(Hash*ph)
//{
//	delete [] ph->bucket;
//}
//////////////////////////////////////////////
//int MyHF(int key, int size)
//{
//	int addr = ((key >> 2) | 0x05) %size;
//	return addr;
//}
//void main()
//{
//	Hash h;
//	//충돌이 일어난다.=>client가 hashFunction을 바꿀수있게 해줘야한다.
//	InitHash(&h,MyHF);
//	Add(&h,50);
//	Add(&h,70);
//	Add(&h,80);
//	Add(&h,90);
//	Add(&h,20);
//
//	Remove(&h,72);
//	Print(&h);
//	UninitHash(&h);
//}