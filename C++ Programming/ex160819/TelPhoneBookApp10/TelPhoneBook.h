#pragma once
#include"Person.h"
#include"List.h"
#include<iostream>
class TelPhoneBook
{
	List<Person*> parr;
	void _WritePerson(std::ostream& out)const;
	void _WriteBinaryFile()const;
	void _ReadBinaryFile();
public:
	TelPhoneBook();
	~TelPhoneBook();
	void Add();
	void Print()const;
	void Search()const;
	void Remove();
	void Sort();
	void WriteTextFile()const;
};
