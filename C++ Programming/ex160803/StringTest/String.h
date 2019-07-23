#pragma once

class ostream; //ostreamŬ������ �ִٴ°��� �˷��ش�. ����ϴ� ����reference�� pointer�ϰ�� ���
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
	operator const char*()const;
	operator int()const;
};
std::ostream& operator<<(std::ostream& out,const String&st);