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
//	int i,arr[5] = {0}; //�ε��� ��� �ʱ�ȭ �����ָ� �ڵ����� 0���� �ٲ�
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
//	int i,arr[] = {10,20,30,40,50}; //�ʱ�ȭ�ϸ� ��������
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
//	int i,arr[] = {10,20,30,40,50}; //�ʱ�ȭ�ϸ� ��������
//	for(i=0;i<sizeof(arr)/sizeof(int);i++)
//		//sizeof(arr)/sizeof(int) == ������ ����
//	{
//		printf("arr[%d] : %d\n",i,arr[i]);
//	}
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[] = {10,20,30,40,50,60}; //�ʱ�ȭ�ϸ� ��������
//	for(i=0;i<sizeof(arr)/sizeof(int);i++)
//		//sizeof(arr)/sizeof(int) == ������ ����
//		//������ ���� ���ϸ� �ڵ����� ���ϱ⶧���� �����ѹ���̴�.
//	{
//		printf("arr[%d] : %d\n",i,arr[i]);
//	}
//}
//
//
//#include<stdio.h>
//void main() //os(�ü��)�� ���������
//{			//main()�Լ� ����
//	printf("Hello!"); //"Hello!"�� ����,�μ������
//	printf("%d %d", 10, 20); //�Լ�ȣ��
//
//}
//
//
//#include<stdio.h>
//
//void PrintHello() //�Լ��� header�κ� : ����Ÿ�� �Լ����̸�(�Ű����� ����Ʈ)
//{  //�Լ��� ��ü==�Լ����Ǥ�
//	printf("Hello!\n");
//}
//////////////////////////////////
//void main()  //�Լ��� �����(client��� �Ҽ��ִ�.)
//{			
//	PrintHello();
//	PrintHello();
//	PrintHello();
//}
//
//
//#include<stdio.h>
//////////////////server code//////////////////
//void PrintHello() //Server�ڵ� ��� �Ҽ��� ����.
//				  
//{  //�Լ��� ��ü==�Լ�����
//	printf("Hello!\n");
//}
/////////////////client code/////////////////
//void main()  //�Լ��� �����(������θ鿡��client�ڵ� ��� �Ҽ��� �ִ�.)
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
//	PrintHello(3); //3�� �Լ��� �μ� �Ű�����(parameter)��� ��
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
	PrintHello(3); //3�� �Լ��� �μ� �Ű�����(parameter)��� ��
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
int AddRange(int start, int end) //����Ÿ�� �Լ��̸�(�Ű����� ����Ʈ)
{ //�Լ� ���Ǻκ�
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
//	printf("%s\n",&str[1]); //%s ��°� ���ڿ��� ù��° �ε����� �ּҰ��� �Ѱܴ޶�� ������ �ؼ��� �� �ִ�.
//	printf("%s\n",p+1);
//	printf("%s\n",p+2);
//	printf("%c\n",*(p+6));
//	printf("%d %d\n",sizeof(p),sizeof(str));
//}

#include<stdio.h>
int main(void){

}