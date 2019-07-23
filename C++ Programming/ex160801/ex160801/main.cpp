//
//#include<iostream>
//using namespace std;
//void main()
//{
//	int n = 10;
//	int&r = n;
//
//	cout<<n<<','<<r<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//void main()
//{
//	int n = 10;
//	int*p = &n; //포인터를 갖는 참조
//
//	cout<<n<<','<<*p<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//int n=10;
//int* func()
//{
//	return &n;
//}
//void main()
//{
//	int*p = func();
//	cout<<*p<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//int n=10;
//int* func()
//{
//	return &n;
//}
//void main()
//{
//	*func()=20;//변환가능
//	cout<<*func()<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//int n=10;
//int& func()
//{
//	return n; //n의 참조를 반환
//}
//void main()
//{
//	func()=20;//변환가능
//	cout<<func()<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//int n=10;
//const int& func() //복사를 하지않기 위해서 사용된 참조형이므로 const사용
//{
//	return n; //n의 참조를 반환
//}
//void main()
//{
//	if(func()==20)//변환가능
//		cout<<func()<<endl;
//}

//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl; //함수안에서 멤버변수를 변경하지 않겠다는 뜻
//	}
//};
//void main()
//{
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl; //함수안에서 멤버변수를 변경하지 않겠다는 뜻
//	}
//};
//Point org(5,5);
//Point RetPoint()
//{
//	return org;
//}
//void main()
//{
//	RetPoint().Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl; //함수안에서 멤버변수를 변경하지 않겠다는 뜻
//	}
//};
//Point org(5,5);
//Point RetPoint()
//{
//	return org;
//}
//void main()
//{
//	const Point&pt=RetPoint();
//	pt.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl; //함수안에서 멤버변수를 변경하지 않겠다는 뜻
//	}
//};
//Point org(5,5); //org 전역객체생성
//Point RetPoint()
//{
//	return org; //복사본이 생성된다.
//}
//void main()
//{
//	Point&pt=RetPoint();
//	pt = Point(0,0); //복사본이 변경된다. org값은 변경안됨
//	pt.Print();
//	org.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl; //함수안에서 멤버변수를 변경하지 않겠다는 뜻
//	}
//};
//Point org(5,5); //org 전역객체생성
//Point&RetPoint() 
//{
//	return org; //org를 참조형으로 보낸다
//}
//void main()
//{
//	Point&pt=RetPoint();
//	pt = Point(0,0); //org값이 변경됨
//	pt.Print();
//	org.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl; //함수안에서 멤버변수를 변경하지 않겠다는 뜻
//	}
//};
//Point&RetPoint() 
//{
//	static Point org(5,5); //static객체로 함수를 이용해서 수정&사용하게한다.
//	return org; //org를 참조형으로 보낸다
//}
//void main()
//{
//	Point&pt=RetPoint();
//	pt = Point(0,0); //org값이 변경됨
//	pt.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl; //함수안에서 멤버변수를 변경하지 않겠다는 뜻
//	}
//};
//const Point&RetPoint() 
//{
//	static Point org(5,5); //static객체로 함수를 이용해서 수정&사용하게한다.
//	return org; //org를 참조형으로 보낸다
//}
//void main()
//{
//	Point&pt=RetPoint(); //변경불가능한 객체를 변경가능한 객체로 참조하려하려고해서 컴파일오류
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl; //함수안에서 멤버변수를 변경하지 않겠다는 뜻
//	}
//};
//const Point&RetPoint() 
//{
//	static Point org(5,5); //static객체로 함수를 이용해서 수정&사용하게한다.
//	return org; //org를 참조형으로 보낸다
//}
//void main()
//{
//	const Point&pt=RetPoint(); //변경불가능한 객체는 변경불가능한 객체로만 참조가능
//	pt.Print();
//	pt = Point(0,0); //수정불가능해서 오류
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl; //함수안에서 멤버변수를 변경하지 않겠다는 뜻
//	}
//};
//const Point&RetPoint() 
//{
//	static Point org(5,5); //static객체로 함수를 이용해서 수정&사용하게한다.
//	return org; //org를 참조형으로 보낸다
//}
//void main()
//{
//	Point*parr = new Point[5];
//	for(int i=0;i<5;i++)
//		parr[i]=Point(i,i);
//	for(int i=0;i<5;i++)
//		parr[i].Print();
//	delete []parr;
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl; //함수안에서 멤버변수를 변경하지 않겠다는 뜻
//	}
//};
//const Point&RetPoint() 
//{
//	static Point org(5,5); //static객체로 함수를 이용해서 수정&사용하게한다.
//	return org; //org를 참조형으로 보낸다
//}
//void InitPoint(Point* parr) //byte수가 작아서 굳이 참조안쓴다.
//{
//	for(int i=0;i<5;i++)
//		parr[i]=Point(i,i);
//}
//void PrintPoint(const Point*parr)
//{
//	for(int i=0;i<5;i++)
//		parr[i].Print();
//}
//void main()
//{
//	Point*parr = new Point[5];
//	InitPoint(parr);
//	PrintPoint(parr);
//	delete []parr;
//}
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Student
//{
//	char name[20];
//	int age;
//	int grade;
//public:
//	Student(const char*n,int a,int g):age(a),grade(g)
//	{
//		strcpy(name,n);
//	}
//	const char* GetName()const{return name;}
//	int GetAge()const{return age;}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;}
//};
//void main()
//{
//	Student s1("Hong Gil-Dong",24,3);
//
//	s1.Print();
//	cout<<s1.GetName()<<endl;
//}
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl; //함수안에서 멤버변수를 변경하지 않겠다는 뜻
//	}
//};
//const Point&RetPoint() 
//{
//	static Point org(5,5); //static객체로 함수를 이용해서 수정&사용하게한다.
//	return org; //org를 참조형으로 보낸다
//}
//void InitPoint(Point* parr) //byte수가 작아서 굳이 참조안쓴다.
//{
//	for(int i=0;i<5;i++)
//		parr[i]=Point(i,i);
//}
//void PrintPoint(const Point*parr)
//{
//	for(int i=0;i<5;i++)
//		parr[i].Print();
//}
//void main()
//{
//	Point*parr = new Point[5];
//	InitPoint(parr);
//	PrintPoint(parr);
//	delete []parr;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Person
//{
//	char name[20];
//	int age;
//public:
//	Person(const char*n,int a):age(a)
//	{
//		strcpy(name,n);
//	}
//	const char*GetName()const{return name;}
//	int GetAge()const{return age;}
//	void Print()const{cout<<"name: "<<name<<","<<"age: "<<age<<endl;}
//};
//class Student
//{
//	char name[20];
//	int age;
//	int grade;
//public:
//	Student(const char*n,int a,int g):age(a),grade(g)
//	{
//		strcpy(name,n);
//	}
//	const char* GetName()const{return name;}
//	int GetAge()const{return age;}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;}
//};
//void main()
//{
//	Person p1("Kim Sung-Jin",30);
//	p1.Print();
//	cout<<p1.GetName()<<endl;
//	Student s1("Hong Gil-Dong",24,3);
//	s1.Print();
//	cout<<s1.GetName()<<endl;
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Person
//{
//protected:
//	char name[20];
//	int age;
//public:
//	Person(const char*n,int a):age(a)
//	{
//		strcpy(name,n);
//	}
//	const char*GetName()const{return name;}
//	int GetAge()const{return age;}
//	void Print()const{cout<<"name: "<<name<<","<<"age: "<<age<<endl;}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const char*n,int a,int g):Person(n,a),grade(g){}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;}
//};
////서비스코드에서 상속을 했다고 클라이언트 코드를 수정할필요는 없다.
////
//void main()
//{
//	Person p1("Kim Sung-Jin",30);
//	p1.Print();
//	cout<<p1.GetName()<<endl;
//	Student s1("Hong Gil-Dong",24,3);
//	s1.Print();
//	cout<<s1.GetName()<<endl;
//}


//
//
////1.Person p1=s1 잘리는 문제가 발생하므로 쓰지 않는다.(문법적으로는 허용한다.)
////2.Person&rp=s1
////3.Person*p=&s1
////자식형식을 부모형식으로 변환한다.
////P<-S라는 것을 보여주기위한 코드
////IS-A관계가 성립하기 때문에 위의 코드처럼 형변환이 가능하다.
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Person
//{
//protected:
//	char name[20];
//	int age;
//public:
//	Person(const char*n,int a):age(a)
//	{
//		strcpy(name,n);
//	}
//	const char*GetName()const{return name;}
//	int GetAge()const{return age;}
//	void Print()const{cout<<"name: "<<name<<","<<"age: "<<age<<endl;}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const char*n,int a,int g):Person(n,a),grade(g){}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;}
//};
////서비스코드에서 상속을 했다고 클라이언트 코드를 수정할필요는 없다.
////
//void main()
//{
//	Person p1("Kim Sung-Jin",30);
//	p1.Print();
//	cout<<p1.GetName()<<endl;
//	Student s1("Hong Gil-Dong",24,3);
//	s1.Print();
//	cout<<s1.GetName()<<endl;
//}
//
//
////1.Person p1=s1 잘리는 문제가 발생하므로 쓰지 않는다.(문법적으로는 허용한다.)
////2.Person&rp=s1
////3.Person*p=&s1
////자식형식을 부모형식으로 변환한다.
////P<-S라는 것을 보여주기위한 코드
////IS-A관계가 성립하기 때문에 위의 코드처럼 형변환이 가능하다.
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Person
//{
//protected:
//	char name[20];
//	int age;
//public:
//	Person(const char*n,int a):age(a)
//	{
//		strcpy(name,n);
//	}
//	const char*GetName()const{return name;}
//	int GetAge()const{return age;}
//	void Print()const{cout<<"name: "<<name<<","<<"age: "<<age<<endl;}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const char*n,int a,int g):Person(n,a),grade(g){}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;}
//};
////서비스코드에서 상속을 했다고 클라이언트 코드를 수정할필요는 없다.
////
//void main()
//{
//	Student s1("Hong",23,2);
//	Person& rp = s1;
//
//	rp.Print();
//	cout<<rp.GetName()<<','<<rp.GetAge()<<endl;
//}
//
//
//
////1.Person p1=s1 잘리는 문제가 발생하므로 쓰지 않는다.(문법적으로는 허용한다.)
////2.Person&rp=s1
////3.Person*p=&s1
////자식형식을 부모형식으로 변환한다.
////P<-S라는 것을 보여주기위한 코드
////IS-A관계가 성립하기 때문에 위의 코드처럼 형변환이 가능하다.
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Person
//{
//protected:
//	char name[20];
//	int age;
//public:
//	Person(const char*n,int a):age(a)
//	{
//		strcpy(name,n);
//	}
//	const char*GetName()const{return name;}
//	int GetAge()const{return age;}
//	virtual void Print()const{cout<<"name: "<<name<<","<<"age: "<<age<<endl;}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const char*n,int a,int g):Person(n,a),grade(g){}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;}
//};
////서비스코드에서 상속을 했다고 클라이언트 코드를 수정할필요는 없다.
//void main()
//{
//	Student s1("Hong",23,2);
//	Person*p = &s1;
//
//	p->Print(); //student의 정보가아닌 person의 정보가 출력된다.
//				//virtual키워드를 이용하여 다형적인 메서드를 만들어준다.
//				//이러한 객체의 특성을 다형성이라고 해준다.
//				//동일한 메시지를 유사한 타입객체(Person)에 보냈을떄 실제 타입객체(Student)가 반응하는것
//}

//
//
////1.Person p1=s1 잘리는 문제가 발생하므로 쓰지 않는다.(문법적으로는 허용한다.)
////2.Person&rp=s1
////3.Person*p=&s1
////자식형식을 부모형식으로 변환한다.
////P<-S라는 것을 보여주기위한 코드
////IS-A관계가 성립하기 때문에 위의 코드처럼 형변환이 가능하다.
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Person
//{
//protected:
//	char name[20];
//	int age;
//public:
//	Person(const char*n,int a):age(a)
//	{
//		strcpy(name,n);
//	}
//	const char*GetName()const{return name;}
//	int GetAge()const{return age;}
//	virtual void Print()const{cout<<"name: "<<name<<","<<"age: "<<age<<endl;}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const char*n,int a,int g):Person(n,a),grade(g){}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;}
//};
//class Professor : public Person
//{
//	char position[20];
//public:
//	Professor(const char*n,int a,const char* p):Person(n,a),position(p)
//	{
//		strcpy(position,p);
//	}
//	const char*GetPosition()const{return position;}
//	void Print()const
//	{
//		cout<<"name: "<<name<<","<<"age: "<<age<<","<<"position: "<<position<<endl;
//	}
//};
////서비스코드에서 상속을 했다고 클라이언트 코드를 수정할필요는 없다.
//void main()
//{
//	Student s1("Hong",23,2);
//	Person*p = &s1;
//
//	p->Print(); //student의 정보가아닌 person의 정보가 출력된다.
//				//virtual키워드를 이용하여 다형적인 메서드를 만들어준다.
//				//이러한 객체의 특성을 다형성이라고 해준다.
//				//동일한 메시지를 유사한 타입객체(Person)에 보냈을떄 실제 타입객체(Student)가 반응하는것
//}
//
//
////1.Person p1=s1 잘리는 문제가 발생하므로 쓰지 않는다.(문법적으로는 허용한다.)
////2.Person&rp=s1
////3.Person*p=&s1
////자식형식을 부모형식으로 변환한다.
////P<-S라는 것을 보여주기위한 코드
////IS-A관계가 성립하기 때문에 위의 코드처럼 형변환이 가능하다.
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	char name[20];
//	int age;
//public:
//	Person(const char*n,int a):age(a)
//	{
//		strcpy(name,n);
//	}
//	const char*GetName()const{return name;}
//	int GetAge()const{return age;}
//	virtual void Print()const{cout<<"name: "<<name<<","<<"age: "<<age<<endl;}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const char*n,int a,int g):Person(n,a),grade(g){}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;}
//};
//class Professor : public Person
//{
//	char position[20];
//public:
//	Professor(const char*n,int a,const char* p):Person(n,a)
//	{
//		strcpy(position,p);
//	}
//	const char*GetPosition()const{return position;}
//	void Print()const
//	{
//		cout<<"name: "<<name<<","<<"age: "<<age<<","<<"position: "<<position<<endl;
//	}
//};
////서비스코드에서 상속을 했다고 클라이언트 코드를 수정할필요는 없다.
//void main()
//{
//	Student s1("Hong",23,2);
//	Professor pf1("Kim",55,"부교수");
//	Person*p = &s1;
//	srand((unsigned int)time(0));
//	if(rand()%2==0)
//		p=&s1;
//	else
//		p=&pf1;
//	p->Print(); //student의 정보가아닌 person의 정보가 출력된다.
//				//virtual키워드를 이용하여 다형적인 메서드를 만들어준다.
//				//이러한 객체의 특성을 다형성이라고 해준다.
//				//동일한 메시지를 유사한 타입객체(Person)에 보냈을떄 실제 타입객체(Student)가 반응하는것
//				//똑같은 메서드를 자식클래스에서도 정의해주어야한다 메서드 오버라이딩이라고함
//				//c++에서는 다형성의 정의가 다름
//}
//
//
////1.Person p1=s1 잘리는 문제가 발생하므로 쓰지 않는다.(문법적으로는 허용한다.)
////2.Person&rp=s1
////3.Person*p=&s1
////자식형식을 부모형식으로 변환한다.
////P<-S라는 것을 보여주기위한 코드
////IS-A관계가 성립하기 때문에 위의 코드처럼 형변환이 가능하다.
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	char name[20];
//	int age;
//public:
//	Person(const char*n,int a):age(a)
//	{
//		strcpy(name,n);
//	}
//	const char*GetName()const{return name;}
//	int GetAge()const{return age;}
//	virtual void Print()const{cout<<"name: "<<name<<","<<"age: "<<age<<endl;}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const char*n,int a,int g):Person(n,a),grade(g){}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;} //부모클래스의 함수가 virtual이면 자동으로 자식클래스도 virtual함수이다.(생략된거임)
//};
//class Professor : public Person
//{
//	char position[20];
//public:
//	Professor(const char*n,int a,const char* p):Person(n,a)
//	{
//		strcpy(position,p);
//	}
//	const char*GetPosition()const{return position;}
//	void Print()const
//	{
//		cout<<"name: "<<name<<","<<"age: "<<age<<","<<"position: "<<position<<endl;
//	}
//};
////서비스코드에서 상속을 했다고 클라이언트 코드를 수정할필요는 없다.
//void main()
//{
//	Student s1("Hong",23,2);
//	Professor pf1("Kim",55,"부교수");
//	Person*p = &s1;
//	srand((unsigned int)time(0));
//	if(rand()%2==0)
//		p=&s1;
//	else
//		p=&pf1;
//	p->Print(); //student의 정보가아닌 person의 정보가 출력된다.
//				//virtual키워드를 이용하여 다형적인 메서드를 만들어준다.
//				//이러한 객체의 특성을 다형성이라고 해준다.
//				//동일한 메시지를 유사한 타입객체(Person)에 보냈을떄 실제 타입객체(Student)가 반응하는것
//				//똑같은 메서드를 자식클래스에서도 정의해주어야한다 메서드 오버라이딩이라고함
//				//c++에서는 다형성의 정의가 다름
//}
//
//
////1.Person p1=s1 잘리는 문제가 발생하므로 쓰지 않는다.(문법적으로는 허용한다.)
////2.Person&rp=s1
////3.Person*p=&s1
////자식형식을 부모형식으로 변환한다.
////P<-S라는 것을 보여주기위한 코드
////IS-A관계가 성립하기 때문에 위의 코드처럼 형변환이 가능하다.
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	char name[20];
//	int age;
//public:
//	Person(const char*n,int a):age(a)
//	{
//		strcpy(name,n);
//	}
//	const char*GetName()const{return name;}
//	int GetAge()const{return age;}
//	virtual void Print()const{cout<<"name: "<<name<<","<<"age: "<<age<<endl;}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const char*n,int a,int g):Person(n,a),grade(g){}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;} //부모클래스의 함수가 virtual이면 자동으로 자식클래스도 virtual함수이다.(생략된거임)
//};
//class Professor : public Person
//{
//	char position[20];
//public:
//	Professor(const char*n,int a,const char* p):Person(n,a)
//	{
//		strcpy(position,p);
//	}
//	const char*GetPosition()const{return position;}
//	void Print()const
//	{
//		cout<<"name: "<<name<<","<<"age: "<<age<<","<<"position: "<<position<<endl;
//	}
//};
//void PrintPerson(const Person*p) //Person을 상속받은 모든 하위클래스들을 매개변수로 받을 수 있다.
//{
//	p->Print();
//}
//void main()
//{
//	Student s1("Hong",23,2);
//	Professor pf1("Kim",55,"부교수");
//	PrintPerson(&s1);
//	PrintPerson(&pf1);
//}
//
//
////1.Person p1=s1 잘리는 문제가 발생하므로 쓰지 않는다.(문법적으로는 허용한다.)
////2.Person&rp=s1
////3.Person*p=&s1
////자식형식을 부모형식으로 변환한다.
////P<-S라는 것을 보여주기위한 코드
////IS-A관계가 성립하기 때문에 위의 코드처럼 형변환이 가능하다.
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	char name[20];
//	int age;
//public:
//	Person(const char*n,int a):age(a)
//	{
//		strcpy(name,n);
//		cout<<"Person()"<<endl;
//	}
//	~Person(){cout<<"~Person()"<<endl;}
//	const char*GetName()const{return name;}
//	int GetAge()const{return age;}
//	virtual void Print()const{cout<<"name: "<<name<<","<<"age: "<<age<<endl;}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const char*n,int a,int g):Person(n,a),grade(g) //부모의생성자가 항상 첫줄에와야한다.
//														   //자식클래스의 멤버가 부모클래스의 생성자에의해 변경될수있기때문
//	{
//		cout<<"Student()"<<endl;
//	}
//	~Student()
//	{
//		cout<<"~Student()"<<endl;
//	}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;} //부모클래스의 함수가 virtual이면 자동으로 자식클래스도 virtual함수이다.(생략된거임)
//};
//class Professor : public Person
//{
//	char position[20];
//public:
//	Professor(const char*n,int a,const char* p):Person(n,a)
//	{
//		strcpy(position,p);
//		cout<<"Professor()"<<endl;
//	}
//	~Professor(){
//		cout<<"~Professor()"<<endl;
//	}
//	const char*GetPosition()const{return position;}
//	void Print()const
//	{
//		cout<<"name: "<<name<<","<<"age: "<<age<<","<<"position: "<<position<<endl;
//	}
//};
//void PrintPerson(const Person*p) //Person을 상속받은 모든 하위클래스들을 매개변수로 받을 수 있다.
//{
//	p->Print();
//}
//void main()
//{
//	Student s1("Hong",23,2);
//	Professor pf1("Kim",55,"부교수");
//	PrintPerson(&s1);
//	PrintPerson(&pf1);
//}
//
//
////1.Person p1=s1 잘리는 문제가 발생하므로 쓰지 않는다.(문법적으로는 허용한다.)
////2.Person&rp=s1
////3.Person*p=&s1
////자식형식을 부모형식으로 변환한다.
////P<-S라는 것을 보여주기위한 코드
////IS-A관계가 성립하기 때문에 위의 코드처럼 형변환이 가능하다.
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	char name[20];
//	int age;
//public:
//	Person(const char*n,int a):age(a)
//	{
//		strcpy(name,n);
//		cout<<"Person()"<<endl;
//	}
//	~Person()
//	{
//		cout<<"~Person()"<<endl;
//
//	}
//	const char*GetName()const{return name;}
//	int GetAge()const{return age;}
//	virtual void Print()const{cout<<"name: "<<name<<","<<"age: "<<age<<endl;}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const char*n,int a,int g):Person(n,a),grade(g) //부모의생성자가 항상 첫줄에와야한다.
//														   //자식클래스의 멤버가 부모클래스의 생성자에의해 변경될수있기때문
//	{
//		cout<<"Student()"<<endl;
//	}
//	~Student()
//	{
//		cout<<"~Student()"<<endl;
//	}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;} //부모클래스의 함수가 virtual이면 자동으로 자식클래스도 virtual함수이다.(생략된거임)
//};
//class Professor : public Person
//{
//	char position[20];
//public:
//	Professor(const char*n,int a,const char* p):Person(n,a)
//	{
//		strcpy(position,p);
//		cout<<"Professor()"<<endl;
//	}
//	~Professor(){
//		cout<<"~Professor()"<<endl;
//	}
//	const char*GetPosition()const{return position;}
//	void Print()const
//	{
//		cout<<"name: "<<name<<","<<"age: "<<age<<","<<"position: "<<position<<endl;
//	}
//};
//void PrintPerson(const Person*p) //Person을 상속받은 모든 하위클래스들을 매개변수로 받을 수 있다.
//{
//	p->Print();
//}
//void main()
//{
//	Person*p=new Student("Hong",23,2); //new가 있으면 delete가있어야한다.
//	PrintPerson(p);
//	delete (Student*)p; //형변환을 해서 소멸자를 호출하면 구체적인 프로그램이된다.
//				//형변환을 최소화하는게 더객체지향적인 프로그램이다.
//}



//1.Person p1=s1 잘리는 문제가 발생하므로 쓰지 않는다.(문법적으로는 허용한다.)
//2.Person&rp=s1
//3.Person*p=&s1
//자식형식을 부모형식으로 변환한다.
//P<-S라는 것을 보여주기위한 코드
//IS-A관계가 성립하기 때문에 위의 코드처럼 형변환이 가능하다.
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	char name[20];
//	int age;
//public:
//	Person(const char*n,int a):age(a)
//	{
//		strcpy(name,n);
//		cout<<"Person()"<<endl;
//	}
//	virtual ~Person()
//	{
//		cout<<"~Person()"<<endl;
//
//	}
//	const char*GetName()const{return name;}
//	int GetAge()const{return age;}
//	virtual void Print()const{cout<<"name: "<<name<<","<<"age: "<<age<<endl;}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const char*n,int a,int g):Person(n,a),grade(g) //부모의생성자가 항상 첫줄에와야한다.
//														   //자식클래스의 멤버가 부모클래스의 생성자에의해 변경될수있기때문
//	{
//		cout<<"Student()"<<endl;
//	}
//	~Student()
//	{
//		cout<<"~Student()"<<endl;
//	}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;} //부모클래스의 함수가 virtual이면 자동으로 자식클래스도 virtual함수이다.(생략된거임)
//};
//class Professor : public Person
//{
//	char position[20];
//public:
//	Professor(const char*n,int a,const char* p):Person(n,a)
//	{
//		strcpy(position,p);
//		cout<<"Professor()"<<endl;
//	}
//	~Professor(){
//		cout<<"~Professor()"<<endl;
//	}
//	const char*GetPosition()const{return position;}
//	void Print()const
//	{
//		cout<<"name: "<<name<<","<<"age: "<<age<<","<<"position: "<<position<<endl;
//	}
//};
//void PrintPerson(const Person*p) //Person을 상속받은 모든 하위클래스들을 매개변수로 받을 수 있다.
//{
//	p->Print();
//}
//void main()
//{
//	Person*p=new Student("Hong",23,2); //new가 있으면 delete가있어야한다.
//	PrintPerson(p);
//	delete p; //형변환을 해서 소멸자를 호출하면 구체적인 프로그램이된다.
//				//형변환을 최소화하는게 더객체지향적인 프로그램이다.
//				//형변환보다 메서드 오버라이딩으로(virtual키워드)처리한다.
//				//super클래스의 소멸자는 무조건 virtual로 해야한다.
//}


//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	char name[20];
//	int age;
//public:
//	Person(const char*n,int a):age(a)
//	{
//		strcpy(name,n);
//		cout<<"Person()"<<endl;
//	}
//	virtual ~Person()
//	{
//		cout<<"~Person()"<<endl;
//
//	}
//	const char*GetName()const{return name;}
//	int GetAge()const{return age;}
//	virtual void Print()const{cout<<"name: "<<name<<","<<"age: "<<age<<endl;}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const char*n,int a,int g):Person(n,a),grade(g) //부모의생성자가 항상 첫줄에와야한다.
//														   //자식클래스의 멤버가 부모클래스의 생성자에의해 변경될수있기때문
//	{
//		cout<<"Student()"<<endl;
//	}
//	~Student()
//	{
//		cout<<"~Student()"<<endl;
//	}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;} //부모클래스의 함수가 virtual이면 자동으로 자식클래스도 virtual함수이다.(생략된거임)
//};
//class Professor : public Person
//{
//	char position[20];
//public:
//	Professor(const char*n,int a,const char* p):Person(n,a)
//	{
//		strcpy(position,p);
//		cout<<"Professor()"<<endl;
//	}
//	~Professor(){
//		cout<<"~Professor()"<<endl;
//	}
//	const char*GetPosition()const{return position;}
//	void Print()const
//	{
//		cout<<"name: "<<name<<","<<"age: "<<age<<","<<"position: "<<position<<endl;
//	}
//};
//void PrintPerson(const Person*p) //Person을 상속받은 모든 하위클래스들을 매개변수로 받을 수 있다.
//{
//	p->Print();
//}
//void main()
//{
//	Person*p=new Student("Hong",23,2); //new가 있으면 delete가있어야한다.
//	PrintPerson(p);
//	delete p; //형변환을 해서 소멸자를 호출하면 구체적인 프로그램이된다.
//				//형변환을 최소화하는게 더객체지향적인 프로그램이다.
//				//형변환보다 메서드 오버라이딩으로(virtual키워드)처리한다.
//				//super클래스의 소멸자는 무조건 virtual로 해야한다.
//				//c++에서의 다형성은 virtual키워드를 이용하여 ㅇㄴ러ㅏㅣㅎㅇㄴㅁ
//}
//
//
//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	char name[20];
//	int age;
//public:
//	Person(const char*n,int a):age(a)
//	{
//		strcpy(name,n);
//		cout<<"Person()"<<endl;
//	}
//	virtual ~Person()
//	{
//		cout<<"~Person()"<<endl;
//
//	}
//	const char*GetName()const{return name;}
//	int GetAge()const{return age;}
//	virtual void Print()const=0;
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const char*n,int a,int g):Person(n,a),grade(g) //부모의생성자가 항상 첫줄에와야한다.
//														   //자식클래스의 멤버가 부모클래스의 생성자에의해 변경될수있기때문
//	{
//		cout<<"Student()"<<endl;
//	}
//	~Student()
//	{
//		cout<<"~Student()"<<endl;
//	}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;} //부모클래스의 함수가 virtual이면 자동으로 자식클래스도 virtual함수이다.(생략된거임)
//};
//class Professor : public Person
//{
//	char position[20];
//public:
//	Professor(const char*n,int a,const char* p):Person(n,a)
//	{
//		strcpy(position,p);
//		cout<<"Professor()"<<endl;
//	}
//	~Professor(){
//		cout<<"~Professor()"<<endl;
//	}
//	const char*GetPosition()const{return position;}
//	void Print()const
//	{
//		cout<<"name: "<<name<<","<<"age: "<<age<<","<<"position: "<<position<<endl;
//	}
//};
//void PrintPerson(const Person*p) //Person을 상속받은 모든 하위클래스들을 매개변수로 받을 수 있다.
//{
//	p->Print();
//}
//void main()
//{
//	//new Person("Lee",20); //추상클래스 객체생성 못함
//	Person*p=new Student("Hong",23,2); //new가 있으면 delete가있어야한다.
//	PrintPerson(p);
//	delete p; //형변환을 해서 소멸자를 호출하면 구체적인 프로그램이된다.
//				//형변환을 최소화하는게 더객체지향적인 프로그램이다.
//				//형변환보다 메서드 오버라이딩으로(virtual키워드)처리한다.
//				//super클래스의 소멸자는 무조건 virtual로 해야한다.
//				//c++에서의 다형성은 virtual키워드를 이용하여 ㅇㄴ러ㅏㅣㅎㅇㄴㅁ
//	p=new Professor("Kim",60,"부교수");
//	PrintPerson(p);
//	delete p;
//}