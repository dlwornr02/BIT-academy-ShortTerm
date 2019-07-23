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
	virtual ~Person(); //부모클래스이므로 virtual키워드사용
	void SetName(const std::string&n);
	void SetPhone(const std::string&p);
	const std::string& GetName()const;
	const std::string& GetPhone()const;
	virtual void Print(std::ostream& out)const;
	virtual void Write(std::ostream& out)const=0;//순수가상함수
	virtual void Read(std::istream& in)=0;//순수가상함수
	const std::string& GetType()const;
};
