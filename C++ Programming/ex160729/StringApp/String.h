#pragma once
class String
{
	char*str;
public:
	String(const char*s = "");
	String(const String&arg); //복사생성자
	~String();
	void Assign(const String&arg);
	const char*GetString()const;
};

