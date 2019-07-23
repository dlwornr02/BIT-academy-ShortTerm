#pragma once
#include<iostream> //엥간하면 using는 안쓴다 header파일에서
class String
{
	char*buf;
public:
	String(const char*s="");
	String(const String&arg);
	const String& operator=(const String&arg);
	const String& operator+=(const String&arg);
	const String& operator-=(const String&arg);
	~String();
	const char*GetString()const;
	const String operator+(const String&arg); //새로운 객체가 생성되므로 반환타입에 참조안씀
	const char& operator[](int idx)const; //const객체와 비const객체에따라 따로 중복연산자를 정의해준다.
	char& operator[](int idx); //참조를 사용해서 변환해준다.
	bool operator==(const String&arg)const;
	bool operator!=(const String&arg)const;
};
std::ostream& operator<<(std::ostream& out,const String&st);