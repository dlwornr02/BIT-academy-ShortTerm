//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	int n = 10;
//
//	cin >> n; //scanf = c-in // �Է½�Ʈ��������
//	cout << n << endl; 
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	cout << 100 << ',' << 5.5 << ',' << "Hello" << endl; //���������ڰ� ����. �� ����ϸ� ��.
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	cout << 100 << endl; //endl�� \n�̶� ����.
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	cout << 100 << '\n';
//	//��°�ü //��½�Ʈ�������� //���� // ��½�Ʈ�������� //����
//	return 0;
//}

//#include <stdio.h>
////������ �ʱ�ȭ�ÿ��� ������
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


//�̷��� ���� ����
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
//int Add(int a, int b, int& sum) //2. &�� �ٿ��� 
//{
//	sum = a+b;
//}
//
//int main(void)
//{
//	int a = 10, b = 20;
//	int n;
//
//	Add(a, b, n); //1. �ּ� ������ ����
//
//	printf("%d\n", n);
//	return 0;
//}
//�̰� �����Ƽ� ������ ���ܴ�;;
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

//���ο� ����!! reference(����)
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;
//	int& b = a; //reference(����), pointer�ʹ� �ٸ�
//				//b(reference����)�� a�� reference��.
//	b = 20;
//	printf("%d %d\n", a, b);
//	printf("%p %p\n", &a, &b);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	bool b = true; //bool����(true or false) : c++���� 0, 1�� �������.
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
//	//int n = (int)d; //����ȯ ������
//	int n = int(d); //C++���� �̷��� ���
//
//	printf("%d\n", n);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	printf("%g\n", double()); //double�� �⺻��
//	printf("%d\n", int());
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;
//	int b(10); //C++������ �̷��� ��� �� ���� ����!
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