//#include<stdio.h>
//int Add(int a,int b);
//int Sub(int a,int b);
//double Div(double a,double b);
//int Mul(int a,int b);
//
//int main(void){
//	printf("%d\n",Add(2,3));
//	printf("%.2lf\n",Div(2,3));
//	printf("%d\n",Mul(2,3));
//	printf("%d\n",Sub(2,3));
//}
//
//
//#include<stdio.h>
//void PrintArray(int*arr)
//{
//	int i;
//	for(i=0;i<5;i++){
//		printf("arr[%d] = %d\n",i,arr[i]);
//	}
//}
//int main(void){
//	int arr[5]={10,20,30,40,50};
//	PrintArray(arr);//배열의 시작주소만 알고있으면 모든원소를 참조할수 있다.
//					//배열을 함수에 인자로넘기고싶으면 배열의 시작주소를 넘기면된다.
//}
//
//
//#include<stdio.h>
//void PrintArray(int*arr)
//{
//	int i;
//	for(i=0;i<5;i++){
//		printf("arr[%d] = %d\n",i,arr[i]);
//	}
//}
//int main(void){
//	int arr[5]={10,20,30,40,50};
//	PrintArray(arr);//배열의 시작주소만 알고있으면 모든원소를 참조할수 있다.
//					//배열을 함수에 인자로넘기고싶으면 배열의 시작주소를 넘기면된다.
//}
//
//
//#include<stdio.h>
//void PrintArray(int*arr,int size)
//{
//	int i;
//	for(i=0;i<size;i++){
//		printf("arr[%d] = %d\n",i,arr[i]);
//	}
//}
//int main(void){
//	int arr[5]={10,20,30,40,50};
//	PrintArray(&arr[2],3);//배열의 시작주소만 알고있으면 모든원소를 참조할수 있다.
//					//배열을 함수에 인자로넘기고싶으면 배열의 시작주소를 넘기면된다.
//}
//
//
//#include<stdio.h>
//int Add(int a,int b);
//int main(void){
//	int sum;
//	sum = Add(2,3);
//	printf("sum : %d\n",sum);
//}
//

//#include<stdio.h>
//int sum;
//void Add(int a,int b){
//	
//	sum =a+b;
//}
//int main(void){
//	Add(2,3);
//	printf("sum : %d\n",sum);
//}
//
//
//#include<stdio.h>
//void Add(int a,int b,int*psum){
//	
//	*psum =a+b;
//}
//int main(void){
//	int sum;
//	Add(2,3,&sum);
//	printf("sum : %d\n",sum);
//}
//
//
//#include<stdio.h>
//int main(void){
//	char*s1="ABC"; //마지막에 null문자가 들어가므로 4바이트가된다.
//					//char형식의 배열과 메모리 구조가 같다.
//	printf("%s\n",s1);
//}
//
//
//#include<stdio.h>
//int main(void){
//	char s1[4] = {'A','B','C','\0'};//아스키코드 'A'==65,'\0'==0
//	printf("%s\n",s1);
//}
//
//
//#include<stdio.h>
//int main(void){
//	char s1[4] = {'A','B','C'};//아스키코드 'A'==65,'\0'==0
//								//모든배열은 초기화안해주면 0으로 자동초기화
//								//NULL문자를 생각해줘야됨
//	printf("%s\n",s1);
//}
//
//
//#include<stdio.h>
//int main(void){
//	//char s1[4] = {'A','B','C'};
//	char s1[4] = "ABC";//위의 코드와 같다.
//	printf("%s\n",s1);
//}
//
//
//#include<stdio.h>
//int main(void){
//	char* s1 = "ABC";
//	char s2[4] = "ABC";//위의 코드와 같다.
//	printf("%s %s\n",s1,s2);
//}
//
//
//#include<stdio.h>
//int main(void){
//	char* s1 = "ABC";
//	char s2[4] = "ABC";//위의 코드와 같다.
//	// s1[1] = 'Z';  //상수문자열을 바꾸려해서 실행오류남
//	s2[1] = 'Z';
//	printf("%s %s\n",s1,s2);
//}
//
//
//#include<stdio.h>
//void PrintString(char*str)
//{
//	printf("%s\n",str);
//}
//int main(void){
//	char* s1 = "ABC";
//	char s2[5] = "ABCD";
//
//	PrintString(s1);
//	PrintString(s2);
//	PrintString("Hello!"); //문자열의 시작주소이다.
//}
//
//
//#include<stdio.h>
//void PrintString(const char*str) //in-parameter에는 const를 붙여야한다.
//{
//	printf("%s\n",str);
//}
//int main(void){
//	char* s1 = "ABC";
//	char s2[5] = "ABCD";
//
//	PrintString(s1);
//	PrintString(s2);
//	PrintString("Hello!"); //문자열의 시작주소이다.
//}
//
//
//#include<stdio.h>
//
//int main(void){
//	char* s = "ABC";
//	printf("%c\n",s[0]); 	
//	printf("%c\n",s[1]); 	
//	printf("%c\n",s[2]); 	
//}
//
//
//#include<stdio.h>
//
//int main(void){
//	int i;
//	char* s = "ABC";
//	for(i=0;i<3;i++){
//	printf("%c\n",s[i]); 	
//	}
//}
//
//
//#include<stdio.h>
//
//int main(void){
//	int i;
//	char* s = "ABCDEF";
//	for(i=0 ; s[i] ; i++){ //항상 null문자가 있으므로 null문자 만나면 끝
//	printf("%c\n",s[i]); 	
//	}
//}
//
//
//#include<stdio.h>
//
//int main(void){
//	int data;
//	scanf_s("%d",&data); //scanf는 보안에 취약해서 _s를 붙여준다.
//	printf("data : %d\n",data);
//}
//
//
//#include<stdio.h>
//
//int main(void){
//	while(1){
//		int data;
//		scanf_s("%d",&data); //scanf는 보안에 취약해서 _s를 붙여준다.
//		if(data>0){
//			printf("data : %d\n",data);
//		}
//		else
//			break;
//	}
//
//}
//
//
#include<stdio.h>
void PrintArray(int* ary,int count){
		int i;
		for(i=0;i<count;i++){
			printf("[%d] : %d\n",i,ary[i]);
		}
}
int main(void){
	
	int dArray[100];
	int dCount=0; //데이터가 들어가는 인덱스번호를 나타낸다
	while(1){
		int data;
		scanf_s("%d",&data);
		if(data>0 && dCount<100){
			dArray[dCount]=data;
			dCount++;
		}
		else
	
			break;
	}
	PrintArray(dArray,dCount);
}


//#include<stdio.h>
//void PrintArray(int* ary,int count){
//		int i;
//		for(i=0;i<count;i++){
//			printf("[%d] : %d\n",i,ary[i]);
//		}
//}
//void AddArray(int* dArray,int*dCount,int data)
//{
//	dArray[*dCount]=data;
//	(*dCount)++;
//}
//int main(void){
//	
//	int dArray[100];
//	int dCount=0; //데이터가 들어가는 인덱스번호를 나타낸다
//	while(1)
//	{
//		int data;
//		scanf_s("%d",&data);
//		if(data>0 && dCount<100)
//		{
//			AddArray(dArray,&dCount,data);
//		}
//		else
//		{
//			break;
//		}
//	}
//	PrintArray(dArray,dCount);
//}
//

//#include<stdio.h>
//void PrintArray(int* ary,int count){
//		int i;
//		for(i=0;i<count;i++){
//			printf("[%d] : %d\n",i,ary[i]);
//		}
//}
//void AddArray(int* dArray,int*dCount,int data)
//{
//	dArray[*dCount]=data;
//	(*dCount)++;
//}
//void InputInteger(int*pdata){
//	int data;
//	printf("정수를 입력하세요 : ");
//	scanf_s("%d",&data);
//	*pdata=data;
//}
//int main(void){
//	
//	int dArray[100];
//	int dCount=0; //데이터가 들어가는 인덱스번호를 나타낸다
//	while(1)
//	{
//		int data;
//		InputInteger(&data);
//		if(data>0 && dCount<100)
//		{
//			AddArray(dArray,&dCount,data);
//		}
//		else
//		{
//			break;
//		}
//	}
//	PrintArray(dArray,dCount);
//}

/*
#include<stdio.h>
void PrintArray(int* ary,int count){
		int i;
		for(i=0;i<count;i++){
			printf("[%d] : %d\n",i,ary[i]);
		}
}
void AddArray(int* dArray,int*dCount,int data)
{
	dArray[*dCount]=data;
	(*dCount)++;
}
void InputInteger(int*pdata){
	printf("정수를 입력하세요 : ");
	scanf_s("%d",pdata);//입력받는 시작주소
}
int main(void){
	
	int dArray[100];
	int dCount=0; //데이터가 들어가는 인덱스번호를 나타낸다
	while(1)
	{
		int data;
		InputInteger(&data);
		if(data>0 && dCount<100)
		{
			AddArray(dArray,&dCount,data);
		}
		else
		{
			break;
		}
	}
	PrintArray(dArray,dCount);
}
*/
/*
#include<stdio.h>
int main(void)
{
	printf("안녕하세요 반갑습니다.\n;");
	printf("계산기 프로그램 입니다.");
	printf("");
}
*/
//
//#include<stdio.h>
//struct addr{	char city[10];
//				char gu[10];
//				char dong[10];
//				char bungi[10];
//};
//struct phone{	char name[20];
//				char phoneno[20];
//				struct addr address; //중첩된 구조체
//			};
//int main(void)
//{
//	struct phone myphone = {
//		"Hong, Gil-Dong",
//		"02-111-1234",
//		{"seoul","seodaemun","Shinchon","10-4"}
//	};
//	printf("이름 : %s\n",myphone.name);
//	printf("전화번호 : %s\n",myphone.phoneno);
//	printf("주소 : %s시 %s구 %s동 %s번지\n",myphone.address.city,myphone.address.gu,myphone.address.dong,myphone.address.bungi);
//	return 0;
//}
//
//#include<stdio.h>
//int main(void){
//	char[]
//}
