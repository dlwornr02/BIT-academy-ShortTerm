//#include<stdio.h>
//int g=10; //��������
//void Print(int k){
//	printf("%d\n",k);
//}
//int main(void){
//	int n=10; //n�� ��������
//	Print(n);
//}
//
//
//#include<stdio.h>
//int g=10; //��������
//void Print(int k){
//	printf("%d\n",k);
//}
/////k��n�� ���ÿ����� �ڸ���� GD������ �ڸ���´�.
//int main(void){
//	int n=10; //n�� ��������
//	Print(n);
//}
//
//
//#include<stdio.h>
//int main(void){
//	char*s="ABC"; //"ABC"�� ��� ���ڿ��̶� GD������ �ڸ���´�.
//					//s�� Stack������ �ڸ�����
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
////���ο��� c�� ���ϸ��� ��������� �״��� f1���� b����������� f2���� c�� ���������.
////�Լ��� ����ɶ� ������ �ڵ����� �Ҹ�
////�������� ������ ���� ���߿� �������. stack�̶�� ��
//
//
//#include<stdio.h>
//void Print(){
//	int a=10; //stack����
//	static int s=10; //�������� GD�� �ڸ���´�.�׼� ȣ�� ����� ������� ���α׷�����ñ��� ����ִ�.
//	printf("%d  %d\n",a,s);
//}
//int main(void){
//	Print();
//}
//
//
//#include<stdio.h>
//void Print(){
//	int a=10; //stack����
//	static int s=10; //�������� GD�� �ڸ���´�.�׼� ȣ�� ����� ������� ���α׷�����ñ��� ����ִ�.
//					//s�� �Լ����������� �����Ǿ� �־���.
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
//	char buf[10] = "ABC"; //stack���� �Լ������ �������. 
//	return buf;//�ּҰ��� ������������ ���빰�� ����.
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
//	static char buf[10] = "ABC"; //���������� �����ؼ� �޸𸮸� ���������ش�.
//	return buf;
//}
//int main(void){
//	char*s=GetString(); //stack�޸𸮿� ������ �ּҸ� ��ȯ�ϸ� �ȵ�
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
//int data = 10; //�����ֱ�� static�� ���� ���α׷� ����~����
//				//��ȿ������ �ٸ���.
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
//	int*p; //stack�޸�
//	p = malloc(4); //�Ҵ�� �޸��� �����ּҸ� ��ȯ�Ѵ�.
//					//heap������ 4����Ʈ¥�� �޸� ����
//					//�����̾��� 4����Ʈ �޸𸮸� ���� ����
//					//�޸��� ������ �����Ϳ� ���� �����ش�.
//	*p=10;
//	printf("%d\n",*p);
//
//	free(p); //4����Ʈ �޸� ����(4����Ʈ�� �����ּҸ� �������־���.)
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void){
//	int*p; //stack�޸�
//	p =(int*)malloc(sizeof(int)); //����� ���Ŀ� ���� ������ ����
//									//��Ȯ�ϰ� �ϱ����� typecasting���ش�.
//	*p=10;
//	printf("%d\n",*p);
//
//	free(p); //4����Ʈ �޸� ����(4����Ʈ�� �����ּҸ� �������־���.)
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
//	printf("%p %p\n",&n,(char*)&n); //�ּҴ� ������ ����ȯ�� ���ؼ� ���ĸ� �ٲ��ذ�
//	printf("%p %p\n",&n+1,(char*)&n+1);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	//int n=0x4241; //16���� //16���� ���ڸ��� 4��Ʈ ���ڸ���ġ�� 1����Ʈ
//	int n=16961;
//	printf("%p %p\n",&n,(char*)&n); //�ּҴ� ������ ����ȯ�� ���ؼ� ���ĸ� �ٲ��ذ�
//	printf("%p %p\n",&n+1,(char*)&n+1);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	//int n=0x4241; //16���� //16���� ���ڸ��� 4��Ʈ ���ڸ���ġ�� 1����Ʈ
//	int n=16961;
//	printf("%x %d %c\n",*(char*)&n,*(char*)&n,*(char*)&n); //�ּҴ� ������ ����ȯ�� ���ؼ� ���ĸ� �ٲ��ذ�
//	printf("%x %d %c\n",
//		*((char*)&n+1),*((char*)&n+1),*((char*)&n+1)); //�ּҴ� ������ ����ȯ�� ���ؼ� ���ĸ� �ٲ��ذ�
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
//void PrintArray(int*pa,int size); //�Լ�����
//void InitArray(int*pa,int size); //�Լ�����
//int main(void)
//{
//	int*pa=(int*)malloc(sizeof(int)*5);
//	InitArray(pa,5);
//	PrintArray(pa,5);
//	free(pa);
//}
//void PrintArray(int*pa,int size) //�Լ�����
//{
//	int a;
//	for(a=0;a<size;a++)
//	{
//		printf("%d\n",pa[a]);
//	}
//}
//void InitArray(int*pa,int size) //�Լ�����
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
//void PrintArray(int*pa,int size); //�Լ�����
//void InitArray(int*pa,int size); //�Լ�����
//int main(void)
//{
//	int*pa=(int*)malloc(sizeof(int)*5);
//	InitArray(pa,5);
//	PrintArray(pa,5);
//	free(pa);
//}
//void PrintArray(int*pa,int size) //�Լ�����
//{
//	int a;
//	for(a=0;a<size;a++)
//	{
//		printf("%d\n",pa[a]);
//	}
//}
//void InitArray(int*pa,int size) //�Լ�����
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
//	int*p=(int*)malloc(sizeof(int)); //�������Ǵ� ���ϸ��� ���;��Ѵ�.
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
//	printf("���ڿ� �Է�:");
//	gets_s(buf,5); //�ι��ڱ��� ���Խ����ִ� ����
//	printf("string:%s\n",buf);
//}


#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int sz=100;
	char*buf=(char*)malloc(sizeof(char)*sz); //heap�޸𸮿� �ִ�. �����迭 �����ϰ��� �������
	printf("���ڿ� �Է�:");
	gets_s(buf,100); //�ι��ڱ��� ���Խ����ִ� ����
	printf("string:%s\n",buf);
	free(buf);
}
