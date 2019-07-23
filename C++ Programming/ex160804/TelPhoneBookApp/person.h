#pragma once
class Person
{
	char name[20];
	char phone[20];
public:
	Person(const char*n="",const char*p="");
	void SetName(const char*n);
	void SetPhone(const char*p);
	const char* GetName()const;
	const char* GetPhone()const;
	void Print()const;
};
