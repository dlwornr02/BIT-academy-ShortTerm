#pragma once
#include"Person.h"
#include"Array.h"
class TelPhoneBook
{
	Array<Person*>*parr;
public:
	TelPhoneBook();
	~TelPhoneBook();
	void Add();
	void Print()const;
	void Search()const;
	void Remove();
};
