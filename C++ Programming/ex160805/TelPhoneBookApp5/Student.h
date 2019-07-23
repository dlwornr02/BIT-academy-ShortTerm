#pragma once
#include "Person.h"
class Student : public Person
{
	int grade;
public:
	Student(const String&n="",const String&p="",int g=0);
	virtual void Print()const;

};