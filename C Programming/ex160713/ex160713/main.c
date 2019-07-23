//#include<stdio.h>
//int main(void)
//{
//	int a[5][5];
//	int o,i,num=1;
//	for(o=0;o<5;o++){
//		for(i=0;i<5;i++){
//			a[o][i]=num++;
//		}
//	}
//	for(o=0;o<5;o++){
//		for(i=0;i<5;i++){
//			printf("%4d",a[o][i]);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main(void)
//{
//	int a[5][5];
//	int o,i;
//	for(o=0;o<5;o++){
//		for(i=0;i<5;i++){
//			a[o][i]=o*5+i+1;
//		}
//	}
//	for(o=0;o<5;o++){
//		for(i=0;i<5;i++){
//			printf("%4d",a[o][i]);
//		}
//		printf("\n");
//	}
//}
//
//#include<stdio.h>
//int main(void)
//{
//	int a[5][5];
//	int o,i;
//	int n=25;
//	for(o=0;o<5;o++){
//		for(i=0;i<5;i++){
//			a[o][i]=n--;
//		}
//	}
//	for(o=0;o<5;o++){
//		for(i=0;i<5;i++){
//			printf("%4d",a[o][i]);
//		}
//		printf("\n");
//	}
//}
//
//#include<stdio.h>
//int main(void)
//{
//	int a[5][5];
//	int o,i;
//	for(o=0;o<5;o++){
//		for(i=0;i<5;i++){
//			a[o][i]=25-i-(o*5);
//		}
//	}
//	for(o=0;o<5;o++){
//		for(i=0;i<5;i++){
//			printf("%4d",a[o][i]);
//		}
//		printf("\n");
//	}
//}
//
//#include<stdio.h>
//int main(void)
//{
//	int a[5][5]={0};
//	int i,j;
//	for(j=0;j<5;j++){
//			a[j][j]=1;
//	}
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			printf("%4d",a[j][i]);
//		}
//		printf("\n");
//	}
//}
//
//#include<stdio.h>
//int main(void)
//{
//	int a[5][5]={0};
//	int j,i;
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			if(i==j)
//				a[j][i]=1;
//		}
//	}
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			printf("%4d",a[j][i]);
//		}
//		printf("\n");
//	}
//}
//
#include<stdio.h>
int main(void)
{
	int a[5][5]={0};
	int i,j;
	for(j=0;j<5;j++){
			a[j][j]=1;
	}
	j=0;
	for(i=4;i>=0;i--){
			a[i][j]=1;
			j++;
			}

	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			printf("%4d",a[j][i]);
		}
		printf("\n");
	}
}

//#include<stdio.h>
//int main(void)
//{
//	int a[5][5]={0};
//	int i,j;
//	for(j=0;j<5;j++){
//			a[j][j]=1;
//			a[4-j][j]=1;
//	}
//
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			printf("%4d",a[j][i]);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main(void)
//{
//	int a[5][5]={0};
//	int j,i;
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			if(i==j || (i+j)==4)
//				a[j][i]=1;
//			
//		}
//	}
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			printf("%4d",a[j][i]);
//		}
//		printf("\n");
//	}
//}
//
//#include<stdio.h>
//int main(void)
//{
//	int a[5][5]={0};
//	int j,i;
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			if(i==j){
//				a[j][i]=1;
//				a[j][4-i]=1;
//			}
//		}
//	}
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			printf("%4d",a[j][i]);
//		}
//		printf("\n");
//	}
//}

//
//#include<stdio.h>
//void PrintArray(int(*a)[5]){
//int i,j;
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			printf("%4d",a[j][i]);
//		}
//		printf("\n");
//	}
//}
//int main(void)
//{
//	int a[5][5]={0};
//	int n=1;
//	int i,j;
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			a[i][j]=i+j*5+1;
//		}
//	}
//	PrintArray(a);
//}
//
//
//#include<stdio.h>
//void PrintArray(int(*a)[5]){
//int i,j;
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			printf("%4d",a[j][i]);
//		}
//		printf("\n");
//	}
//}
//int main(void)
//{
//	int a[5][5]={0};
//	int n=1;
//	int i,j;
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			a[i][j]=i+j*5+1;
//		}
//	}
//	PrintArray(a);
//}
//
//
//#include<stdio.h>
//void PrintArray(int(*a)[5]){
//int i,j;
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			printf("%4d",a[j][i]);
//		}
//		printf("\n");
//	}
//}
//void InitArray(int (*a)[5]){
//	int i,j;
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			a[i][j]=i+j*5+1;
//		}
//	}
//}
//int main(void)
//{
//	int a[5][5]={0};
//	InitArray(a);
//	PrintArray(a);
//}
//
//#include<stdio.h>
//int main(void)
//{
//	int arr[2][3]={10,20,30,40,50,60};
//	printf("%d %d %d %d %d %d\n",
//		arr[0][0],arr[0][1],arr[0][2],
//		arr[1][0],arr[1][1],arr[1][2]);
//}
//
//#include<stdio.h>
//int main(void)
//{
//	int arr[2][3]={10,20,30,40,50,60};
//	printf("%d %d %d %d %d %d\n",
//		arr[0][0],arr[0][1],arr[0][2],
//		arr[0][3],arr[0][4],arr[0][5]);
//}
//
//#include<stdio.h>
//int main(void)
//{
//	int arr[2][3]={10,20,30,40,50,60};
//	int*p; //2차원배열을 1차원배열처럼 다뤄줌
//	p=(int*)arr; //형변환을 통해서 대입
//	printf("%d %d %d %d %d %d\n",
//		p[0],p[1],p[2],
//		p[3],p[4],p[5]);
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//	int arr[6]={10,20,30,40,50,60};
//	int*p; //2차원배열을 1차원배열처럼 다뤄줌
//	p=(int*)arr;
//	printf("%d %d %d %d %d %d\n",
//		arr[0],arr[1],arr[2],
//		arr[3],arr[4],arr[5]);
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//	int arr[6]={10,20,30,40,50,60};
//	int(*p)[3]; //1차원 배열을 2차원배열 포인터로 2차원배열처럼 다뤄줌
//	p=(int(*)[3])arr;
//	printf("%d %d %d %d %d %d\n",
//		p[0][0],p[0][1],
//		p[1][0],p[1][1],
//		p[2][0],p[2][1]);
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//	int a[5][5];
//	int o,i;
//	for(o=0;o<5*5;o++){
//			a[0][i]=i+1; //0을 기준으로 모든 메모리에 접근 
//		}
//	for(o=0;o<5;o++){
//		for(i=0;i<5;i++){
//			printf("%4d",a[o][i]);
//		}
//		printf("\n");
//	}
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//	int a[5][5];
//	int i,j;
//	int*p=(int*)a; //2차원배열을 형변환을통해 1차원배열처럼 다뤄줌
//	for(i=0;i<5*5;i++){
//			p[i]=i+1; 
//		}
//	for(j=0;j<5;j++){
//		for(i=0;i<5;i++){
//			printf("%4d",a[j][i]);
//		}
//		printf("\n");
//	}
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//	int arr[25]={0};
//	int(*p)[5]=(int(*)[5])arr; //1차원배열을 2차원배열처럼 다뤄준다.
//	int i,j;
//	for(i=0;i<25;i++)
//		arr[i]=i+1;
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//			printf("%5d",p[i][j]);
//		printf("\n");
//	}
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//	int arr[25]={0};
//	int(*p)[5]=(int(*)[5])arr; //1차원배열을 2차원배열처럼 다뤄준다.
//	int i,j;
//	for(i=0;i<25;i++)
//		arr[i]=i+1;
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//			printf("%5d",arr[i*5+j]);
//		printf("\n");
//	}
//}
//
//
//#include<stdio.h>
//void PrintArray(int *arr,int row,int col){ //열의 개수가 다르면 쓸수없다.
//
//	int i,j;
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++)
//			printf("%5d",arr[i*row+j]);
//	printf("\n");
//	}
//}
//int main(void)
//{
//	int arr[3][3]={0};
//	int i,j;
//	for(i=0;i<9;i++)
//		arr[0][i]=i+1;
//	PrintArray((int*)arr,3,3);
//}
//
//
//#include<stdio.h>
//int main(void){
//	int n=10;
//	double d=5.1;
//	void* pv;
//	pv=&n;
//	printf("%d\n",*(int*)pv);
//	pv=&d;
//	printf("%g\n",*(double*)pv);
//}
//
//
//#include<stdio.h>
//void Print(int n){
//	printf("data : %d\n",n);
//}
//int main(void){
//	Print(10);
//
//	printf("%p %p\n",main,Print);
//}
//
//
//#include<stdio.h>
//void Print(int n){
//	printf("data : %d\n",n);
//}
//int main(void){
//	void (*p)(int); //함수포인터 만드는법 함수의 이름에 포인터변수명을써주면된다.
//					//매개변수명은 없어도 된다. 매개변수의 타입만 있으면 됨
//	p=Print;
//	Print(10);
//	p(10);
//}
//
//
//#include<stdio.h>
//int Add(int a,int b){
//	return a+b;
//}
//int Sub(int a,int b){
//	return a-b;
//}
//int main(void){
//	int (*p)(int,int)=(int (*)(int,int))Add; //함수포인터를 사용하므로써 동작이 달라진다.
//											//행동을 바꿀수 있는 유연성을 제공해주는 포인터이다.
//	printf("%d\n",p(10,20));
//}

//
//#include<stdio.h>
//void Menu(int*a){
//	printf("\n원하는 작업을 선택하세요\n");
//	printf("1.정상출력\n");
//	printf("2.좌우반전\n");
//	printf("3.상하반전\n");
//	printf("0.종료\n");
//	printf("===========================\n");
//	scanf("%d",a);
//
//}
//void Nomal(int(*arr)[5]);
//void ReverseLeftRight(int(*arr)[5]);
//void ReverseUpDown(int(*arr)[5]);
//int main(void)
//{
//	int arr[5][5];
//	int run=1,select;
//	Nomal(arr);
//	while(run){
//		Menu(&select);
//		switch(select){
//		case 1:
//			Nomal(arr);
//			break;
//		case 2:
//			ReverseLeftRight(arr);
//			break;
//		case 3:
//			ReverseUpDown(arr);
//			break;
//		case 0:
//			run=0;
//			break;
//		}
//	}
//}
//void PrintArray(int(*arr)[5]){
//	int i,j;
//	for(i=0;i<5;i++){
//		for(j=0;j<5;j++)
//			printf("%4d",arr[i][j]);
//		printf("\n");
//	}
//}
//void Nomal(int(*arr)[5]){
//	int i,j;
//	for(i=0;i<25;i++){
//		arr[0][i]=i+1;
//	}
//	PrintArray(arr);
//}
//void ReverseLeftRight(int(*arr)[5]){
//	int i,j,temp;
//	int arr2[5][5];
//	for(i=0;i<5;i++){
//		for(j=0;j<2;j++){
//			temp=arr[i][j];
//			arr[i][j]=arr[i][4-j];
//			arr[i][4-j]=temp;
//		}
//	}
//	PrintArray((int(*)[5])arr);
//}
//void ReverseUpDown(int(*arr)[5]){
//	int i,j,temp;
//	for(i=0;i<5;i++){
//		for(j=0;j<2;j++){
//			temp=arr[j][i];
//			arr[j][i]=arr[4-j][i];
//			arr[4-j][i]=temp;
//		}
//	}
//	PrintArray((int(*)[5])arr);
//}

//
//#include<stdio.h>
//int main(void)
//{
//	int val[]={78,87};
//	void *p=val;
//
//	printf("오늘의 인형은 뭘까-아요? : %d\n",*(int*)p);
//	((int*)p)++;
//	printf("오늘의 인형은 뭘까-아요? : %d\n",*(int*)p);
//
//}