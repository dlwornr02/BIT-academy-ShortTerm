/* 
#include<stdio.h>
int main(void){
	char B;
	int i,o;
	printf("대문자를 입력하시오 : ");
	a: scanf_s("%c",&B,1);
	if('A'<=B && B<='Z'){
		for(i=B;i>='A';i--){
			for(o='A';o<=i;o++){
				printf("%c",o);
			}
			printf("\n");
		}
	}
	else{
		printf("대문자가 아닙니다. 다시입력하세요 : ");
		goto a;
	}

}
*/
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void main()
//{
//	char c;
//	int i,o;
//	printf("문자입력 : ");
//	scanf("%c",&c);
//	if('A'<=c && c<='Z'){
//		for(i='A';i<=c;i++){
//			printf("%2c",i);
//		}
//		printf("\n");
//	}
//}
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void PrintLargeAlpha(char c){
//	int i;
//	for(i='A';i<=c;i++){
//			printf("%2c",i);
//		}
//		printf("\n");
//}
//void main()
//{
//	char c;
//	int i,o;
//	printf("문자입력 : ");
//	scanf("%c",&c);
//	if('A'<=c && c<='Z'){
//		for(i=0;i<=c-'A';++i)
//			PrintLargeAlpha(c);
//	}
//}
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void PrintLargeAlpha(char c){
//	int i;
//	for(i='A';i<=c;i++){
//			printf("%2c",i);
//		}
//		printf("\n");
//}
//void main()
//{
//	char c;
//	int i,o;
//	printf("문자입력 : ");
//	scanf("%c",&c);
//	if('A'<=c && c<='Z'){
//		for(i=c;i>='A';--i)
//			PrintLargeAlpha(i);
//	}
//}
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void PrintLargeAlpha(char c){
//	int i;
//	for(i='A';i<=c;i++){
//			printf("%2c",i);
//		}
//		printf("\n");
//}
//void main()
//{
//	char c;
//	int i,o;
//	printf("문자입력 : ");
//	scanf("%c",&c);
//	if('A'<=c && c<='Z'){
//		for(i=0;i<=c-'A';i++)
//			PrintLargeAlpha(c-i);
//	}
//}
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void PrintLargeAlpha(char c){
//	int i;
//	for(i='A';i<=c;i++){
//			printf("%2c",i);
//		}
//		printf("\n");
//}
//void PrintTriangleAlpha(char c){
//	int i;
//	for(i=0;i<=c-'A';i++)
//			PrintLargeAlpha(c-i);
//}
//void main()
//{
//	char c;
//	int i,o;
//	printf("문자입력 : ");
//	scanf("%c",&c);
//	if('A'<=c && c<='Z'){
//		PrintTriangleAlpha(c);
//	}
//}

//#pragma warning(disable:4996)
//#include<stdio.h>
//void main()
//{
//	int arr[2][2]={10,20,30,40};
//
//	printf("%d %d\n",arr[0][0],arr[0][1]);
//	printf("%d %d\n",arr[1][0],arr[1][1]);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void main()
//{
//	int arr[2][2]={{10,20},{30,40}};
//
//	printf("%d %d\n",arr[0][0],arr[0][1]);
//	printf("%d %d\n",arr[1][0],arr[1][1]);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void main()
//{
//	int arr[2][2]={{10},{30}};
//
//	printf("%d %d\n",arr[0][0],arr[0][1]);
//	printf("%d %d\n",arr[1][0],arr[1][1]);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void main()
//{
//	int arr[3][3]={10,20,30,40,50,60,70,80,90};
//	
//	printf("%5d",arr[0][0]);
//	printf("%5d",arr[0][1]);
//	printf("%5d",arr[0][2]);
//	printf("\n");
//	printf("%5d",arr[1][0]);
//	printf("%5d",arr[1][1]);
//	printf("%5d",arr[1][2]);
//	printf("\n");
//	printf("%5d",arr[2][0]);
//	printf("%5d",arr[2][1]);
//	printf("%5d",arr[2][2]);
//	printf("\n");
//
//
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void main()
//{
//	int arr[3][3]={10,20,30,40,50,60,70,80,90};
//	int j;
//	for(j=0;j<3;j++)
//		printf("%5d",arr[0][j]);
//	printf("\n");
//	for(j=0;j<3;j++)
//		printf("%5d",arr[1][j]);
//	printf("\n");
//	for(j=0;j<3;j++)
//		printf("%5d",arr[2][j]);
//	printf("\n");
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void main()
//{
//	int arr[3][3]={10,20,30,40,50,60,70,80,90};
//	int j,i;
//	for(j=0;j<3;j++){
//		for(i=0;i<3;i++)
//		printf("%5d",arr[j][i]);
//	printf("\n");
//	}
//	
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void main()
//{
//	int arr[3][3]={10,20,30,40,50,60,70,80,90};
//	printf("%p %p %p\n",arr,arr[0],arr[1]);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void main()
//{
//	int arr[3][3]={10,20,30,40,50,60,70,80,90};
//	printf("%p %p %p\n",arr[0],arr[1],arr[2]);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void main() //인덱스 하나로도 모든데이터에 접근가능 하다.
//{
//	int arr[3][3]={10,20,30,40,50,60,70,80,90};
//	printf("%d %d %d\n",arr[0][0],arr[0][1],arr[0][2]);
//	printf("%d %d %d\n",arr[0][3],arr[0][4],arr[0][5]);
//	printf("%d %d %d\n",arr[0][6],arr[0][7],arr[0][8]);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void main() //인덱스 하나로도 모든데이터에 접근가능 하다.
//{
//	int arr[3][3]={10,20,30,40,50,60,70,80,90};
//	printf("%d %d %d\n",arr[1][-3],arr[1][-2],arr[1][-1]);
//	printf("%d %d %d\n",arr[1][0],arr[1][1],arr[1][2]);
//	printf("%d %d %d\n",arr[2][0],arr[2][1],arr[2][2]);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void main() //인덱스 하나로도 모든데이터에 접근가능 하다.
//{
//	int arr[3][3]={10,20,30,40,50,60,70,80,90}; //다차원배열의 시작주소에서는 *arr==arr[0]
//												//arr+1하면 열의 개수를 건너뛴다.
//												//2차원 배열의 이름은 *를 붙이면 1차주소가된다.
//												//2차포인터와는 다르게 동작한다.
//	printf("%p %p %p\n",arr,arr+1,arr+2);
//	printf("%p %p %p\n",arr[0]+1,arr[1],arr[2]);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//void Print2DArray(int(*p)[3]){
//	int i,j;
//	for(j=0;j<3;j++){
//		for(i=0;i<3;i++)
//		printf("%5d",p[j][i]);
//	printf("\n");
//	}
//}
//void main()
//{
//	int arr[3][3]={10,20,30,40,50,60,70,80,90};
//	Print2DArray(arr);
//}
/*과제
#include<stdio.h>
int main(void)
{
	char Large;
	int o,i,i2;
	printf("대문자를 입력하세요 : ");
	a: scanf("%c",&Large);
	if('A'<=Large && Large<='Z')
	{
		for(o='A';o<=Large;o++){
			for(i='A';i<=o;i++){
				printf("%c",i);
			}
			printf("\n");
		}
		for(o=Large-1;o>='A';o--){
			for(i='A';i<=o;i++){
				printf("%c",i);
			}
			printf("\n");
		}
	}
	else{
		printf("대문자가 아닙니다. 다시 입력하세요 : ");
		goto a;
	}
}
*/
//
//#include<stdio.h>
//int main(void)
//{
//	char Large;
//	int o,i,i2;
//	printf("대문자를 입력하세요 : ");
//a: scanf("%c",&Large);
//	if('A'<=Large && Large<='Z')
//	{
//		for(o='A';o<=Large;o++){
//			for(i=o;i<Large;i++){
//				printf(" ");
//			}
//			for(i=o;i>='A';i--){
//				printf("%c",i);
//			}
//			for(i='A';i<=o;i++){
//				printf("%c",i);
//			}
//
//			printf("\n");
//		}
//
//		for(o=Large-1;o>='A';o--){
//			for(i=Large;i>o;i--){
//				printf(" ");
//			}
//			for(i=o;i>='A';i--)
//			{
//				printf("%c",i);
//			}
//			for(i='A';i<=o;i++){
//				printf("%c",i);
//			}
//			printf("\n");
//		}
//	}
//
//	else{
//		printf("대문자가 아닙니다. 다시 입력하세요 : ");
//		goto a;
//	}
//}
