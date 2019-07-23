#pragma once
#include "Person.h"
class professor : public Person
{
	std::string position;
public:
	professor(const std::string&n="",const std::string&p="",const std::string&pos="");
	virtual void Print(std::ostream&out)const;
};

