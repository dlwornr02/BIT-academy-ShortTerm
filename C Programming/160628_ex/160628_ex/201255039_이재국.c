#include<stdio.h>
void main(){
	int a,i,b;
	printf("������ �Է��ϼ���(1~9) : ");
	a: scanf("%d",&a);
	if(1<=a && a<10){
		for(i=a;i>=1;i--){
			for(b=1;b<=i;b++){
				printf("%d",b);
			}
		printf("\n");
		}
	}
	else{
		printf("\n�߸��� �Է� �Դϴ� ������ �ٽ��Է��ϼ��� : ");
		goto a;
	}
}