//#include<stdio.h>
//int main(void)
//{
//	char Large;
//	int o,i,i2;
//	printf("�빮�ڸ� �Է��ϼ��� : ");
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
//		printf("�빮�ڰ� �ƴմϴ�. �ٽ� �Է��ϼ��� : \n");
//		goto a;
//	}
//}
#include<stdio.h>
int main(void)
{
	char Large;
	int o,i,i2;
	printf("�빮�ڸ� �Է��ϼ��� : ");
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
		printf("�빮�ڰ� �ƴմϴ�. �ٽ� �Է��ϼ��� : ");
		goto a;
	}
}
