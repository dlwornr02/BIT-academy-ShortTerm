//#include<stdio.h>
//int main(void)
//{
//	char Large;
//	int o,i,i2;
//	printf("대문자를 입력하세요 : ");
//	a: scanf("%c",&Large);
//	if('A'<=Large && Large<='Z')
//	{
//		for(o='A';o<=Large;o++){
//			for(i='A';i<=o;i++){
//				printf("%c",i);
//			}
//			printf("\n");
//		}
//		for(o=Large-1;o>='A';o--){
//			for(i='A';i<=o;i++){
//				printf("%c",i);
//			}
//			printf("\n");
//		}
//	}
//	else{
//		printf("대문자가 아닙니다. 다시 입력하세요 : \n");
//		goto a;
//	}
//}
#include<stdio.h>
int main(void)
{
	char Large;
	int o,i,i2;
	printf("대문자를 입력하세요 : ");
a: scanf("%c",&Large);
	if('A'<=Large && Large<='Z')
	{
		for(o='A';o<=Large;o++){
			for(i=o;i<Large;i++){
				printf(" ");
			}
			for(i=o;i>='A';i--){
				printf("%c",i);
			}
			for(i='A';i<=o;i++){
				printf("%c",i);
			}

			printf("\n");
		}

		for(o=Large-1;o>='A';o--){
			for(i=Large;i>o;i--){
				printf(" ");
			}
			for(i=o;i>='A';i--)
			{
				printf("%c",i);
			}
			for(i='A';i<=o;i++){
				printf("%c",i);
			}
			printf("\n");
		}
	}

	else{
		printf("대문자가 아닙니다. 다시 입력하세요 : ");
		goto a;
	}
}
