#include<stdlib.h>
#include"func.h"//��������� �������
int main(void)
{
	int*pa=(int*)malloc(sizeof(int)*5);
	InitArray(pa,5);
	PrintArray(pa,5);
	PrintArray(pa,5);
	free(pa);
}