////1.
//#include<stdio.h>
//void func()
//{
//	static int n=0;
//	n++;
//	printf("n = %d\n",n);
//}
//int main(void)
//{
//	int i;
//	for(i=0;i<5;i++){
//		func();
//	}
//}

//
////2.
//#include<stdio.h>
//int main(void)
//{
//	char c = 'A';
//	char *cp=&c;
//	char**cpp=&cp;
//	//����� �����ϱ�
//	sizeof(c),sizeof(char*),sizeof(cp),sizeof(cpp) //1 4 4 4
//		c,*cp,**cpp//A A A
//}
//
////4.
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//char* Input(){
//	char*buf=(char*)malloc(100);
//	gets(buf);
//	return buf;
//}
//int main(void)
//{
//	char*s = Input();
//	printf("%s\n",s);
//	free(s);
//}
//�ּҰ��� size�� 4����Ʈ�̴�. sizeof(&~~~)=4byte
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//struct Data
//{
//	char name[20];
//	int id;
//};
//int main(void)
//{
//	struct Data s1={"hansei",100},s2={"univ." , 200};
//	struct Data*ps = &s1;
//	printf("%s %d\n",s1.name,s1.id);
//	printf("%s %d\n",s2.name,s2.id);
//	printf("%s %d\n",ps->name,ps->id);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//	for(int i=0; i<10 ;++i)
//		printf("%d\n",i);
//	for(int i=0; i<10 ;++i)
//		printf("%d\n",i);
//	for(int i=0; i<10 ;++i)
//		printf("%d\n",i);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//	int a=10;
//	int b(10); //�̹����� �ʱ�ȭ ����
//
//	printf("%d\n",a);
//	printf("%d\n",b);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//	printf("%d\n",double());
//	printf("%d\n",int());
//}
////�⺻�����ڿ����� �����ð��� �����ϰڽ��ϴ�.
////default��
//

//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//	double d=5.5;
//	int n=(int)d;//��ȯ������
//	int n=int(d);//c++������ �̷��Ե� �����ϴ�.
//	printf("%d\n",n);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//	bool b=true;
//
//	printf("%d\n",b);
//
//	b=false;
//	printf("%d\n",b);
//
//	printf("%d\n",sizeof(bool));
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//	int a=10;
//	int&b=a; //b���������� �޸��� �̸��� �ΰ��ִ� ����
//	b=20;
//	printf("%d %d\n",a,b);
//	printf("%p %p\n",&a,&b);
//}
//
//
//int Add(int a,int b)
//{
//	return a+b;
//}
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//	int a=10,b=20;
//	int n= Add(a,b);
//	printf("%d\n",n);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//int Add(int a,int b,int*psum)
//{
//	*psum=a+b;
//}
//void main()
//{
//	int a=10,b=20;
//	int n; 
//	Add(a,b,&n);
//	printf("%d\n",n);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//void Add(int a,int b,int&sum)
//{
//	sum=a+b;
//}
//void main()
//{
//	int a=10,b=20;
//	int n; 
//	Add(a,b,n);
//	printf("%d\n",n);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//int Increment(int n)
//{
//	return n+1;
//}
//void main()
//{
//	int n=10;
//	n = Increment(n);
//	printf("%d\n",n);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//void Increment(int&n)
//{
//	++n;
//}
//void main()
//{
//	int n=10;
//	Increment(n);
//	printf("%d\n",n);
//}
//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//void Swap(int&a,int&b)
//{
//	int temp=a;
//	a=b;
//	b=temp;
//}
//void main()
//{
//	int a=10,b=20;
//	Swap(a,b);
//	printf("%d %d\n",a,b);
//}
//

//#include<iostream> //c++�� ǥ�� ���̺귯���� .h�� �پ� ���� �ʴ�.
//using namespace std; //������ ����Ѵ�
//void main()
//{
//	cout<<100<<'\n'; //cout�� ��°�ü��� �θ��� <<�� ��½�Ʈ�������ڶ�� �Ѵ�.
//}
//
//
//#include<iostream> //c++�� ǥ�� ���̺귯���� .h�� �پ� ���� �ʴ�.
//using namespace std; //������ ����Ѵ�
//void main()
//{
//	cout<<100<<endl; //cout�� ��°�ü��� �θ��� <<�� ��½�Ʈ�������ڶ�� �Ѵ�.
//	//endl=='\n';
//}
//
//
//#include<iostream> //c++�� ǥ�� ���̺귯���� .h�� �پ� ���� �ʴ�.
//using namespace std; //������ ����Ѵ�
//void main()
//{
//	cout<<100<<','<<5.5<<','<<"Hello!"<<endl; //cout�� ��°�ü��� �θ��� <<�� ��½�Ʈ�������ڶ�� �Ѵ�.
//	//endl=='\n' ���������ڸ� ���� �ʴ´�.
//}


#include<iostream> //c++�� ǥ�� ���̺귯���� .h�� �پ� ���� �ʴ�.
using namespace std; //������ ����Ѵ�
void main()
{
	int n=10;
	cin>>n;
	cout<<n<<endl;
}