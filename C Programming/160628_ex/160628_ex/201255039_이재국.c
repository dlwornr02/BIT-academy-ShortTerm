#include<stdio.h>
void main(){
	int a,i,b;
	printf("정수를 입력하세요(1~9) : ");
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
		printf("\n잘못된 입력 입니다 정수를 다시입력하세요 : ");
		goto a;
	}
}