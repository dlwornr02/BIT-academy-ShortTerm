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
//	virtual void Print()const=0; //���������Լ�
//								//���������Լ��� �ϳ��̻� ������������ �߻�Ŭ�����̰� ��ü�� ������ �� ����.
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
//	new Person("Lee",20);=
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
//	virtual void Print()const=0; //���������Լ�
//								//���������Լ��� �ϳ��̻� ������������ �߻�Ŭ�����̰� ��ü�� ������ �� ����.
//	//���������Լ��� �ڽ�Ŭ�������� ���ǵ��������� �������̾ȵȴ�.
//	//�ڽ�Ŭ�������� ��! �����ؾ��Ѵ�.
//	//���������Լ��� �ڽ�Ŭ�������� ����ȭ�� �����Ѵ�.
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
//	virtual void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
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
//	//new Person("Lee",20);
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
//
//
//#include<iostream>
//using namespace std;
//class Unit
//{
//	int hitPoint;
//	int move;
//public:
//	Unit(int hp, int m):hitPoint(hp),move(m){}
//	virtual void Move()=0; //��� Unit�� ��ӹ޴� Ŭ������ Move�� �����ؾ��Ѵ�.
//	virtual void Attack()=0;
//	int GetHitPoint()const{return hitPoint;}
//	int GetMove()const{return move;}
//	void SetMove(int m){move=m;}
//};
//class Hydra : public Unit
//{
//public:
//	Hydra(int hp, int m):Unit(hp,m){}
//	void Move()
//	{
//		cout <<"Hydra move " <<GetMove()<<endl;
//		SetMove(GetMove()+2);
//	}
//	void Attack(){cout<<"Hydra Attack "<<GetHitPoint()<<endl;}
//};
//class Dragoon : public Unit
//{
//public:
//	Dragoon(int hp, int m):Unit(hp,m){}
//	void Move()
//	{
//		cout <<"Dragoon move " <<GetMove()<<endl;
//		SetMove(GetMove()+4);
//	}
//	void Attack(){cout<<"Dragoon Attack "<<GetHitPoint()<<endl;}
//};
//void main()
//{
//	Unit* uarr[5] = {new Dragoon(100,0),new Hydra(50,0),new Dragoon(100,0),
//						new Hydra(50,2),new Hydra(50,3)};
//	for(int i=0;i<5;i++)
//	{
//		uarr[i]->Attack();
//	}
//	cout<<endl;
//	for(int i=0;i<5;i++)
//		uarr[i]->Move();
//	cout<<endl;
//	for(int i=0;i<5;i++)
//		uarr[i]->Move();
//
//}
//
//
//#include<iostream>
//using namespace std;
//class Unit
//{
//	int hitPoint;
//	int move;
//public:
//	Unit(int hp, int m):hitPoint(hp),move(m){}
//	virtual ~Unit(){} //�θ�Ŭ������ �Ҹ��ڴ� �׻� ����Ҹ���
//	virtual void Move()=0; //��� Unit�� ��ӹ޴� Ŭ������ Move�� �����ؾ��Ѵ�.
//	virtual void Attack()=0;
//	int GetHitPoint()const{return hitPoint;}
//	int GetMove()const{return move;}
//	void SetMove(int m){move=m;}
//};
//class Hydra : public Unit
//{
//public:
//	Hydra(int hp, int m):Unit(hp,m){}
//	void Move()
//	{
//		cout <<"Hydra move " <<GetMove()<<endl;
//		SetMove(GetMove()+2);
//	}
//	void Attack(){cout<<"Hydra Attack "<<GetHitPoint()<<endl;}
//};
//class Dragoon : public Unit
//{
//public:
//	Dragoon(int hp, int m):Unit(hp,m){}
//	void Move()
//	{
//		cout <<"Dragoon move " <<GetMove()<<endl;
//		SetMove(GetMove()+4);
//	}
//	void Attack(){cout<<"Dragoon Attack "<<GetHitPoint()<<endl;}
//};
//void main()
//{
//	Unit* uarr[5] = {new Dragoon(100,0),new Hydra(50,0),new Dragoon(100,0),
//						new Hydra(50,2),new Hydra(50,3)};
//	for(int i=0;i<5;i++)
//	{
//		uarr[i]->Attack();
//	}
//	cout<<endl;
//	for(int i=0;i<5;i++)
//		uarr[i]->Move();
//	cout<<endl;
//	for(int i=0;i<5;i++)
//		uarr[i]->Move();
//
//	for(int i=0;i<5;i++)
//		delete uarr[i];
//
//}
//
//
//#include<iostream>
//using namespace std;
//class Parent
//{
//private:
//	void PPrivate(){cout<<"Parent::Private()"<<endl;} //�ڽ�Ŭ�������� ���Ұ���
//protected:
//	void PProtected(){cout<<"Parent::Protected()"<<endl;}
//public:
//	void PPublic(){cout<<"Parent:Public()"<<endl;}
//};
//class Child1 : private Parent
//{
//private:
//	void Private(){cout<<"Child1::Private()"<<endl;}
//protected:
//	void Protected(){cout<<"Child1::Protected()"<<endl;}
//public:
//	void Public(){cout<<"Child1:Public()"<<endl;}
//};
//class CChild : public Child1
//{
//public:
//	void Method()
//	{
//		//this->PPrivate();
//		this->PProtected();
//		this->PPublic();
//	}
//};
//void main()
//{
//	Child1 c1;
//	//c1.Private();
//	//c1.Protected();
//	c1.Public();
//	c1.PPublic();
//}
//
//
//#include<iostream>
//using namespace std;
//void main()
//{
//	//�������ߺ��� �޼���������̵����� �����ϴ�.
//	cout<<100<<endl;
//	cout<<4.5<<endl;
//	cout<<"Hello!"<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//void main()
//{
//	//�������ߺ��� �޼���������̵����� �����ϴ�.
//	cout.operator<<(100)<<endl;
//	cout.operator<<(4.5)<<endl;
//
//}
//
//
//#include<iostream>
//using namespace std;
//void main()
//{
//	//�������ߺ��� �޼���������̵����� �����ϴ�.
//	//'<<'�� ��½�Ʈ��������
//	cout.operator<<(100).operator<<(endl);
//	cout.operator<<(4.5).operator<<(endl);
//}
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//void main()
//{
//	string s = "hello!";
//	cout<<s<<endl;
//	s+="ABC";
//	cout<<s<<endl;
//	s="Hi~!";
//	cout<<s<<endl;
//
//	if(s=="Hi~!")
//		cout<<"true"<<endl;
//}
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//void main()
//{
//	string s = "hello!";
//	cout<<s<<endl;
//	s.operator+=("ABC");
//	cout<<s<<endl;
//	s.operator=("Hi~!");
//	cout<<s<<endl;
//
//	if(operator==(s,"Hi~!"))
//		cout<<"true"<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//};
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,5);
//	Point pt3(0,0);
//	pt3 = pt1+pt2;  //�����ڸ��� ����
//	pt1.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	const Point operator+(const Point&arg)const
//	{
//		Point pt(x+arg.x,y+arg.y);
//		return pt;
//	}
//};
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,5);
//	Point pt3(0,0);
//	//pt3 = pt1+pt2;  //�����ڸ��� ����
//	//pt3=pt1.operator+(pt2);
//	pt3=pt1+pt2; //�����ڵ�� ����
//	pt3.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	const Point operator+(const Point&arg)const
//	{
//		Point pt(x+arg.x,y+arg.y);
//		return pt;
//	}
//	const Point operator-(const Point&arg)const
//	{
//		Point pt(x-arg.x,y-arg.y);
//		return pt;
//	}
//};
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,5);
//	Point pt3(0,0);
//	pt3=pt1-pt2;
//	//pt1+pt2�� pt2+pt1 �ι����� �ٸ��Ŵ�.
//	//���׿����ڴ� �׻� ù������ this��ü �ι�°�� �μ���ü�̴�.
//	pt3.Print();
//}


//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	const Point operator+(const Point&arg)const
//	{
//		Point pt(x+arg.x,y+arg.y);
//		return pt;
//	}
//	const Point operator-(const Point&arg)const
//	{
//		Point pt(x-arg.x,y-arg.y);
//		return pt;
//	}
//	bool operator==(const Point&arg)const //bool�տ� const�� �Ⱦ��� ����?
//	{
//		return (x==arg.x && y==arg.y);
//	}
//};
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,5);
//
//	if(pt1==pt2) //pt1.operator==(pt2)
//		cout<<"true"<<endl;
//	else
//		cout<<"false"<<endl;
//}
//#include<iostream>
//using namespace std;
//class Point{};
//int GetInt()
//{
//	int n=10;
//	return n;
//}
//void main()
//{
//	int k=20;
//	//GetInt()=k; //10�� GetInt()�ڸ��� ���̰ԵǹǷ� ����� ����Ұ���
//	//GetInt()=20;
//	cout<<GetInt()<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class Point{};
//const Point GetPoint() //��ȯŸ���� ����Ұ����ϴٴ� ���̴�.
//{
//	Point n;
//	return n; //return�ϸ� GetPoint��ü(�ӽð�ü)�� �������ش�.
//}
//void main()
//{
//	Point k;
//	GetPoint() = k; //������ ����Ұ���
//}

//
//
//#include<iostream>
//using namespace std;
//class Point{};
//void Function(int&m)//������ �����Ϸ��� m�̶�� �����ͺ����� 
//					 //������ �ּҸ� �Ű������� �ް� ������ó�� ����Ѵ�.
//					 //�⺻���� ���� ������ �����ʴ´�. �����Ǵ� �޸𸮴� ���Ƽ�
//					 //�׷��� inparameter�� ������ ��������
//{
//
//}
//void main()
//{
//	int n=10;
//	Function(n);
//}
//
//
//#include<iostream>
//using namespace std;
//class Point{};
//void Function(const Point& m) //inparameter�� �⺻���� ��ü�� �����°��� const�� ���̴°Ϳ��� �ٸ���.
//{
//}
//void main()
//{
//	Point n;
//	Function(n);
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	const Point operator+(const Point&arg)const
//	{
//		Point pt(x+arg.x,y+arg.y);
//		return pt;
//	}
//	const Point operator-(const Point&arg)const
//	{
//		Point pt(x-arg.x,y-arg.y);
//		return pt;
//	}
//	bool operator==(const Point&arg)const //bool�տ� const�� �Ⱦ��� ����?
//	{
//		return (x==arg.x && y==arg.y);
//	}
//	const Point& operator++()
//	{
//		++x;
//		++y;
//		return *this; //�ڽ��� ��ü�� return�Ѵ�.
//	}
//};
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,5);
//	
//	pt2=++pt1; //pt1.operator++();
//	pt1.Print();
//	pt2.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	const Point operator+(const Point&arg)const
//	{
//		Point pt(x+arg.x,y+arg.y);
//		return pt;
//	}
//	const Point operator-(const Point&arg)const
//	{
//		Point pt(x-arg.x,y-arg.y);
//		return pt;
//	}
//	bool operator==(const Point&arg)const //bool�տ� const�� �Ⱦ��� ����?
//	{
//		return (x==arg.x && y==arg.y);
//	}
//	const Point& operator++()  //����������
//	{
//		++x;
//		++y;
//		return *this; //�ڽ��� ��ü�� return�Ѵ�.
//	}
//	const Point operator++(int)  // ���������� //������ü�̹Ƿ� ������ return���� �ʴ´�
//	{
//		Point pt(*this);
//		++x;
//		++y;
//		return pt;
//	}
//};
//void main()
//{
//	Point pt1(2,3);
//	Point pt2(3,5);
//	
//	pt2=pt1++; //pt1.operator++(0); <==���������ڸ� �̷��� �ؼ� �޼��� �ñ״�ó�� int�� ���ڸ� �߰�
//	pt1.Print();
//	pt2.Print();
//}
//
//
////Ŭ�������� ������ ������ ��������ڿ� ������Կ����ڸ� �������־���Ѵ�.
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int _x=0,int _y=0):x(_x),y(_y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	
//	
//};
//void main() 
//{
//	Point pt1(2,3);
//	Point pt2(3,5);
//	
//	pt2=pt1;
//	pt1.Print();
//	pt2.Print();
//}
//
//
////Ŭ�������� ������ ������ ��������ڿ� ������Կ����ڸ� �������־���Ѵ�.
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,*py;
//public:
//	Point(int _x=0,int _y=0):x(_x),py(0)
//	{
//		py=new int(_y);
//	}
//	Point(const Point&arg):x(arg.x)
//	{
//		py=new int(*arg.py);
//	}
//	~Point()
//	{
//		delete py;
//	}
//	void operator=(const Point&arg)
//	{
//		x=arg.x;
//		*py = *arg.py;
//	}
//	void Print()const{cout<<x<<','<<*py<<endl;}
//	
//	
//};
//void main() 
//{
//	Point pt1(2,3);
//	Point pt2(3,5);
//	
//	pt2=pt1;
//	pt1.Print();
//	pt2.Print();
//}
//
//
////Ŭ�������� ������ ������ ��������ڿ� ������Կ����ڸ� �������־���Ѵ�.
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,*py;
//public:
//	Point(int _x=0,int _y=0):x(_x),py(0)
//	{
//		py=new int(_y);
//	}
//	Point(const Point&arg):x(arg.x)
//	{
//		py=new int(*arg.py);
//	}
//	~Point()
//	{
//		delete py;
//	}
//	const Point& operator=(const Point&arg)
//	{
//		x=arg.x;
//		*py = *arg.py;
//
//		return *this; //��ü�ڽ��� return�Ѵ�.
//	}
//	void Print()const{cout<<x<<','<<*py<<endl;}
//	
//	
//};
//void main() 
//{
//	Point pt1(2,3);
//	Point pt2(3,5);
//	Point pt3;
//	pt3 = pt2 = pt1;
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//}


////Ŭ�������� ������ ������ ��������ڿ� ������Կ����ڸ� �������־���Ѵ�. �� �� ��!!!
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,*py;
//public:
//	Point(int _x=0,int _y=0):x(_x),py(0)
//	{
//		py=new int(_y);
//	}
//	Point(const Point&arg):x(arg.x)
//	{
//		py=new int(*arg.py);
//	}
//	~Point()
//	{
//		delete py;
//	}
//	const Point& operator=(const Point&arg)
//	{
//		x=arg.x;
//		*py = *arg.py;
//
//		return *this; //��ü�ڽ��� return�Ѵ�.
//	}
//	void Print()const{cout<<x<<','<<*py<<endl;}
//	
//	
//};
//void main() 
//{
//	Point pt1(2,3);
//	Point pt2(3,5);
//	Point pt3 = pt1;
//	pt3 = pt2 = pt1;
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x,*py;
//public:
//	Point(int x=0,int y=0):x(x),py(0){py=new int(y);}
//	Point(const Point&arg){x=arg.x; py=new int(*arg.py);}
//	~Point(){delete py;}
//	const Point& operator=(Point&arg)
//	{
//		x=arg.x;
//		*py=*arg.py;
//		return *this;
//	}
//	void Print()const{cout<<x<<','<<*py<<endl;}
//	//const Point& operator+(const Point&arg){x+=arg.x;*py+=*arg.py;return *this;}
//	const Point operator+(const Point&arg)const{Point pt(x+arg.x,*py+*arg.py);return pt;}
//	const Point& operator-(const Point&arg){x-=arg.x;*py-=*arg.py;return *this;}
//	const Point& operator++(){x++;*py++;return *this;}
//	const Point& operator++(int){Point pt(*this);x++;*py++;return pt;}
//	bool operator==(const Point&arg){return (x==arg.x && *py==*arg.py);}
//
//
//};
//int main(void)
//{
//	Point pt1(2,5);
//	Point pt2(4,6);
//	Point pt3(7,8);
//	Point pt4;
//	pt3.Print();
//	pt3.operator=(pt1.operator+(pt2));
//	pt3.Print();
//}


//#include<iostream>
//#include<string>
//using namespace std;
//class Point
//{
//	int x,*py;
//	string str;
//public:
//	Point(int x=0,int y=0):x(x),py(0){py=new int(y);}
//	Point(const Point&arg){x=arg.x; py=new int(*arg.py);}
//	~Point(){delete py;}
//	const Point& operator=(Point&arg)
//	{
//		x=arg.x;
//		*py=*arg.py;
//		return *this;
//	}
//	void Print()const{cout<<x<<','<<*py<<endl;}
//	//const Point& operator+(const Point&arg){x+=arg.x;*py+=*arg.py;return *this;}
//	Point operator+(const Point&arg)const {Point pt(x+arg.x,*py + *arg.py);return pt;}
//	const Point& operator-(const Point&arg){x-=arg.x;*py-=*arg.py;return *this;}
//	const Point& operator++(){x++;*py++;return *this;}
//	const Point& operator++(int){Point pt(*this);x++;*py++;return pt;}
//	bool operator==(const Point&arg){return (x==arg.x && *py==*arg.py);}
//
//
//};
//int main(void)
//{
//	Point pt1(2,5);
//	Point pt2(4,6);
//	Point pt3(7,8);
//	Point pt4;
//	pt3.Print();
//	pt3.operator=(pt1.operator+(pt2));
//	pt3++;
//	pt3.Print();
//}