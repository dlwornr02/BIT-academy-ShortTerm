////////TREE 자료구조///////2진트리
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
struct Node
{
	int data;
	Node*parent;
	Node*lChild;
	Node*rChild;
};
Node* AllocNode(int data)
{
	Node* n = new Node;
	n->data = data;
	n->lChild = n->rChild = NULL;
	return n;
}
void Inorder(Node*root)
{
	if(root)
	{
		Inorder(root->lChild);
		cout<<root->data<<" ";
		Inorder(root->rChild);
	}
}
void Preorder(Node*root)
{
	if(root)
	{
		cout<<root->data<<" ";
		Preorder(root->lChild);
		Preorder(root->rChild);
	}
}
void Postorder(Node*root)
{
	if(root){
		Postorder(root->lChild);
		Postorder(root->rChild);
		cout<<root->data<<" ";
	}
}
void Levelorder(Node*root)
{
	queue<Node*> q;

	if(root==NULL)
		return;
	q.push(root);
	while(!q.empty()) //empty()메서드 : 비어있을 때 true 
	{
		Node* cur = q.front();
		cout<<cur->data<<" ";
		q.pop();
		if(cur->lChild)
			q.push(cur->lChild);
		if(cur->rChild)
			q.push(cur->rChild);
	}
	
}
void DestroyTree(Node*root) //Destroy는 levelorder방법으로도 제거 가능
{
	queue<Node*> q;

	if(root==NULL)
		return;
	q.push(root);
	while(!q.empty()) //empty()메서드 : 비어있을 때 true 
	{
		Node* cur = q.front();
		q.pop();
		if(cur->lChild)
			q.push(cur->lChild);
		if(cur->rChild)
			q.push(cur->rChild);
		delete cur;
	}
}
Node* AddNode(Node*root,int data)
{
	if(root == NULL)
		return AllocNode(data);
	Node*proot = root;
	Node*parent;
	while(proot!=NULL)
	{
		if( (data < proot->data))
		{
			parent = proot;
			proot = proot->lChild;
			if(proot==NULL)
			{
				parent->lChild = AllocNode(data);
			}
		}
		else
		{
			parent = proot;
			proot = proot->rChild;
			if(proot==NULL)
			{
				parent->rChild = AllocNode(data);
			}
		}
	}
	return root;
}

void main()
{
	Node* root = NULL;
	root = AddNode(root,50);
	root = AddNode(root,30);
	root = AddNode(root,80);
	root = AddNode(root,40);
	root = AddNode(root,90);
	root = AddNode(root,100);
	root = AddNode(root,20);
	
	Inorder(root);
	cout<<endl;

	DestroyTree(root);

}