//#include<stdio.h>
//int main(void)
//{
//	char str[100]="ABCDEFG";
//	printf("%s\n",str);
//}
//
//#include<stdio.h>
//int main(void)
//{
//	char str[100];
//	printf("���ڿ��� �Է��ϼ��� : ");
//	gets(str);
//	printf("string : %s\n",str);
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//	char*str;
//	char buf[100];
//	str=buf;
//	printf("���ڿ��� �Է��ϼ��� : ");
//	gets(str);
//	printf("string : %s\n",str);
//}

////���ڿ� �Լ� �ȵ�
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void InputString(char*str);
//void PrintString(char*str);
//void ReverseString(char*str);
//int main(void)
//{
//	char*str;
//	InputString(str);
//	PrintString(str);
//	ReverseString(str);
//	PrintString(str);	
//}
//void InputString(char*str){
//	char buf[100];
//	printf("���ڿ��� �Է��ϼ��� : ");
//	gets(buf);
//	str = (char*)malloc(strlen(buf)+1);
//	strcpy(str,buf);
//}
//void PrintString(char*str){
//	printf("%s\n",str);
//}
//void ReverseString(char*str)
//{
//	int i;
//	char temp;
//	for(i=0;i<(strlen(str)/2);i++){
//		temp = str[i];
//		str[i]=str[strlen(str)-i];
//		str[strlen(str)-i]=temp;
//	}
//}
