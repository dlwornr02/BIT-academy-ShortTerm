#include<stdio.h>
#include "point.h"
void PrintArray(point*ps)  //�ؽ�Ʈ�ڵ� 
{
	int i;
	/*
	for(i=0;i<5;i++)
	{
		printf("%d, %d\n",ps[i].x,ps[i].y);
	}
	*/
	
	for(i=0;i<5;i++)
	{
		printf("%d,%d\n",(ps+i)->x,(ps+i)->y);
	}
	
}