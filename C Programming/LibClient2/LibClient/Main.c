#include "Print.h"
#include "Swap.h"
void main()
{
	int a=10,b=20;

	Print(a,b);
	Swap(&a,&b);
	Print(a,b);
}