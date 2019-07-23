#pragma once
#include<exception> //������Ͽ��� using�߾Ⱦ�
#include<string>
class CapacityException : public std::exception
{
	int capacity;
	std::string msg;
public:
	CapacityException(int cap);
	const char* what()const;
};
class RangeException : public std::exception
{
	std::string msg;
	int lower;
	int upper;
	int current;

public:
	RangeException(int l,int u,int c);
	const char*what()const;
	int GetLower()const;
	int GetUpper()const;
};
