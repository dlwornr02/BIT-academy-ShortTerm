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
//enum{A=10,B=20,C=30}; //�������� ����� ������ Ÿ��
//int main(void){
//	printf("%d %d %d\n",A,B,C);
//}
//
//
//#include<stdio.h>
//enum{A=10,B,C}; //�������� ����� ������ Ÿ��
//int main(void){
//	printf("%d %d %d\n",A,B,C);
//}
//
//
//#include<stdio.h>
//enum BOOL{FALSE,TRUE}; //�������� ����� ������ Ÿ��,BOOL�� �ᵵ�ǰ� �Ƚᵵ�ǰ�
//int main(void){
//	printf("%d\n",FALSE);
//	printf("%d\n",TRUE);
//}
//
//
//#include<stdio.h>
//enum BOOL{FALSE,TRUE}; //�������� ����� ������ Ÿ��,BOOL�� �ᵵ�ǰ� �Ƚᵵ�ǰ�
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
//	//*p = 100; //�����Ұ���
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
//	//p=&m; //p�� �ٸ� �ּҷ� �ٲ� �� ����.
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
//	// *p = 100; //�Ѵ� �Ұ���
//	printf("%d=n",*p);
//	//p=&m; //p�� �ٸ� �ּҷ� �ٲ� �� ����.
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
//void Add(int a,int b,int*k) //in-parameter�����Ϳ��� const�� �ٴ´�.
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
//	const char*s = "ABC"; //������ڿ��� ����ų���� const�� �ٿ�����Ѵ�.
//	s[1] = 'K';  //������ڿ��� �ٲٷ��ؼ� ����
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
//void ReverseString(char*psarr){ //�ƿ��Ķ�����̱� ������ const�Ⱥٴ´�.
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
//void ReverseString(char*psarr){ //�ƿ��Ķ�����̱� ������ const�Ⱥٴ´�.
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
//#define MAX 100 //��ó���� ������ ���� ���� �۾���
//int main(void)
//{
//	printf("%d\n",MAX);
//	printf("%d\n",MAX);
//
//}
//
//
//#include<stdio.h>
//#define MAX 100 //��ó���� ������ ���� ���� �۾��� TextCode->TextCode
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
//#define Max(a,b) ((a>b)?a:b) //������ �����Ϸ��� �ؼ���
//							//��ó�� ���忡�� �����ڸ� ���� �ʴ� ���� ����.
//int main(void)
//{
//	int n1=10,n2=20;
//	printf("%d\n",Max(++n1,++n2)); //++n1,++n2 �� a,b�� �νĵ�
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
//int main(void) //�̰� ǥ���Լ��̴�.
//{
//	printf("Hello!\n");
//	return 0; //OS�ý������� ���޵Ǵ� ��
//			//������ ���ġ�� ���α׷��� ���ġ �̴�.
//}
//
//
//#include<stdio.h>
//int main(int argc,char**argv) //�̰͵� ǥ���Լ��̴�.
//{
//	int i;
//	printf("argc : %d\n",argc);
//	for(i=0;i<argc;++i)
//		printf("argv[%d]:%s\n",i,argv[i]);
//	return 0; //OS�ý������� ���޵Ǵ� ��
//			//������ ���ġ�� ���α׷��� ���ġ �̴�.
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