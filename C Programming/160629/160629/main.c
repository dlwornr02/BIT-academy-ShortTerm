//#include<stdio.h>
//void main()
//{
//	int arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
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
//	int i,arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
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
//	int i,arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
//	
//	for(i=0;i<4;i++)//for������ �ڵ�����
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
//	int i,arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
//	
//	for(i=0;i<4;i++)//for������ �ڵ�����
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
//	int i,arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
//	
//	for(i=0;i<4;i++)//for������ �ڵ�����
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
//	int i,arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
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
//	int i,arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
//	int *p = &arr[0];
//	printf("%d\n",*p);
//}
//
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
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
//	printf("%p\n",&n+1); //+1���ϸ� 4����Ʈ ����(int ���ĸ�ŭ)
//	printf("%p\n",&n+2); //������ ���� ������ ����Ʈ��ŭ ����.
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
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
//	printf("%p\n",&n-11); //+1���ϸ� 4����Ʈ ����(int ���ĸ�ŭ)
//	//������ ���� ������ ����Ʈ��ŭ ����.
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
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
//	int i,arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
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
//	int i,arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
//	int *p = &arr[2]; //arr[2]�� �ּҸ� ����Ų��. p[0] == arr[2]
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
//	int i,arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
//	//�迭�� �̸��� �迭�޸𸮰� �����ϴ� �ּ��̴�!
//	printf("%p %p\n",arr,&arr[0]);
//	printf("%p %p\n",arr+1,&arr[0]+1);
//	printf("%p %p\n",arr+2,&arr[0]+2);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
//	//�迭�� �̸��� �迭�޸𸮰� �����ϴ� �ּ��̴�!
//	printf("%d %d\n",*&*arr,*&*&arr[0]); //����!
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20,30,40}; //�迭 �ʱ�ȭ
//	//�迭�� �̸��� �迭�޸𸮰� �����ϴ� �ּ��̴�!
//	printf("%d %d\n",*&*arr,*&*&arr[0]); //����!
//	printf("%d %d\n",sizeof(arr),sizeof(&arr[0])); //�ٸ���!
//
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4] = {10,20}; //�迭 �ʱ�ȭ
//							//�ϳ��� ���Ҹ� �ʱ�ȭ �ϴ��� ������ ������ default���� 0�̴�
//
//	for(i=0 ; i<4 ; ++i)
//		printf("[%d] : %d\n",i,arr[i]);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	int i,arr[4];  //�ʱ�ȭ ���������� �����Ⱚ �߻�!(�̷��� �ϸ� �ȵ˴ϴ�.)
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
//	for(i = 0 ; i < 4 ; ++i) //i���� �ǵ����� �ʴ� �ڵ�
//		printf("[%d] : %d\n", 3-i, arr[3-i]);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	char str[4];
//	char* s="ABC"; //4����Ʈ¥�� ������
//					//���ڿ��� �����ּҸ� �ִ°ͻ��̴�.
//	printf("string : %s\n","ABC"); //%s�� ���ڿ��� �����ּҸ� �޶���ǹ�
//	printf("string : %s\n",s);		//�����ּҸ��ָ� null���ڱ��� ����Ѵ�
//}
//
//
//#include<stdio.h>
//void main()
//{
//	char str[4];
//	char* s="ABC"; //4����Ʈ¥�� ������
//					//���ڿ��� �����ּҸ� �ִ°ͻ��̴�.
//					//���ڿ��� ���ڿ��� �����ּ��̴�.
//	printf("string : %s\n","ABC"+1); //%s�� ���ڿ��� �����ּҸ� �޶���ǹ�
//	printf("string : %s\n",s+1);		//�����ּҸ��ָ� null���ڱ��� ����Ѵ�
//}
//
//
//#include<stdio.h>
//void main()
//{
//	char str[4];
//	char* s="ABC"; //4����Ʈ¥�� ������
//					//���ڿ��� �����ּҸ� �ִ°ͻ��̴�.
//		//////////���ڿ��� ���ڿ��� �����ּ��̴�.//////////////////
//	printf("string : %c\n",*"ABC"); //%s�� ���ڿ��� �����ּҸ� �޶���ǹ�
//	printf("string : %c\n",*s);		//�����ּҸ��ָ� null���ڱ��� ����Ѵ�
//}

/*
#include<stdio.h>
void main()
{
	char str[4];
	char* s="ABC"; //4����Ʈ¥�� ������
					//���ڿ��� �����ּҸ� �ִ°ͻ��̴�.
		//////////���ڿ��� ���ڿ��� �����ּ��̴�.//////////////////
	printf("string : %c\n","ABC"[1]); //%s�� ���ڿ��� �����ּҸ� �޶���ǹ� "ABC"�� �����ּҸ� ��Ÿ����.
	printf("string : %c\n",s[1]);		//�����ּҸ��ָ� null���ڱ��� ����Ѵ�
}
*/
/*
#include<stdio.h>
void main(){
	int a,b,c,i,f;
	printf("������ �Է��ϼ��� : ");
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
//	printf("������ �Է��ϼ��� : ");
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