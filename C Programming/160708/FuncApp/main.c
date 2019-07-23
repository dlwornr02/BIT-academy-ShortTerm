#include<stdlib.h>
#include"func.h"//사용자정의 헤더파일
int main(void)
{
	int*pa=(int*)malloc(sizeof(int)*5);
	InitArray(pa,5);
	PrintArray(pa,5);
	PrintArray(pa,5);
	free(pa);
}