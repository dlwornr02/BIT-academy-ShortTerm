//#include<stdio.h>
//void main(){
//	//if(), if else, switch case
//	if(10<20){ //if(���ǹ�)
//		printf("true\n");
//	}
//}


//#include<stdio.h>
//void main(){
//	//if(), if else, switch case
//	if(10<20){ //if(���ǹ�)
//		printf("true\n");
//		printf("true\n");
//		printf("true\n");
//	}
//}


//#include<stdio.h>
//void main(){
//	//if(), if else, switch case
//	if(10<20) //if(���ǹ�)  
//		printf("true\n"); //if(){������̶����} 
//	printf("main end\n");
//}


//#include<stdio.h>
//void main(){
//	//if(), if else, switch case
//	if(10<20)//if(���ǹ�)
//	{   
//		printf("true\n");
//	}//if(){������̶����}
//	else
//	{
//		printf("false\n");
//	}
//	printf("main end\n");
//}
//
//#include<stdio.h>
//void main(){
//	int n=2;
//	switch(n)
//	{
//	case 1:
//		printf("==AA==\n");
//		break;
//	case 2:
//		printf("==BB==\n");
//		break;
//	case 3:
//		printf("==CC==\n");
//		break;
//	default:
//		printf("==default==\n");
//		break;
//	}
//}
//
//
//#include<stdio.h>
//void main(){
//	int n=1;
//	switch(n)
//	{
//	case 1:
//		printf("==AA==\n"); //break;�� �����ϸ� �´� ���Ǻ��� break���� ��ν��� �Ѵ�.
//		//break;
//	case 2:
//		printf("==BB==\n");
//		//break;
//	case 3:
//		printf("==CC==\n");
//		//break;
//	default:
//		printf("==default==\n");
//		//break;
//	}
//}
//
//
//#include<stdio.h>
//void main(){
//	int n='1';
//	switch(n)
//	{
//	case 49:
//		printf("==AA==\n"); //break;�� �����ϸ� �´� ���Ǻ��� break���� ��ν��� �Ѵ�.
//		//break;
//	case 50:
//		printf("==BB==\n");
//		//break;
//	case 51:
//		printf("==CC==\n");
//		//break;
//	default:
//		printf("==default==\n");
//		//break;
//	}
//}
//
//
//#include<stdio.h>
//void main(){
//	int n='2';
//	switch(n)
//	{
//	case '1':
//		printf("==AA==\n"); //break;�� �����ϸ� �´� ���Ǻ��� break���� ��ν��� �Ѵ�.
//		//break;
//	case '2':
//		printf("==BB==\n");
//		//break;
//	case '3':
//		printf("==CC==\n");
//		//break;
//	default:
//		printf("==default==\n");
//		//break;
//	}
//}
//
//
//#include<stdio.h>
//void main(){
//	int i;
//	for(i=0;i<5;i++) //for(�ʱⰪ;���ǹ�;������)
//	{
//		printf("hello!\n");
//	}
//}
//
//
//#include<stdio.h>
//void main(){
//	int i;
//	for(i=1;i<=5;i++) //for(�ʱⰪ;���ǹ�;������)
//					  
//	{
//		printf("hello!\n");
//	}
//}
//
//
//#include<stdio.h>
//void main(){
//	int i;
//	for(i=1;i<=5;i++) //for(�ʱⰪ;���ǹ�;������)
//					  
//	{
//		printf("hello! : %d\n",i);
//	}
//}
//
//
//#include<stdio.h>
//void main(){
//	int i;
//	for(i=0;i<5;i++) //for(�ʱⰪ;���ǹ�;������)
//					  
//	{
//		printf("hello! : %d\n",i);
//	}
//}
//
//
//#include<stdio.h>
//void main(){
//	int i;
//	for(i=1;i<=100;i++) //for(�ʱⰪ;���ǹ�;������)
//					  
//	{
//		printf("%d\n",i);
//	}
//}
//
//
//#include<stdio.h>
//void main(){
//	int i;
//	for(i=100;i>=1;i--) //for(�ʱⰪ;���ǹ�;������)
//					  
//	{
//		printf("%d\n",i);
//	}
//}
//
//
//#include<stdio.h>
//void main(){
//	int i;
//	i=0;
//	for(;i<5;){
//		printf("%d\n",i);
//		i++;
//	}
//}
//
//
//#include<stdio.h>
//void main(){
//	int i;
//	i=0;
//	while( i < 5 ){
//		printf("%d\n",i);
//		i++;
//	}
//}

//
//
//#include<stdio.h>
//void main(){
//	while( 1 ){ 
//		int data;
//		scanf("%d",&data);
//		if(data>0)
//			printf("data : %d\n",data);
//		else
//			break;   //switch�� �������� �����Ű�����Ҷ� break;���  
//	}
//}

//
//
//#include<stdio.h>
//void main(){
//	int n=65;
//
//	printf("%d   %c\n",n,n); //
//}
//
//
//#include<stdio.h>
//void main(){
//	int n='A';
//
//	printf("%d   %c\n",n,n); //
//}
//
//
//
//
//#include<stdio.h>
//void main(){
//	//int n=65;
//	//int n=0x41; //0x�� ���̸� 16������ ������ ǥ���Ѱ�
//	int n=0101; //0�� ���̸� 8������ ������ ǥ���Ѱ�
//
//	printf("%d %o %x\n",n,n); //
//}
//
//
//#include<stdio.h>
//void main(){
//	int n;
//	scanf("%d",&n);
//	printf("data : %d\n",n);
//}
//
//
//#include<stdio.h>
//void main(){
//	int a,b;
//	scanf("%d %d",&a,&b);
//	printf("data : %d, %d\n",a,b);
//}
//
//
//#include<stdio.h>
//void main(){
//	int a,b;
//	scanf("%d %d",&a,&b);
//	printf("data : %d, %d\n",a,b);
//	printf("�μ��� ���� : %d �Դϴ�.\n",a+b);
//	printf("�μ��� ���Ѱ��� : %d �Դϴ�.\n",a*b);
//	if(b!=0){
//	printf("�μ��� �������� : %d �Դϴ�.\n",a/b);
//	}
//	printf("�μ��� ���� : %d �Դϴ�.\n",a-b);
//	
//}
//
//
//#include<stdio.h>
//void main(){
//	char c='A';
//	int n = 100;
//	double d=5.5;
//
//	printf("%c %d %g\n",c,n,d);
//	printf("%c %d %g\n",sizeof(c),sizeof(n),sizeof(d)); //sizeof()�� �������̴�.
//	printf("%c %d %g\n",sizeof(char),sizeof(int),sizeof(double)); //sizeof()�� �������̴�.
//	
//}
//
//
//#include<stdio.h>
//void main(){
//	char c;
//	int n;
//	double d;
//
//	scanf("%c %d %lf",&c,&n,&d);
//	printf("%c %d %g\n",c,n,d);
//
//}
//
//
//#include<stdio.h>
//void main(){
//	int a,b,i; //c���� �����̳� ��������� ������ ���� �� �� ����. ���� ���������ϸ� ����
//	printf("�� ������ �Է��Ͻÿ� : ");
//	scanf("%d %d",&a,&b);
//	if(a<b){
//	for(i=a;i<=b;i++){
//		printf("%d\n",i);
//	}
//	}
//	else{
//		for(i=b;i<=a;i++){
//		printf("%d\n",i);
//	}
//	}
//}
//
//
//#include<stdio.h>
//void main(){
//	int a,b,i; //c���� �����̳� ��������� ������ ���� �� �� ����. ���� ���������ϸ� ����
//	printf("�� ������ �Է��Ͻÿ� : ");
//	scanf("%d %d",&a,&b);
//	if(a<b){
//	for(i=a;i<=b;i++){
//		printf("%d\n",i);
//	}
//	}
//	else{
//		for(i=b;i<=a;i++){
//		printf("%d\n",i);
//	}
//	}
//}
//
//
//#include<stdio.h>
//void main(){
//	int a=10,b=20;
//	int* p;
//
//	p=&a; //����a�� �ּҰ��� ����
//	printf("%d %d %d\n",a,*&a,*p);
//	//a==*&a==*p==(&a)[0]
//
//}
//
//
//#include<stdio.h>
//void main(){
//	int a=10,b=20;
//	int* p;
//
//	p=&a; //����a�� �ּҰ��� ����
//	printf("%d %d %d\n",a,*&a,*p);
//	//a==*&a==*p==(&a)[0]
//
//	p=&b; //����a�� �ּҰ��� ����
//	printf("%d %d %d\n",b,*&b,*p);
//	//b==*&b==*p==(&b)[0]
//
//}
//
//
//#include<stdio.h>
//void main(){
//	int a=10,b=20;
//	int* p;
//
//	p=&a; //����a�� �ּҰ��� ����
//	printf("%d %d %d\n",a,*&a,*p);
//	//a==*&a==*p==(&a)[0]
//
//	p=&b; //����a�� �ּҰ��� ����
//	printf("%d %d %d\n",b,*&b,*p);
//	//b==*&b==*p==(&b)[0]
//
//}
//
//
//#include<stdio.h>
//void main(){
//	int n=10;
//	int* p=&n;
//	int** pp=&p;
//	//p==*pp
//	//n==*p==**pp
//	printf("%p %p\n",&n,p);
//	printf("%d %d\n",n,*p);
//
//}
//
//
//#include<stdio.h>
//void main(){
//	int n=10;
//	int* p=&n;
//	int** pp=&p;
//	//p==*pp
//	//n==*p==**pp
//	printf("%p %p %p\n",&n,p,*pp);
//	printf("%d %d\n",n,*p,**pp);
//	printf("%d %d\n",n,p[0],pp[0][0]);
//
//}


/*
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
*/

/*
#include<stdio.h>
void main(){
	int a,b,c,d;
	printf("������ �Է��ϼ��� : ");
	scanf("%d",&b)
	for(a=1;a<=)
}
*/
//
//
//#include<stdio.h>
//#include<string.h>
//void main(){
//	wchar_t str[] = L"ABC�ѱ�";
//	int size = sizeof(str);
//	int len = wcslen(str);
//
//	printf("�迭�� ũ�� : %d \n",size);
//	printf("���ڿ��� ���� : %d \n", len);
//
//}
//
///////////////////////////////������///////////////////////////////////////
/*
#include<stdio.h>
void main(){
	int j[] = {90,80,75,70,60};
	int num = 100;
	int *pi1,*pi2;

	pi1 = j;
	pi2 = &num;

	printf("pi1�� ����Ű�� ������ �� = %d\n",*pi1);
	printf("pi2�� ����Ű�� ������ �� = %d\n",*pi2);

	printf("pi1�� �ּҰ� = %p\n",&pi1);
	printf("pi2�� �ּҰ� = %p\n",&pi2);

	pi1++;
	printf("pi1++���Ŀ� ����Ű�� �����ǰ� = %d\n",*pi1);
	pi1--;
	printf("pi1--���Ŀ� ����Ű�� �����ǰ� = %d\n",*pi1);

	pi2=pi1;
	pi2=pi2+3;
	printf("pi2+3�� �Ŀ� ����Ű�� ������ �� = %d\n",*pi2);

	printf("pi2 - pi1 �� �� = %d\n",pi2-pi1);


}
*/
/*
#include<stdio.h>
	void arr_d(const int *arr, int size);
	void arr_r(int *arr, int size);
void main(){
	int j[] = {90,80,75,70,95};

	arr_d(j,sizeof(j)/sizeof(int));
	arr_r(j,sizeof(j)/sizeof(int));
	arr_d(j,sizeof(j)/sizeof(int));

}
void arr_d(const int *arr, int size)
{
	int i;
	for(i=0;i<size;i++){
		printf("arr[%d] = %d\n",i,*(arr+i));
	}
}
void arr_r(int *arr, int size)
{
	int i;
	for(i=0;i<size;i++)
		arr[i]=0;
}
*/
#include<stdio.h>
#include<windows.h>
int wmain(int argc, wchar_t* argv[])
{
	LPSTR str1 = "SBCS Style String 1";
	LPWSTR str2 = L"WBCS Style String 1";

	CHAR arr1[] = "SBCS Style String 2";
	WCHAR arr2[]= L"WBCS Style String 2";

	LPCSTR cStr1 = arr1;
	LPCWSTR cStr2 = arr2;

	printf("%s\n",str1);
	printf("%s\n",arr1);

	wprintf(L"%s\n",str2);
	wprintf(L"%s\n",arr2);

	return 0;

}
