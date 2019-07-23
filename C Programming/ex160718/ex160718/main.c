//#include<stdio.h>
//void Print(int a,int b)
//{
//	printf("%d, %d\n",a,b);
//}
//void(*pf)(int,int);
//int main(void){
//	pf=Print;
//	pf(10,20);
//}
//
//
//#include<stdio.h>
//void Print(int a,int b)
//{
//	printf("%d, %d\n",a,b);
//}
//typedef void(*PFUNC)(int,int);
//int main(void){
//	PFUNC pf;
//	pf=Print;
//	pf(10,20);
//}
//
//
//#include<stdio.h>
//struct _data
//{
//	int n;
//	double d;
//}DATA;
//typedef void(*PFUNC)(int,int);
//int main(void){
//	printf("%d %g\n",DATA.n,DATA.d);
//}
//
//
//#include<stdio.h>
//typedef struct _data
//{
//	int n;
//	double d;
//}DATA;
//typedef void(*PFUNC)(int,int);
//int main(void){
//	DATA data={10,2.5};
//	printf("%d %g\n",data.n,data.d);
//}
//
//
//#include<stdio.h>
//enum{A=10,B=20,C=30}; //여러개의 상수를 만들어내는 타입
//int main(void){
//	printf("%d %d %d\n",A,B,C);
//}
//
//
//#include<stdio.h>
//enum{A=10,B,C}; //여러개의 상수를 만들어내는 타입
//int main(void){
//	printf("%d %d %d\n",A,B,C);
//}
//
//
//#include<stdio.h>
//enum BOOL{FALSE,TRUE}; //여러개의 상수를 만들어내는 타입,BOOL은 써도되고 안써도되고
//int main(void){
//	printf("%d\n",FALSE);
//	printf("%d\n",TRUE);
//}
//
//
//#include<stdio.h>
//enum BOOL{FALSE,TRUE}; //여러개의 상수를 만들어내는 타입,BOOL은 써도되고 안써도되고
//int main(void){
//	enum BOOL b = FALSE;
//	printf("%d\n",b);
//	b=TRUE;
//	printf("%d\n",b);
//}
//
//
//#include<stdio.h>
//typedef union _data
//{
//	char arr[4];
//	int n;
//}DATA;
//int main(void){
//	DATA data = {"ABC",100};
//}
//
//
//#include<stdio.h>
//typedef union _data
//{
//	char arr[4];
//	int n;
//}DATA;
//int main(void){
//	DATA data = {0};
//	data.n=0x4241;
//	printf("%X\n",data.n);
//	printf("%c%c\n",data.arr[0],data.arr[1]);
//}
//
//
//#include<stdio.h>
//int main(void){
//	const int n = 10;
//	printf("%d\n",n);
//	n=20;
//	printf("%d\n",n);
//}
//
//
//#include<stdio.h>
//int main(void){
//	const double d = 5.5;
//	printf("%g\n",d);
//}

//
//
//#include<stdio.h>
//int main(void){
//	const double d = 5.5;
//	printf("%g\n",d);
//}
//
//
//#include<stdio.h>
//int main(void){
//	int n=10;
//	int const*p = &n;
//	//*p = 100; //수정불가능
//	printf("%d\n",*p);
//}
//
//
//#include<stdio.h>
//int main(void){
//	int n = 10;
//	int m = 20;
//	int*const p = &n;
//
//	printf("%d\n",*p);
//	*p = 100;
//	printf("%d=n",*p);
//	//p=&m; //p를 다른 주소로 바꿀 수 없다.
//	printf("%d\n",*p);
//}
//
//
//#include<stdio.h>
//int main(void){
//	int n = 10;
//	int m = 20;
//	const int*const p = &n;
//
//	printf("%d\n",*p);
//	// *p = 100; //둘다 불가능
//	printf("%d=n",*p);
//	//p=&m; //p를 다른 주소로 바꿀 수 없다.
//	printf("%d\n",*p);
//}
//
//
//#include<stdio.h>
//void Print(const int*k)
//{
//	printf("%d\n",*k);
//	//*k=20;
//}
//int main(void)
//{
//	int n = 10;
//	Print(&n);
//}
//
//
//#include<stdio.h>
//void Add(int a,int b,int*k) //in-parameter포인터에는 const가 붙는다.
//{
//	*k = a+b;
//}
//int main(void)
//{
//	int n = 10;
//	Add(10,20,&n);
//	printf("%d\n",n);
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//	const char*s = "ABC"; //상수문자열을 가리킬때는 const를 붙여줘야한다.
//	s[1] = 'K';  //상수문자열을 바꾸려해서 오류
//	printf("%s\n",s);
//}
//
//
//#include<stdio.h>
//void PrintString(const char*psarr)
//{
//	printf("string : %s\n",psarr);
//}
//
//int main(void)
//{
//	char sarr[10] = "ABCDE";
//
//	PrintString(sarr);
//}
//
//
//#include<stdio.h>
//#include<string.h>
//void PrintString(const char*psarr)
//{
//	printf("string : %s\n",psarr);
//}
//void ReverseString(char*psarr){ //아웃파라미터이기 때문에 const안붙는다.
//	char temp;
//	int i;
//	for(i=0;i<strlen(psarr)/2;i++){
//		temp=psarr[i];
//		psarr[i]=psarr[strlen(psarr)-1-i];
//		psarr[strlen(psarr)-1-i]=temp;
//	}
//}
//int main(void)
//{
//	char sarr[10] = "ABCDE";
//
//	PrintString(sarr);
//	ReverseString(sarr);
//	PrintString(sarr);
//
//}
//
//
//#include<stdio.h>
//#include<string.h>
//void PrintString(const char*psarr)
//{
//	printf("string : %s\n",psarr);
//}
//void ReverseString(char*psarr){ //아웃파라미터이기 때문에 const안붙는다.
//	char temp;
//	int i;
//	for(i=0;i<strlen(psarr)/2;i++){
//		Swap(psarr[i])
//	}
//}
//void Swap(char)
//	temp=psarr[i];
//		psarr[i]=psarr[strlen(psarr)-1-i];
//		psarr[strlen(psarr)-1-i]=temp;
//int main(void)
//{
//	char sarr[10] = "ABCDE";
//
//	PrintString(sarr);
//	ReverseString(sarr);
//	PrintString(sarr);
//
//}
//
//
//#include<stdio.h>
//#define MAX 100 //전처리기 컴파일 전에 먼저 작업함
//int main(void)
//{
//	printf("%d\n",MAX);
//	printf("%d\n",MAX);
//
//}
//
//
//#include<stdio.h>
//#define MAX 100 //전처리기 컴파일 전에 먼저 작업함 TextCode->TextCode
//int main(void)
//{
//	printf("%d\n",MAX);
//	printf("%d\n",MAX);
//
//}
//
//
//#include<stdio.h>
//#define Add(a,b) a+b
//int main(void)
//{
//	int n1=10,n2=20;
//	printf("%d\n",Add(n1,n2));
//	printf("%d\n",Add(10,20));
//
//}
//
//
//#include<stdio.h>
////#define Add(a,b) a+b
//int main(void)
//{
//	int n1=10,n2=20;
//	printf("%d\n",n1+n2);
//	printf("%d\n",10+20);
//
//}
//
//
//#include<stdio.h>
//int Max(int a,int b)
//{
//	return a>b ? a:b;
//}
//int main(void)
//{
//	int n1=10,n2=20;
//	printf("%d\n",Max(++n1,++n2));
//
//}
//
//
//#include<stdio.h>
//#define Max(a,b) ((a>b)?a:b) //형식은 컴파일러가 해석함
//							//전처리 문장에는 연산자를 쓰지 않는 것이 좋다.
//int main(void)
//{
//	int n1=10,n2=20;
//	printf("%d\n",Max(++n1,++n2)); //++n1,++n2 가 a,b로 인식됨
//
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//#ifdef _INT_
//	int data = 10;
//	printf("int :%d\n",data);
//#else
//	double data = 5.45;
//	printf("double :%g\n",data);
//#endif
//}
//
//
#include<stdio.h>
#define _INT_
int main(void)
{
#ifdef _INT_
	int data = 10;
	printf("int :%d\n",data);
#else
	double data = 5.45;
	printf("double :%g\n",data);
#endif
}

//
//#include<stdio.h>
//int main(void)
//{
//#ifdef _INT_
//	int data = 10;
//	printf("int :%d\n",data);
//#else
//	double data = 5.45;
//	printf("double :%g\n",data);
//#endif
//}
//
//
//#include<stdio.h>
//int main(void) //이게 표준함수이다.
//{
//	printf("Hello!\n");
//	return 0; //OS시스템한테 전달되는 값
//			//메인의 결과치는 프로그램의 결과치 이다.
//}
//
//
//#include<stdio.h>
//int main(int argc,char**argv) //이것도 표준함수이다.
//{
//	int i;
//	printf("argc : %d\n",argc);
//	for(i=0;i<argc;++i)
//		printf("argv[%d]:%s\n",i,argv[i]);
//	return 0; //OS시스템한테 전달되는 값
//			//메인의 결과치는 프로그램의 결과치 이다.
//}
//
//
//#include<stdio.h>
//void PrintArray(int arr[],int size)
//{
//	int i;
//	for(i=0;i<size;++i)
//		printf("%d : %d\n",i,arr[i]);
//}
//void main()
//{
//	int arr[5] = {10,20,30,40,50};
//	int n = 100;
//
//	printf("%d\n",n);
//	PrintArray(arr,5);
//}
//
//
//#include<stdio.h>
//void PrintArray(int arr[],int size)
//{
//	int i;
//	for(i=0;i<=size;++i)
//		printf("%d : %d\n",i,arr[i]);
//}
//void main()
//{
//	int arr[5] = {10,20,30,40,50};
//	int n = 100;
//
//	printf("%d\n",n);
//	PrintArray(arr,5);
//}