#pragma once
class String
{
	char*str;
public:
	String(const char*s = "");
	String(const String&arg); //���������
	~String();
	void Assign(const String&arg);
	const char*GetString()const;
};

