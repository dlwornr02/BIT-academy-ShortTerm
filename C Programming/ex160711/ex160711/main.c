////����
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
//	strcpy(s,"ABC"); //�����ּҸ� �˷��ָ� �޸�(���ڿ�) ����
//	printf("string : %s\n",s);
//	free(s);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void){
//	char*s = "ABC"; //��� ���ڿ��� �����ּҸ� �־���
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
//	char*s = "ABC"; //��� ���ڿ��� �����ּҸ� �־���
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
//	char*s = "ABC"; //��� ���ڿ��� �����ּҸ� �־���
//
//	scanf("%s",s); //�ȵǿ� �޸� ������ ����
//
//	printf("string : %s\n",s);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void){
//	char*s = (char*)malloc(100); //��� ���ڿ��� �����ּҸ� �־���
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
//	char buf[100]; //�����迭  //stack�� �������
//				   //buffer=�ӽ����� �޸� ����
//	char*s;
//
//	printf("���ڿ� �Է� : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap�� ���� ���� ���ϴ� ��ŭ
//	strcpy(s,buf); //�����ּ� �ΰ����˷��ְ� �޸𸮸� �����Ѵ�.
//	printf("string : %s\n",s);
//	free(s);
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char*InputString(){
//	char buf[100]; //�����迭  //stack�� �������
//				   //buffer=�ӽ����� �޸� ���� �Լ������� ���Ǵ� �޸𸮰����̴�.
//	char*s;
//
//	printf("���ڿ� �Է� : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap�� ���� ���� ���ϴ� ��ŭ
//	strcpy(s,buf); //�����ּ� �ΰ����˷��ְ� �޸𸮸� �����Ѵ�.
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
//	char buf[100]; //�����迭  //stack�� �������
//				   //buffer=�ӽ����� �޸� ���� �Լ������� ���Ǵ� �޸𸮰����̴�.
//	char*s;
//
//	printf("���ڿ� �Է� : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap�� ���� ���� ���ϴ� ��ŭ
//	strcpy(s,buf); //�����ּ� �ΰ����˷��ְ� �޸𸮸� �����Ѵ�.
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
//	char buf[100]; //�����迭  //stack�� �������
//				   //buffer=�ӽ����� �޸� ���� �Լ������� ���Ǵ� �޸𸮰����̴�.
//	char*s;
//
//	printf("���ڿ� �Է� : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap�� ���� ���� ���ϴ� ��ŭ
//	strcpy(s,buf); //�����ּ� �ΰ����˷��ְ� �޸𸮸� �����Ѵ�.
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
//	char buf[100]; //�����迭  //stack�� �������
//				   //buffer=�ӽ����� �޸� ���� �Լ������� ���Ǵ� �޸𸮰����̴�.
//	char*s;
//
//	printf("���ڿ� �Է� : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap�� ���� ���� ���ϴ� ��ŭ
//	strcpy(s,buf); //�����ּ� �ΰ����˷��ְ� �޸𸮸� �����Ѵ�.
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
//char*InputString(){ //���ڿ��� �Է¹޾� ���ڿ� ���̸�ŭ�� �����޸𸮸� �����ѵ� ���ڿ��� �����Ͽ� �����ּҸ� ��ȯ
//	char buf[100]; //�����迭  //stack�� �������
//				   //buffer=�ӽ����� �޸� ���� �Լ������� ���Ǵ� �޸𸮰����̴�.
//	char*s;
//
//	printf("���ڿ� �Է� : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap�� ���� ���� ���ϴ� ��ŭ
//	strcpy(s,buf); //�����ּ� �ΰ����˷��ְ� �޸𸮸� �����Ѵ�.
//	return s;
//}
//void PrintStringArray(char**sArray,int sCount){ //���������ͷ� ��� �Ѵ�.
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
//char*InputString(){ //���ڿ��� �Է¹޾� ���ڿ� ���̸�ŭ�� �����޸𸮸� �����ѵ� ���ڿ��� �����Ͽ� �����ּҸ� ��ȯ
//	char buf[100]; //�����迭  //stack�� �������
//				   //buffer=�ӽ����� �޸� ���� �Լ������� ���Ǵ� �޸𸮰����̴�.
//	char*s;
//
//	printf("���ڿ� �Է� : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap�� ���� ���� ���ϴ� ��ŭ
//	strcpy(s,buf); //�����ּ� �ΰ����˷��ְ� �޸𸮸� �����Ѵ�.
//	return s;
//}
//void PrintStringArray(char**sArray,int sCount){ //���������ͷ� ��� �Ѵ�.
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
//char*InputString(){ //���ڿ��� �Է¹޾� ���ڿ� ���̸�ŭ�� �����޸𸮸� �����ѵ� ���ڿ��� �����Ͽ� �����ּҸ� ��ȯ
//	char buf[100]; //�����迭  //stack�� �������
//				   //buffer=�ӽ����� �޸� ���� �Լ������� ���Ǵ� �޸𸮰����̴�.
//	char*s;
//
//	printf("���ڿ� �Է� : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap�� ���� ���� ���ϴ� ��ŭ
//	strcpy(s,buf); //�����ּ� �ΰ����˷��ְ� �޸𸮸� �����Ѵ�.
//	return s;
//}
//void PrintStringArray(char**sArray,int sCount){ //���������ͷ� ��� �Ѵ�.
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
//	sArray[(*sCount)++]=InputString(); //++�����ڰ� �켱������ ���Ƽ� ��ȣ�������
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
//char*InputString(){ //���ڿ��� �Է¹޾� ���ڿ� ���̸�ŭ�� �����޸𸮸� �����ѵ� ���ڿ��� �����Ͽ� �����ּҸ� ��ȯ
//	char buf[100]; //�����迭  //stack�� �������
//				   //buffer=�ӽ����� �޸� ���� �Լ������� ���Ǵ� �޸𸮰����̴�.
//	char*s;
//
//	printf("���ڿ� �Է� : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap�� ���� ���� ���ϴ� ��ŭ
//	strcpy(s,buf); //�����ּ� �ΰ����˷��ְ� �޸𸮸� �����Ѵ�.
//	return s;
//}
//void PrintStringArray(char**sArray,int sCount){ //���������ͷ� ��� �Ѵ�.
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
//	sArray[(*sCount)++]=InputString(); //++�����ڰ� �켱������ ���Ƽ� ��ȣ�������
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
//char*InputString(){ //���ڿ��� �Է¹޾� ���ڿ� ���̸�ŭ�� �����޸𸮸� �����ѵ� ���ڿ��� �����Ͽ� �����ּҸ� ��ȯ
//	char buf[100]; //�����迭  //stack�� �������
//				   //buffer=�ӽ����� �޸� ���� �Լ������� ���Ǵ� �޸𸮰����̴�.
//	char*s;
//
//	printf("���ڿ� �Է� : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap�� ���� ���� ���ϴ� ��ŭ
//	strcpy(s,buf); //�����ּ� �ΰ����˷��ְ� �޸𸮸� �����Ѵ�.
//	return s;
//}
//void PrintStringArray(char**sArray,int sCount){ //���������ͷ� ��� �Ѵ�.
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
//	sArray[(*sCount)++]=InputString(); //++�����ڰ� �켱������ ���Ƽ� ��ȣ�������
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
//char*InputString(){ //���ڿ��� �Է¹޾� ���ڿ� ���̸�ŭ�� �����޸𸮸� �����ѵ� ���ڿ��� �����Ͽ� �����ּҸ� ��ȯ
//	char buf[100]; //�����迭  //stack�� �������
//				   //buffer=�ӽ����� �޸� ���� �Լ������� ���Ǵ� �޸𸮰����̴�.
//	char*s;
//
//	printf("���ڿ� �Է� : ");
//	gets(buf);
//	s =(char*)malloc(strlen(buf)+1); //heap�� ���� ���� ���ϴ� ��ŭ
//	strcpy(s,buf); //�����ּ� �ΰ����˷��ְ� �޸𸮸� �����Ѵ�.
//	return s;
//}
//void PrintStringArray(char**sArray,int sCount){ //���������ͷ� ��� �Ѵ�.
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
//	sArray[(*sCount)++]=InputString(); //++�����ڰ� �켱������ ���Ƽ� ��ȣ�������
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
//	strcpy(buf,s); //�޸��� �����ּ�,�޸��� �����ּ�
//					//�ڿ� ���ڿ��� ������ ����
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
//	strcpy(buf,s); //�޸��� �����ּ�,�޸��� �����ּ�
//					//�ڿ� ���ڿ��� ������ ����
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
//	strcpy(s,buf); //�޸��� �����ּ�,�޸��� �����ּ�
//					//�ڿ� ���ڿ��� ������ ����
//					//�߸��� �ڵ�
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

	strcat(buf,s);  //���ڿ��� �����̴� �Լ�
					

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
//	char buf[100]; //���ڿ��� ������ �����ϼ� ����. �߸����ڵ�!!
//
//	strcat(buf,s);  //���ڿ��� �����̴� �Լ�
//					
//
//	printf("%s %s\n",buf,s);
//}

//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	printf("%d\n",strlen("ABC")); //null���ڸ� ������ ������ ���ڵ��� ����
//	printf("%d\n",strlen("")); //null���ڿ��̶�� ����.
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
//	//strcmp > 1, < -1, == 0 �ƽ�Ű�ڵ带 ��
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
//	strcpy_s(buf,strlen("ABC")+1,"ABC"); //���ڿ��� ���̸� ����ϵ��� �Ǿ��ִ�.
//	printf("%s\n",buf);	
//}
//
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char buf[100];
//	strcpy_s(buf,strlen("ABC")+1,"ABC"); //���������� _s�Լ��� ����� �Ѵ�.
//	printf("%s\n",buf);	
//}
//
//
//#pragma warning(disable:4996) //warning���ִ¹�
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char buf[100];
//	strcpy(buf,"ABC"); //���������� _s�Լ��� ����� �Ѵ�.
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
//	//rand()�����Լ�
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
//	//rand()�����Լ�
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
//	//rand()�����Լ�
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main(void)
//{
//	srand( (unsigned int)time(NULL) ); //time()�Լ��� ��ȯ�ϴ� ���� �ʴ����� int������ ��ȯ
//								   //srand()�Լ��� ���� ������ �μ��� �޴´� �׷��� ����ȯ�� ���־�� �Ѵ�.
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	printf("%d\n",rand()%100);
//	
//	//rand()�����Լ�
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main(void)
//{
//	srand( (unsigned int)time(NULL) ); //time()�Լ��� ��ȯ�ϴ� ���� �ʴ����� int������ ��ȯ
//								   //srand()�Լ��� ���� ������ �μ��� �޴´� �׷��� ����ȯ�� ���־�� �Ѵ�.
//	printf("%d\n",rand()%11+10);
//	printf("%d\n",rand()%11+10);
//	printf("%d\n",rand()%11+10);
//	printf("%d\n",rand()%11+10);
//	printf("%d\n",rand()%11+10);
//	//rand()�����Լ�
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
//		printf("\n\n1.��ȭ��ȣ�� �Է�\n");
//		printf("2.��ȭ��ȣ�� ����\n");
//		printf("3.�̸����� ��ȭ��ȣ�� ã��\n");
//		printf("4.Ư����ȣ�� ��ȭ��ȣ�� �����ϱ�\n");
//		printf("0.����\n");
//		printf("==============================\n");
//		printf("���ϴ� �۾��� �����ϼ��� : \n");
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
//			printf("\n�ٽ� ������ �ּ��� : \n");
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
//	printf("�����ϰ� ���� ��ȣ�� �����ϼ��� : ");
//	scanf("%d",&Num);
//	if(Num>count || Num==0){
//		printf("���� �������� ���� ��ȭ��ȣ���Դϴ�.\n");
//		goto a;
//	}
//	name=(char*)malloc(sizeof(char)*100);
//	phoneNum=(char*)malloc(sizeof(char)*100);
//	addr=(char*)malloc(sizeof(char)*100);
//	printf("�̸� �Է� : ");
//	gets(name);
//	printf("�ڵ��� ��ȣ �Է� : ");
//	gets(phoneNum);	
//	printf("�ּ� �Է� : ");
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
//	printf("�̸� �Է� : ");
//	gets(name);
//	printf("�ڵ��� ��ȣ �Է� : ");
//	gets(phoneNum);	
//	printf("�ּ� �Է� : ");
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
//	printf("\n������ ��ȭ��ȣ���� ��ȣ�� �Է��ϼ��� : ");
//	A: scanf("%d",&i);
//	if(i>count+1 || i==0){
//		printf("\n�߸��� �Է��Դϴ�. �ٽ� �Է��� �ּ��� : ");
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
//	printf("\nã���ô� �̸��� �Է��� �ּ��� : ");
//	gets(name);
//	for(i=0;i<count;i++)
//	{
//		if(strcmp(p->name[i],name)==0){
//			printf("%d.  %s  %s  %s \n",i+1,p->name[i],p->phoneNum[i],p->addr[i]);
//			noN++;
//		}
//	}
//	if(noN==0){
//		printf("ã���ô� �ּҷ��� �����ϴ�.\n");
//	}
//}
