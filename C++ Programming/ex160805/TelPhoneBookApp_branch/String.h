#pragma once
#include<iostream> //�����ϸ� using�� �Ⱦ��� header���Ͽ���
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
	const String operator+(const String&arg); //���ο� ��ü�� �����ǹǷ� ��ȯŸ�Կ� �����Ⱦ�
	const char& operator[](int idx)const; //const��ü�� ��const��ü������ ���� �ߺ������ڸ� �������ش�.
	char& operator[](int idx); //������ ����ؼ� ��ȯ���ش�.
	bool operator==(const String&arg)const;
	bool operator!=(const String&arg)const;
};
std::ostream& operator<<(std::ostream& out,const String&st);