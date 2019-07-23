#pragma once
#include"Person.h"
#include<vector>
class TelPhoneBook
{
	std::vector<Person*> parr;
public:
	TelPhoneBook();
	~TelPhoneBook();
	void Add();
	void Print()const;
	void Search()const;
	void Remove();
	void Sort();
};
