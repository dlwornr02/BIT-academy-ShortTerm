//
//
//#include<stdio.h>
//struct Person
//{
//	char name[20];
//	char phone[20];
//};
//void PrintPerson(Person*p1)
//{
//	printf("name : %s , phone : %s\n",p1->name,p1->phone);
//}
//int main(void)
//{
//	Person p1={"Hong","010-2222-1234"};
//
//	PrintPerson(&p1);
//}
//
//
//#include<stdio.h>
//struct Person
//{
//	char*name;
//	char*phone;
//};
//void PrintPerson(Person*p1)
//{
//	printf("name : %s , phone : %s\n",p1->name,p1->phone);
//}
//int main(void)
//{
//	Person p1={"Hong","010-2222-1234"};
//
//	PrintPerson(&p1);
//}
//
//
//
//#include<stdio.h>
//struct Person
//{
//	char*name;
//	char*phone;
//};
//void PrintPerson(Person*p1)
//{
//	printf("name : %s , phone : %s\n",p1->name,p1->phone);
//}
//int main(void)
//{
//	Person p1={"Hong","010-2222-1234"};
//	printf("�̸� �Է� : ");
//	gets(p1.name);	//������ڿ� �̶� ����������
//	printf("��ȭ�Է� : ");
//	gets(p1.phone);
//	PrintPerson(&p1);
//}

//
//
//#include<stdio.h>
//struct Person
//{
//	char name[20];
//	char phone[20];
//};
//void PrintPerson(Person*p1)
//{
//	printf("name : %s , phone : %s\n",p1->name,p1->phone);
//}
//int main(void)
//{
//	Person p1={"Hong","010-2222-1234"};
//	printf("�̸� �Է� : ");
//	gets(p1.name);	//������ڿ� �̶� ����������
//	printf("��ȭ�Է� : ");
//	gets(p1.phone);
//	PrintPerson(&p1);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//struct Person
//{
//	char*name;
//	char*phone;
//};
//void PrintPerson(Person*p1)
//{
//	printf("name : %s , phone : %s\n",p1->name,p1->phone);
//}
//int main(void)
//{
//	Person p1;
//	printf("�̸� �Է� : ");
//	p1.name = (char*)malloc(20);
//	p1.phone = (char*)malloc(20);
//	gets(p1.name);	//������ڿ� �̶� ����������
//	printf("��ȭ�Է� : ");
//	gets(p1.phone);
//	PrintPerson(&p1);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct Person
//{
//	char*name;
//	char*phone;
//};
//void PrintPerson(Person*p1)
//{
//	printf("name : %s , phone : %s\n",p1->name,p1->phone);
//}
//int main(void)
//{
//	Person p1;
//	char buf[100];
//	printf("�̸� �Է� : ");
//	gets(buf);	//������ڿ� �̶� ����������
//	p1.name = (char*)malloc(strlen(buf)+1);
//	strcpy(p1.name,buf);
//	printf("��ȭ�Է� : ");
//	gets(buf);
//	p1.phone = (char*)malloc(strlen(buf)+1);
//	strcpy(p1.phone,buf);
//	PrintPerson(&p1);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct Person
//{
//	char*name;
//	char*phone;
//};
//void PrintPerson(Person*p1)
//{
//	printf("name : %s , phone : %s\n",p1->name,p1->phone);
//}
//char*InputString()
//{
//	char*s;
//	char buf[100];
//	gets(buf);
//	s=(char*)malloc(strlen(buf)+1);
//	strcpy(s,buf);
//
//	return s;
//}
//
//int main(void)
//{
//	Person p1;
//	char buf[100];
//	printf("�̸� �Է� : ");
//	p1.name = InputString();
//	printf("��ȭ�Է� : ");
//	p1.phone = InputString();
//	PrintPerson(&p1);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef struct Person
//{
//	char*name;
//	char*phone;
//}Person;
//void PrintPerson(Person*p1)
//{
//	printf("name : %s , phone : %s\n",p1->name,p1->phone);
//}
//char*InputString()
//{
//	char*s;
//	char buf[100];
//	gets(buf);
//	s=(char*)malloc(strlen(buf)+1);
//	strcpy(s,buf);
//
//	return s;
//}
//void InputPerson(Person*p)
//{
//	printf("�̸� �Է� : ");
//	p->name = InputString();
//	printf("��ȭ �Է� : ");
//	p->phone = InputString();
//}
//void FreePerson(Person*p)
//{
//	free(p->name);
//	free(p->phone);
//}
//int main(void)
//{
//	Person p1;
//
//	InputPerson(&p1);
//	PrintPerson(&p1);
//	FreePerson(&p1);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef struct Person
//{
//	char*name;
//	char*phone;
//}Person;
//void PrintPerson(Person*p1)
//{
//	printf("name : %s , phone : %s\n",p1->name,p1->phone);
//}
//char*InputString()
//{
//	char*s;
//	char buf[100];
//	gets(buf);
//	s=(char*)malloc(strlen(buf)+1);
//	strcpy(s,buf);
//
//	return s;
//}
//void InputPerson(Person*p)
//{
//	printf("�̸� �Է� : ");
//	p->name = InputString();
//	printf("��ȭ �Է� : ");
//	p->phone = InputString();
//}
//void FreePerson(Person*p)
//{
//	free(p->name);
//	free(p->phone);
//}
//typedef struct _personArray
//{
//	Person* parr;
//	int perCount;
//	int capacity;
//}PersonArray;
//void InitPersonArray(PersonArray*pa,int cap)
//{
//	pa->capacity = cap;
//	pa->parr = (Person*)malloc(sizeof(Person)*pa->capacity);
//	pa->perCount = 0;
//}
//void UninitPersonArray(PersonArray*pa)
//{
//	free(pa->parr);
//}
//int main(void)
//{
//	PersonArray pArray;
//	InitPersonArray(&pArray,100);
//	UninitPersonArray(&pArray);
//	
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef struct Person
//{
//	char*name;
//	char*phone;
//}Person;
//void PrintPerson(Person*p1)
//{
//	printf("name : %s , phone : %s\n",p1->name,p1->phone);
//}
//char*InputString()
//{
//	char*s;
//	char buf[100];
//	gets(buf);
//	s=(char*)malloc(strlen(buf)+1);
//	strcpy(s,buf);
//
//	return s;
//}
//void InputPerson(Person*p)
//{
//	printf("�̸� �Է� : ");
//	p->name = InputString();
//	printf("��ȭ �Է� : ");
//	p->phone = InputString();
//}
//void FreePerson(Person*p)
//{
//	free(p->name);
//	free(p->phone);
//}
//typedef struct _personArray
//{
//	Person* parr;
//	int perCount;
//	int capacity;
//}PersonArray;
//void InitPersonArray(PersonArray*pa,int cap)
//{
//	pa->capacity = cap;
//	pa->parr = (Person*)malloc(sizeof(Person)*pa->capacity);
//	pa->perCount = 0;
//}
//void UninitPersonArray(PersonArray*pa)
//{
//	free(pa->parr);
//}
//void AddPersonArray(PersonArray*pa)
//{
//	InputPerson(&pa->parr[pa->perCount]);
//	++pa->perCount;
//}
//void PrintPersonArray(PersonArray*pa)
//{
//	int i;
//	for(i=0;i<pa->perCount;++i)
//		printf("[%d] : name-%s phone-%s\n",i,pa->parr[i].name,pa->parr[i].phone);
//}
//int main(void)
//{
//	PersonArray pArray;
//	InitPersonArray(&pArray,100);
//
//	AddPersonArray(&pArray);
//	AddPersonArray(&pArray);
//	AddPersonArray(&pArray);
//
//	PrintPersonArray(&pArray);
//	UninitPersonArray(&pArray);
//	
//}
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<conio.h>
//typedef struct _Person{
//   char* name;
//   char* phone;
//}Person;
//typedef struct _PersonArray{
//   Person* parr;
//   int perCount;
//   int capacity;
//}PersonArray;
//void PrintPerson(Person* pt){
//   printf("name : %s, phone : %s\n",pt->name,pt->phone);
//}
//char* InputString(){
//   char* s;
//   char buf[100];
//   gets(buf);
//   s=(char*)malloc(strlen(buf)+1);
//   strcpy(s,buf);
//   return s;
//}
//void InputPerson(Person* pt){
//   printf("�̸� �Է� : ");
//   pt->name= InputString();
//
//   printf("��ȭ��ȣ �Է� : ");
//   pt->phone=InputString();
//}
//void FreePerson(Person* pt){
//   free(pt->name);
//   free(pt->phone);
//   //printf("�޸𸮰� ���� �Ǿ����ϴ�.\n");
//}
//void InitPersonArray(PersonArray* pa,int cap)
//{
//   pa->capacity=cap;
//   pa->parr=(Person*)malloc(sizeof(Person)*pa->capacity); //?
//   pa->perCount=0;
//}
//void UninitPersonArray(PersonArray* pa)
//{
//   free(pa->parr);
//}
//void AddPersonArray(PersonArray* pa){
//   InputPerson(&pa->parr[pa->perCount]);
//   ++pa->perCount;
//}
//void PrintPersonArray(PersonArray* pa)
//{
//   int i;
//   for(i=0;i<pa->perCount;i++)
//      printf("[%d] : name : %s,  phone : %s\n",i,pa->parr[i].name,pa->parr[i].phone);
//}
//void Menu(){
//   printf("=========================\n");
//   printf("1. ��ȭ �Է�\n");
//   printf("2. ��ȭ ���\n");
//   printf("3. ��ȭ �˻�\n");
//   printf("4. ��ȭ ����\n");
//   printf("0. ���α׷� ����\n");
//   printf("=========================\n");
//
//}
//void main(){
//   int run = 1;
//   PersonArray perArray;
//   InitPersonArray(&perArray,100);
//   while(run){
//      Menu();
//      system("cly");
//      switch(_getch()){{
//      case'1':
//         AddPersonArray(&perArray);
//         break;
//      case'2':
//         PrintPersonArray(&perArray);
//         break;
//      case'4':
//         UninitPersonArray(&perArray);
//         break;
//      case'0':
//         break;
//      }
//   }
//}

//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<conio.h>
//typedef struct _Person{
//   char* name;
//   char* phone;
//}Person;
//typedef struct _PersonArray{
//   Person* parr;
//   int perCount;
//   int capacity;
//}PersonArray;
//void PrintPerson(Person* pt){
//   printf("name : %s, phone : %s\n",pt->name,pt->phone);
//}
//char* InputString(){
//   char* s;
//   char buf[100];
//   gets(buf);
//   s=(char*)malloc(strlen(buf)+1);
//   strcpy(s,buf);
//   return s;
//}
//void InputPerson(Person* pt){
//   printf("�̸� �Է� : ");
//   pt->name= InputString();
//
//   printf("��ȭ��ȣ �Է� : ");
//   pt->phone=InputString();
//}
//void FreePerson(Person* pt){
//   free(pt->name);
//   free(pt->phone);
//   //printf("�޸𸮰� ���� �Ǿ����ϴ�.\n");
//}
//void InitPersonArray(PersonArray* pa,int cap)
//{
//   pa->capacity=cap;
//   pa->parr=(Person*)malloc(sizeof(Person)*pa->capacity); //?
//   pa->perCount=0;
//}
//
//void AddPersonArray(PersonArray* pa){
//   InputPerson(&pa->parr[pa->perCount]);
//   ++pa->perCount;
//}
//void PrintPersonArray(PersonArray* pa)
//{
//   int i;
//   for(i=0;i<pa->perCount;i++)
//      printf("[%d] : name : %s,  phone : %s\n",i,pa->parr[i].name,pa->parr[i].phone);
//}
//void UninitPersonArray(PersonArray* pa)
//{
//   int i;
//   for(i=0;i<pa->perCount;i++)
//      FreePerson(&pa->parr[i]);
//   free(pa->parr);
//}
//void Menu(){
//   printf("=========================\n");
//   printf("1. ��ȭ �Է�\n");
//   printf("2. ��ȭ ���\n");
//   printf("3. ��ȭ �˻�\n");
//   printf("4. ��ȭ ����\n");
//   printf("0. ���α׷� ����\n");
//   printf("=========================\n");
//
//}
//void main(){
//   int run = 1;
//   PersonArray perArray;
//   InitPersonArray(&perArray,100);
//   while(run){
//      Menu();
//      system("cly");
//      switch(_getch()){{
//      case'1':
//         AddPersonArray(&perArray);
//         break;
//      case'2':
//         PrintPersonArray(&perArray);
//         break;
//      case'3':
//         SelectPersonArray();
//         break;
//      case'4':
//         UninitPersonArray(&perArray);
//         break;
//      case'0':
//         break;
//      }
//   }
//}
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	pf=fopen("test.txt","w"); //w�� ��� ��۾��� ���� �����ش�.
//								//fopen�� ������ �ּҸ� ��ȯ�Ѵ�.
//
//	fprintf(pf,"Hello\n"); //���� ����Ʈ
//
//	fclose(pf);
//}
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	pf=fopen("test.txt","w"); //w�� ��� ��۾��� ���� �����ش�.
//								//fopen�� ������ �ּҸ� ��ȯ�Ѵ�.
//
//	fprintf(pf,"Hello\n"); //���� ����Ʈ
//	fprintf(pf,"Hello\n"); //���� ����Ʈ
//	fprintf(pf,"Hello\n"); //���� ����Ʈ
//	fprintf(pf,"Hello\n"); //���� ����Ʈ
//
//	fclose(pf);
//}
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	pf=fopen("test.txt","w"); //w�� ��� ��۾��� ���� �����ش�.
//								//fopen�� ������ �ּҸ� ��ȯ�Ѵ�.
//
//	fprintf(pf,"Hel\n"); //���� ����Ʈ \n�� 2����Ʈ �̴�.
//
//	fclose(pf);
//}
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int arr[5] = {10,20,30,40,50};
//	pf=fopen("test.txt","w"); //w�� ��� ��۾��� ���� �����ش�.
//								//fopen�� ������ �ּҸ� ��ȯ�Ѵ�.
//	{
//		int i;
//		for(i=0;i<5;i++)
//		{
//			fprintf(pf,"[%d] : %d\n",i,arr[i]); 
//
//		}
//	}
//
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int arr[5] = {10,20,30,40,50};
//	pf=fopen("test.txt","w"); //w�� ��� ��۾��� ���� �����ش�.
//								//fopen�� ������ �ּҸ� ��ȯ�Ѵ�.
//	{
//		int i;
//		for(i=0;i<5;i++)
//		{
//			fprintf(pf,"[%d] : %d\n",i,arr[i]);
//
//		}
//	}
//
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int arr[5] = {10,20,30,40,50};
//	pf=fopen("test.txt","r"); //w�� ��� ��۾��� ���� �����ش�.
//								//fopen�� ������ �ּҸ� ��ȯ�Ѵ�.
//	{
//		char buf1[10];
//		char buf2[10];
//		char buf3[10];
//		int i;
//		for(i=0;i<5;i++)
//		{
//			fscanf(pf,"%s%s%s",buf1,buf2,buf3);
//			printf("%s%s%s\n",buf1,buf2,buf3);
//		}
//	}
//
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int arr[5] = {10,20,30,40,50};
//	pf=fopen("test.txt","r"); //w�� ��� ��۾��� ���� �����ش�.
//								//fopen�� ������ �ּҸ� ��ȯ�Ѵ�.
//	{
//		char buf1[10];
//		char buf2[10];
//		char buf3[10];
//		int data;
//		int i;
//		for(i=0;i<5;i++)
//		{
//			fscanf(pf,"%s%s%d",buf1,buf2,&data);
//			printf("%s%s%d\n",buf1,buf2,data);
//		}
//	}
//
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int n = 100;
//	int m = 356;
//	pf=fopen("test.txt","w"); //w�� ��� ��۾��� ���� �����ش�.
//	fwrite(&n,sizeof(int),1,pf);
//	fwrite(&m,sizeof(int),1,pf);
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int n = 100;
//	int m = 356;
//	pf=fopen("test.txt","r"); //w�� ��� ��۾��� ���� �����ش�.
//	{
//		fread(&m,sizeof(int),1,pf);//������ 4����Ʈ�� �о ��������!!
//		fread(&n,sizeof(int),1,pf);
//		printf("%d  %d\n",m,n);
//	}
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int arr[5]={15,90,70,45,80};
//	int n = 100;
//	int m = 356;
//	pf=fopen("test.txt","w"); //w�� ��� ��۾��� ���� �����ش�.
//	{
//		int i;
//		for(i=0;i<5;++i)
//			fwrite(&arr[i],sizeof(int),1,pf); //20����Ʈ ��
//	}
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int arr[5]={15,90,70,45,80};
//	int n = 100;
//	int m = 356;
//	pf=fopen("test.txt","r"); //w�� ��� ��۾��� ���� �����ش�.
//	{
//		int n;
//		fread(&n,sizeof(int),1,pf);
//		printf("%d\n",n);
//		fread(&n,sizeof(int),1,pf);
//		printf("%d\n",n);
//		fread(&n,sizeof(int),1,pf);
//		printf("%d\n",n);
//		fread(&n,sizeof(int),1,pf);
//		printf("%d\n",n);
//		fread(&n,sizeof(int),1,pf);
//		printf("%d\n",n);
//	}
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int arr[5]={15,90,70,45,80};
//	pf=fopen("test.txt","r"); //w�� ��� ��۾��� ���� �����ش�.
//	{
//		int buf[5],i;
//		fread(buf,sizeof(int)*5,1,pf); //�޸� dump ����Ѵ�. 20����Ʈ�� ����ͼ� �״�� 20����Ʈ�� �迭�� �־���
//		for(i=0;i<5;++i)
//			printf("%d\n",buf[i]);
//	}
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int arr[5]={15,90,70,45,80};
//	pf=fopen("test.txt","r"); //w�� ��� ��۾��� ���� �����ش�.
//	{
//		int buf[5],i;
//		fread(buf,sizeof(int),5,pf); //�޸� dump ����Ѵ�. 20����Ʈ�� ����ͼ� �״�� 20����Ʈ�� �迭�� �־���
//									//�����ּҷκ��� 4����Ʈ¥���� 5�� �о��!!��� ���̴�.
//		for(i=0;i<5;++i)
//			printf("%d\n",buf[i]);
//	}
//	fclose(pf);
//}
//
//
//#include<stdio.h>
////5����Ʈ����
//void main()
//{
//	FILE* pf; 
//	int n=10;
//	pf=fopen("test.txt","w"); //w�� ��� ��۾��� ���� �����ش�.
//	fwrite(&n,sizeof(int),1,pf);
//	fclose(pf);
//}
//
//
//#include<stdio.h>
////4����Ʈ����
//void main()
//{
//	FILE* pf; 
//	int n=10;
//	pf=fopen("test.txt","wb"); //w�� ��� ��۾��� ���� �����ش�. b�� ���� ����Ʈ�� ����� ��Ÿ���ش�?
//	fwrite(&n,sizeof(int),1,pf);
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int n=10;
//	pf=fopen("test.txt","wb"); //w�� ��� ��۾��� ���� �����ش�. b�� ���� ����Ʈ�� ����� ��Ÿ���ش�?
//								//���� wt��� ����.(write text)
//								
//	fwrite(&n,sizeof(int),1,pf); //���̳ʸ� ����� ���ְڴٴ� ���̴�.
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int n=0xA0A;
//	pf=fopen("test.txt","wt"); //w�� ��� ��۾��� ���� �����ش�. b�� ���� ����Ʈ�� ����� ��Ÿ���ش�?
//								//���� wt��� ����.(write text)
//								
//	fwrite(&n,sizeof(int),1,pf); //���̳ʸ� ����� ���ְڴٴ� ���̴�.
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int n=0xA0A;
//	pf=fopen("test.txt","wb"); //w�� ��� ��۾��� ���� �����ش�. b�� ���� ����Ʈ�� ����� ��Ÿ���ش�?
//								//���� wt��� ����.(write text)
//								//fwrite��带 ����Ҷ��� wb(writebinary)�� ��������� �׷��� �ڵ���ȯ�� ���Ѵ�.
//	fwrite(&n,sizeof(int),1,pf); //���̳ʸ� ����� ���ְڴٴ� ���̴�.
//	fclose(pf);
//}
//

////////////////////////////////////��ȭ��ȣ��/////////////////////////////////////
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
typedef struct _Person{
   char* name;
   char* phone;
}Person;
typedef struct _PersonArray{
   Person* parr[100];
   int perCount;
   int capacity;
}PersonArray;
void PrintPerson(Person* pt){
   printf("name : %s, phone : %s\n",pt->name,pt->phone);
}
char* InputString(){
   char* s;
   char buf[100];
   gets_s(buf,100);
   s=(char*)malloc(strlen(buf)+1);
   strcpy(s,buf);
   return s;
}
void InputPerson(Person* pt){
	system("cls");
	printf("�̸� �Է� : ");
	getch();
	pt->name= InputString();

	printf("��ȭ��ȣ �Է� : ");
	pt->phone=InputString();
}

void FreePerson(Person* pt){
   free(pt->name);
   free(pt->phone);
}
void InitPersonArray(PersonArray* pa,int cap)
{
   pa->capacity=cap;
   pa->perCount=0;
}
void UninitPersonArray(PersonArray* pa)
{
	int i;
	for(i=0;i<pa->perCount;i++)
		free(pa->parr[i]);
}
void AddPersonArray(PersonArray* pa){
	pa->parr[pa->perCount]=(Person*)malloc(sizeof(Person));
	InputPerson(pa->parr[pa->perCount]);
	++pa->perCount;
}
void PrintPersonArray(PersonArray* pa)
{
   int i;
   if(pa->perCount>0){
	   system("cls");
   for(i=0;i<pa->perCount;i++)
	   printf("%d.  name : %s,  phone : %s\n",i+1,pa->parr[i]->name,pa->parr[i]->phone);
   }
   else{
	   system("cls");
	   printf("����� �����Ͱ� �����ϴ�.\n");
   }
}
void Menu(){
   printf("\n\n=========================\n");
   printf("1. ��ȭ �Է�\n");
   printf("2. ��ȭ ���\n");
   printf("3. ��ȭ �˻�\n");
   printf("4. ������ ��ȭ ����\n");
   printf("5. Ư�� ��ȣ ����\n");
   printf("6. ��ȭ ����\n");
   printf("7. ���������� �ҷ�����\n");
   printf("0. ���α׷� ����\n");
   printf("=========================\n\n\n");

}
void DeletPerson(PersonArray*pa)
{
	if((pa->perCount)>0){
		system("cls");
		pa->perCount--;
		free((pa->parr[(pa->perCount)]->name));
		free((pa->parr[(pa->perCount)]->phone));
		free(pa->parr[pa->perCount]);
		printf("������ ������ ����!\n");
	}
	else{
		system("cls");
		printf("������ �����Ͱ� �����ϴ�.\n");
	}
}
void FindPerson(PersonArray*pa)
{
	char FindName[20];
	int i,TorF=0;
	if(pa->perCount>0){
	printf("ã���ô� �̸��� �Է��ϼ��� : ");
	gets(FindName);
	for(i=0;i<pa->perCount;i++)
	{
		if(strcmp(pa->parr[i]->name,FindName)==0){
			printf("%d. name : %s  phone : %s\n",i+1,pa->parr[i]->name,pa->parr[i]->phone);
			TorF++;
		}
	}
	if(TorF==0){
		printf("ã���ô� �����Ͱ� �����ϴ�.\n");
	}
	}
	else{
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}

}
void SavePerson(PersonArray*pa)
{
	FILE*pf;
	int slen,i;
	pf=fopen("PersonInformation.txt","wb"); 
	fwrite(&(pa->perCount),sizeof(int),1,pf);
	for(i=0;i<pa->perCount;i++)
	{
		slen = strlen(pa->parr[i]->name)+1;
		fwrite(&slen,sizeof(int),1,pf);
		fwrite(pa->parr[i]->name,slen,1,pf);
		
		slen = strlen(pa->parr[i]->phone)+1;
		fwrite(&slen,sizeof(int),1,pf);
		fwrite(pa->parr[i]->phone,slen,1,pf);
	}
	fclose(pf);
	system("cls");
}
void Call_SaveData(PersonArray*pa){
	FILE*pf;
	int slen,i;
	UninitPersonArray(pa);
	pf=fopen("PersonInformation.txt","rb"); 
	fread(&(pa->perCount),sizeof(int),1,pf);
	for(i=0;i<pa->perCount;i++)
	{
		pa->parr[i]=(Person*)malloc(sizeof(Person));

		fread(&slen,sizeof(int),1,pf);
		pa->parr[i]->name=(char*)malloc(slen);
		fread(pa->parr[i]->name,slen,1,pf);
		
		fread(&slen,sizeof(int),1,pf);
		pa->parr[i]->phone=(char*)malloc(slen);
		fread(pa->parr[i]->phone,slen,1,pf);
	}
	fclose(pf);
	system("cls");
}
void DeletSpecipicPerson(PersonArray*pa)
{
	int selectNum,i;
	char temp[100];
	printf("�����ϰ� ���� ��ȣ�� �Է� �ϼ��� : ");
	scanf("%d",&selectNum);
	if((pa->perCount)>0 && selectNum<=pa->perCount){
		system("cls");
		for(i=selectNum;i<pa->perCount;i++){
			strcpy(pa->parr[i-1]->name,pa->parr[i]->name);
			strcpy(pa->parr[i-1]->phone,pa->parr[i]->phone);
		}
		free((pa->parr[(pa->perCount)-1]->name));
		free((pa->parr[(pa->perCount)-1]->phone));
		free(pa->parr[(pa->perCount)-1]);
		(pa->perCount)--;
	}
	else{
		system("cls");
		printf("������ �����Ͱ� �����ϴ�.\n");
	}
}
void main(){
   int run = 1;
   PersonArray perArray;
   InitPersonArray(&perArray,100);
   while(run){
      Menu();
      switch(_getch()){
      case'1':
         AddPersonArray(&perArray);
         break;
      case'2':
         PrintPersonArray(&perArray);
         break;
	  case'3':
		 FindPerson(&perArray);
         break;
      case'4':
		  DeletPerson(&perArray);
         break;
	  case'5':
		  DeletSpecipicPerson(&perArray);
		  break;
	  case '6':
		  SavePerson(&perArray);
		  break;
	  case '7':
		  Call_SaveData(&perArray);
		  break;
      case'0':
		  run=0;
		  UninitPersonArray(&perArray);
         break;
      }
   }
}