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
//	int*p = &n; //�����͸� ���� ����
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
//	*func()=20;//��ȯ����
//	cout<<*func()<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//int n=10;
//int& func()
//{
//	return n; //n�� ������ ��ȯ
//}
//void main()
//{
//	func()=20;//��ȯ����
//	cout<<func()<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//int n=10;
//const int& func() //���縦 �����ʱ� ���ؼ� ���� �������̹Ƿ� const���
//{
//	return n; //n�� ������ ��ȯ
//}
//void main()
//{
//	if(func()==20)//��ȯ����
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
//	void Print()const{cout<<x<<','<<y<<endl; //�Լ��ȿ��� ��������� �������� �ʰڴٴ� ��
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
//	void Print()const{cout<<x<<','<<y<<endl; //�Լ��ȿ��� ��������� �������� �ʰڴٴ� ��
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
//	void Print()const{cout<<x<<','<<y<<endl; //�Լ��ȿ��� ��������� �������� �ʰڴٴ� ��
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
//	void Print()const{cout<<x<<','<<y<<endl; //�Լ��ȿ��� ��������� �������� �ʰڴٴ� ��
//	}
//};
//Point org(5,5); //org ������ü����
//Point RetPoint()
//{
//	return org; //���纻�� �����ȴ�.
//}
//void main()
//{
//	Point&pt=RetPoint();
//	pt = Point(0,0); //���纻�� ����ȴ�. org���� ����ȵ�
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
//	void Print()const{cout<<x<<','<<y<<endl; //�Լ��ȿ��� ��������� �������� �ʰڴٴ� ��
//	}
//};
//Point org(5,5); //org ������ü����
//Point&RetPoint() 
//{
//	return org; //org�� ���������� ������
//}
//void main()
//{
//	Point&pt=RetPoint();
//	pt = Point(0,0); //org���� �����
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
//	void Print()const{cout<<x<<','<<y<<endl; //�Լ��ȿ��� ��������� �������� �ʰڴٴ� ��
//	}
//};
//Point&RetPoint() 
//{
//	static Point org(5,5); //static��ü�� �Լ��� �̿��ؼ� ����&����ϰ��Ѵ�.
//	return org; //org�� ���������� ������
//}
//void main()
//{
//	Point&pt=RetPoint();
//	pt = Point(0,0); //org���� �����
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
//	void Print()const{cout<<x<<','<<y<<endl; //�Լ��ȿ��� ��������� �������� �ʰڴٴ� ��
//	}
//};
//const Point&RetPoint() 
//{
//	static Point org(5,5); //static��ü�� �Լ��� �̿��ؼ� ����&����ϰ��Ѵ�.
//	return org; //org�� ���������� ������
//}
//void main()
//{
//	Point&pt=RetPoint(); //����Ұ����� ��ü�� ���氡���� ��ü�� �����Ϸ��Ϸ����ؼ� �����Ͽ���
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
//	void Print()const{cout<<x<<','<<y<<endl; //�Լ��ȿ��� ��������� �������� �ʰڴٴ� ��
//	}
//};
//const Point&RetPoint() 
//{
//	static Point org(5,5); //static��ü�� �Լ��� �̿��ؼ� ����&����ϰ��Ѵ�.
//	return org; //org�� ���������� ������
//}
//void main()
//{
//	const Point&pt=RetPoint(); //����Ұ����� ��ü�� ����Ұ����� ��ü�θ� ��������
//	pt.Print();
//	pt = Point(0,0); //�����Ұ����ؼ� ����
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
//	void Print()const{cout<<x<<','<<y<<endl; //�Լ��ȿ��� ��������� �������� �ʰڴٴ� ��
//	}
//};
//const Point&RetPoint() 
//{
//	static Point org(5,5); //static��ü�� �Լ��� �̿��ؼ� ����&����ϰ��Ѵ�.
//	return org; //org�� ���������� ������
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
//	void Print()const{cout<<x<<','<<y<<endl; //�Լ��ȿ��� ��������� �������� �ʰڴٴ� ��
//	}
//};
//const Point&RetPoint() 
//{
//	static Point org(5,5); //static��ü�� �Լ��� �̿��ؼ� ����&����ϰ��Ѵ�.
//	return org; //org�� ���������� ������
//}
//void InitPoint(Point* parr) //byte���� �۾Ƽ� ���� �����Ⱦ���.
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
//	void Print()const{cout<<x<<','<<y<<endl; //�Լ��ȿ��� ��������� �������� �ʰڴٴ� ��
//	}
//};
//const Point&RetPoint() 
//{
//	static Point org(5,5); //static��ü�� �Լ��� �̿��ؼ� ����&����ϰ��Ѵ�.
//	return org; //org�� ���������� ������
//}
//void InitPoint(Point* parr) //byte���� �۾Ƽ� ���� �����Ⱦ���.
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
////�����ڵ忡�� ����� �ߴٰ� Ŭ���̾�Ʈ �ڵ带 �������ʿ�� ����.
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
////1.Person p1=s1 �߸��� ������ �߻��ϹǷ� ���� �ʴ´�.(���������δ� ����Ѵ�.)
////2.Person&rp=s1
////3.Person*p=&s1
////�ڽ������� �θ��������� ��ȯ�Ѵ�.
////P<-S��� ���� �����ֱ����� �ڵ�
////IS-A���谡 �����ϱ� ������ ���� �ڵ�ó�� ����ȯ�� �����ϴ�.
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
////�����ڵ忡�� ����� �ߴٰ� Ŭ���̾�Ʈ �ڵ带 �������ʿ�� ����.
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
////1.Person p1=s1 �߸��� ������ �߻��ϹǷ� ���� �ʴ´�.(���������δ� ����Ѵ�.)
////2.Person&rp=s1
////3.Person*p=&s1
////�ڽ������� �θ��������� ��ȯ�Ѵ�.
////P<-S��� ���� �����ֱ����� �ڵ�
////IS-A���谡 �����ϱ� ������ ���� �ڵ�ó�� ����ȯ�� �����ϴ�.
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
////�����ڵ忡�� ����� �ߴٰ� Ŭ���̾�Ʈ �ڵ带 �������ʿ�� ����.
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
////1.Person p1=s1 �߸��� ������ �߻��ϹǷ� ���� �ʴ´�.(���������δ� ����Ѵ�.)
////2.Person&rp=s1
////3.Person*p=&s1
////�ڽ������� �θ��������� ��ȯ�Ѵ�.
////P<-S��� ���� �����ֱ����� �ڵ�
////IS-A���谡 �����ϱ� ������ ���� �ڵ�ó�� ����ȯ�� �����ϴ�.
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
////�����ڵ忡�� ����� �ߴٰ� Ŭ���̾�Ʈ �ڵ带 �������ʿ�� ����.
//void main()
//{
//	Student s1("Hong",23,2);
//	Person*p = &s1;
//
//	p->Print(); //student�� �������ƴ� person�� ������ ��µȴ�.
//				//virtualŰ���带 �̿��Ͽ� �������� �޼��带 ������ش�.
//				//�̷��� ��ü�� Ư���� �������̶�� ���ش�.
//				//������ �޽����� ������ Ÿ�԰�ü(Person)�� �������� ���� Ÿ�԰�ü(Student)�� �����ϴ°�
//}

//
//
////1.Person p1=s1 �߸��� ������ �߻��ϹǷ� ���� �ʴ´�.(���������δ� ����Ѵ�.)
////2.Person&rp=s1
////3.Person*p=&s1
////�ڽ������� �θ��������� ��ȯ�Ѵ�.
////P<-S��� ���� �����ֱ����� �ڵ�
////IS-A���谡 �����ϱ� ������ ���� �ڵ�ó�� ����ȯ�� �����ϴ�.
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
////�����ڵ忡�� ����� �ߴٰ� Ŭ���̾�Ʈ �ڵ带 �������ʿ�� ����.
//void main()
//{
//	Student s1("Hong",23,2);
//	Person*p = &s1;
//
//	p->Print(); //student�� �������ƴ� person�� ������ ��µȴ�.
//				//virtualŰ���带 �̿��Ͽ� �������� �޼��带 ������ش�.
//				//�̷��� ��ü�� Ư���� �������̶�� ���ش�.
//				//������ �޽����� ������ Ÿ�԰�ü(Person)�� �������� ���� Ÿ�԰�ü(Student)�� �����ϴ°�
//}
//
//
////1.Person p1=s1 �߸��� ������ �߻��ϹǷ� ���� �ʴ´�.(���������δ� ����Ѵ�.)
////2.Person&rp=s1
////3.Person*p=&s1
////�ڽ������� �θ��������� ��ȯ�Ѵ�.
////P<-S��� ���� �����ֱ����� �ڵ�
////IS-A���谡 �����ϱ� ������ ���� �ڵ�ó�� ����ȯ�� �����ϴ�.
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
////�����ڵ忡�� ����� �ߴٰ� Ŭ���̾�Ʈ �ڵ带 �������ʿ�� ����.
//void main()
//{
//	Student s1("Hong",23,2);
//	Professor pf1("Kim",55,"�α���");
//	Person*p = &s1;
//	srand((unsigned int)time(0));
//	if(rand()%2==0)
//		p=&s1;
//	else
//		p=&pf1;
//	p->Print(); //student�� �������ƴ� person�� ������ ��µȴ�.
//				//virtualŰ���带 �̿��Ͽ� �������� �޼��带 ������ش�.
//				//�̷��� ��ü�� Ư���� �������̶�� ���ش�.
//				//������ �޽����� ������ Ÿ�԰�ü(Person)�� �������� ���� Ÿ�԰�ü(Student)�� �����ϴ°�
//				//�Ȱ��� �޼��带 �ڽ�Ŭ���������� �������־���Ѵ� �޼��� �������̵��̶����
//				//c++������ �������� ���ǰ� �ٸ�
//}
//
//
////1.Person p1=s1 �߸��� ������ �߻��ϹǷ� ���� �ʴ´�.(���������δ� ����Ѵ�.)
////2.Person&rp=s1
////3.Person*p=&s1
////�ڽ������� �θ��������� ��ȯ�Ѵ�.
////P<-S��� ���� �����ֱ����� �ڵ�
////IS-A���谡 �����ϱ� ������ ���� �ڵ�ó�� ����ȯ�� �����ϴ�.
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
//						grade<<endl;} //�θ�Ŭ������ �Լ��� virtual�̸� �ڵ����� �ڽ�Ŭ������ virtual�Լ��̴�.(�����Ȱ���)
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
////�����ڵ忡�� ����� �ߴٰ� Ŭ���̾�Ʈ �ڵ带 �������ʿ�� ����.
//void main()
//{
//	Student s1("Hong",23,2);
//	Professor pf1("Kim",55,"�α���");
//	Person*p = &s1;
//	srand((unsigned int)time(0));
//	if(rand()%2==0)
//		p=&s1;
//	else
//		p=&pf1;
//	p->Print(); //student�� �������ƴ� person�� ������ ��µȴ�.
//				//virtualŰ���带 �̿��Ͽ� �������� �޼��带 ������ش�.
//				//�̷��� ��ü�� Ư���� �������̶�� ���ش�.
//				//������ �޽����� ������ Ÿ�԰�ü(Person)�� �������� ���� Ÿ�԰�ü(Student)�� �����ϴ°�
//				//�Ȱ��� �޼��带 �ڽ�Ŭ���������� �������־���Ѵ� �޼��� �������̵��̶����
//				//c++������ �������� ���ǰ� �ٸ�
//}
//
//
////1.Person p1=s1 �߸��� ������ �߻��ϹǷ� ���� �ʴ´�.(���������δ� ����Ѵ�.)
////2.Person&rp=s1
////3.Person*p=&s1
////�ڽ������� �θ��������� ��ȯ�Ѵ�.
////P<-S��� ���� �����ֱ����� �ڵ�
////IS-A���谡 �����ϱ� ������ ���� �ڵ�ó�� ����ȯ�� �����ϴ�.
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
//						grade<<endl;} //�θ�Ŭ������ �Լ��� virtual�̸� �ڵ����� �ڽ�Ŭ������ virtual�Լ��̴�.(�����Ȱ���)
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
//void PrintPerson(const Person*p) //Person�� ��ӹ��� ��� ����Ŭ�������� �Ű������� ���� �� �ִ�.
//{
//	p->Print();
//}
//void main()
//{
//	Student s1("Hong",23,2);
//	Professor pf1("Kim",55,"�α���");
//	PrintPerson(&s1);
//	PrintPerson(&pf1);
//}
//
//
////1.Person p1=s1 �߸��� ������ �߻��ϹǷ� ���� �ʴ´�.(���������δ� ����Ѵ�.)
////2.Person&rp=s1
////3.Person*p=&s1
////�ڽ������� �θ��������� ��ȯ�Ѵ�.
////P<-S��� ���� �����ֱ����� �ڵ�
////IS-A���谡 �����ϱ� ������ ���� �ڵ�ó�� ����ȯ�� �����ϴ�.
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
//	Student(const char*n,int a,int g):Person(n,a),grade(g) //�θ��ǻ����ڰ� �׻� ù�ٿ��;��Ѵ�.
//														   //�ڽ�Ŭ������ ����� �θ�Ŭ������ �����ڿ����� ����ɼ��ֱ⶧��
//	{
//		cout<<"Student()"<<endl;
//	}
//	~Student()
//	{
//		cout<<"~Student()"<<endl;
//	}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;} //�θ�Ŭ������ �Լ��� virtual�̸� �ڵ����� �ڽ�Ŭ������ virtual�Լ��̴�.(�����Ȱ���)
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
//void PrintPerson(const Person*p) //Person�� ��ӹ��� ��� ����Ŭ�������� �Ű������� ���� �� �ִ�.
//{
//	p->Print();
//}
//void main()
//{
//	Student s1("Hong",23,2);
//	Professor pf1("Kim",55,"�α���");
//	PrintPerson(&s1);
//	PrintPerson(&pf1);
//}
//
//
////1.Person p1=s1 �߸��� ������ �߻��ϹǷ� ���� �ʴ´�.(���������δ� ����Ѵ�.)
////2.Person&rp=s1
////3.Person*p=&s1
////�ڽ������� �θ��������� ��ȯ�Ѵ�.
////P<-S��� ���� �����ֱ����� �ڵ�
////IS-A���谡 �����ϱ� ������ ���� �ڵ�ó�� ����ȯ�� �����ϴ�.
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
//	Student(const char*n,int a,int g):Person(n,a),grade(g) //�θ��ǻ����ڰ� �׻� ù�ٿ��;��Ѵ�.
//														   //�ڽ�Ŭ������ ����� �θ�Ŭ������ �����ڿ����� ����ɼ��ֱ⶧��
//	{
//		cout<<"Student()"<<endl;
//	}
//	~Student()
//	{
//		cout<<"~Student()"<<endl;
//	}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;} //�θ�Ŭ������ �Լ��� virtual�̸� �ڵ����� �ڽ�Ŭ������ virtual�Լ��̴�.(�����Ȱ���)
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
//void PrintPerson(const Person*p) //Person�� ��ӹ��� ��� ����Ŭ�������� �Ű������� ���� �� �ִ�.
//{
//	p->Print();
//}
//void main()
//{
//	Person*p=new Student("Hong",23,2); //new�� ������ delete���־���Ѵ�.
//	PrintPerson(p);
//	delete (Student*)p; //����ȯ�� �ؼ� �Ҹ��ڸ� ȣ���ϸ� ��ü���� ���α׷��̵ȴ�.
//				//����ȯ�� �ּ�ȭ�ϴ°� ����ü�������� ���α׷��̴�.
//}



//1.Person p1=s1 �߸��� ������ �߻��ϹǷ� ���� �ʴ´�.(���������δ� ����Ѵ�.)
//2.Person&rp=s1
//3.Person*p=&s1
//�ڽ������� �θ��������� ��ȯ�Ѵ�.
//P<-S��� ���� �����ֱ����� �ڵ�
//IS-A���谡 �����ϱ� ������ ���� �ڵ�ó�� ����ȯ�� �����ϴ�.
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
//	Student(const char*n,int a,int g):Person(n,a),grade(g) //�θ��ǻ����ڰ� �׻� ù�ٿ��;��Ѵ�.
//														   //�ڽ�Ŭ������ ����� �θ�Ŭ������ �����ڿ����� ����ɼ��ֱ⶧��
//	{
//		cout<<"Student()"<<endl;
//	}
//	~Student()
//	{
//		cout<<"~Student()"<<endl;
//	}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;} //�θ�Ŭ������ �Լ��� virtual�̸� �ڵ����� �ڽ�Ŭ������ virtual�Լ��̴�.(�����Ȱ���)
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
//void PrintPerson(const Person*p) //Person�� ��ӹ��� ��� ����Ŭ�������� �Ű������� ���� �� �ִ�.
//{
//	p->Print();
//}
//void main()
//{
//	Person*p=new Student("Hong",23,2); //new�� ������ delete���־���Ѵ�.
//	PrintPerson(p);
//	delete p; //����ȯ�� �ؼ� �Ҹ��ڸ� ȣ���ϸ� ��ü���� ���α׷��̵ȴ�.
//				//����ȯ�� �ּ�ȭ�ϴ°� ����ü�������� ���α׷��̴�.
//				//����ȯ���� �޼��� �������̵�����(virtualŰ����)ó���Ѵ�.
//				//superŬ������ �Ҹ��ڴ� ������ virtual�� �ؾ��Ѵ�.
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
//	Student(const char*n,int a,int g):Person(n,a),grade(g) //�θ��ǻ����ڰ� �׻� ù�ٿ��;��Ѵ�.
//														   //�ڽ�Ŭ������ ����� �θ�Ŭ������ �����ڿ����� ����ɼ��ֱ⶧��
//	{
//		cout<<"Student()"<<endl;
//	}
//	~Student()
//	{
//		cout<<"~Student()"<<endl;
//	}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;} //�θ�Ŭ������ �Լ��� virtual�̸� �ڵ����� �ڽ�Ŭ������ virtual�Լ��̴�.(�����Ȱ���)
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
//void PrintPerson(const Person*p) //Person�� ��ӹ��� ��� ����Ŭ�������� �Ű������� ���� �� �ִ�.
//{
//	p->Print();
//}
//void main()
//{
//	Person*p=new Student("Hong",23,2); //new�� ������ delete���־���Ѵ�.
//	PrintPerson(p);
//	delete p; //����ȯ�� �ؼ� �Ҹ��ڸ� ȣ���ϸ� ��ü���� ���α׷��̵ȴ�.
//				//����ȯ�� �ּ�ȭ�ϴ°� ����ü�������� ���α׷��̴�.
//				//����ȯ���� �޼��� �������̵�����(virtualŰ����)ó���Ѵ�.
//				//superŬ������ �Ҹ��ڴ� ������ virtual�� �ؾ��Ѵ�.
//				//c++������ �������� virtualŰ���带 �̿��Ͽ� ���������Ӥ�������
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
//	Student(const char*n,int a,int g):Person(n,a),grade(g) //�θ��ǻ����ڰ� �׻� ù�ٿ��;��Ѵ�.
//														   //�ڽ�Ŭ������ ����� �θ�Ŭ������ �����ڿ����� ����ɼ��ֱ⶧��
//	{
//		cout<<"Student()"<<endl;
//	}
//	~Student()
//	{
//		cout<<"~Student()"<<endl;
//	}
//	int GetGrade()const {return grade;}
//	void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
//						grade<<endl;} //�θ�Ŭ������ �Լ��� virtual�̸� �ڵ����� �ڽ�Ŭ������ virtual�Լ��̴�.(�����Ȱ���)
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
//void PrintPerson(const Person*p) //Person�� ��ӹ��� ��� ����Ŭ�������� �Ű������� ���� �� �ִ�.
//{
//	p->Print();
//}
//void main()
//{
//	//new Person("Lee",20); //�߻�Ŭ���� ��ü���� ����
//	Person*p=new Student("Hong",23,2); //new�� ������ delete���־���Ѵ�.
//	PrintPerson(p);
//	delete p; //����ȯ�� �ؼ� �Ҹ��ڸ� ȣ���ϸ� ��ü���� ���α׷��̵ȴ�.
//				//����ȯ�� �ּ�ȭ�ϴ°� ����ü�������� ���α׷��̴�.
//				//����ȯ���� �޼��� �������̵�����(virtualŰ����)ó���Ѵ�.
//				//superŬ������ �Ҹ��ڴ� ������ virtual�� �ؾ��Ѵ�.
//				//c++������ �������� virtualŰ���带 �̿��Ͽ� ���������Ӥ�������
//	p=new Professor("Kim",60,"�α���");
//	PrintPerson(p);
//	delete p;
//}