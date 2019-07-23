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
//	virtual void Print()const=0; //순수가상함수
//								//순수가상함수를 하나이상 가지고있으면 추상클래스이고 객체를 생성할 수 없다.
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
//	new Person("Lee",20);=
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
//	virtual void Print()const=0; //순수가상함수
//								//순수가상함수를 하나이상 가지고있으면 추상클래스이고 객체를 생성할 수 없다.
//	//순수가상함수는 자식클래스에서 정의되지않으면 컴파일이안된다.
//	//자식클래스에서 꼭! 구현해야한다.
//	//순수가상함수는 자식클래스에게 구현화를 강제한다.
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
//	virtual void Print()const{cout <<"name: "<<name<<","<<"age: "<<age<<","<<"grade: "<<
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
//	//new Person("Lee",20);
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
//	virtual void Move()=0; //모든 Unit을 상속받는 클래스는 Move를 정의해야한다.
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
//	virtual ~Unit(){} //부모클래스의 소멸자는 항상 가상소멸자
//	virtual void Move()=0; //모든 Unit을 상속받는 클래스는 Move를 정의해야한다.
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
//	void PPrivate(){cout<<"Parent::Private()"<<endl;} //자식클래스에서 사용불가능
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
//	//연산자중복과 메서드오버라이딩으로 가능하다.
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
//	//연산자중복과 메서드오버라이딩으로 가능하다.
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
//	//연산자중복과 메서드오버라이딩으로 가능하다.
//	//'<<'는 출력스트링연산자
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
//	pt3 = pt1+pt2;  //연산자못씀 오류
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
//	//pt3 = pt1+pt2;  //연산자못씀 오류
//	//pt3=pt1.operator+(pt2);
//	pt3=pt1+pt2; //위의코드와 동일
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
//	//pt1+pt2와 pt2+pt1 두문장은 다른거다.
//	//이항연산자는 항상 첫번쨰가 this객체 두번째가 인수객체이다.
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
//	bool operator==(const Point&arg)const //bool앞에 const를 안쓰는 이유?
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
//	//GetInt()=k; //10이 GetInt()자리에 놓이게되므로 상수라서 변경불가능
//	//GetInt()=20;
//	cout<<GetInt()<<endl;
//}
//
//
//#include<iostream>
//using namespace std;
//class Point{};
//const Point GetPoint() //반환타입이 변경불가능하다는 뜻이다.
//{
//	Point n;
//	return n; //return하면 GetPoint객체(임시객체)를 생성해준다.
//}
//void main()
//{
//	Point k;
//	GetPoint() = k; //오류뜸 변경불가능
//}

//
//
//#include<iostream>
//using namespace std;
//class Point{};
//void Function(int&m)//실제로 컴파일러는 m이라는 포인터변수를 
//					 //만들어내서 주소를 매개변수로 받고 포인터처럼 사용한다.
//					 //기본형은 거의 참조를 쓰지않는다. 생성되는 메모리는 같아서
//					 //그래서 inparameter는 참조를 쓰지않음
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
//void Function(const Point& m) //inparameter로 기본형과 객체를 보내는것은 const를 붙이는것에서 다르다.
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
//	bool operator==(const Point&arg)const //bool앞에 const를 안쓰는 이유?
//	{
//		return (x==arg.x && y==arg.y);
//	}
//	const Point& operator++()
//	{
//		++x;
//		++y;
//		return *this; //자신의 객체를 return한다.
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
//	bool operator==(const Point&arg)const //bool앞에 const를 안쓰는 이유?
//	{
//		return (x==arg.x && y==arg.y);
//	}
//	const Point& operator++()  //전위연산자
//	{
//		++x;
//		++y;
//		return *this; //자신의 객체를 return한다.
//	}
//	const Point operator++(int)  // 후위연산자 //지역객체이므로 참조로 return하지 않는다
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
//	pt2=pt1++; //pt1.operator++(0); <==후위연산자를 이렇게 해석 메서드 시그니처에 int형 인자를 추가
//	pt1.Print();
//	pt2.Print();
//}
//
//
////클래스내에 참조가 있으면 복사생성자와 복사대입연산자를 정의해주어야한다.
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
////클래스내에 참조가 있으면 복사생성자와 복사대입연산자를 정의해주어야한다.
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
////클래스내에 참조가 있으면 복사생성자와 복사대입연산자를 정의해주어야한다.
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
//		return *this; //객체자신을 return한다.
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


////클래스내에 참조가 있으면 복사생성자와 복사대입연산자를 정의해주어야한다. 꼭 꼭 꼭!!!
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
//		return *this; //객체자신을 return한다.
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