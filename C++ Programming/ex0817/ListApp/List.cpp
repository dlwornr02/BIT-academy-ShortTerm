#include "List.h"
template<typename T>
List<T>::List()
{
	head = AllocNode(T()); //dummy_Node생성
	tail = AllocNode(T()); //dummy_Node생성
	head->next = tail;
	tail->prev = head;
}
template<typename T>
List<T>::~List()
{
	for(Node*p=head;p;)
	{
		Node*pn;
		pn=p->next;
		delete p;
		p=pn;
	}

}
template<typename T>
void List<T>::AddBack(const T& data)
{
	Node*ptail=tail->prev;
	Node*n = AllocNode(data);

	ptail->next = n;
	n->prev = ptail;
	n->next = tail;
	tail ->prev = n;

}
template<typename T>
void List<T>::AddFront(const T& data)
{
	Node*nhead=head->next;
	Node*n = AllocNode(data);

	nhead->prev = n;
	n->next = nhead;
	n->prev = head;
	head -> next = n;

}
template<typename T>
void List<T>::RemoveBack()
{
	Node* ptail = tail->prev;
	Node* pptail = ptail -> prev;
	delete ptail;
	pptail -> next = tail;
	tail -> prev - pptail;
}
template<typename T>
void List<T>::Erase(Iterator iter)
{
	Node*cur = &iter;
	Node*pn;
	pn=cur->prev;
	pn->next=cur->next;
	delete cur;
}
template<typename T>
void List<T>::Insert(Iterator iter,const T& data)
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
template<typename T>
const T& List<T>::Back()const
{
	return tail->prev->data;
}
template<typename T>
const T& List<T>::Front()const
{
	return head->next->data;
}
template<typename T>
void List<T>::RemoveFront()
{
	Node*nhead = head->next;
	Node*nnhead = nhead->next;
	delete nhead;
	head->next = nnhead;
	nnhead->prev = head;
}
template<typename T>
typename List<T>::Iterator List<T>::Begin() //template형식의 내부타입이란걸 typename으로 표식해줌
{
	return Iterator(head->next);
}
template<typename T>
typename List<T>::Iterator List<T>::End()
{
	return Iterator(tail);
}
