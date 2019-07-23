#include<stdio.h>
int AddRange(int start, int end);
void main()  //caller
{	
	printf("sum = %d\n",AddRange(1,10));
	printf("sum = %d\n",AddRange(5,10));
	printf("sum = %d\n",AddRange(7,9));
	printf("sum = %d\n",AddRange(7,13));
}