//#include<stdio.h>
//struct point {int x; int y;};
//int main(void)
//{
//	struct point p1={2,3};
//	struct point p2={4,5};
//
//	printf("p1��ǥ�� (%d,%d)�Դϴ�.\n",p1.x,p1.y);
//	printf("p2��ǥ�� (%d,%d)�Դϴ�.\n",p2.x,p2.y);
//}
//
//
//#include<stdio.h>
//struct point {int x; int y;}; //����ü ����
//int main(void) 
//{
//	int n;
//	struct point pt;
//
//	n=10;
//	pt.x=2;
//	pt.y=3;
//
//	printf("int : %d\n",n);
//	printf("Point : (%d,%d)\n",pt.x,pt.y);
//}
//
//
//#include<stdio.h>
//struct point {int x; int y;}; //����ü ����
//int main(void) 
//{
//	struct point pt={2,3};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
//	printf("Point : (%d,%d)\n",pt.x,pt.y);
//
//}
//
//
//#include<stdio.h>
//struct point {int x; int y;}; //����ü ����
//int main(void) 
//{
//	struct point p1={2,3};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
//	struct point p2={5,5};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
//	printf("Point : (%d,%d)\n",p1.x,p1.y);
//	printf("Point : (%d,%d)\n",p2.x,p2.y);
//}
//
//
//#include<stdio.h>
//struct point {int x; int y;}; //����ü ����
//int main(void) 
//{
//	struct point p1={2,3};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
//	struct point p2={5,5};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
		//struct  ���ٿ������
//	printf("%d\n",sizeof(p1));
//	printf("%d\n",sizeof(struct point));
//}
//
//
//#include<stdio.h>
//struct point {int x; int y;}; //����ü ����
//int main(void) 
//{
//	int n=10;
//	struct point p1={2,3};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
//	printf("%p\n",&n);
//	printf("%p\n",&n+1);
//	printf("%p\n",&p1);
//	printf("%p\n",&p1+1);
//}
//
//
//#include<stdio.h>
//struct point {int x; int y;}; //����ü ����
//int main(void) 
//{
//	int n=10;
//	struct point p1={2,3};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
//	printf("%p %p %p\n",&p1,&p1.x,&p1.y);
//}
//
//
//#include<stdio.h>
//struct point {int x; int y;}; //����ü ����
//int main(void) 
//{
//	int n=10;
//	struct point p1={2,3};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
//	printf("%p %p %p\n",&p1,&p1.x,&p1.y);
//	printf("%p %p %p\n",&p1+1,&p1.x+1,&p1.y+1);
//}
//
//
//#include<stdio.h>
//struct point {int x; int y;}; //����ü ����
//void PrintPoint(struct point pt)
//{
//	printf("(%d,%d)\n",pt.x,pt.y);
//}
//int main(void) 
//{
//	struct point p1={2,3};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
//	PrintPoint(p1);
//}
//
//
//#include<stdio.h>
//struct point {int x; int y;}; //����ü ����
//int main(void) 
//{
//	struct point p1={2,3};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
//	struct point*ps;
//	ps=&p1;
//	printf("%d,%d\n",(*ps).x,(*ps).y); //.�����ڴ� (),[]�������� ������ �켱������ ����.
//	printf("%d,%d\n",ps->x,ps->y); //ȭ��ǥ�����ڸ� �̿��ؼ� �ּҷ� ����ü�� ����� ������ �� �ִ�.
//}
//
//
//#include<stdio.h>
//struct point {int x; int y;}; //����ü ����
//int main(void) 
//{
//	struct point p1={2,3};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
//	struct point*ps;
//	ps=&p1;
//	printf("%d,%d\n",(*ps).x,(*ps).y); //.�����ڴ� (),[]�������� ������ �켱������ ����.
//	printf("%d,%d\n",ps->x,ps->y); //ȭ��ǥ�����ڸ� �̿��ؼ� �ּҷ� ����ü�� ����� ������ �� �ִ�.
//	printf("%d,%d\n",p1.x,p1.y); 
//	printf("%d,%d\n",(&p1)->x,(&p1)->y); //�ּҸ� �̿�
//}
//
//
//#include<stdio.h>
//struct point {int x; int y;}; //����ü ����
//void PrintPoint(struct point*ps)
//{
//	printf("%d, %d\n",ps->x,ps->y);
//	printf("%d, %d\n",(*ps).x,(*ps).y);
//}
//int main(void) 
//{
//	struct point p1={2,3};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
//	PrintPoint(&p1);
//}
//
//
//#include<stdio.h>
//struct point {int x; int y;}; //����ü ����
//typedef struct point T;
//void PrintPoint(T*ps)
//{
//	printf("%d, %d\n",ps->x,ps->y);
//	printf("%d, %d\n",(*ps).x,(*ps).y);
//}
//int main(void) 
//{
//	T p1={2,3};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
//	PrintPoint(&p1);
//}
//
//
//#include<stdio.h>
//typedef struct point {int x; int y;}T; //����ü ����&Ÿ���� �̸����� ���ÿ�
//// typedef struct point T;
//void PrintPoint(T*ps)
//{
//	printf("%d, %d\n",ps->x,ps->y);
//	printf("%d, %d\n",(*ps).x,(*ps).y);
//}
//int main(void) 
//{
//	T p1={2,3};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
//	PrintPoint(&p1);
//}
//
//
//#include<stdio.h>
//typedef struct _point_tag {int x; int y;}point; //����ü ����&Ÿ���� �̸����� ���ÿ�
//void PrintPoint(point*ps)
//{
//	printf("%d, %d\n",ps->x,ps->y);
//	printf("%d, %d\n",(*ps).x,(*ps).y);
//}
//int main(void) 
//{
//	point p1={2,3};  //�迭 �ʱ�ȭ�ϵ� �ʱ�ȭ ����
//	PrintPoint(&p1);
//}
//
//
//#include<stdio.h>
//typedef struct _point_tag {int x; int y;}point; //����ü ����&Ÿ���� �̸����� ���ÿ�
//void PrintPoint(point*ps)
//{
//	printf("%d, %d\n",ps->x,ps->y);
//	printf("%d, %d\n",(*ps).x,(*ps).y);
//}
//int main(void) 
//{
//	point arr[5]={2,3, 5,2, 7,8, 3,4, 6,5};  //�ʱ�ȭ
//	printf("%d, %d\n",arr[0].x,arr[0].y);
//	printf("%d, %d\n",arr[1].x,arr[1].y);
//	printf("%d, %d\n",arr[2].x,arr[2].y);
//	printf("%d, %d\n",arr[3].x,arr[3].y);
//	printf("%d, %d\n",arr[4].x,arr[4].y);
//}
//
//
//#include<stdio.h>
//typedef struct _point_tag {int x; int y;}point; //����ü ����&Ÿ���� �̸����� ���ÿ�
//void PrintPoint(point*ps)
//{
//	printf("%d, %d\n",ps->x,ps->y);
//	printf("%d, %d\n",(*ps).x,(*ps).y);
//}
//int main(void) 
//{
//	int i;
//	point arr[5]={{2,3}, {5,2}, {7,8}, {3,4}, {6,5}};  //�ʱ�ȭ
//	
//	for(i=0;i<5;i++)
//	{
//		printf("%d, %d\n",arr[i].x,arr[i].y);
//	}
//}
//
//
//#include<stdio.h>
//typedef struct _point_tag {int x; int y;}point; //����ü ����&Ÿ���� �̸����� ���ÿ�
//void PrintPoint(point*ps)
//{
//	printf("%d, %d\n",ps->x,ps->y);
//	printf("%d, %d\n",(*ps).x,(*ps).y);
//}
//void PrintArray(point*ps)
//{
//	int i;
//	for(i=0;i<5;i++)
//	{
//		printf("%d, %d\n",ps[i].x,ps[i].y);
//	}
//	/*
//	for(i=0;i<5;i++)
//	{
//		printf("%d,%d\n",(ps+i)->x,(ps+i)->y);
//	}
//	*/
//}
//int main(void) 
//{
//	int i;
//	point arr[5]={{2,3}, {5,2}, {7,8}, {3,4}, {6,5}};  //�ʱ�ȭ
//	
//	PrintArray(arr);
//}
//
//
//#include<stdio.h>
//typedef struct _point_tag {int x; int y;}point; //����ü ����&Ÿ���� �̸����� ���ÿ�
//void PrintPoint(point*ps)
//{
//	printf("%d, %d\n",ps->x,ps->y);
//	printf("%d, %d\n",(*ps).x,(*ps).y);
//}
//void PrintArray(point*ps)
//{
//	int i;
//	/*
//	for(i=0;i<5;i++)
//	{
//		printf("%d, %d\n",ps[i].x,ps[i].y);
//	}
//	*/
//	
//	for(i=0;i<5;i++)
//	{
//		printf("%d,%d\n",(ps+i)->x,(ps+i)->y);
//	}
//	
//}
//int main(void) 
//{
//	int i;
//	point arr[5]={{2,3}, {5,2}, {7,8}, {3,4}, {6,5}};  //�ʱ�ȭ
//	
//	PrintArray(arr);
//}
//
//
//#include<stdio.h>
//typedef struct _point_tag {int x; int y;}point; //����ü ����&Ÿ���� �̸����� ���ÿ�
//int main(void){
//	point pt={2,3};
//
//	int *p=&pt.x;
//	printf("%d\n",*p);
//	p=&pt.y;
//	printf("%d\n",*p);
//
//}
//
//#include<stdio.h>
//int func1(int s,int NO,int end)
//{
//	int i,f,student2[1000],count=0;
//	for(i=0;i<s;i++){
//		student2[i]=i+1;
//	}
//	for(i=1;i<=end;i++)
//	{
//		if(end%2!=0 && end%3!=0 && count<s){
//			student2[count]++;
//			count++;
//		}
//		else if(s<=count)
//		{
//			if(end%3!=0 && end%2!=0 && count>=s)
//			{
//				count=0;
//				student2[count]++;
//				count++;
//			}
//			else
//			{
//				count=0;
//				count++;
//			}
//		}
//	}
//	return student2[NO]-(NO+1);
//}
//
//
//int main(void)
//{
//	int student,endNum,studentNO;
//	int i,f;
//	A: scanf("%d %d %d",&student,&endNum,&studentNO);
//	
//	if(((student<2)||(student>1000)) || ((endNum<1)||(endNum>1000000)) || ((studentNO<0)||(studentNO>=student))){
//		printf("�ٽ� �Է� �ϼ���.");
//		goto A;
//	}
//	printf("%d\n",func1(student,studentNO,endNum));
//
//	
//}
//
///* ��������
//#include<stdio.h>
//int main(void)
//{
//	int n,b;
//	int n2[100][100];
//	A: scanf("%d",&n);
//	if(n>=100){
//		printf("�ٽ� �Է��ϼ���.");
//		goto A;
//	}
//	
//}
//*/
/*
#include<stdio.h>
struct student{
 char name[20];
 int grade;
 int kor;
 int eng;
 int math;
 double aver;
};
typedef struct student student;
void InputInfomation(student*studentN,int i){
  printf("�̸��� �Է��ϼ���:");
  scanf("%s",&studentN[i].name);
  printf("�г��� �Է��ϼ���:");
  scanf("%d",&studentN[i].grade);
  printf("���������� �Է��ϼ���:");
  scanf("%d",&studentN[i].kor);
  printf("���������� �Է��ϼ���:");
  scanf("%d",&studentN[i].eng);
  printf("���������� �Է��ϼ���:");
  scanf("%d",&studentN[i].math);
  studentN[i].aver=(studentN[i].kor+studentN[i].eng+studentN[i].math)/3;
}
void Find(student*studentN, int count){
	char name[20];
	int i,f=0,o,c=0;
	printf("ã����� �л��� �̸��� �Է��ϼ��� :");
	scanf("%s",&name);
	
	for(i=0;i<=count;i++)
	{
		for(o=0;name[o];o++){
			c++;
			if(name[o]==studentN[i].name[o]){	
				f++;
			}
		}
	}
	if(f==c){
		printf("�г� : %d\n�������� : %d\n�������� : %d\n�������� : %d\n3������ ��� : "
				,studentN[i].grade,studentN[i].kor,studentN[i].eng,studentN[i].math,studentN[i].aver);
	}
	else{
		printf("ã���ô� �л��� �����ϴ�.\n");
	}
}
void main()
{
 int a,count=0;
 student studentN[20];
 while(1){
  printf("0.���� 1.�����Է� 2.�˻�\n");
  printf("������ �۾��� �����ϼ��� : ");
  A: scanf("%d",&a);
  
   if(a==0){
    break;
   } 
   else if(a==1){
		InputInfomation(studentN,count);
		count++;
   }
   else if(a==2){
	   Find(studentN,count);
   }
   else{
	   printf("�߸��� �Է��Դϴ�.�ٽ� �Է��� �ּ��� : ");
	   goto A;
   }
  } 
}
*/

/*
#include<stdio.h>
struct Point3D{
 int x;
 int y;
 int z;
};
typedef struct Point3D P3;
void PrintArr(P3*p){
 int i;
 for(i=0;i<3;i++)
 {
  printf("%d,%d,%d\n",p[i].x,p[i].y,p[i].z);
 }
}
void SwapXtoZ(P3*p2){
 int a,i,b;
 for(i=0;i<3;i++)
 {
  a=p[i].z;
  b=p[i].y;
  p[i].z=p[i].x;
  p[i].y=a;
  p[i].x=b;
 }
}
int main(void)
{
 P3 arr[3]={{2,3,4},{5,2,4},{2,8,9}};
 PrintArr(arr);
 SwapXtoZ(arr);
 PrintArr(arr);
}
*/
