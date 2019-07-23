#pragma once
#include<iostream>
class String{
	char*str;
public:
	String(char*_str);
	~String();
	String(const String&arg);
	const String& operator=(const String& arg);
	const String& operator+(const String&arg);
	const String& operator+=(const String&arg);
	char* GetString()const;
	bool operator==(const String&arg)const;
	bool operator!=(const String&arg)const;
	const char& operator[](int idx)const;
	char& operator[](int idx);
};
std::ostream& operator<<(std::ostream& o, const String&arg);