//#include<stdio.h>
//void Print(int a,int b)
//{
//	printf("data : %d %d\n",a,b);
//}
//int main(void)
//{
//	void(*pf)(int,int);
//	pf=Print;
//	Print(10,20);
//	pf(10,20);
//}
//
//#include<stdio.h>
//void Print1(int a,int b)
//{
//	printf("data : %d %d\n",a,b);
//}
//void Print2(int a,int b)
//{
//	printf("(%d, %d)\n",a,b);
//}
//int main(void)
//{
//	void(*pf)(int,int);
//	pf=Print2;
//	pf(10,20);
//}
//
//
//#include<stdio.h>
/////////////////////////////
//void Client();
//void Server()
//{
//	printf("server code!\n");
//	Client();
//}
/////////////////////////////
//void Client(){
//	printf("client code!\n");
//}
//int main(void)
//{
//	Server();
//}
//
//
//#include<stdio.h>
/////////////////////////////
//void Client();
//void Server()
//{
//	printf("server code!\n");
//	Client();  //callback//�����ڵ忡�� Ŭ���̾�Ʈ��带 ȣ���� �� ����!
//				//�����ڵ庸�� �ڿ� ��������⶧���� ȣ���� �� ����.
//}
/////////////////////////////
//void Client(){ //callback function
//	printf("client code!\n");
//}
//int main(void)
//{
//	Server(); //call
//}
//
//
//#include<stdio.h>
/////////////////////////////
//void Server(int data, void(*pf)())
//{
//	printf("server code!\n");
//	pf();  //callback//�����ڵ忡�� Ŭ���̾�Ʈ��带 ȣ���� �� ����!
//				//�����ڵ庸�� �ڿ� ��������⶧���� ȣ���� �� ����.
//}
/////////////////////////////
//void Client(){ //callback function
//	printf("client code!\n");
//}
//int main(void)
//{
//	Server(10,Client); //call
//}
//
//
//#include<stdio.h>
/////////////////////////////
//void Server(int data, void(*pf)()) //������� ��å�� ������ �����Ų��.
//{
//	printf("server code!\n");
//	pf();  //callback//�����ڵ忡�� Ŭ���̾�Ʈ��带 ȣ���� �� ����!
//				//�����ڵ庸�� �ڿ� ��������⶧���� ȣ���� �� ����.
//}
/////////////////////////////
//void Client(){ //callback function ������ ����� �ٲ۴�.
//	printf("client code!\n");
//	printf("client code!\n");
//}
//int main(void)
//{
//	Server(10,Client); //call
//}
//
//#include<stdio.h>
//int Find(int*arr,int size,int data)
//{
//	int i;
//	for(i=0;i<size;i++)
//		if(arr[i]==data)
//			return i;
//}
//int main(){
//	int arr[10]={10,40,55,62,60,90,76,58,79,25};
//	int idx;
//	idx=Find(arr,10,90);
//	printf("data : %d\n",idx);
//
//}
//
//
//#include<stdio.h>
//int Find(int*arr,int size,int(*pred)(int))
//{
//	int i;
//	for(i=0;i<size;i++)
//		if(pred(arr[i]))
//			return i;
//	return -1;
//}
//int pred(int data){ //predicate(������) ���������� ��ȯ�ϴ� �Լ�(��)�� ����Ű�� ���(
//	return (20<data && data<90)&&(data%3==0);
//}
//int main(){
//	int arr[10]={10,40,55,62,60,90,76,58,79,25};
//	int idx;
//	idx = Find(arr , 10 , pred);
//	printf("data : %d\n",idx);
//}
//
//#include<stdio.h>
//void main()
//{
//	char sarr[10][100];
//
//	gets(sarr[0]);
//	gets(sarr[1]);
//	gets(sarr[2]);
//
//	printf("string %s\n",sarr[0]);
//	printf("string %s\n",sarr[1]);
//	printf("string %s\n",sarr[2]);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	char sarr[10][100];
//
//	gets(sarr[0]);
//	gets(sarr[1]);
//	gets(sarr[2]);
//
//	printf("string %s\n",sarr[0]);
//	printf("string %s\n",sarr[1]);
//	printf("string %s\n",sarr[2]);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//void main()
//{
//	int run=1;
//	char sarr[10][100];
//	int count=0;
//
//	while(run)
//	{
//		printf("���ڿ� �Է� : ");
//		gets(sarr[count++]);
//		if(strcmp(sarr[count-1],"exit")==0){
//			run=0;
//		}
//	}
//	{
//		int i;
//		for(i=0;i<count;i++)
//			printf("string %s\n",sarr[i]);
//
//	}
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//void PrintStringArray(char(*sarr)[100],int count)
//{
//		int i;
//		for(i=0;i<count;i++)
//			printf("string %s\n",sarr[i]);
//
//}
//void AddStringArray(char(*sarr)[100],int*count){
//	printf("���ڿ� �Է� : ");
//		gets(sarr[(*count)++]); //()������ �ּҰ� �����Ѵ�.
//}
//void main()
//{
//	int run=1;
//	char sarr[10][100];
//	int count=0;
//
//	while(run)
//	{
//		AddStringArray(sarr,&count);
//		if(strcmp(sarr[count-1],"exit")==0){
//			run=0;
//		}
//	}
//	PrintStringArray(sarr,count);
//}


#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
void PrintStringArray(char(*sarr),int count)
{
		int i;
		for(i=0;i<count;i++)
			printf("string %s\n",&sarr[i*100]);

}
void AddStringArray(char(*sarr),int*count){
	printf("���ڿ� �Է� : ");
		gets(&sarr[(*count)*100]); //()������ �ּҰ� �����Ѵ�.
		(*count)++;
}
void main()
{
	int run=1;
	char sarr[10][100];
	int count=0;

	while(run)
	{
		AddStringArray((char*)sarr,&count);
		if(strcmp(sarr[count-1],"exit")==0){
			run=0;
		}
	}
	PrintStringArray((char*)sarr,count);
}