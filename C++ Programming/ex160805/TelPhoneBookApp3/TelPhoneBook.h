#pragma once
#include"Person.h"
class TelPhoneBook
{
	Person parr[100];
	int pcount;
public:
	TelPhoneBook();
	~TelPhoneBook();
	void Add();
	void Print()const;
	void Search()const;
	void Remove();
};
