#pragma once
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
	class Const_Iterator
	{
		Node*ptr;
	public:
		Const_Iterator(Node* p):ptr(p){}
		bool operator!=(Const_Iterator arg)const
		{
			return ptr!=arg.ptr;
		}
		Const_Iterator operator++()
		{
			ptr=ptr->next;
			return *this;
		}
		const T& operator*()const
		{
			return ptr->data;
		}
		const Node* operator&()const
		{
			return ptr;
		}
		const T* operator->()const
		{
			return &(ptr->data);
		}
	};
private:
	Node*head;
	Node*tail;
	int size;
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
		size++;

	}
	void AddFront(const T& data)
	{
		Node*nhead=head->next;
		Node*n = AllocNode(data);

		nhead->prev = n;
		n->next = nhead;
		n->prev = head;
		head -> next = n;
		size++;
	}
	void RemoveBack()
	{
		Node* ptail = tail->prev;
		Node* pptail = ptail -> prev;
		delete ptail;
		pptail -> next = tail;
		tail -> prev - pptail;
		size--;
	}
	int Size()const
	{
		return size;
	}
	void Erase(Iterator iter)
	{
		Node*cur = &iter;
		Node*pn;
		pn=cur->prev;
		pn->next=cur->next;
		delete cur;
		size--;
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
		size++;
	}
	const T& Back()const
	{
		return tail->prev->data;
	}
	const T& Front()const
	{
		return head->next->data;
	}
	void RemoveFront()
	{
		Node*nhead = head->next;
		Node*nnhead = nhead->next;
		delete nhead;
		head->next = nnhead;
		nnhead->prev = head;
	}
	Iterator Begin()
	{
		return Iterator(head->next);
	}
	
	Iterator End()
	{
		return Iterator(tail);
	}
	Const_Iterator CBegin()const
	{
		return Const_Iterator(head->next);
	}
	
	Const_Iterator CEnd()const
	{
		return Const_Iterator(tail);
	}
	////////////////////////////////////////////
	
};
template<typename T>
class Queue
{
	List<T> lt;
public:
	void Push(const T&data)
	{
		lt.AddBack(data);
	}
	void Pop()
	{
		lt.RemoveFront();
	}
	const T& Front()
	{
		return lt.Front();
	}
};