//#include<stdio.h>
//void main()
//{
//	int arr[4] = {10,20,30,40}; //배열 초기화
//
//	printf("%d\n",arr[0]);
//	printf("%d\n",arr[1]);
//	printf("%d\n",arr[2]);
//	printf("%d\n",arr[3]);
//
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //배열 초기화
//	
//	
//	++arr[0];
//	++arr[1];
//	++arr[2];
//	++arr[3];
//	
//	for(i=0;i<4;i++)
//		printf("%d\n",arr[i]);
//
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //배열 초기화
//	
//	for(i=0;i<4;i++)//for문으로 코드줄임
//		++arr[i];
//	
//	for(i=0;i<4;i++)
//		printf("%d\n",arr[i]);
//
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //배열 초기화
//	
//	for(i=0;i<4;i++)//for문으로 코드줄임
//		++arr[i];
//	
//	for(i=0;i<4;i++)
//		printf("%d\n",arr[i]);
//
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //배열 초기화
//	
//	for(i=0;i<4;i++)//for문으로 코드줄임
//		++arr[i];
//	
//	for(i=0;i<4;i++)
//		printf("%d\n",arr[i]);
//
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //배열 초기화
//	
//	printf("%d %d\n",sizeof(arr[0],sizeof(arr[1])));
//	
//}
//
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //배열 초기화
//	int *p = &arr[0];
//	printf("%d\n",*p);
//}
//
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //배열 초기화
//	int *p = &arr[2];
//	printf("%d\n",*p);
//}
//
//
//
//
//#include<stdio.h>
//void main(){
//	int n = 10;
//	printf("%p\n",&n);
//	printf("%p\n",&n+1); //+1을하면 4바이트 증가(int 형식만큼)
//	printf("%p\n",&n+2); //변수가 가진 형식의 바이트만큼 증가.
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //배열 초기화
//	int *p = arr;
//	printf("%p\n",p);
//	printf("%p\n",p+1);
//	printf("%p\n",p+2);
//	printf("%p\n",p+3);
//}

//
//#include<stdio.h>
//void main(){
//	int n = 10;
//	printf("%p\n",&n);
//	printf("%p\n",&n-11); //+1을하면 4바이트 증가(int 형식만큼)
//	//변수가 가진 형식의 바이트만큼 증가.
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //배열 초기화
//	int *p = arr;
//	printf("%d\n",*p);
//	printf("%d\n",*(p+1));
//	printf("%d\n",*(p+2));
//	printf("%d\n",*(p+3));
//}
//
//
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //배열 초기화
//	int *p = arr;
//	printf("%d\n",p[0]); //*(p+i) == p[i]
//	printf("%d\n",p[1]);
//	printf("%d\n",p[2]);
//	printf("%d\n",p[3]);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //배열 초기화
//	int *p = &arr[2]; //arr[2]의 주소를 가리킨다. p[0] == arr[2]
//	printf("%d\n",p[-2]); //*(p+i) == p[i]
//	printf("%d\n",p[-1]);
//	printf("%d\n",p[0]);
//	printf("%d\n",p[1]);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //배열 초기화
//	//배열의 이름은 배열메모리가 시작하는 주소이다!
//	printf("%p %p\n",arr,&arr[0]);
//	printf("%p %p\n",arr+1,&arr[0]+1);
//	printf("%p %p\n",arr+2,&arr[0]+2);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //배열 초기화
//	//배열의 이름은 배열메모리가 시작하는 주소이다!
//	printf("%d %d\n",*&*arr,*&*&arr[0]); //같다!
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //배열 초기화
//	//배열의 이름은 배열메모리가 시작하는 주소이다!
//	printf("%d %d\n",*&*arr,*&*&arr[0]); //같다!
//	printf("%d %d\n",sizeof(arr),sizeof(&arr[0])); //다르다!
//
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20}; //배열 초기화
//							//하나의 원소만 초기화 하더라도 나머지 원소의 default값은 0이다
//
//	for(i=0 ; i<4 ; ++i)
//		printf("[%d] : %d\n",i,arr[i]);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4];  //초기화 하지않으면 쓰레기값 발생!(이렇게 하면 안됩니다.)
//
//	for(i=0 ; i<4 ; ++i)
//		printf("[%d] : %d\n",i,arr[i]);
//}
//
//
//#include<stdio.h>
//
//void main()
//{
//	int i,arr[4]={10,20,30,40};
//
//	for(i=0 ; i<4 ; ++i)
//		printf("[%d] : %d\n",i,arr[i]);
//	printf("\n");
//	for(i=3 ; i>=0 ; --i)
//		printf("[%d] : %d\n",i,arr[i]);
//}
//
//
//#include<stdio.h>
//
//void main()
//{
//	int i,arr[4]={10,20,30,40};
//
//	for(i=0 ; i<4 ; ++i)
//		printf("[%d] : %d\n",i,arr[i]);
//	printf("\n");
//	for(i = 0 ; i < 4 ; ++i) //i값을 건들이지 않는 코드
//		printf("[%d] : %d\n", 3-i, arr[3-i]);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	char str[4];
//	char* s="ABC"; //4바이트짜리 포인터
//					//문자열의 시작주소를 넣는것뿐이다.
//	printf("string : %s\n","ABC"); //%s는 문자열의 시작주소를 달라는의미
//	printf("string : %s\n",s);		//시작주소만주면 null문자까지 출력한다
//}
//
//
//#include<stdio.h>
//void main()
//{
//	char str[4];
//	char* s="ABC"; //4바이트짜리 포인터
//					//문자열의 시작주소를 넣는것뿐이다.
//					//문자열은 문자열의 시작주소이다.
//	printf("string : %s\n","ABC"+1); //%s는 문자열의 시작주소를 달라는의미
//	printf("string : %s\n",s+1);		//시작주소만주면 null문자까지 출력한다
//}
//
//
//#include<stdio.h>
//void main()
//{
//	char str[4];
//	char* s="ABC"; //4바이트짜리 포인터
//					//문자열의 시작주소를 넣는것뿐이다.
//		//////////문자열은 문자열의 시작주소이다.//////////////////
//	printf("string : %c\n",*"ABC"); //%s는 문자열의 시작주소를 달라는의미
//	printf("string : %c\n",*s);		//시작주소만주면 null문자까지 출력한다
//}

/*
#include<stdio.h>
void main()
{
	char str[4];
	char* s="ABC"; //4바이트짜리 포인터
					//문자열의 시작주소를 넣는것뿐이다.
		//////////문자열은 문자열의 시작주소이다.//////////////////
	printf("string : %c\n","ABC"[1]); //%s는 문자열의 시작주소를 달라는의미 "ABC"도 시작주소를 나타낸다.
	printf("string : %c\n",s[1]);		//시작주소만주면 null문자까지 출력한다
}
*/
/*
#include<stdio.h>
void main(){
	int a,b,c,i,f;
	printf("정수를 입력하세요 : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(f=1;f<=i;f++)
		{
			printf("%d",f);
		}
		printf("\n");
	}
	c=a;
	for(i=1;i<=a;i++)
	{
		for(f=1;f<=c-1;f++)
		{
			printf("%d",f);
		}
		printf("\n");
		c--;
	}
}
*/
//
//#include<stdio.h>
//int main(void){
//	int a,b,c,i,o;
//
//	printf("정수를 입력하세요 : ");
//	scanf("%d",&a);
//
//	b=a/2;
//	c=1;
//	for(i=0;i<=b;i++){
//		for(o=b;o>i;o--){
//			printf(" ");
//		}
//		for(o=0;o<c;o++){
//			printf("*");
//		}
//		printf("\n");
//		c+=2;
//	
//	}
//	b=a/2;
//	if(a%2==0)
//	{
//		c=a-1;
//	}
//	else
//	{
//	c=a-2;
//	}
//	for(i=0;i<=b-1;i++)
//	{
//		for(o=i;o>=0;o--)
//		{
//			printf(" ");
//		}
//		for(o=c;o>0;o--)
//		{
//			printf("*");
//		}
//		c-=2;
//		printf("\n");
//	}
//}