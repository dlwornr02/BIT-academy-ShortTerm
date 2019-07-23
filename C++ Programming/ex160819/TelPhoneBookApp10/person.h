#pragma once
#include<string>
#include<iostream>
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
	virtual void Print(std::ostream& out)const;
	virtual void Write(std::ostream& out)const=0;//���������Լ�
	virtual void Read(std::istream& in)=0;//���������Լ�
	const std::string& GetType()const;
};
