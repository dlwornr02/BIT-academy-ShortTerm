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
/*
#define UNICODE
#define _UNICODE

#include<stdio.h>
#include<tchar.h>
#include<windows.h>

int wmain(void)
{
	TCHAR str[] = _T("1234567"); //null���������ؼ� 16����Ʈ�� ���´�.
	int size = sizeof(str);
	printf("string length : %d \n", size);
	return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
void main(){
	int i,f,arr[10];
	for(i=0;i<10;i++){
		if(i<10){
		printf("������ �Է��ϼ��� : ");
		scanf("%d",&arr[i]);
		}
		else
			break;
	}
	for(i=0;i<10;i++){
		for(f=0;f<10;f++){
		if(arr[f]<arr[f+1]){
			arr[f]=arr[f+1];
		}
	}
	}
	
	printf("�ִ��� %d �Դϴ�.\n",arr[0]);
}
*/
/* //��ũ�θ� Ȱ���� MBCS�� WBCS�� ���ÿ� �����ϴ� ����
#define UNICODE
#define _UNICODE
#include<stdio.h>
#include<windows.h>
#include<tchar.h>

int _tmain(int argc, TCHAR* argv[])
{
	LPTSTR str1 = _T("MBCS or WBCS 1");
	TCHAR str2[] = _T("MBCS or WBCs 2");
	TCHAR str3[100];
	TCHAR str4[50];

	LPCTSTR pStr = str1;

	_tprintf(_T("string size : %d\n"), sizeof(str2));
	_tscanf(_T("string length : %d\n"), _tcslen(pStr));

	_fputts(_t("Input String 1 : "),stdout);
	_tscanf(_T("%s"),str3);
	_fputts(_T("Input String 2 : "),stdout);
	_tscanf(_T("%s"),str4);

	_tcscat(str3,str4);
	_tprintf(_T("String1 + String2 : %s \n"),str3);

	return 0;
}
*/
/*
#include<stdio.h>
void main(){
	
}
*/

#include<stdio.h>
void add(double a, double b);
void sub(double a, double b);
void mul(double a, double b);
void div(double a, double b);
int main(void){
	int a;
	double b,c;
	printf("1.����  2.����  3.����  4.������\n\n");
	while(1){
		printf("\n���ϴ� ������ �����ϼ���(0�� ������ ����˴ϴ�.) : ");
		A: scanf("%d",&a);
		if(a==1){
			printf("\n������ �����ϼ̽��ϴ�. ���ڵΰ��� �Է����ּ��� : ");
			scanf("%lf %lf",&b,&c);
			add(b,c);
		}
		else if(a==2){
			printf("\n������ �����ϼ̽��ϴ�. ���ڵΰ��� �Է����ּ��� : ");
			scanf("%lf %lf",&b,&c);
			sub(b,c);
		}
		else if(a==3){
			printf("\n������ �����ϼ̽��ϴ�. ���ڵΰ��� �Է����ּ��� : ");
			scanf("%lf %lf",&b,&c);
			mul(b,c);
		}
		else if(a==4){
			printf("\n�������� �����ϼ̽��ϴ�. ���ڵΰ��� �Է����ּ��� : ");
			scanf("%lf %lf",&b,&c);
			div(b,c);
		}
		else if(a==0){
			printf("\n���� �Ǿ����ϴ�.\n\n");
			break;			
		}
		else{
			printf("\n1.����  2.����  3.����  4.������\n\n");
			printf("�߸��� �Է� �Դϴ�. �ٽ� �Է��� �ּ���(0�� ������ ���� �˴ϴ�.) : ");
			goto A;
		}
	}
	return 0;
}