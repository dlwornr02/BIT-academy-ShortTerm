#pragma once
#include<string>
class Person
{
	std::string name;
	std::string phone;
protected:
	std::string type;
public:
	struct PredName
	{
		bool operator()(const Person*a,const Person*b)const;
	};
	struct PredPhone
	{
		bool operator()(const Person*a,const Person*b)const;
	};
	struct PredType
	{
		bool operator()(const Person*a,const Person*b)const;
	};
public:
	Person(const std::string&n="",const std::string&p="");
	virtual ~Person(); //�θ�Ŭ�����̹Ƿ� virtualŰ������
	void SetName(const std::string&n);
	void SetPhone(const std::string&p);
	const std::string& GetName()const;
	const std::string& GetPhone()const;
	virtual void Print()const;
	const std::string& GetType()const;
};
