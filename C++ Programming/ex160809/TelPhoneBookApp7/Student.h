#pragma once
#include "Person.h"
class Student : public Person
{
	int grade;
public:
	Student(const std::string&n="",const std::string&p="",int g=0);
	virtual void Print()const;

};