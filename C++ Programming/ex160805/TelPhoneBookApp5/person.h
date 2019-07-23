#pragma once
#include"String.h"
class Person
{
	String name;
	String phone;
public:
	Person(const String&n="",const String&p="");
	virtual ~Person(); //�θ�Ŭ�����̹Ƿ� virtualŰ������
	void SetName(const String&n);
	void SetPhone(const String&p);
	const String& GetName()const;
	const String& GetPhone()const;
	virtual void Print()const;
};
