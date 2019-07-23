//#include<stdio.h>
//void main(){
//	//////////////////////&,*,[]  <--중요한 연산자 ///////////////////////////
//	
//	int n = 10;
//
//	printf("%d\n",*&n);
//	printf("%d\n",(&n)[0]); //(&n)[0]    ==>    []연산자가 먼저 연산되므로 주소를 먼저 ()로 묶어 주어야 한다.
//	////[]는 *와 똑같은연산자임 *주소, 주소[i] 해석하면 바이너리 코드가같다는 의미이다.
//	////					  p[i] == *(p+i)  
//}
//#include<stdio.h>
//void main(){
//	//////////////////////&,*,[]  <--중요한 연산자 ///////////////////////////
//	
//	int n = 10;
//	////[]는 *와 똑같은연산자임 *주소, 주소[i] 해석하면 바이너리 코드가같다는 의미이다.
//	////					p   ==  p[i] == *(p+i)  
//}
//#include<stdio.h>
//void main(){
//	//////////////////////&,*,[]  <--중요한 연산자 ///////////////////////////
//	
//	int n = 10;
//	printf("%d\n",*&n);  //&는 주소연산자 변수앞에만 붙을 수 있음
//	printf("%p\n",&n);  //&는 주소연산자 변수앞에만 붙을 수 있음
//	printf("%p\n",&*&n);  //&는 주소연산자 변수앞에만 붙을 수 있음
//						//*는 주소 앞에 붙음   *&n  ==>  주소의 메모리 이름
//						//*와 &는 상대적인 관계이다.
//}
//#include<stdio.h>
//void main(){
//	//////////////////////&,*,[]  <--중요한 연산자 ///////////////////////////
//	
//	int n = 10;
//	printf("%p\n",&n);  //&는 주소연산자 변수앞에만 붙을 수 있음
//						//*는 주소 앞에 붙음   *&n  ==>  주소의 메모리 이름
//						//*와 &는 상대적인 관계이다.
//}
#include<stdio.h>
void main(){
	//////////////////////&,*,[]  <--중요한 연산자 ///////////////////////////
	
	int n = 10;
	printf("%d %x %p\n",&n,&n,&n);  //&는 주소연산자
	//%d는 10진법정수 %x는 8진수 %p는 16진수 16진수로 주소출력한다.

}
//#include<stdio.h>
//void main(){
//	//////////////////////&,*,[]  <--중요한 연산자 ///////////////////////////
//	
//	int n = 10;
//	printf("%d %x \n",&n,&n);  //&는 주소연산자
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
//	int a = 3; //0이아닌 모든 정수는 참으로 여긴다
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
//	//r=++n; //전위 연산자
//	r=(n++);  //후위 연산자 문장을 벗어날떄 writing한다.
//			//전위와 후위 상관없지만 문장을 벗어날때 증가시키고싶다면 의도적으로 후위를 써준다.
//	printf("%d %d\n",n,r);
//}
//#include<stdio.h>
//void main(){
//	int n=10;
//	//++n;  //++,--는 증감연산자   ++n   ===>   n=n+1
//	n++;  //++,--는 증감연산자   n++   ===>   n=n+1
//		  //독립적으로 사용했을떄는 둘다같음
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
//	printf("%d \n",10%20); //정수끼리의 연산에만 사용할 수 있다.
//
//}
//#include<stdio.h>
//void main(){
//	int a=100,b=200; //변수정의(변수는 메모리상의 이름(주소값))
//					 //한번에 초기화 가능
//	printf("%d %d\n",a,b);
//
//}
//#include<stdio.h>
//void main(){
//	int a=200; //변수정의(변수는 메모리상의 이름(주소값))
//
//	printf("%d %d\n", a, 100);//"%d %d\n" => String
//	printf("%d %d\n", a, 100);//"%d %d\n" => String
//	printf("%d %d\n", a, 100);//"%d %d\n" => String
//							  //함수는 문제해결을 위한 명령들의 집합
//}
//#include<stdio.h>
//void main(){
//	int a=100; //변수정의(변수는 메모리상의 이름(주소값))
//
//	printf("%d %d\n", a, 100);//"%d %d\n" => String
//							  //함수는 문제해결을 위한 명령들의 집합
//}
//#include<stdio.h>
//void main(){
//	int a; //변수정의(변수는 메모리상의 이름(주소값))
//
//	printf("%d \n", a);//"%d %d\n" => String
//							  //함수는 문제해결을 위한 명령들의 집합
//}
//#include<stdio.h>
//void main(){
//	int a,b; //변수정의(변수는 메모리상의 이름(주소값))
//
//	a=100; //a변수에 100대입
//	b=200; 
//	printf("%d %d\n", a, b);//"%d %d\n" => String
//							  //함수는 문제해결을 위한 명령들의 집합
//}
//#include<stdio.h>
//void main(){
//	printf("%d %d\n",100,200);//"%d %d\n" => String
//							  //함수는 문제해결을 위한 명령들의 집합
//}
//#include<stdio.h>
//void main(){
//	printf("%d %d\n",100,200);
//}
#include <stdio.h>

int main(void)
{

}