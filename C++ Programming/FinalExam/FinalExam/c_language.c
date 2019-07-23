///////////////////////////////문자열//////////////////////////////////////////////////
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void main()
//{
//	char*str;
//	int run = 1;
//	while(run)
//	{
//		char temp[100];
//		scanf("%s",temp);
//		
//		str = (char*)malloc(strlen(temp)+1);
//		strcpy(str,temp);
//		if(strcmp(str,"exit")==0)
//		{
//			run = 0;
//		}
//		printf("%s\n",str);
//	}
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void InputString(char**str)
//{
//	char temp[100];
//	scanf("%s",temp);
//	*str = (char*)malloc(strlen(temp)+1);
//	strcpy(*str,temp);
//}
//void main()
//{
//	char*str;
//	int run = 1;
//	while(run)
//	{
//		InputString(&str);
//		if(strcmp(str,"exit")==0)
//			run = 0;
//		printf("%s\n",str);
//	}
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void InputString(char**str)
//{
//	char temp[100];
//	scanf("%s",temp);
//	*str = (char*)malloc(strlen(temp)+1);
//	strcpy(*str,temp);
//}
//void main()
//{
//	char*str;
//	int run = 1;
//	while(run)
//	{
//		InputString(&str);
//		if(strcmp(str,"exit")==0)
//			run = 0;
//		printf("%s\n",str);
//	}
//}
//
//
///////////////////배열포인터//////////////////
//#include<stdio.h>
//void main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int(*p)[2] = (int(*)[2])arr;
//	int(*pp)[5] = (int(*)[5])arr;
//	int i,j;
//	for(i=0;i<10;i++)
//		printf("%3d",arr[i]);
//	printf("\n");
//	for(i=0;i<5;i++)
//		for(j=0;j<2;j++)
//			printf("%3d",p[i][j]);
//	printf("\n");
//	for(i=0;i<2;i++)
//		for(j=0;j<5;j++)
//			printf("%3d",pp[i][j]);
//	printf("\n");
//}
//
//
////////////////////////포인터/////////////////////
//#include<stdio.h>
//void Increment(int*x)
//{
//	(*x)++;
//}
//void PrintInteger(int x)
//{
//	printf("%3d",x);
//}
//void main()
//{
//	int x=1,y=2;
//	Increment(&x);
//	Increment(&y);
//	PrintInteger(x);
//	PrintInteger(y);
//	printf("\n");
//}

//////////////////////////구조체와 구조체 포인터/////////////////////////
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef struct Person
//{
//	char*name;
//	int age;
//}Person;
//typedef struct PersonArray
//{
//	Person*ps;
//	int size;
//	int capacity;
//}PersonArray;
//void InitArray(PersonArray*pa,int _capacity)
//{
//	pa->capacity = _capacity;
//	pa->ps = (Person*)malloc(sizeof(Person)*pa->capacity);
//	pa->	size = 0;
//}
//void UninitArray(PersonArray*pa)
//{
//	int i;
//	for(i=0;i<pa->size;i++)
//		free(pa->ps[i].name);
//	free(pa->ps);
//}
//void AddPerson(PersonArray*pa,char*_name,int _age)
//{
//	pa->ps[pa->size].name = (char*)malloc(strlen(_name)+1);
//	strcpy(pa->ps[pa->size].name,_name);
//	pa->ps[pa->size].age = _age;
//	(pa->size)++;
//}
//void PrintPerson(PersonArray*parr)
//{
//	int i;
//	for(i=0;i<parr->size;i++)
//		printf("[ %d ] : %s , %d \n",i+1, parr->ps[i].name,parr->ps[i].age);
//}
//void RemovePerson(PersonArray*pa)
//{
//	(pa->size)--;
//	free(pa->ps[pa->size].name);
//}
//void main()
//{
//	PersonArray pa;
//	
//	InitArray(&pa,100);
//
//	AddPerson(&pa,"이재국",23);
//	AddPerson(&pa,"dldld",26);
//	AddPerson(&pa,"fdsaa",29);
//	AddPerson(&pa,"gafsdga",21);
//
//	PrintPerson(&pa);
//
//	RemovePerson(&pa);
//
//	PrintPerson(&pa);
//
//	UninitArray(&pa);
//
//}
//
//
//////////////////함수 포인터///////////////
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void Printa(int x, int y)
//{
//	printf("%d , %d\n",x,y);
//}
//void Printb(int x,int y)
//{
//	printf("( %d , %d )\n",x,y);
//}
//void main()
//{
//	void (*p)(int,int);
//	p=Printa;
//	p(2,3);
//	p=Printb;
//	p(4,5);
//}


//////////////////for문 반전주기/////////////////
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<conio.h>
//void Menu()
//{
//	printf("========================\n");
//	printf("0.종료\n");
//	printf("1.정상 출력\n");
//	printf("2.상하 반전\n");
//	printf("3.좌우 반전\n");
//	printf("========================\n");
//}
//void PrintArray(int(*p)[5])
//{
//	int i,j;
//	for(i=0;i<5;i++){
//		for(j=0;j<5;j++){
//			printf("%3d",p[i][j]);
//		}
//		printf("\n");
//	}
//}
//void Reverse_L_to_R(int(*p)[5])
//{
//	int i,j;
//	for(i=0;i<5;i++){
//		for(j=0;j<2;j++)
//		{
//			int temp;
//			temp = p[i][j];
//			p[i][j] = p[i][4-j];
//			p[i][4-j] = temp;
//		}
//	}
//	PrintArray(p);
//
//}
//void Reverse_U_to_L(int(*p)[5])
//{
//	int i,j;
//	for(i=0;i<5;i++){
//		for(j=0;j<2;j++)
//		{
//			int temp;
//			temp = p[j][i];
//			p[j][i] = p[4-j][i];
//			p[4-j][i] = temp;
//		}
//	}
//	PrintArray(p);
//}
//void Nomal(int(*p)[5])
//{
//	int i,j;
//	for(i=0;i<5;i++){
//		for(j=0;j<5;j++){
//			p[i][j] = ((i*5)+j+1);
//		}
//	}
//	PrintArray(p);
//}
//void main()
//{
//	int arr[25];
//	int i,run = 1;
//
//	for(i=0 ; i<25; i++)
//		arr[i] = (i+1);
//	PrintArray((int(*)[5])arr);
//	while(run)
//	{
//		Menu();
//		switch(_getch())
//		{
//		case '1':
//			Nomal((int(*)[5])arr);
//			break;
//		case '2':
//			Reverse_U_to_L((int(*)[5])arr);
//			break;
//		case '3':
//			Reverse_L_to_R((int(*)[5])arr);
//			break;
//		case '0':
//			run = 0;
//			break;
//		}
//	}
//}
//
//
//////////포인터///////////
//#include<stdio.h>
//void main()
//{
//	int* p;
//	int a=5;
//	p=&a;
//	*p = 6;
//	printf("%d\n",*p);
//	printf("%d\n",a);
//	printf("%d\n",++(*p));
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef struct str{
//	char*s1;
//	char s2[20];
//}str;
//void UpperString(str*st)
//{
//	int i;
//	char*s = (char*)malloc(strlen(st->s1)+1);
//	strcpy(s,st->s1);
//	for(i=0 ; st->s2[i] ; i++)
//	{
//		if('a'<=st->s2[i] && st->s2[i]<='z')
//			st->s2[i] -=32;
//	}
//	for(i=0;s[i];i++)
//	{
//		if('a'<=s[i] && s[i] <= 'z')
//			s[i]-=32;
//	}
//	st->s1 = s;
//}
//void PrintString(str*st)
//{
//	printf("%s , %s\n",st->s1,st->s2);
//}
//void main()
//{
//	str s = {"abc", "cde"};
//	UpperString(&s);
//	PrintString(&s);
//	free(s.s1);
//}

///////////////////////////////예제////////////////////////////////////
////1.
//#include<stdio.h>
//void Print(int*arr)
//{
//	int i;
//	for(i=0;i<5;i++)
//		printf("%3d",arr[i]);
//	printf("\n");
//}
//void main()
//{
//	int arr[5] = {10,20,30,40,50};
//
//	Print(arr);
//}
//
////2.
//#include<stdio.h>
//void PrintArray(int(*p)[3])
//{
//	int i,j;
//	for(i=0;i<2;i++){
//		for(j=0;j<3;j++){
//			printf("%3d",p[i][j]);
//		}
//		printf("\n");
//	}
//}
//void main()
//{
//	int arr[2][3] = {{1,2,3},{10,20,30}};
//
//	PrintArray(arr);
//}
//
//3.
//#include<stdio.h>
//int RangeSum(int*arr,int a,int b)
//{
//	int i,sum=0; //sum을 초기화 해줘야한다.
//	for(i=a;i<=b;i++)
//	{
//		sum+=arr[i];
//	}
//	return sum;
//}
//void main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	printf("%d\n",RangeSum(arr,0,1));
//	printf("%d\n",RangeSum(arr,2,3));
//	printf("%d\n",RangeSum(arr,1,4));
//}

//
////4.
//#include<stdio.h>
//void main()
//{
//	char*s = "aHJKdsfa32Adgf";
//	int i;
//	for(i=0;s[i];i++)
//	{
//		if('A'<=s[i] && s[i]<='Z')
//			printf("%c",s[i]);
//	}
//	printf("\n");
//
//}
//
////5.
//#include<stdio.h>
//typedef struct Data
//{
//	char* data1;
//	double data2;
//	int data3;
//}Data;
//void main()
//{
//	Data d = {"ABC",5.5,100};
//	printf("%s %g %d\n",d.data1,d.data2,d.data3);
//}


