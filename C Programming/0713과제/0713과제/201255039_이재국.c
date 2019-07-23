#include<stdio.h>
void Menu(int*a);
void Nomal(int(*arr)[5]);
void ReverseLeftRight(int(*arr)[5]);
void ReverseUpDown(int(*arr)[5]);
int main(void)
{
	int arr[5][5];
	int run=1,select;
	Nomal(arr);
	while(run){
		Menu(&select);
		switch(select){
		case 1:
			Nomal(arr);
			break;
		case 2:
			ReverseLeftRight(arr);
			break;
		case 3:
			ReverseUpDown(arr);
			break;
		case 0:
			run=0;
			break;
		default:
			printf("\n\n잘못된 입력입니다. 다시 입력해 주세요.\n");
			break;
		}
	}
}
void Menu(int*a){
	printf("\n원하는 작업을 선택하세요\n");
	printf("1.정상출력\n");
	printf("2.좌우반전\n");
	printf("3.상하반전\n");
	printf("0.종료\n");
	printf("===========================\n");
	scanf("%d",a);

}
void PrintArray(int(*arr)[5]){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			printf("%4d",arr[i][j]);
		printf("\n");
	}
}
void Nomal(int(*arr)[5]){
	int i,j;
	for(i=0;i<25;i++){
		arr[0][i]=i+1;
	}
	PrintArray(arr);
}
void ReverseLeftRight(int(*arr)[5]){
	int i,j,temp;
	int arr2[5][5];
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			temp=arr[i][j];
			arr[i][j]=arr[i][4-j];
			arr[i][4-j]=temp;
		}
	}
	PrintArray((int(*)[5])arr);
}
void ReverseUpDown(int(*arr)[5]){
	int i,j,temp;
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			temp=arr[j][i];
			arr[j][i]=arr[4-j][i];
			arr[4-j][i]=temp;
		}
	}
	PrintArray((int(*)[5])arr);
}
