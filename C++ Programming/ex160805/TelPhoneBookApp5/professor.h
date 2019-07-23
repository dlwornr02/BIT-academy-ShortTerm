#pragma once
#include "Person.h"
class professor : public Person
{
	String position;
public:
	professor(const String&n="",const String&p="",const String&pos="");
	virtual void Print()const;
};

