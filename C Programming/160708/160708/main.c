//#include<stdio.h>
//int g=10; //전역변수
//void Print(int k){
//	printf("%d\n",k);
//}
//int main(void){
//	int n=10; //n은 지역변수
//	Print(n);
//}
//
//
//#include<stdio.h>
//int g=10; //전역변수
//void Print(int k){
//	printf("%d\n",k);
//}
/////k와n은 스택영역에 자리잡고 GD영역에 자리잡는다.
//int main(void){
//	int n=10; //n은 지역변수
//	Print(n);
//}
//
//
//#include<stdio.h>
//int main(void){
//	char*s="ABC"; //"ABC"는 상수 문자열이라서 GD영역에 자리잡는다.
//					//s는 Stack영역에 자리잡음
//	printf("%s\n",s);
//}
//
//
//#include<stdio.h>
//void f1(){
//	int b;
//	printf("f1\n");
//	f2();
//}
//void f2(){
//	int a;
//	printf("f2\n");
//}
//int main(void){
//	int c;
//	f1();
//}
////메인에서 c가 제일먼저 만들어지고 그다음 f1에서 b가만들어지고 f2에서 c가 만들어진다.
////함수가 종료될때 변수가 자동으로 소멸
////먼저들어온 변수가 제일 나중에 사라진다. stack이라고 함
//
//
//#include<stdio.h>
//void Print(){
//	int a=10; //stack변수
//	static int s=10; //정적변수 GD에 자리잡는다.항수 호출 종료와 관계없이 프로그램종료시까지 살아있다.
//	printf("%d  %d\n",a,s);
//}
//int main(void){
//	Print();
//}
//
//
//#include<stdio.h>
//void Print(){
//	int a=10; //stack변수
//	static int s=10; //정적변수 GD에 자리잡는다.항수 호출 종료와 관계없이 프로그램종료시까지 살아있다.
//					//s는 함수시작전부터 생성되어 있었다.
//	printf("%d  %d\n",a++,s++);
//}
//int main(void){
//	Print();
//	Print();
//	Print();
//}
//
//
//#include<stdio.h>
//char*GetString()
//{
//	char buf[10] = "ABC"; //stack변수 함수종료시 사라진다. 
//	return buf;//주소값을 보내긴하지만 내용물이 없다.
//}
//int main(void){
//	char*s=GetString();
//	printf("%s\n",s);
//}
//
//
//#include<stdio.h>
//char*GetString()
//{
//	static char buf[10] = "ABC"; //정적변수로 선언해서 메모리를 유지시켜준다.
//	return buf;
//}
//int main(void){
//	char*s=GetString(); //stack메모리에 참조나 주소를 반환하면 안됨
//	printf("%s\n",s);
//}
//
//
//#include<stdio.h>
//int data = 10;
//void Print()
//{
//	printf("%d\n",data);
//}
//int main(void){
//	Print();
//	printf("%d\n",data);
//}
//
//
//#include<stdio.h>
//int data = 10; //생애주기는 static과 같다 프로그램 시작~종료
//				//유효범위가 다르다.
//void Print()
//{
//	printf("%d\n",data);
//}
//int main(void){
//	Print();
//	printf("%d\n",data);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void){
//	int*p; //stack메모리
//	p = malloc(4); //할당된 메모리의 시작주소를 반환한다.
//					//heap영역에 4바이트짜리 메모리 생성
//					//형식이없이 4바이트 메모리를 먼저 생성
//					//메모리의 형식을 포인터에 의해 정해준다.
//	*p=10;
//	printf("%d\n",*p);
//
//	free(p); //4바이트 메모리 제거(4바이트의 시작주소를 전달해주었다.)
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void){
//	int*p; //stack메모리
//	p =(int*)malloc(sizeof(int)); //사용할 형식에 따라서 저렇게 해줌
//									//명확하게 하기위해 typecasting해준다.
//	*p=10;
//	printf("%d\n",*p);
//
//	free(p); //4바이트 메모리 제거(4바이트의 시작주소를 전달해주었다.)
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int n=10;
//	printf("%p %p\n",&n,(int*)&n);
//	printf("%p %p\n",&n+1,(int*)&n+1);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int n=10;
//	printf("%p %p\n",&n,(char*)&n); //주소는 같은데 형변환을 통해서 형식만 바꿔준거
//	printf("%p %p\n",&n+1,(char*)&n+1);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	//int n=0x4241; //16진수 //16진수 한자리는 4비트 두자리합치면 1바이트
//	int n=16961;
//	printf("%p %p\n",&n,(char*)&n); //주소는 같은데 형변환을 통해서 형식만 바꿔준거
//	printf("%p %p\n",&n+1,(char*)&n+1);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	//int n=0x4241; //16진수 //16진수 한자리는 4비트 두자리합치면 1바이트
//	int n=16961;
//	printf("%x %d %c\n",*(char*)&n,*(char*)&n,*(char*)&n); //주소는 같은데 형변환을 통해서 형식만 바꿔준거
//	printf("%x %d %c\n",
//		*((char*)&n+1),*((char*)&n+1),*((char*)&n+1)); //주소는 같은데 형변환을 통해서 형식만 바꿔준거
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int*pa=(int*)malloc(sizeof(int)*5);
//	int i;
//	for(i=1;i<=5;i++){
//		*pa=i*10;
//		printf("%d\n",*pa);
//	}
//	free(pa);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int*pa=(int*)malloc(sizeof(int)*5);
//	int i;
//	for(i=0;i<5;i++){
//		pa[i]=(i+1)*10;
//		printf("%d\n",pa[i]);
//	}
//	free(pa);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//void PrintArray(int*pa,int size)
//{
//	int a;
//	for(a=0;a<size;a++)
//	{
//		printf("%d\n",pa[a]);
//	}
//}
//int main(void)
//{
//	int*pa=(int*)malloc(sizeof(int)*5);
//	int i;
//	for(i=0;i<5;i++){
//		pa[i]=(i+1)*10;
//	}
//	PrintArray(pa,5);
//	free(pa);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//void PrintArray(int*pa,int size)
//{
//	int a;
//	for(a=0;a<size;a++)
//	{
//		printf("%d\n",pa[a]);
//	}
//}
//void InitArray(int*pa,int size)
//{
//	int i;
//	for(i=0;i<size;i++)
//	{
//		pa[i]=(i+1)*10;
//	}
//}
//int main(void)
//{
//	int*pa=(int*)malloc(sizeof(int)*5);
//	InitArray(pa,5);
//	PrintArray(pa,5);
//	free(pa);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//void PrintArray(int*pa,int size); //함수선언
//void InitArray(int*pa,int size); //함수선언
//int main(void)
//{
//	int*pa=(int*)malloc(sizeof(int)*5);
//	InitArray(pa,5);
//	PrintArray(pa,5);
//	free(pa);
//}
//void PrintArray(int*pa,int size) //함수정의
//{
//	int a;
//	for(a=0;a<size;a++)
//	{
//		printf("%d\n",pa[a]);
//	}
//}
//void InitArray(int*pa,int size) //함수정의
//{
//	int i;
//	for(i=0;i<size;i++)
//	{
//		pa[i]=(i+1)*10;
//	}
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//void PrintArray(int*pa,int size); //함수선언
//void InitArray(int*pa,int size); //함수선언
//int main(void)
//{
//	int*pa=(int*)malloc(sizeof(int)*5);
//	InitArray(pa,5);
//	PrintArray(pa,5);
//	free(pa);
//}
//void PrintArray(int*pa,int size) //함수정의
//{
//	int a;
//	for(a=0;a<size;a++)
//	{
//		printf("%d\n",pa[a]);
//	}
//}
//void InitArray(int*pa,int size) //함수정의
//{
//	int i;
//	for(i=0;i<size;i++)
//	{
//		pa[i]=(i+1)*10;
//	}
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int*p=(int*)malloc(sizeof(int)); //변수정의는 제일먼저 나와야한다.
//	printf("Hello\n");
//	free(p);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	char buf[5];
//	printf("문자열 입력:");
//	gets_s(buf,5); //널문자까지 포함시켜주는 길이
//	printf("string:%s\n",buf);
//}


#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int sz=100;
	char*buf=(char*)malloc(sizeof(char)*sz); //heap메모리에 있다. 동적배열 실행하고나서 만들어짐
	printf("문자열 입력:");
	gets_s(buf,100); //널문자까지 포함시켜주는 길이
	printf("string:%s\n",buf);
	free(buf);
}
