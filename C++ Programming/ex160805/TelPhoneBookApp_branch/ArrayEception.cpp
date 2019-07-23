#include "ArrayEception.h"
CapacityException::CapacityException(int cap):capacity(cap)
{
	char buf[500];
	sprintf(buf,"capacity : %d overflow",capacity); //buf�� ���ǰ� ����
	msg = buf;
}
const char* CapacityException::what()const{return msg.c_str();}
RangeException::RangeException(int l,int u,int c):lower(l),upper(u),current(c)
{
	char buf[500];
	sprintf(buf,"%d ~ %d ������ ���� ��� : �� index %d",lower,upper,current); //buf�� ���ǰ� ����
	msg = buf;
}
const char*RangeException::what()const{return msg.c_str();}
int RangeException::GetLower()const {return lower;}
int RangeException::GetUpper()const {return upper;}

