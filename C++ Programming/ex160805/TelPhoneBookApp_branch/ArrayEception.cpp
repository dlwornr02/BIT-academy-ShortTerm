#include "ArrayEception.h"
CapacityException::CapacityException(int cap):capacity(cap)
{
	char buf[500];
	sprintf(buf,"capacity : %d overflow",capacity); //buf에 뒤의값 저장
	msg = buf;
}
const char* CapacityException::what()const{return msg.c_str();}
RangeException::RangeException(int l,int u,int c):lower(l),upper(u),current(c)
{
	char buf[500];
	sprintf(buf,"%d ~ %d 사이의 값을 사용 : 현 index %d",lower,upper,current); //buf에 뒤의값 저장
	msg = buf;
}
const char*RangeException::what()const{return msg.c_str();}
int RangeException::GetLower()const {return lower;}
int RangeException::GetUpper()const {return upper;}

