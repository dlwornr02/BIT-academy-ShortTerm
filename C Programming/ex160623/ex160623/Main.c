#include<stdio.h>
int main(void){
	int a,b,c,i,j,f,w;
	printf("Hello World!!!!!\n");
	printf("숫자를 입력하세요 : ");
	scanf("%d",&a);
	if(a%2==0){
	b=a/2+1;
	c=a;
	for(i=0;i<=b;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(f=c;f>=i;f--){
			printf("*");
		}
		c--;
		printf("\n");
	}
		for(i=0;i<=b;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(f=c;f>=i;f--){
			printf("*");
		}
		c--;
		printf("\n");
	}
	}
	else{
		b=a/2;
		c=a;
		for(i=0;i<=b;i++){
			for(j=1;j<=i;j++){
			printf(" ");
		}
			for(f=c;f>i;f--){
			printf("*");
		}
		c--;
		printf("\n");
	}
		for(i=0;i<=b;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(f=c;f>i;f--){
			printf("*");
		}
		c--;
		printf("\n");
	}
	
	}
}