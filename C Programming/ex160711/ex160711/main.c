////오류
//#include<stdio.h>
//#include<stdlib.h>
//int main(void){
//	char*s = (char*)malloc(sizeof(char)*100);
//
//	s="ABC";
//
//	printf("string : %s\n",s);
//
//	free(s);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void){
//	char*s = (char*)malloc(sizeof(char)*100);
//	//s[0]='A';
//	//s[1]='B';
//	//s[2]='C';
//	//s[3]='\0';
//	*s = 'A';
//	*(s + 1) = 'B';
//	*(s + 2) = 'C';
//	*(s + 3) = 'D';
//	*(s + 4) = '\0';
//	printf("string : %s\n",s);
//	free(s);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void){
//	char*s = (char*)malloc(sizeof(char)*100);
//	int i;
//	for(i=0;i<4;i++){
//		s[i]="ABC"[i];
//	}
//	printf("string : %s\n",s);
//	free(s);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void){
//	char*s = (char*)malloc(sizeof(char)*100);
//	strcpy(s,"ABC"); //시작주소를 알려주면 메모리(문자열) 복사
//	printf("string : %s\n",s);
//	free(s);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void){
//	char*s = "ABC"; //상수 문자열의 시작주소를 넣어줌
//
//	printf("string : %s\n",s);
//}
//
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void){
//	char*s = "ABC"; //상수 문자열의 시작주소를 넣어줌
//
//	s="12345";
//
//	printf("string : %s\n",s);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void){
//	char*s = "ABC"; //상수 문자열의 시작주소를 넣어줌
//
//	scanf("%s",s); //안되요 메모리 공간이 없음
//
//	printf("string : %s\n",s);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void){
//	char*s = (char*)malloc(100); //상수 문자열의 시작주소를 넣어줌
//
//	scanf("%s",s);
//
//	printf("string : %s\n",s);
//
//	free(s);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void){
//	char s[100];
//	scanf("%s",s);
//
//	printf("string : %s\n",s);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void){
//
//	char buf[100]; //정적배열  //stack에 만들어짐
//				   //buffer=임시적인 메모리 공간
//	char*s;
//
//	printf("문자열 입력 : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap에 생성 내가 원하는 만큼
//	strcpy(s,buf); //시작주소 두개를알려주고 메모리를 복사한다.
//	printf("string : %s\n",s);
//	free(s);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char*InputString(){
//	char buf[100]; //정적배열  //stack에 만들어짐
//				   //buffer=임시적인 메모리 공간 함수에서만 사용되는 메모리공간이다.
//	char*s;
//
//	printf("문자열 입력 : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap에 생성 내가 원하는 만큼
//	strcpy(s,buf); //시작주소 두개를알려주고 메모리를 복사한다.
//	return s;
//}
//int main(void){
//	char*s = InputString();
//	printf("string : %s\n",s);
//	free(s);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char*InputString(){
//	char buf[100]; //정적배열  //stack에 만들어짐
//				   //buffer=임시적인 메모리 공간 함수에서만 사용되는 메모리공간이다.
//	char*s;
//
//	printf("문자열 입력 : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap에 생성 내가 원하는 만큼
//	strcpy(s,buf); //시작주소 두개를알려주고 메모리를 복사한다.
//	return s;
//}
//int main(void){
//	char*s1 = InputString();
//	char*s2 = InputString();
//	printf("string : %s\n",s1);
//	printf("string : %s\n",s2);
//	free(s1);
//	free(s2);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char*InputString(){
//	char buf[100]; //정적배열  //stack에 만들어짐
//				   //buffer=임시적인 메모리 공간 함수에서만 사용되는 메모리공간이다.
//	char*s;
//
//	printf("문자열 입력 : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap에 생성 내가 원하는 만큼
//	strcpy(s,buf); //시작주소 두개를알려주고 메모리를 복사한다.
//	return s;
//}
//int main(void){
//	char*sArray[100];
//	int sCount=0;
//	int i;
//	sArray[0]=InputString();
//	++sCount;
//	sArray[1]=InputString();
//	++sCount;
//
//	for(i=0;i<sCount;++i){
//		printf("[%d] : %s\n",i,sArray[i]);
//	}
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char*InputString(){
//	char buf[100]; //정적배열  //stack에 만들어짐
//				   //buffer=임시적인 메모리 공간 함수에서만 사용되는 메모리공간이다.
//	char*s;
//
//	printf("문자열 입력 : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap에 생성 내가 원하는 만큼
//	strcpy(s,buf); //시작주소 두개를알려주고 메모리를 복사한다.
//	return s;
//}
//int main(void){
//	char*sArray[100];
//	int sCount=0;
//	int i;
//	sArray[sCount]=InputString();
//	++sCount;
//	sArray[sCount]=InputString();
//	++sCount;
//
//	for(i=0;i<sCount;++i){
//		printf("[%d] : %s\n",i,sArray[i]);
//	}
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char*InputString(){ //문자열을 입력받아 문자열 길이만큼의 동적메모리를 생성한뒤 문자열을 복사하여 시작주소를 반환
//	char buf[100]; //정적배열  //stack에 만들어짐
//				   //buffer=임시적인 메모리 공간 함수에서만 사용되는 메모리공간이다.
//	char*s;
//
//	printf("문자열 입력 : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap에 생성 내가 원하는 만큼
//	strcpy(s,buf); //시작주소 두개를알려주고 메모리를 복사한다.
//	return s;
//}
//void PrintStringArray(char**sArray,int sCount){ //이중포인터로 써야 한다.
//	int i;
//	for(i=0;i<sCount;++i){
//		printf("[%d] : %s\n",i,sArray[i]);
//	}
//}
//int main(void){
//	char*sArray[100];
//	int sCount=0;
//	int i;
//	sArray[sCount++]=InputString();
//	sArray[sCount++]=InputString();
//	sArray[sCount++]=InputString();
//
//	PrintStringArray(sArray,sCount);
//	
//	for(i=0;i<sCount;i++)
//	{
//		free(sArray[i]);
//	}
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char*InputString(){ //문자열을 입력받아 문자열 길이만큼의 동적메모리를 생성한뒤 문자열을 복사하여 시작주소를 반환
//	char buf[100]; //정적배열  //stack에 만들어짐
//				   //buffer=임시적인 메모리 공간 함수에서만 사용되는 메모리공간이다.
//	char*s;
//
//	printf("문자열 입력 : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap에 생성 내가 원하는 만큼
//	strcpy(s,buf); //시작주소 두개를알려주고 메모리를 복사한다.
//	return s;
//}
//void PrintStringArray(char**sArray,int sCount){ //이중포인터로 써야 한다.
//	int i;
//	for(i=0;i<sCount;++i){
//		printf("[%d] : %s\n",i,sArray[i]);
//	}
//}
//void FreeStringArray(char**sArray,int sCount){
//	int i;
//	for(i=0;i<sCount;i++)
//	{
//		free(sArray[i]);
//	}
//}
//
//int main(void){
//	char*sArray[100];
//	int sCount=0;
//	int i;
//	sArray[sCount++]=InputString();
//	sArray[sCount++]=InputString();
//	sArray[sCount++]=InputString();
//
//	PrintStringArray(sArray,sCount);
//	FreeStringArray(sArray,sCount);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char*InputString(){ //문자열을 입력받아 문자열 길이만큼의 동적메모리를 생성한뒤 문자열을 복사하여 시작주소를 반환
//	char buf[100]; //정적배열  //stack에 만들어짐
//				   //buffer=임시적인 메모리 공간 함수에서만 사용되는 메모리공간이다.
//	char*s;
//
//	printf("문자열 입력 : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap에 생성 내가 원하는 만큼
//	strcpy(s,buf); //시작주소 두개를알려주고 메모리를 복사한다.
//	return s;
//}
//void PrintStringArray(char**sArray,int sCount){ //이중포인터로 써야 한다.
//	int i;
//	for(i=0;i<sCount;++i){
//		printf("[%d] : %s\n",i,sArray[i]);
//	}
//}
//void FreeStringArray(char**sArray,int sCount){
//	int i;
//	for(i=0;i<sCount;i++)
//	{
//		free(sArray[i]);
//	}
//}
//void AddStringArray(char**sArray,int*sCount){
//
//	sArray[(*sCount)++]=InputString(); //++연산자가 우선순위가 높아서 괄호쳐줘야함
//	
//}
//
//int main(void){
//	char*sArray[100];
//	int sCount=0;
//	AddStringArray(sArray,&sCount);
//	sArray[sCount++]=InputString();
//	sArray[sCount++]=InputString();
//
//	PrintStringArray(sArray,sCount);
//	FreeStringArray(sArray,sCount);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char*InputString(){ //문자열을 입력받아 문자열 길이만큼의 동적메모리를 생성한뒤 문자열을 복사하여 시작주소를 반환
//	char buf[100]; //정적배열  //stack에 만들어짐
//				   //buffer=임시적인 메모리 공간 함수에서만 사용되는 메모리공간이다.
//	char*s;
//
//	printf("문자열 입력 : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap에 생성 내가 원하는 만큼
//	strcpy(s,buf); //시작주소 두개를알려주고 메모리를 복사한다.
//	return s;
//}
//void PrintStringArray(char**sArray,int sCount){ //이중포인터로 써야 한다.
//	int i;
//	for(i=0;i<sCount;++i){
//		printf("[%d] : %s\n",i,sArray[i]);
//	}
//}
//void FreeStringArray(char**sArray,int sCount){
//	int i;
//	for(i=0;i<sCount;i++)
//	{
//		free(sArray[i]);
//	}
//}
//void AddStringArray(char**sArray,int*sCount){
//
//	sArray[(*sCount)++]=InputString(); //++연산자가 우선순위가 높아서 괄호쳐줘야함
//	
//}
//
//int main(void){
//	char*sArray[100];
//	int sCount=0;
//
//	AddStringArray(sArray,&sCount);
//	AddStringArray(sArray,&sCount);
//	AddStringArray(sArray,&sCount);
//
//	PrintStringArray(sArray,sCount);
//	FreeStringArray(sArray,sCount);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char*InputString(){ //문자열을 입력받아 문자열 길이만큼의 동적메모리를 생성한뒤 문자열을 복사하여 시작주소를 반환
//	char buf[100]; //정적배열  //stack에 만들어짐
//				   //buffer=임시적인 메모리 공간 함수에서만 사용되는 메모리공간이다.
//	char*s;
//
//	printf("문자열 입력 : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap에 생성 내가 원하는 만큼
//	strcpy(s,buf); //시작주소 두개를알려주고 메모리를 복사한다.
//	return s;
//}
//void PrintStringArray(char**sArray,int sCount){ //이중포인터로 써야 한다.
//	int i;
//	for(i=0;i<sCount;++i){
//		printf("[%d] : %s\n",i,sArray[i]);
//	}
//}
//void FreeStringArray(char**sArray,int sCount){
//	int i;
//	for(i=0;i<sCount;i++)
//	{
//		free(sArray[i]);
//	}
//}
//void AddStringArray(char**sArray,int*sCount){
//
//	sArray[(*sCount)++]=InputString(); //++연산자가 우선순위가 높아서 괄호쳐줘야함
//	
//}
//
//int main(void){
//	char*sArray[100];
//	int sCount=0;
//	int run=1;
//
//	while(run){
//		AddStringArray(sArray,&sCount);
//		if(strcmp(sArray[sCount-1],"exit")==0)
//			run=0;
//	}
//	PrintStringArray(sArray,sCount);
//	FreeStringArray(sArray,sCount);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<conio.h>
//char*InputString(){ //문자열을 입력받아 문자열 길이만큼의 동적메모리를 생성한뒤 문자열을 복사하여 시작주소를 반환
//	char buf[100]; //정적배열  //stack에 만들어짐
//				   //buffer=임시적인 메모리 공간 함수에서만 사용되는 메모리공간이다.
//	char*s;
//
//	printf("문자열 입력 : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap에 생성 내가 원하는 만큼
//	strcpy(s,buf); //시작주소 두개를알려주고 메모리를 복사한다.
//	return s;
//}
//void PrintStringArray(char**sArray,int sCount){ //이중포인터로 써야 한다.
//	int i;
//	for(i=0;i<sCount;++i){
//		printf("[%d] : %s\n",i,sArray[i]);
//	}
//}
//void FreeStringArray(char**sArray,int sCount){
//	int i;
//	for(i=0;i<sCount;i++)
//	{
//		free(sArray[i]);
//	}
//}
//void AddStringArray(char**sArray,int*sCount){
//
//	sArray[(*sCount)++]=InputString(); //++연산자가 우선순위가 높아서 괄호쳐줘야함
//	
//}
//void Menu()
//{
//	printf("1.Input String\n");
//	printf("2.output String\n");
//	printf("0.Exit Program\n");
//	printf("=================\n");
//}
//
//int main(void){
//	char*sArray[100];
//	int sCount=0;
//	int run=1;
//
//	while(run)
//	{
//		Menu();
//		switch(_getch())
//		{
//		case '1':
//			AddStringArray(sArray,&sCount);
//			break;
//		case '2':
//			PrintStringArray(sArray,sCount);
//			break;
//		case '0':
//			run=0;
//			break;
//		default:
//			printf("default......\n");
//			break;
//		}
//	}
//	FreeStringArray(sArray,sCount);
//}
//
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	//strcpy(),strcat(),strlen(),strcmp()
//	char*s="ABC";
//	char buf[100];
//
//	strcpy(buf,s); //메모리의 시작주소,메모리의 시작주소
//					//뒤에 문자열을 앞으로 복사
//
//	printf("%s %s\n",buf,s);
//}
//
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	//strcpy(),strcat(),strlen(),strcmp()
//	char*s="ABC";
//	char buf[100]="12345";
//
//	strcpy(buf,s); //메모리의 시작주소,메모리의 시작주소
//					//뒤에 문자열을 앞으로 복사
//
//	printf("%s %s\n",buf,s);
//}
//
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	//strcpy(),strcat(),strlen(),strcmp()
//	char*s="ABC";
//	char buf[100]="12345";
//
//	strcpy(s,buf); //메모리의 시작주소,메모리의 시작주소
//					//뒤에 문자열을 앞으로 복사
//					//잘못된 코드
//
//	printf("%s %s\n",buf,s);
//}
//
//
/*
#include<stdio.h>
#include<string.h>
int main(void)
{
	//strcpy(),strcat(),strlen(),strcmp()
	char*s="ABC";
	char buf[100]="12345";

	strcat(buf,s);  //문자열을 덧붙이는 함수
					

	printf("%s %s\n",buf,s);
}
*/

//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	//strcpy(),strcat(),strlen(),strcmp()
//	char*s="ABC";
//	char buf[100]; //문자열이 없으면 덧붙일수 없다. 잘못된코드!!
//
//	strcat(buf,s);  //문자열을 덧붙이는 함수
//					
//
//	printf("%s %s\n",buf,s);
//}

//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	printf("%d\n",strlen("ABC")); //null문자를 제외한 나머지 문자들의 개수
//	printf("%d\n",strlen("")); //null문자열이라고 본다.
//	printf("%d\n",strlen("12345"));
//	printf("%d\n",strlen("A"));
//	
//}
//
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	//strcmp > 1, < -1, == 0 아스키코드를 비교
//	printf("%d\n",strcmp("AAA","AB")); 
//	printf("%d\n",strcmp("abc","ABC")); 
//	printf("%d\n",strcmp("ABC","ABC")); 
//	printf("%d\n",strcmp("DEF","AB")); 
//	
//}
//
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char buf[100];
//	strcpy_s(buf,strlen("ABC")+1,"ABC"); //문자열의 길이를 명시하도록 되어있다.
//	printf("%s\n",buf);	
//}
//
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char buf[100];
//	strcpy_s(buf,strlen("ABC")+1,"ABC"); //실전에서는 _s함수를 써줘야 한다.
//	printf("%s\n",buf);	
//}
//
//
//#pragma warning(disable:4996) //warning없애는법
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char buf[100];
//	strcpy(buf,"ABC"); //실전에서는 _s함수를 써줘야 한다.
//	printf("%s\n",buf);	
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char buf[100];
//	
//	gets(buf);
//	printf("string : %s\n",buf);
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//	char buf[100];
//	
//	gets_s(buf,100);
//	printf("string : %s\n",buf);
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//	char buf[100];
//	
//	scanf_s("%s",buf,100);
//	printf("string : %s\n",buf);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	printf("%d\n",rand());
//	printf("%d\n",rand());
//	printf("%d\n",rand());
//	printf("%d\n",rand());
//	printf("%d\n",rand());
//	//rand()랜덤함수
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	
//	//rand()랜덤함수
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	srand(848);
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	
//	//rand()랜덤함수
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main(void)
//{
//	srand( (unsigned int)time(NULL) ); //time()함수가 반환하는 값은 초단위로 int형으로 반환
//								   //srand()함수는 양의 정수를 인수로 받는다 그래서 형변환을 해주어야 한다.
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	
//	//rand()랜덤함수
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main(void)
//{
//	srand( (unsigned int)time(NULL) ); //time()함수가 반환하는 값은 초단위로 int형으로 반환
//								   //srand()함수는 양의 정수를 인수로 받는다 그래서 형변환을 해주어야 한다.
//	printf("%d\n",rand()%11+10);
//	printf("%d\n",rand()%11+10);
//	printf("%d\n",rand()%11+10);
//	printf("%d\n",rand()%11+10);
//	printf("%d\n",rand()%11+10);
//	//rand()랜덤함수
//}
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<conio.h>
//typedef struct PB{
//	char*name[100];
//	char*phoneNum[100];
//	char*addr[100];
//}PB;
//void MENU(){
//		printf("\n\n1.전화번호부 입력\n");
//		printf("2.전화번호부 삭제\n");
//		printf("3.이름으로 전화번호부 찾기\n");
//		printf("4.특정번호의 전화번호부 수정하기\n");
//		printf("0.종료\n");
//		printf("==============================\n");
//		printf("원하는 작업을 선택하세요 : \n");
//}
//void InputPhoneBook();
//void DeletPhoneBook();
//void FindPhoneBook();
//void ModifyPhoneBook();
//
//int main(void)
//{
//	PB pb;
//	int run=1;
//	int count=0;
//	while(run){
//		MENU();
//		b: switch(_getch()){
//		case '1':
//			InputPhoneBook(&pb,count);
//			++count;
//			break;
//		case '2':
//			DeletPhoneBook(&pb,count);
//			break;
//		case '3':
//			FindPhoneBook(&pb,count);
//			break;
//		case '4':
//			ModifyPhoneBook(&pb,count);
//			break;
//		case '0':
//			run=0;
//			break;
//		default:
//			printf("\n다시 선택해 주세요 : \n");
//			goto b; 
//			break;
//		}
//	}
//
//}
//void ModifyPhoneBook(PB*p,int count){
//	int Num;
//	int i;
//	char*name;
//	char*phoneNum;
//	char*addr;	
//a:
//	printf("수정하고 싶은 번호를 선택하세요 : ");
//	scanf("%d",&Num);
//	if(Num>count || Num==0){
//		printf("아직 생성되지 않은 전화번호부입니다.\n");
//		goto a;
//	}
//	name=(char*)malloc(sizeof(char)*100);
//	phoneNum=(char*)malloc(sizeof(char)*100);
//	addr=(char*)malloc(sizeof(char)*100);
//	printf("이름 입력 : ");
//	gets(name);
//	printf("핸드폰 번호 입력 : ");
//	gets(phoneNum);	
//	printf("주소 입력 : ");
//	gets(addr);
//	strcpy(p->addr[count],addr);
//	strcpy(p->phoneNum[count],phoneNum);
//	strcpy(p->name[count],name);
//	printf("\n\n\n");
//	for(i=0;i<=count;i++){
//		printf("%d. %s %s  %s\n",i+1,p->name[i],p->phoneNum[i],p->addr[i]);
//	}
//}
//
//void InputPhoneBook(PB*p,int count){
//	int i;
//	char*name;
//	char*phoneNum;
//	char*addr;
//	name=(char*)malloc(sizeof(char)*100);
//	phoneNum=(char*)malloc(sizeof(char)*100);
//	addr=(char*)malloc(sizeof(char)*100);
//	printf("이름 입력 : ");
//	gets(name);
//	printf("핸드폰 번호 입력 : ");
//	gets(phoneNum);	
//	printf("주소 입력 : ");
//	gets(addr);
//	p->addr[count]=addr;
//	p->phoneNum[count]=phoneNum;
//	p->name[count]=name;
//	printf("\n\n\n");
//	for(i=0;i<=count;i++){
//		printf("%d. %s %s  %s\n",i+1,p->name[i],p->phoneNum[i],p->addr[i]);
//	}
//}
//void DeletPhoneBook(PB*p,int count){
//	int i;
//	char*name;
//	char*phoneNum;
//	char*addr;
//	name=(char*)malloc(sizeof(char)*100);
//	phoneNum=(char*)malloc(sizeof(char)*100);
//	addr=(char*)malloc(sizeof(char)*100);
//	strcpy(name,"");
//	strcpy(phoneNum,"");
//	strcpy(addr,"");
//	printf("\n삭제할 전화번호부의 번호를 입력하세요 : ");
//	A: scanf("%d",&i);
//	if(i>count+1 || i==0){
//		printf("\n잘못된 입력입니다. 다시 입력해 주세요 : ");
//		goto A;
//	}
//	p->addr[i-1]=addr;
//	p->phoneNum[i-1]=phoneNum;
//	p->name[i-1]=name;
//	for(i=0;i<count;i++){
//		printf("%d. %s %s  %s\n",i+1,p->name[i],p->phoneNum[i],p->addr[i]);
//	}
//}
//void FindPhoneBook(PB*p,int count){
//	char name[20];
//	int i,noN=0;
//	printf("\n찾으시는 이름을 입력해 주세요 : ");
//	gets(name);
//	for(i=0;i<count;i++)
//	{
//		if(strcmp(p->name[i],name)==0){
//			printf("%d.  %s  %s  %s \n",i+1,p->name[i],p->phoneNum[i],p->addr[i]);
//			noN++;
//		}
//	}
//	if(noN==0){
//		printf("찾으시는 주소록이 없습니다.\n");
//	}
//}
