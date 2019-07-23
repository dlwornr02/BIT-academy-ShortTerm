#include <Print.h> //<>는 지정된 디렉처리만 찾겠다는 뜻이다.
#include <Swap.h>
void main()
{
	int a=10,b=20;

	Print(a,b);
	Swap(&a,&b);
	Print(a,b);
}