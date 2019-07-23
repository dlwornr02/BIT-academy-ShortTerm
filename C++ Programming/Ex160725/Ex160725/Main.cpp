//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	int n = 10;
//
//	cin >> n; //scanf = c-in // 입력스트림연산자
//	cout << n << endl; 
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	cout << 100 << ',' << 5.5 << ',' << "Hello" << endl; //형식지정자가 없음. 걍 출력하면 됨.
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	cout << 100 << endl; //endl은 \n이랑 같음.
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	cout << 100 << '\n';
//	//출력객체 //출력스트림연산자 //정수 // 출력스트림연산자 //개행
//	return 0;
//}

//#include <stdio.h>
////참조는 초기화시에만 가능함
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main(void)
//{
//	int a = 10, b = 20;
//
//	Swap(a, b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//
//void Increment(int& n)
//{
//	++n;
//}
//
//int main(void)
//{
//	int n = 10;
//
//	Increment(n);
//	printf("%d\n", n);
//	return 0;
//}


//이렇게 쓰면 불편
//#include <stdio.h>
//
//int Increment(int n)
//{
//	return n+1;
//}
//
//int main(void)
//{
//	int n = 10;
//	n = Increment(n);
//	printf("%d\n", n);
//	return 0;
//}


//#include <stdio.h>
//
//int Add(int a, int b, int& sum) //2. &를 붙여줌 
//{
//	sum = a+b;
//}
//
//int main(void)
//{
//	int a = 10, b = 20;
//	int n;
//
//	Add(a, b, n); //1. 주소 연산자 빼고
//
//	printf("%d\n", n);
//	return 0;
//}
//이게 귀찮아서 참조를 쓴단다;;
//#include <stdio.h>
//
//int Add(int a, int b, int* psum)
//{
//	*psum = a+b;
//}
//
//int main(void)
//{
//	int a = 10, b = 20;
//	int n;
//
//	Add(a, b, &n);
//
//	printf("%d\n", n);
//	return 0;
//}

//새로운 문법!! reference(참조)
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;
//	int& b = a; //reference(참조), pointer와는 다름
//				//b(reference변수)는 a의 reference다.
//	b = 20;
//	printf("%d %d\n", a, b);
//	printf("%p %p\n", &a, &b);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	bool b = true; //bool형식(true or false) : c++에선 0, 1로 출력해줌.
//	printf("%d\n", b);
//
//	b = false;
//	printf("%d\n", b);
//
//	printf("%d\n", sizeof(bool));
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	double d = 5.5;
//
//	//int n = (int)d; //형변환 연산자
//	int n = int(d); //C++에선 이렇게 사용
//
//	printf("%d\n", n);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	printf("%g\n", double()); //double의 기본값
//	printf("%d\n", int());
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;
//	int b(10); //C++에서는 이렇게 사용 두 문장 동일!
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	for(int i = 0; i < 10; ++i)
//	{
//		printf("%d\n", i);
//	}
//	for(int i = 0; i < 10; ++i)
//	{
//		printf("%d\n", i);
//	}
//	for(int i = 0; i < 10; ++i)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;
//	printf("%d\n", a);
//
//	int b = 20;
//	printf("%d\n", b);
//
//	return 0;
//}