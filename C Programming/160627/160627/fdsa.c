//#include<stdio.h>
//void main(){
//	//////////////////////&,*,[]  <--�߿��� ������ ///////////////////////////
//	
//	int n = 10;
//
//	printf("%d\n",*&n);
//	printf("%d\n",(&n)[0]); //(&n)[0]    ==>    []�����ڰ� ���� ����ǹǷ� �ּҸ� ���� ()�� ���� �־�� �Ѵ�.
//	////[]�� *�� �Ȱ����������� *�ּ�, �ּ�[i] �ؼ��ϸ� ���̳ʸ� �ڵ尡���ٴ� �ǹ��̴�.
//	////					  p[i] == *(p+i)  
//}
//#include<stdio.h>
//void main(){
//	//////////////////////&,*,[]  <--�߿��� ������ ///////////////////////////
//	
//	int n = 10;
//	////[]�� *�� �Ȱ����������� *�ּ�, �ּ�[i] �ؼ��ϸ� ���̳ʸ� �ڵ尡���ٴ� �ǹ��̴�.
//	////					p   ==  p[i] == *(p+i)  
//}
//#include<stdio.h>
//void main(){
//	//////////////////////&,*,[]  <--�߿��� ������ ///////////////////////////
//	
//	int n = 10;
//	printf("%d\n",*&n);  //&�� �ּҿ����� �����տ��� ���� �� ����
//	printf("%p\n",&n);  //&�� �ּҿ����� �����տ��� ���� �� ����
//	printf("%p\n",&*&n);  //&�� �ּҿ����� �����տ��� ���� �� ����
//						//*�� �ּ� �տ� ����   *&n  ==>  �ּ��� �޸� �̸�
//						//*�� &�� ������� �����̴�.
//}
//#include<stdio.h>
//void main(){
//	//////////////////////&,*,[]  <--�߿��� ������ ///////////////////////////
//	
//	int n = 10;
//	printf("%p\n",&n);  //&�� �ּҿ����� �����տ��� ���� �� ����
//						//*�� �ּ� �տ� ����   *&n  ==>  �ּ��� �޸� �̸�
//						//*�� &�� ������� �����̴�.
//}
#include<stdio.h>
void main(){
	//////////////////////&,*,[]  <--�߿��� ������ ///////////////////////////
	
	int n = 10;
	printf("%d %x %p\n",&n,&n,&n);  //&�� �ּҿ�����
	//%d�� 10�������� %x�� 8���� %p�� 16���� 16������ �ּ�����Ѵ�.

}
//#include<stdio.h>
//void main(){
//	//////////////////////&,*,[]  <--�߿��� ������ ///////////////////////////
//	
//	int n = 10;
//	printf("%d %x \n",&n,&n);  //&�� �ּҿ�����
//
//}
//#include<stdio.h>
//void main(){
//	int n = 10;
//	printf("%d\n",n<<0); //r<<m ==> r*2^m
//	printf("%d\n",n<<1); //r>>m ==> r/2^m
//	printf("%d\n",n<<2);
//	printf("%d\n",n<<3);
//}
//#include<stdio.h>
//void main(){
//	int a = 3;
//	int b = 5;
//
//	printf("%d\n",a&b);
//	printf("%d\n",a|b);
//	printf("%d\n",a^b);
//	printf("%d\n",~a);
//	printf("%d\n",~b);
//}
//#include<stdio.h>
//void main(){
//	int a = 0;
//	int b = 5;
//
//	printf("%d\n",a&&b);
//	printf("%d\n",a||b);
//	printf("%d\n",!a);
//	printf("%d\n",!b);
//}
//#include<stdio.h>
//void main(){
//	int a = 3; //0�̾ƴ� ��� ������ ������ �����
//	int b = 5;
//
//	printf("%d\n",a&&b);
//	printf("%d\n",a||b);
//	printf("%d\n",!a);
//	printf("%d\n",!b);
//}
//#include<stdio.h>
//void main(){
//	int n=10;
//	int r;
//
//	r=--n;
//	printf("%d %d\n",n,r);
//}
//#include<stdio.h>
//void main(){
//	int n=10;
//	int r;
//
//	//r=++n; //���� ������
//	r=(n++);  //���� ������ ������ ����� writing�Ѵ�.
//			//������ ���� ��������� ������ ����� ������Ű��ʹٸ� �ǵ������� ������ ���ش�.
//	printf("%d %d\n",n,r);
//}
//#include<stdio.h>
//void main(){
//	int n=10;
//	//++n;  //++,--�� ����������   ++n   ===>   n=n+1
//	n++;  //++,--�� ����������   n++   ===>   n=n+1
//		  //���������� ����������� �Ѵٰ���
//	printf("%d\n",n);
//}
//#include<stdio.h>
//void main(){
//	int n=10;
//	printf("%d\n",+n);
//	printf("%d\n",-n);
//	n=-n;
//	printf("%d\n",n);
//
//}
//#include<stdio.h>
//void main(){
//	int a = 10;
//	int b = 20;
//
//	a=b;
//	printf("%d %d\n",a,b);
//	a+=b;
//	printf("%d %d\n",a,b);
//	a*=b;
//	printf("%d %d\n",a,b);
//}
//#include<stdio.h>
//void main(){
//	int a = 10;
//	int b = 20;
//
//	printf("%d \n",a<b);
//	printf("%d \n",a>b);
//	printf("%d \n",a<=b);
//	printf("%d \n",a>=b);
//	printf("%d \n",a==b);
//	printf("%d \n",a!=b);
//}
//#include<stdio.h>
//void main(){
//
//	printf("%d \n",10+20);
//	printf("%d \n",10-20);
//	printf("%d \n",10*20);
//	printf("%d \n",10/20);
//	printf("%d \n",10%20); //���������� ���꿡�� ����� �� �ִ�.
//
//}
//#include<stdio.h>
//void main(){
//	int a=100,b=200; //��������(������ �޸𸮻��� �̸�(�ּҰ�))
//					 //�ѹ��� �ʱ�ȭ ����
//	printf("%d %d\n",a,b);
//
//}
//#include<stdio.h>
//void main(){
//	int a=200; //��������(������ �޸𸮻��� �̸�(�ּҰ�))
//
//	printf("%d %d\n", a, 100);//"%d %d\n" => String
//	printf("%d %d\n", a, 100);//"%d %d\n" => String
//	printf("%d %d\n", a, 100);//"%d %d\n" => String
//							  //�Լ��� �����ذ��� ���� ��ɵ��� ����
//}
//#include<stdio.h>
//void main(){
//	int a=100; //��������(������ �޸𸮻��� �̸�(�ּҰ�))
//
//	printf("%d %d\n", a, 100);//"%d %d\n" => String
//							  //�Լ��� �����ذ��� ���� ��ɵ��� ����
//}
//#include<stdio.h>
//void main(){
//	int a; //��������(������ �޸𸮻��� �̸�(�ּҰ�))
//
//	printf("%d \n", a);//"%d %d\n" => String
//							  //�Լ��� �����ذ��� ���� ��ɵ��� ����
//}
//#include<stdio.h>
//void main(){
//	int a,b; //��������(������ �޸𸮻��� �̸�(�ּҰ�))
//
//	a=100; //a������ 100����
//	b=200; 
//	printf("%d %d\n", a, b);//"%d %d\n" => String
//							  //�Լ��� �����ذ��� ���� ��ɵ��� ����
//}
//#include<stdio.h>
//void main(){
//	printf("%d %d\n",100,200);//"%d %d\n" => String
//							  //�Լ��� �����ذ��� ���� ��ɵ��� ����
//}
//#include<stdio.h>
//void main(){
//	printf("%d %d\n",100,200);
//}
#include <stdio.h>

int main(void)
{

}