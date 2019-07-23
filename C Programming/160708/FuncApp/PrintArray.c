#include<stdio.h>
void PrintArray(int*pa,int size) //함수정의
{
	int a;
	for(a=0;a<size;a++)
	{
		printf("%d\n",pa[a]);
	}
	printf("\n");
}