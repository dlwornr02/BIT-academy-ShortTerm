#pragma once
#include"String.h"
class Person
{
	String name;
	String phone;
public:
	Person(const String&n="",const String&p="");
	void SetName(const String&n);
	void SetPhone(const String&p);
	const String& GetName()const;
	const String& GetPhone()const;
	void Print()const;
};
