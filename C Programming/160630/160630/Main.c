//#include<stdio.h>
//void main()
//{
//	int i,arr[5] = {1,2,3,4,5};
//
//	for(i=0;i<5;i++){
//		printf("arr[%d] : %d\n",i,arr[i]);
//	}
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[5] = {1,2,3,4,5};
//	for(i=0;i<5;i++)
//	{
//		arr[i]*=10;
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("arr[%d] : %d\n",i,arr[i]);
//	}
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[5] = {1,2,3,4,5};
//	for(i=0;i<5;i++)
//	{
//		arr[i] *= 10;
//		//arr[i] = arr[i] * 10
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("arr[%d] : %d\n",i,arr[i]);
//	}
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[5] = {1,2,3,4,5};
//	int* p=arr;
//
//	for(i=0;i<5;i++)
//	{
//		p[i] *= 10;
//		//arr[i] = arr[i] * 10
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("arr[%d] : %d\n",i,p[i]);
//								//p[i] == *(p+i)
//	}
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[5] = {0}; //인덱스 모두 초기화 안해주면 자동으로 0으로 바뀜
//	for(i=0;i<5;i++)
//	{
//		printf("arr[%d] : %d\n",i,arr[i]);
//	}
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[] = {10,20,30,40,50}; //초기화하면 생략가능
//	for(i=0;i<5;i++)
//	{
//		printf("arr[%d] : %d\n",i,arr[i]);
//	}
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[] = {10,20,30,40,50}; //초기화하면 생략가능
//	for(i=0;i<sizeof(arr)/sizeof(int);i++)
//		//sizeof(arr)/sizeof(int) == 원소의 개수
//	{
//		printf("arr[%d] : %d\n",i,arr[i]);
//	}
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[] = {10,20,30,40,50,60}; //초기화하면 생략가능
//	for(i=0;i<sizeof(arr)/sizeof(int);i++)
//		//sizeof(arr)/sizeof(int) == 원소의 개수
//		//원소의 개수 변하면 자동으로 변하기때문에 유연한방법이다.
//	{
//		printf("arr[%d] : %d\n",i,arr[i]);
//	}
//}
//
//
//#include<stdio.h>
//void main() //os(운영체제)가 실행시켜줌
//{			//main()함수 정의
//	printf("Hello!"); //"Hello!"는 인자,인수라고함
//	printf("%d %d", 10, 20); //함수호출
//
//}
//
//
//#include<stdio.h>
//
//void PrintHello() //함수의 header부분 : 리턴타입 함수의이름(매개변수 리스트)
//{  //함수의 몸체==함수정의ㅎ
//	printf("Hello!\n");
//}
//////////////////////////////////
//void main()  //함수의 사용자(client라고 할수있다.)
//{			
//	PrintHello();
//	PrintHello();
//	PrintHello();
//}
//
//
//#include<stdio.h>
//////////////////server code//////////////////
//void PrintHello() //Server코드 라고 할수도 있음.
//				  
//{  //함수의 몸체==함수정의
//	printf("Hello!\n");
//}
/////////////////client code/////////////////
//void main()  //함수의 사용자(기능적인면에서client코드 라고 할수도 있다.)
//{			
//	PrintHello();
//	PrintHello();
//	PrintHello();
//}
//
//
//#include<stdio.h>
//void PrintHello() //callee
//{
//	printf("Hello!\n");
//}
//void main()  //caller
//{			
//	PrintHello();
//	PrintHello();
//	PrintHello();
//}
//
//
//#include<stdio.h>
//void PrintHello(int i) //callee
//{
//	int n;
//	for(n=i;n>0;n--)
//		printf("Hello!\n");
//	printf("\n");
//}
//void main()  //caller
//{			
//	PrintHello(3); //3을 함수의 인수 매개변수(parameter)라고 함
//	PrintHello(9);
//	PrintHello(5);
//}

/*
#include<stdio.h>
void PrintHello(int i) //callee
{
	int n;
	for(n=i;n>0;n--)
		printf("Hello!\n");
	printf("\n");
}
void main()  //caller
{			
	PrintHello(3); //3을 함수의 인수 매개변수(parameter)라고 함
	PrintHello(9);
	PrintHello(5);
}
*/
//
//
//#include<stdio.h>
//void PrintAdd(int a,int b) //callee
//{
//	printf("%d + %d = %d",a,b,a+b);
//}
//void main()  //caller
//{			
//	PrintAdd(2,3); 
//	PrintAdd(5,6); 
//}
//
//
//#include<stdio.h>
//int Add(int a, int b){
//	int result = a+b;
//	return result;
//}
//void main()  //caller
//{	
//	int sum;
//	sum = Add(2,3); 
//	printf("sum = %d\n",sum);
//}
//
//
//#include<stdio.h>
//int Add(int a, int b){
//	int result = a+b;
//	return result;
//}
//void main()  //caller
//{	
//	int sum;
//	sum = Add(2,3); 
//	printf("sum = %d\n",sum);
//}
//
//
//
//#include<stdio.h>
//int Add(int a, int b){
//	int result = a+b;
//	return result;
//}
//void main()  //caller
//{	
//	int sum;
//	sum = Add(10,3);
//	printf("sum = %d\n",sum);
//}
//
//
//
//#include<stdio.h>
//int AddRange(int start, int end){
//	int sum =0;
//	int i;
//	for(i=start;i<=end;++i)
//		sum+=i;
//	return sum;
//}
//void main()  //caller
//{	
//	int sum;
//	sum = AddRange(1,10);
//	printf("sum = %d\n",sum);
//}


/*
#include<stdio.h>
int AddRange(int start, int end) //리턴타입 함수이름(매개변수 리스트)
{ //함수 정의부분
	int sum =0;
	int i;
	for(i=start;i<=end;++i)
		sum+=i;
	return sum;
}
void main()  //caller
{	
	printf("sum = %d\n",AddRange(1,10));
	printf("sum = %d\n",AddRange(5,8));
	printf("sum = %d\n",AddRange(7,9));
}
*/
//
//#include<stdio.h>
//int main(void){
//	char str[] = "ABCDEFGaaaaa";
//	char* p=str;
//	printf("%s\n",&str[1]); //%s 라는건 문자열의 첫번째 인덱스의 주소값을 넘겨달라는 뜻으로 해석될 수 있다.
//	printf("%s\n",p+1);
//	printf("%s\n",p+2);
//	printf("%c\n",*(p+6));
//	printf("%d %d\n",sizeof(p),sizeof(str));
//}

#include<stdio.h>
int main(void){

}