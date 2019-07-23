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
//	printf("이름 입력 : ");
//	gets(p1.name);	//상수문자열 이라서 오류가난다
//	printf("전화입력 : ");
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
//	printf("이름 입력 : ");
//	gets(p1.name);	//상수문자열 이라서 오류가난다
//	printf("전화입력 : ");
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
//	printf("이름 입력 : ");
//	p1.name = (char*)malloc(20);
//	p1.phone = (char*)malloc(20);
//	gets(p1.name);	//상수문자열 이라서 오류가난다
//	printf("전화입력 : ");
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
//	printf("이름 입력 : ");
//	gets(buf);	//상수문자열 이라서 오류가난다
//	p1.name = (char*)malloc(strlen(buf)+1);
//	strcpy(p1.name,buf);
//	printf("전화입력 : ");
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
//	printf("이름 입력 : ");
//	p1.name = InputString();
//	printf("전화입력 : ");
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
//	printf("이름 입력 : ");
//	p->name = InputString();
//	printf("전화 입력 : ");
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
//	printf("이름 입력 : ");
//	p->name = InputString();
//	printf("전화 입력 : ");
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
//	printf("이름 입력 : ");
//	p->name = InputString();
//	printf("전화 입력 : ");
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
//   printf("이름 입력 : ");
//   pt->name= InputString();
//
//   printf("전화번호 입력 : ");
//   pt->phone=InputString();
//}
//void FreePerson(Person* pt){
//   free(pt->name);
//   free(pt->phone);
//   //printf("메모리가 제거 되없습니다.\n");
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
//   printf("1. 전화 입력\n");
//   printf("2. 전화 출력\n");
//   printf("3. 전화 검색\n");
//   printf("4. 전화 삭제\n");
//   printf("0. 프로그램 종료\n");
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
//   printf("이름 입력 : ");
//   pt->name= InputString();
//
//   printf("전화번호 입력 : ");
//   pt->phone=InputString();
//}
//void FreePerson(Person* pt){
//   free(pt->name);
//   free(pt->phone);
//   //printf("메모리가 제거 되없습니다.\n");
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
//   printf("1. 전화 입력\n");
//   printf("2. 전화 출력\n");
//   printf("3. 전화 검색\n");
//   printf("4. 전화 삭제\n");
//   printf("0. 프로그램 종료\n");
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
//	pf=fopen("test.txt","w"); //w는 모드 어떤작업을 할지 정해준다.
//								//fopen은 파일의 주소를 반환한다.
//
//	fprintf(pf,"Hello\n"); //파일 프린트
//
//	fclose(pf);
//}
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	pf=fopen("test.txt","w"); //w는 모드 어떤작업을 할지 정해준다.
//								//fopen은 파일의 주소를 반환한다.
//
//	fprintf(pf,"Hello\n"); //파일 프린트
//	fprintf(pf,"Hello\n"); //파일 프린트
//	fprintf(pf,"Hello\n"); //파일 프린트
//	fprintf(pf,"Hello\n"); //파일 프린트
//
//	fclose(pf);
//}
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	pf=fopen("test.txt","w"); //w는 모드 어떤작업을 할지 정해준다.
//								//fopen은 파일의 주소를 반환한다.
//
//	fprintf(pf,"Hel\n"); //파일 프린트 \n은 2바이트 이다.
//
//	fclose(pf);
//}
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int arr[5] = {10,20,30,40,50};
//	pf=fopen("test.txt","w"); //w는 모드 어떤작업을 할지 정해준다.
//								//fopen은 파일의 주소를 반환한다.
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
//	pf=fopen("test.txt","w"); //w는 모드 어떤작업을 할지 정해준다.
//								//fopen은 파일의 주소를 반환한다.
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
//	pf=fopen("test.txt","r"); //w는 모드 어떤작업을 할지 정해준다.
//								//fopen은 파일의 주소를 반환한다.
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
//	pf=fopen("test.txt","r"); //w는 모드 어떤작업을 할지 정해준다.
//								//fopen은 파일의 주소를 반환한다.
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
//	pf=fopen("test.txt","w"); //w는 모드 어떤작업을 할지 정해준다.
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
//	pf=fopen("test.txt","r"); //w는 모드 어떤작업을 할지 정해준다.
//	{
//		fread(&m,sizeof(int),1,pf);//파일의 4바이트를 읽어서 저장해줘!!
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
//	pf=fopen("test.txt","w"); //w는 모드 어떤작업을 할지 정해준다.
//	{
//		int i;
//		for(i=0;i<5;++i)
//			fwrite(&arr[i],sizeof(int),1,pf); //20바이트 됨
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
//	pf=fopen("test.txt","r"); //w는 모드 어떤작업을 할지 정해준다.
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
//	pf=fopen("test.txt","r"); //w는 모드 어떤작업을 할지 정해준다.
//	{
//		int buf[5],i;
//		fread(buf,sizeof(int)*5,1,pf); //메모리 dump 라고한다. 20바이트를 떼어와서 그대로 20바이트의 배열에 넣어줌
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
//	pf=fopen("test.txt","r"); //w는 모드 어떤작업을 할지 정해준다.
//	{
//		int buf[5],i;
//		fread(buf,sizeof(int),5,pf); //메모리 dump 라고한다. 20바이트를 떼어와서 그대로 20바이트의 배열에 넣어줌
//									//시작주소로부터 4바이트짜리를 5번 읽어와!!라는 뜻이다.
//		for(i=0;i<5;++i)
//			printf("%d\n",buf[i]);
//	}
//	fclose(pf);
//}
//
//
//#include<stdio.h>
////5바이트에요
//void main()
//{
//	FILE* pf; 
//	int n=10;
//	pf=fopen("test.txt","w"); //w는 모드 어떤작업을 할지 정해준다.
//	fwrite(&n,sizeof(int),1,pf);
//	fclose(pf);
//}
//
//
//#include<stdio.h>
////4바이트에요
//void main()
//{
//	FILE* pf; 
//	int n=10;
//	pf=fopen("test.txt","wb"); //w는 모드 어떤작업을 할지 정해준다. b를 쓰면 바이트를 제대로 나타내준다?
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
//	pf=fopen("test.txt","wb"); //w는 모드 어떤작업을 할지 정해준다. b를 쓰면 바이트를 제대로 나타내준다?
//								//원래 wt라고 쓴다.(write text)
//								
//	fwrite(&n,sizeof(int),1,pf); //바이너리 출력을 해주겠다는 뜻이다.
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int n=0xA0A;
//	pf=fopen("test.txt","wt"); //w는 모드 어떤작업을 할지 정해준다. b를 쓰면 바이트를 제대로 나타내준다?
//								//원래 wt라고 쓴다.(write text)
//								
//	fwrite(&n,sizeof(int),1,pf); //바이너리 출력을 해주겠다는 뜻이다.
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//void main()
//{
//	FILE* pf; 
//	int n=0xA0A;
//	pf=fopen("test.txt","wb"); //w는 모드 어떤작업을 할지 정해준다. b를 쓰면 바이트를 제대로 나타내준다?
//								//원래 wt라고 쓴다.(write text)
//								//fwrite모드를 사용할때는 wb(writebinary)를 꼭써줘야함 그래야 자동변환을 안한다.
//	fwrite(&n,sizeof(int),1,pf); //바이너리 출력을 해주겠다는 뜻이다.
//	fclose(pf);
//}
//

////////////////////////////////////전화번호부/////////////////////////////////////
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
	printf("이름 입력 : ");
	getch();
	pt->name= InputString();

	printf("전화번호 입력 : ");
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
	   printf("출력할 데이터가 없습니다.\n");
   }
}
void Menu(){
   printf("\n\n=========================\n");
   printf("1. 전화 입력\n");
   printf("2. 전화 출력\n");
   printf("3. 전화 검색\n");
   printf("4. 마지막 전화 삭제\n");
   printf("5. 특정 번호 삭제\n");
   printf("6. 전화 저장\n");
   printf("7. 이전데이터 불러오기\n");
   printf("0. 프로그램 종료\n");
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
		printf("마지막 데이터 삭제!\n");
	}
	else{
		system("cls");
		printf("삭제할 데이터가 없습니다.\n");
	}
}
void FindPerson(PersonArray*pa)
{
	char FindName[20];
	int i,TorF=0;
	if(pa->perCount>0){
	printf("찾으시는 이름을 입력하세요 : ");
	gets(FindName);
	for(i=0;i<pa->perCount;i++)
	{
		if(strcmp(pa->parr[i]->name,FindName)==0){
			printf("%d. name : %s  phone : %s\n",i+1,pa->parr[i]->name,pa->parr[i]->phone);
			TorF++;
		}
	}
	if(TorF==0){
		printf("찾으시는 데이터가 없습니다.\n");
	}
	}
	else{
		printf("데이터가 존재하지 않습니다.\n");
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
	printf("삭제하고 싶은 번호를 입력 하세요 : ");
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
		printf("삭제할 데이터가 없습니다.\n");
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