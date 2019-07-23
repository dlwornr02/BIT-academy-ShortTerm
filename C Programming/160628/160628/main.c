//#include<stdio.h>
//void main(){
//	//if(), if else, switch case
//	if(10<20){ //if(조건문)
//		printf("true\n");
//	}
//}


//#include<stdio.h>
//void main(){
//	//if(), if else, switch case
//	if(10<20){ //if(조건문)
//		printf("true\n");
//		printf("true\n");
//		printf("true\n");
//	}
//}


//#include<stdio.h>
//void main(){
//	//if(), if else, switch case
//	if(10<20) //if(조건문)  
//		printf("true\n"); //if(){실행블럭이라고함} 
//	printf("main end\n");
//}


//#include<stdio.h>
//void main(){
//	//if(), if else, switch case
//	if(10<20)//if(조건문)
//	{   
//		printf("true\n");
//	}//if(){실행블럭이라고함}
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
//		printf("==AA==\n"); //break;를 생략하면 맞는 조건부터 break까지 모두실행 한다.
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
//		printf("==AA==\n"); //break;를 생략하면 맞는 조건부터 break까지 모두실행 한다.
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
//		printf("==AA==\n"); //break;를 생략하면 맞는 조건부터 break까지 모두실행 한다.
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
//	for(i=0;i<5;i++) //for(초기값;조건문;증감식)
//	{
//		printf("hello!\n");
//	}
//}
//
//
//#include<stdio.h>
//void main(){
//	int i;
//	for(i=1;i<=5;i++) //for(초기값;조건문;증감식)
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
//	for(i=1;i<=5;i++) //for(초기값;조건문;증감식)
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
//	for(i=0;i<5;i++) //for(초기값;조건문;증감식)
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
//	for(i=1;i<=100;i++) //for(초기값;조건문;증감식)
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
//	for(i=100;i>=1;i--) //for(초기값;조건문;증감식)
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
//			break;   //switch와 루프에만 종료시키고자할때 break;사용  
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
//	//int n=0x41; //0x를 붙이면 16진수로 정수를 표기한것
//	int n=0101; //0을 붙이면 8진수로 정수를 표기한것
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
//	printf("두수의 합은 : %d 입니다.\n",a+b);
//	printf("두수를 곱한값은 : %d 입니다.\n",a*b);
//	if(b!=0){
//	printf("두수의 나눈값은 : %d 입니다.\n",a/b);
//	}
//	printf("두수의 차는 : %d 입니다.\n",a-b);
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
//	printf("%c %d %g\n",sizeof(c),sizeof(n),sizeof(d)); //sizeof()는 연산자이다.
//	printf("%c %d %g\n",sizeof(char),sizeof(int),sizeof(double)); //sizeof()는 연산자이다.
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
//	int a,b,i; //c언어는 문장이나 연산다음에 변수를 정의 할 수 없다. 블럭을 따로지정하면 가능
//	printf("두 정수를 입력하시요 : ");
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
//	int a,b,i; //c언어는 문장이나 연산다음에 변수를 정의 할 수 없다. 블럭을 따로지정하면 가능
//	printf("두 정수를 입력하시요 : ");
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
//	p=&a; //변수a의 주소값을 저장
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
//	p=&a; //변수a의 주소값을 저장
//	printf("%d %d %d\n",a,*&a,*p);
//	//a==*&a==*p==(&a)[0]
//
//	p=&b; //변수a의 주소값을 저장
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
//	p=&a; //변수a의 주소값을 저장
//	printf("%d %d %d\n",a,*&a,*p);
//	//a==*&a==*p==(&a)[0]
//
//	p=&b; //변수a의 주소값을 저장
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
*/

/*
#include<stdio.h>
void main(){
	int a,b,c,d;
	printf("정수를 입력하세요 : ");
	scanf("%d",&b)
	for(a=1;a<=)
}
*/
//
//
//#include<stdio.h>
//#include<string.h>
//void main(){
//	wchar_t str[] = L"ABC한글";
//	int size = sizeof(str);
//	int len = wcslen(str);
//
//	printf("배열의 크기 : %d \n",size);
//	printf("문자열의 길이 : %d \n", len);
//
//}
//
///////////////////////////////포인터///////////////////////////////////////
/*
#include<stdio.h>
void main(){
	int j[] = {90,80,75,70,60};
	int num = 100;
	int *pi1,*pi2;

	pi1 = j;
	pi2 = &num;

	printf("pi1이 가리키는 변수의 값 = %d\n",*pi1);
	printf("pi2이 가리키는 변수의 값 = %d\n",*pi2);

	printf("pi1의 주소값 = %p\n",&pi1);
	printf("pi2의 주소값 = %p\n",&pi2);

	pi1++;
	printf("pi1++된후에 가리키는 변수의값 = %d\n",*pi1);
	pi1--;
	printf("pi1--된후에 가리키는 변수의값 = %d\n",*pi1);

	pi2=pi1;
	pi2=pi2+3;
	printf("pi2+3된 후에 가리키는 변수의 값 = %d\n",*pi2);

	printf("pi2 - pi1 의 값 = %d\n",pi2-pi1);


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
