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
//	PrintArray(arr);//�迭�� �����ּҸ� �˰������� �����Ҹ� �����Ҽ� �ִ�.
//					//�迭�� �Լ��� ���ڷγѱ������� �迭�� �����ּҸ� �ѱ��ȴ�.
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
//	PrintArray(arr);//�迭�� �����ּҸ� �˰������� �����Ҹ� �����Ҽ� �ִ�.
//					//�迭�� �Լ��� ���ڷγѱ������� �迭�� �����ּҸ� �ѱ��ȴ�.
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
//	PrintArray(&arr[2],3);//�迭�� �����ּҸ� �˰������� �����Ҹ� �����Ҽ� �ִ�.
//					//�迭�� �Լ��� ���ڷγѱ������� �迭�� �����ּҸ� �ѱ��ȴ�.
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
//	char*s1="ABC"; //�������� null���ڰ� ���Ƿ� 4����Ʈ���ȴ�.
//					//char������ �迭�� �޸� ������ ����.
//	printf("%s\n",s1);
//}
//
//
//#include<stdio.h>
//int main(void){
//	char s1[4] = {'A','B','C','\0'};//�ƽ�Ű�ڵ� 'A'==65,'\0'==0
//	printf("%s\n",s1);
//}
//
//
//#include<stdio.h>
//int main(void){
//	char s1[4] = {'A','B','C'};//�ƽ�Ű�ڵ� 'A'==65,'\0'==0
//								//���迭�� �ʱ�ȭ�����ָ� 0���� �ڵ��ʱ�ȭ
//								//NULL���ڸ� ��������ߵ�
//	printf("%s\n",s1);
//}
//
//
//#include<stdio.h>
//int main(void){
//	//char s1[4] = {'A','B','C'};
//	char s1[4] = "ABC";//���� �ڵ�� ����.
//	printf("%s\n",s1);
//}
//
//
//#include<stdio.h>
//int main(void){
//	char* s1 = "ABC";
//	char s2[4] = "ABC";//���� �ڵ�� ����.
//	printf("%s %s\n",s1,s2);
//}
//
//
//#include<stdio.h>
//int main(void){
//	char* s1 = "ABC";
//	char s2[4] = "ABC";//���� �ڵ�� ����.
//	// s1[1] = 'Z';  //������ڿ��� �ٲٷ��ؼ� ���������
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
//	PrintString("Hello!"); //���ڿ��� �����ּ��̴�.
//}
//
//
//#include<stdio.h>
//void PrintString(const char*str) //in-parameter���� const�� �ٿ����Ѵ�.
//{
//	printf("%s\n",str);
//}
//int main(void){
//	char* s1 = "ABC";
//	char s2[5] = "ABCD";
//
//	PrintString(s1);
//	PrintString(s2);
//	PrintString("Hello!"); //���ڿ��� �����ּ��̴�.
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
//	for(i=0 ; s[i] ; i++){ //�׻� null���ڰ� �����Ƿ� null���� ������ ��
//	printf("%c\n",s[i]); 	
//	}
//}
//
//
//#include<stdio.h>
//
//int main(void){
//	int data;
//	scanf_s("%d",&data); //scanf�� ���ȿ� ����ؼ� _s�� �ٿ��ش�.
//	printf("data : %d\n",data);
//}
//
//
//#include<stdio.h>
//
//int main(void){
//	while(1){
//		int data;
//		scanf_s("%d",&data); //scanf�� ���ȿ� ����ؼ� _s�� �ٿ��ش�.
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
	int dCount=0; //�����Ͱ� ���� �ε�����ȣ�� ��Ÿ����
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
//	int dCount=0; //�����Ͱ� ���� �ε�����ȣ�� ��Ÿ����
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
//	printf("������ �Է��ϼ��� : ");
//	scanf_s("%d",&data);
//	*pdata=data;
//}
//int main(void){
//	
//	int dArray[100];
//	int dCount=0; //�����Ͱ� ���� �ε�����ȣ�� ��Ÿ����
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
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d",pdata);//�Է¹޴� �����ּ�
}
int main(void){
	
	int dArray[100];
	int dCount=0; //�����Ͱ� ���� �ε�����ȣ�� ��Ÿ����
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
	printf("�ȳ��ϼ��� �ݰ����ϴ�.\n;");
	printf("���� ���α׷� �Դϴ�.");
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
//				struct addr address; //��ø�� ����ü
//			};
//int main(void)
//{
//	struct phone myphone = {
//		"Hong, Gil-Dong",
//		"02-111-1234",
//		{"seoul","seodaemun","Shinchon","10-4"}
//	};
//	printf("�̸� : %s\n",myphone.name);
//	printf("��ȭ��ȣ : %s\n",myphone.phoneno);
//	printf("�ּ� : %s�� %s�� %s�� %s����\n",myphone.address.city,myphone.address.gu,myphone.address.dong,myphone.address.bungi);
//	return 0;
//}
//
//#include<stdio.h>
//int main(void){
//	char[]
//}
