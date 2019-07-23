#pragma once
#include<iostream>
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
	
	List();
	~List();
	void AddBack(const T& data);
	void AddFront(const T& data);
	void RemoveBack();
	void Erase(Iterator iter);
	void Insert(Iterator iter,const T& data);
	const T& Back()const;
	const T& Front()const;
	void RemoveFront();
	Iterator Begin();
	Iterator End();
};

