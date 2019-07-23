//#include<stdio.h>
//void PrintString(char*str)
//{
//	int i;
//	for(i=0;str[i];i++){
//	printf("%c",str[i]);
//	}
//	printf("\n");
//}
//void PrintLowerString(char*str)
//{
//	int i,o;
//	char str2[10];
//	char c='A';
//	char c2='a';
//	for(i=0;i<5;i++)
//	{
//		str2[i]=str[i];
//	}
//	for(o=0;str[o];o++){
//		c='A';
//		c2='a';
//		for(i=0;i<32;i++){
//			if(str[o]==c)
//			{
//				str2[o]=c2;
//			}
//			c++;
//			c2++;
//		}
//		printf("%c",str2[o]);
//	}
//	printf("\n");
//}
//int GetStringLength(char*str)
//{
//	int i,length=0;
//	for(i=0;str[i];i++)
//	{
//		length++;
//	}
//	
//	return length;
//}
//int main(void)
//{
//	char s[10]="ABCDE";
//	int i,count=0;
//	PrintString(s); //ABCDE
//	PrintLowerString(s); //abcde
//	printf("%d \n",GetStringLength(s));
//}
//
//#include<stdio.h>
//void PrintString(char*ps)
//{
//	printf("%c",ps[0]+0);
//	printf("%c",ps[0]+1); //첫번째 문자의 아스키코드에서 증가한다
//	printf("%c",ps[0]+2);
//	printf("%c",ps[0]+3);
//	printf("%c",ps[0]+4);
//}
//
//int main(void)
//{
//	char s[10]="KBCDE"; 
//	PrintString(s); //ABCDE
//}
//
//#include<stdio.h>
//void PrintString(char*ps)
//{
//	printf("%c",ps[0]);
//	printf("%c",ps[1]);
//	printf("%c",ps[2]);
//	printf("%c",ps[3]);
//	printf("%c",ps[4]);
//}
//
//int main(void)
//{
//	char s[10]="KBCDE"; 
//	PrintString(s); //ABCDE
//}
//
//#include<stdio.h>
//void PrintString(char*ps)
//{
//	printf("%c",ps[0]);
//	printf("%c",ps[1]);
//	printf("%c",ps[2]);
//	printf("%c",ps[3]);
//	printf("%c",ps[4]);
//	printf("%c",ps[5]);
//	printf("%c",ps[6]);
//	printf("%c",ps[7]);
//	printf("%c",ps[8]);
//	printf("%c",ps[9]);
//}
//
//int main(void)
//{
//	char s[10]="KBCDE"; 
//	PrintString(s); //ABCDE
//}
//
//#include<stdio.h>
//void PrintString(char*ps)
//{
//	printf("%c",ps[0]);
//	printf("%c",ps[1]);
//	printf("%c",ps[2]);
//	printf("%c",ps[3]);
//	printf("%c",ps[4]);
//	//ps[5]는 출력하면 안되요
//}
//
//int main(void)
//{
//	char s[10]="KBCDE"; 
//	PrintString(s); //ABCDE
//}
//
//#include<stdio.h>
//void PrintString(char*ps)
//{
//	int i;
//	for(i=0;ps[i];i++){
//	printf("%c",ps[i]);
//	}
//	printf("\n");
//}
//
//int main(void)
//{
//	char s[10]="KBCDE"; 
//	PrintString(s); //ABCDE
//}
//
//#include<stdio.h>
//void PrintString(char*ps)
//{
//	int i;
//	for(i=0;ps[i];i++){
//	printf("%c",ps[i]);
//	}
//	printf("\n");
//}
//void PrintLowerString(char*ps)
//{
//	int i;
//	for(i=0;ps[i];i++){
//	if('A'<=ps[i] && ps[i]<='Z')
//	printf("%c",ps[i]+32);
//	}
//	printf("\n");
//}
//int main(void)
//{
//	char s[10]="KBCDE"; 
//	PrintString(s); //ABCDE
//	PrintLowerString(s);
//}
//
//#include<stdio.h>
//void PrintString(char*ps)
//{
//	int i;
//	for(i=0;ps[i];i++){
//	printf("%c",ps[i]);
//	}
//	printf("\n");
//}
//void PrintLowerString(char*ps)
//{
//	int i;
//	for(i=0;ps[i];i++){
//	if('A'<=ps[i] && ps[i]<='Z')
//	printf("%c",ps[i]+32);
//	}
//	printf("\n");
//}
//int GetStringLength(char*ps){
//	int count=0,i;
//	for(i=0;ps[i];i++){
//	count++;
//	}
//	return count;
//}
//int main(void)
//{
//	char s[10]="KBCDE"; 
//	PrintString(s); //ABCDE
//	PrintLowerString(s);
//	printf("%d\n",GetStringLength(s));
//}
//
//#include<stdio.h>
//void PrintArray(int*arr)
//{
//	int i;
//	for( i = 0 ; i < 5 ; i++ ) {
//		printf(" %d ", arr[i] );
//	}
//	printf( "\n" );
//}
//void ReverseArray(int*arr)
//{
//	int i, o = 0;
//	int arr2[5];
//	for(i=0,o=4;i<5;++i,--o)
//	{
//		arr2[o]=arr[i];
//	}
//	for(i=0;i<5;i++)
//	{
//		arr[i]=arr2[i];
//	}
//	/*
//	for(i=0;i<5;i++)
//	{
//		arr2[i]=arr[i];
//	}
//	for(i=4;i>=0;i--)
//	{
//		arr[o]=arr2[i];
//		o++;
//	}
//	*/
//}
//int main(void)
//{
//	int arr[5]={10,20,30,40,50};
//
//	PrintArray(arr); //10 20 30 40 50
//	ReverseArray(arr);
//	PrintArray(arr);//50 40 30 20 10
//
//}
//
//#include<stdio.h>
//void PrintArray(int*arr)
//{
//	int i;
//	for( i = 0 ; i < 5 ; i++ ) {
//		printf(" %d ", arr[i] );
//	}
//	printf( "\n" );
//}
//void ReverseArray(int*arr)
//{
//	int i, o = 4;
//	int arr2[5];
//	for(i=0;i<5;++i)
//	{
//		arr2[o--]=arr[i];
//	}
//	for(i=0;i<5;i++)
//	{
//		arr[i]=arr2[i];
//	}
//	/*
//	for(i=0;i<5;i++)
//	{
//		arr2[i]=arr[i];
//	}
//	for(i=4;i>=0;i--)
//	{
//		arr[o]=arr2[i];
//		o++;
//	}
//	*/
//}
//int main(void)
//{
//	int arr[5]={10,20,30,40,50};
//
//	PrintArray(arr); //10 20 30 40 50
//	ReverseArray(arr);
//	PrintArray(arr);//50 40 30 20 10
//
//}
//
//#include<stdio.h>
//void PrintArray(int*arr)
//{
//	int i;
//	for( i = 0 ; i < 5 ; i++ ) {
//		printf(" %d ", arr[i] );
//	}
//	printf( "\n" );
//}
//void ReverseArray(int*arr)
//{
//	int i;
//	int arr2[5];
//	for( i=0 ; i<5 ; ++i )
//	{
//		arr2[4-i]=arr[i];
//	}
//	for(i=0;i<5;i++)
//	{
//		arr[i]=arr2[i];
//	}
//	/*
//	for(i=0;i<5;i++)
//	{
//		arr2[i]=arr[i];
//	}
//	for(i=4;i>=0;i--)
//	{
//		arr[o]=arr2[i];
//		o++;
//	}
//	*/
//}
//int main(void)
//{
//	int arr[5]={10,20,30,40,50};
//
//	PrintArray(arr); //10 20 30 40 50
//	ReverseArray(arr);
//	PrintArray(arr);//50 40 30 20 10
//
//}
//
//#include<stdio.h>
//void PrintArray(int*arr)
//{
//	int i;
//	for( i = 0 ; i < 5 ; i++ ) {
//		printf(" %d ", arr[i] );
//	}
//	printf( "\n" );
//}
//void ReverseArray(int*arr)
//{
//	int i;
//	int arr2[5];
//	for( i=0 ; i<5 ; ++i )
//	{
//		arr2[4-i]=arr[i];
//	}
//	for(i=0;i<5;i++)
//	{
//		arr[i]=arr2[i];
//	}
//	/*
//	for(i=0;i<5;i++)
//	{
//		arr2[i]=arr[i];
//	}
//	for(i=4;i>=0;i--)
//	{
//		arr[o]=arr2[i];
//		o++;
//	}
//	*/
//}
//int main(void)
//{
//	int arr[5]={10,20,30,40,50};
//
//	PrintArray(arr); //10 20 30 40 50
//	ReverseArray(arr);
//	PrintArray(arr);//50 40 30 20 10
//
//}
//
//#include<stdio.h>
//void main()
//{
//	int a=10,b=20;
//
//	printf("%d , %d\n",a,b);
//	{
//		int c;
//		c=a;
//		a=b;
//		b=c;
//	}
//	printf("%d , %d\n",a,b);
//}
//
//#include<stdio.h>
//void Swap(int*a,int*b)
//{
//		int c;
//		c=*a;
//		*a=*b;
//		*b=c;
//}
//void main()
//{
//	int a=10,b=20;
//	printf("%d , %d\n",a,b);
//	Swap(&a,&b); //주소가 날아가야 값이 변한다.
//	printf("%d , %d\n",a,b);
//}
//
//#include<stdio.h>
//void Swap(int*a,int*b)
//{
//		int c;
//		c=*a;
//		*a=*b;
//		*b=c;
//}
//void PrintArray(int*arr)
//{
//	int i;
//	for( i = 0 ; i < 5 ; i++ ) {
//		printf(" %d ", arr[i] );
//	}
//	printf( "\n" );
//}
//void ReverseArray(int*arr)
//{
//	int i;
//	Swap(&arr[0],&arr[4]);
//	Swap(&arr[1],&arr[3]);
//	Swap(&arr[2],&arr[2]);
//	/*
//	for(i=0;i<5;i++)
//	{
//		arr2[i]=arr[i];
//	}
//	for(i=4;i>=0;i--)
//	{
//		arr[o]=arr2[i];
//		o++;
//	}
//	*/
//}
//int main(void)
//{
//	int arr[5]={10,20,30,40,50};
//
//	PrintArray(arr); //10 20 30 40 50
//	ReverseArray(arr);
//	PrintArray(arr);//50 40 30 20 10
//
//}
//
//#include<stdio.h>
//void Swap(int*a,int*b)
//{
//		int c;
//		c=*a;
//		*a=*b;
//		*b=c;
//}
//void PrintArray(int*arr)
//{
//	int i;
//	for( i = 0 ; i < 5 ; i++ ) {
//		printf(" %d ", arr[i] );
//	}
//	printf( "\n" );
//}
//void ReverseArray(int*arr)
//{
//	int i;
//	for(i=0;i<5/2;i++)
//	{
//	Swap(&arr[i],&arr[4-i]);
//	}
//	/*
//	for(i=0;i<5;i++)
//	{
//		arr2[i]=arr[i];
//	}
//	for(i=4;i>=0;i--)
//	{
//		arr[o]=arr2[i];
//		o++;
//	}
//	*/
//}
//int main(void)
//{
//	int arr[5]={10,20,30,40,50};
//
//	PrintArray(arr); //10 20 30 40 50
//	ReverseArray(arr);
//	PrintArray(arr);//50 40 30 20 10
//
//}
//
//#include<stdio.h>
//void Swap(int*a,int*b)
//{
//		int c;
//		c=*a;
//		*a=*b;
//		*b=c;
//}
//void PrintArray(int*arr)
//{
//	int i;
//	for( i = 0 ; i < 5 ; i++ ) {
//		printf(" %d ", arr[i] );
//	}
//	printf( "\n" );
//}
//void ReverseArray(int*arr)
//{
//	int i;
//	for(i=0;i<5/2;i++)
//	{
//	Swap(&arr[i],&arr[4-i]);
//	}
//	/*
//	for(i=0;i<5;i++)
//	{
//		arr2[i]=arr[i];
//	}
//	for(i=4;i>=0;i--)
//	{
//		arr[o]=arr2[i];
//		o++;
//	}
//	*/
//}
//void IncrementArray(int*arr)
//{
//	int i;
//	for(i=0;i<5;i++)
//	{
//		//*(arr+i)+=1;
//		arr[i]+=1;
//	}
//}
//int main(void)
//{
//	int arr[5]={10,20,30,40,50};
//
//	PrintArray(arr); //10 20 30 40 50
//	ReverseArray(arr);
//	PrintArray(arr);//50 40 30 20 10
//	IncrementArray(arr); 
//	PrintArray(arr);//51 41 31 21 11
//}
