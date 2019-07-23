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
//	//결과값 유추하기
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
//주소값의 size는 4바이트이다. sizeof(&~~~)=4byte
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
//	int b(10); //이문장이 초기화 문법
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
////기본생성자에대해 다음시간에 공부하겠습니다.
////default값
//

//
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//	double d=5.5;
//	int n=(int)d;//변환연산자
//	int n=int(d);//c++에서는 이렇게도 가능하다.
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
//	int&b=a; //b는참조변수 메모리의 이름을 두개주는 개념
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

//#include<iostream> //c++의 표준 라이브러리는 .h가 붙어 있지 않다.
//using namespace std; //무조건 써야한다
//void main()
//{
//	cout<<100<<'\n'; //cout은 출력객체라고 부르고 <<는 출력스트림연산자라고 한다.
//}
//
//
//#include<iostream> //c++의 표준 라이브러리는 .h가 붙어 있지 않다.
//using namespace std; //무조건 써야한다
//void main()
//{
//	cout<<100<<endl; //cout은 출력객체라고 부르고 <<는 출력스트림연산자라고 한다.
//	//endl=='\n';
//}
//
//
//#include<iostream> //c++의 표준 라이브러리는 .h가 붙어 있지 않다.
//using namespace std; //무조건 써야한다
//void main()
//{
//	cout<<100<<','<<5.5<<','<<"Hello!"<<endl; //cout은 출력객체라고 부르고 <<는 출력스트림연산자라고 한다.
//	//endl=='\n' 형식지정자를 쓰지 않는다.
//}


#include<iostream> //c++의 표준 라이브러리는 .h가 붙어 있지 않다.
using namespace std; //무조건 써야한다
void main()
{
	int n=10;
	cin>>n;
	cout<<n<<endl;
}