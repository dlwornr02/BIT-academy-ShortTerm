//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void Print(int n)
//{
//	cout<<n<<" ";
//}
//void main()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for(int i=0;i<v.size();i++)
//		cout<<v[i]<<" ";
//	cout<<endl;
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void Print(int n)
//{
//	cout<<n<<" ";
//}
//void main()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for_each(v.begin(),v.end(),Print);
//	cout<<endl;
//}
//
//
//#include<iostream>//�׳��Լ�
//#include<vector>
//#include<algorithm>
//using namespace std;
//void f(int n)
//{
//	cout<<n<<endl;
//}
//void main()
//{
//	f(10);
//}
//
//
//#include<iostream>//�Լ�������
//#include<vector>
//#include<algorithm>
//using namespace std;
//void Print(int n)
//{
//	cout<<n<<endl;
//}
//void main()
//{
//	void(*f)(int) = Print;
//	f(10);
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Func
//{
//public:
//	void operator()(int n)const
//	{
//		cout<<n<<endl;;
//	}
//};
//void main()
//{
//	Func f;
//	f(10); //f.operator()(10)
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//class Func
//{
//	string division;
//public:
//	Func(const string& s="\n"):division(s){}
//	void operator()(int n)const
//	{
//		cout<<n<<division;
//	}
//};
//void main()
//{
//	Func f("\n=="); //���¸� ���� �� �����Ƿ� �ΰ����� ��� ȣ�Ⱑ��
//	f(10); //f.operator()(10)
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
///////////////////////////
//class Print
//{
//public:
//	void operator()(int n)
//	{
//		cout<<n<<" ";
//	}
//};
//void main()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	Print f; //�Լ���ü 
//	for_each(v.begin(),v.end(),f);
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//template <typename Iter, typename F>
//void For_each(Iter si,Iter ei,F f) //�������� input���� �޴´�.
//{
//	for(;si!=ei;si++)
//		f(*si);
//}
///////////////////////////
//class Print
//{
//public:
//	void operator()(int n)
//	{
//		cout<<n<<" ";
//	}
//};
//void main()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	Print f; //�Լ���ü 
//	For_each(v.begin(),v.end(),f);
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
///////////////////////////
//class Print //�Լ���ü class, �Լ��� class
//{
//public:
//	void operator()(int n)const
//	{
//		cout<<n<<" ";
//	}
//};
//void main() 
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	//Print f; //f => �Լ���ü,�Լ���
//	for_each(v.begin(),v.end(),Print()); //�ӽð�ü�� ���
//	cout<<endl;								 
//	for_each(v.begin(),v.end(),Print()); //�ӽð�ü�� ���
//	cout<<endl;								 
//	for_each(v.begin(),v.end(),Print()); //�ӽð�ü�� ���
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
///////////////////////////
//struct Print //class���� �������� ���ٱ����ڹۿ� ����
//{
//public:
//	void operator()(int n)const
//	{
//		cout<<n<<" ";
//	}
//};
//void main() 
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	//Print f; //f => �Լ���ü,�Լ���
//	for_each(v.begin(),v.end(),Print()); //�ӽð�ü�� ���
//	cout<<endl;								 
//	for_each(v.begin(),v.end(),Print()); //�ӽð�ü�� ���
//	cout<<endl;								 
//	for_each(v.begin(),v.end(),Print()); //�ӽð�ü�� ���
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Print //class���� �������� ���ٱ����ڹۿ� ����
//{
//public:
//	void operator()(int n)const
//	{
//		cout<<n<<" ";
//	}
//};
//void main() 
//{
//	Print f;
//	f(10);
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Print //class���� �������� ���ٱ����ڹۿ� ����
//{
//	void operator()(int a,int b)const
//	{
//		cout<<a<<" "<<b<<endl;
//	}
//};
//void main() 
//{
//	Print f;
//	f(10,20);
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Print //class���� �������� ���ٱ����ڹۿ� ����
//{
//	void operator()(int a,int b)const
//	{
//		cout<<a<<" "<<b<<endl;
//	}
//};
//void main() 
//{
//	Print f;
//	f(10,20);
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Print //�Լ���ü�̸鼭 predicate
//{
//	bool operator()(int a,int b)const
//	{
//		return a>b;
//	}
//};
//void main() 
//{
//	Print f;
//	cout<<f(10,20)<<endl;
//	cout<<f(50,20)<<endl; //����predicate
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Print //�Լ���ü�̸鼭 predicate
//{
//	bool operator()(int a)const
//	{
//		return 0<=a && a<=100;
//	}
//};
//void main()
//{
//	Print f;
//	cout<<f(10)<<endl;
//	cout<<f(500)<<endl; //���� predicate
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Print //�Լ���ü�̸鼭 predicate
//{
//	bool operator()(int a)const
//	{
//		return 0<=a && a<=100;
//	}
//};
//void main()
//{
//	vector<int>v;
//	v.push_back(50);
//	v.push_back(90);
//	v.push_back(10);
//	v.push_back(70);
//	v.push_back(40);
//
//	vector<int>::iterator iter = find(v.begin(),v.end(),40);
//	if(v.end()!=iter)
//		cout<<*iter<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Print //�Լ���ü�̸鼭 predicate
//{
//	bool operator()(int a)const
//	{
//		return 0<=a && a<=100;
//	}
//};
//void main()
//{
//	vector<int>v;
//	v.push_back(50);
//	v.push_back(90);
//	v.push_back(10);
//	v.push_back(70);
//	v.push_back(40);
//
//	vector<int>::iterator iter = find(v.begin(),v.end(),40);
//	if(v.end()!=iter)
//		cout<<*iter<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Print //�Լ���ü�̸鼭 predicate
//{
//	bool operator()(int a)const
//	{
//		return 0<=a && a<=100;
//	}
//};
//void main()
//{
//	vector<int>v;
//	v.push_back(50);
//	v.push_back(90);
//	v.push_back(10);
//	v.push_back(70);
//	v.push_back(40);
//
//	vector<int>::iterator iter = find(v.begin(),v.end()-2,40);
//	if(v.end()-2!=iter)
//		cout<<*iter<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Cmp
//{
//	bool operator()(int n)const
//	{
//		return (50 < n) && (n%30 == 0);
//	}
//};
//void main()
//{
//	vector<int>v;
//	v.push_back(50);
//	v.push_back(90);
//	v.push_back(10);
//	v.push_back(70);
//	v.push_back(40);
//
//	vector<int>::iterator iter = find_if(v.begin(),v.end(),Cmp());
//	if(v.end()!=iter)
//		cout<<*iter<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Cmp
//{
//	bool operator()(int n)const
//	{
//		return (50 < n) && (n%30 == 0);
//	}
//};
//void main()
//{
//	vector<int>v;
//	v.push_back(50);
//	v.push_back(90);
//	v.push_back(10);
//	v.push_back(70);
//	v.push_back(40);
//
//	sort(v.begin(),v.end());
//	for(vector<int>::iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Cmp
//{
//	bool operator()(int a,int b)const
//	{
//		return a>b;  //������������ �ϰ�ʹ�.
//	}
//};
//void main()
//{
//	vector<int>v;
//	v.push_back(50);
//	v.push_back(90);
//	v.push_back(10);
//	v.push_back(70);
//	v.push_back(40);
//
//	sort(v.begin(),v.end(),Cmp());
//	for(vector<int>::iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	vector<int>v;
//	v.push_back(50);
//	v.push_back(90);
//	v.push_back(10);
//	v.push_back(70);
//	v.push_back(40);
//
//	sort(v.begin(),v.end(),greater<int>()); //greater�� �̹� ������ => ����predicate �Լ��ڸ� �̹� ������
//	for(vector<int>::iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	vector<int>v;
//	v.push_back(50);
//	v.push_back(90);
//	v.push_back(10);
//	v.push_back(70);
//	v.push_back(40);
//
//	sort(v.begin(),v.end(),less<int>()); //greater�� �̹� ������ => ����predicate �Լ��ڸ� �̹� ������
//	for(vector<int>::iterator iter = v.begin();iter!=v.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//void main()
//{
//	vector<Point>v;
//	v.push_back(Point(5,6));
//	v.push_back(Point(7,8));
//	v.push_back(Point(2,5));
//	v.push_back(Point(2,3));
//	v.push_back(Point(5,2));
//
//	//sort(v.begin(),v.end(),less<int>()); //greater�� �̹� ������ => ����predicate �Լ��ڸ� �̹� ������
//	for(vector<Point>::iterator iter = v.begin();iter!=v.end();iter++){
//		const Point&pt = *iter;
//		cout<<pt.GetX()<<','<<pt.GetY()<<"  ";
//	}
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//void main()
//{
//	vector<Point>v;
//	v.push_back(Point(5,6));
//	v.push_back(Point(7,8));
//	v.push_back(Point(2,5));
//	v.push_back(Point(2,3));
//	v.push_back(Point(5,2));
//
//	sort(v.begin(),v.end()); //greater�� �̹� ������ => ����predicate �Լ��ڸ� �̹� ������
//	for(vector<Point>::iterator iter = v.begin();iter!=v.end();iter++){
//		const Point&pt = *iter;
//		cout<<pt.GetX()<<','<<pt.GetY()<<"  ";
//	}
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	bool operator<(const Point&arg) //ũ��� �����ڴ� �߾Ⱦ���.
//	{
//		return x < arg.x;
//	}
//};
//void main()
//{
//	vector<Point>v;
//	v.push_back(Point(5,6));
//	v.push_back(Point(7,8));
//	v.push_back(Point(2,5));
//	v.push_back(Point(2,3));
//	v.push_back(Point(5,2));
//
//	sort(v.begin(),v.end()); //greater�� �̹� ������ => ����predicate �Լ��ڸ� �̹� ������
//	for(vector<Point>::iterator iter = v.begin();iter!=v.end();iter++){
//		const Point&pt = *iter;
//		cout<<pt.GetX()<<','<<pt.GetY()<<"  ";
//	}
//	cout<<endl;
//}
//
///////////////////////////////////////////////////////////////////////////////////////
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	bool operator<(const Point&arg)
//	{
//		return x < arg.x;
//	}
//};
//struct Cmp
//{
//	bool operator()(const Point &a,const Point &b)const{
//		if(a.GetX()<b.GetX())
//			return true;
//		else if(a.GetX()>b.GetX())
//			return false;
//		else 
//			return a.GetY() < b.GetY();
//	}
//};
//void main()
//{
//	vector<Point>v;
//	v.push_back(Point(5,6));
//	v.push_back(Point(7,8));
//	v.push_back(Point(2,5));
//	v.push_back(Point(2,3));
//	v.push_back(Point(5,2));
//
//	sort(v.begin(),v.end(),Cmp()); //greater�� �̹� ������ => ����predicate �Լ��ڸ� �̹� ������
//	for(vector<Point>::iterator iter = v.begin();iter!=v.end();iter++){
//		const Point&pt = *iter;
//		cout<<pt.GetX()<<','<<pt.GetY()<<"  ";
//	}
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	bool operator<(const Point&arg)
//	{
//		return x < arg.x;
//	}
//};
//struct Cmp
//{
//	bool operator()(const Point*a,const Point*b)const{
//		if(a->GetX()<b->GetX())
//			return true;
//		else if(a->GetX()>b->GetX())
//			return false;
//		else 
//			return a->GetY() < b->GetY();
//	}
//};
//void main()
//{
//	vector<Point*>v;
//	v.push_back(new Point(5,6));
//	v.push_back(new Point(7,8));
//	v.push_back(new Point(2,5));
//	v.push_back(new Point(2,3));
//	v.push_back(new Point(5,2));
//
//	sort(v.begin(),v.end(),Cmp()); //greater�� �̹� ������ => ����predicate �Լ��ڸ� �̹� ������
//	for(vector<Point*>::iterator iter = v.begin();iter!=v.end();iter++){
//		const Point*p = *iter;
//		cout<<p->GetX()<<','<<p->GetY()<<"  ";
//	}
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int x=0,int y=0):x(x),y(y){}
//	void Print()const{cout<<x<<','<<y<<endl;}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//	bool operator<(const Point&arg)
//	{
//		return x < arg.x;
//	}
//};
//
//bool Compare(const Point*a,const Point*b){
//	if(a->GetX()<b->GetX())
//		return true;
//	else if(a->GetX()>b->GetX())
//		return false;
//	else 
//		return a->GetY() < b->GetY();
//}
//void main()
//{
//	vector<Point*>v;
//	v.push_back(new Point(5,6));
//	v.push_back(new Point(7,8));
//	v.push_back(new Point(2,5));
//	v.push_back(new Point(2,3));
//	v.push_back(new Point(5,2));
//
//	sort(v.begin(),v.end(),Compare); //greater�� �̹� ������ => ����predicate �Լ��ڸ� �̹� ������
//	for(vector<Point*>::iterator iter = v.begin();iter!=v.end();iter++){
//		const Point*p = *iter;
//		cout<<p->GetX()<<','<<p->GetY()<<"  ";
//	}
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	set<int> s;
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//
//	for(set<int>::iterator iter = s.begin();iter!=s.end();iter++)
//		cout<<*iter<<"  ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	set<int,less<int>> s; //default���� less�� �����ѰŴ�
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//
//	for(set<int>::iterator iter = s.begin();iter!=s.end();iter++)
//		cout<<*iter<<"  ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	set<int,greater<int>> s; //default���� less�� �����ѰŴ�
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//
//	for(set<int,greater<int>>::iterator iter = s.begin();iter!=s.end();iter++)
//		cout<<*iter<<"  ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	set<int> s; //default���� less�� �����ѰŴ�
//	s.insert( 30 ); //�μ��� key��� �Ѵ�.
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//
//	for(set<int>::iterator iter = s.begin();iter!=s.end();iter++)
//		cout<<*iter<<"  ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	set<int> s; //default���� less�� �����ѰŴ�
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//
//	set<int>::iterator iter = s.find(40); //ã���� ã�� ������ iterator��ȯ ��ã���� end()��ȯ
//	
//	if(iter!=s.end())
//		cout<<*iter<<endl;
//
//	for(set<int>::iterator iter = s.begin();iter!=s.end();iter++)
//		cout<<*iter<<"  ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	set<int> s; //default���� less�� �����ѰŴ�
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//
//	set<int>::iterator liter = s.lower_bound(40); 
//	set<int>::iterator uiter = s.upper_bound(40);
//	if(liter!=uiter)
//		cout<<*liter<<','<<*uiter<<endl;
//
//	for(set<int>::iterator iter = s.begin();iter!=s.end();iter++)
//		cout<<*iter<<"  ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	set<int> s; //default���� less�� �����ѰŴ�
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//
//	set<int>::iterator liter = s.lower_bound(30); 
//	set<int>::iterator uiter = s.upper_bound(40); //���Ұ� �ƴ϶� ������
//	if(liter!=uiter)
//		cout<<*liter<<','<<*uiter<<endl;
//
//	for(set<int>::iterator iter = s.begin();iter!=s.end();iter++)
//		cout<<*iter<<"  ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	set<int> s; //default���� less�� �����ѰŴ�
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//
//	set<int>::iterator liter = s.lower_bound(30);
//	set<int>::iterator uiter = s.upper_bound(40); //���Ұ� �ƴ϶� ������
//	if(liter!=uiter)
//		cout<<*liter<<','<<*uiter<<endl;
//
//	for(set<int>::iterator iter = liter;iter!=uiter;iter++)
//		cout<<*iter<<"  ";
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	set<int> s; //default���� less�� �����ѰŴ�
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//
//	set<int>::iterator liter = s.lower_bound(30);
//	set<int>::iterator uiter = s.upper_bound(30); //���Ұ� �ƴ϶� ������
//	pair<set<int>>::iterator,
//		set<int>::iterator 
//		piter = s.equal_range(40);
//	if(piter.first!=piter.second)
//		cout<<*piter.first<<','<<*piter.second<<endl;
//
//}
//
//
//#include<iostream>
//#include<set>
//#include<string>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	
//	pair<int,int> pr(20,50);
//
//	cout<<pr.first<<','<<pr.second<<endl;
//
//}
//
//
//#include<iostream>
//#include<set>
//#include<string>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	
//	pair<int,string> pr(20,"one");
//
//	cout<<pr.first<<','<<pr.second<<endl;
//
//}
//
//
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	set<int> s; //default���� less�� �����ѰŴ�
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//
//	pair<set<int>::iterator,set<int>::iterator > piter = s.equal_range(40);
//	if(piter.first!=piter.second)
//		cout<<*piter.first<<','<<*piter.second<<endl;
//
//}
//
//
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	set<int> s; //default���� less�� �����ѰŴ�
//
//
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//	s.insert( 40 ); //������ �ߺ��� ������� �ʴ´�.
//
//
//	pair<set<int>::iterator,set<int>::iterator > piter = s.equal_range(40);
//	if(piter.first!=piter.second)
//		cout<<*piter.first<<','<<*piter.second<<endl;
//	for(set<int>::iterator iter = s.begin();iter!=s.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//
//}
//
//
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	multiset<int> s; //default���� less�� �����ѰŴ�
//
//
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//	s.insert( 40 ); //multiset�� ������ �ߺ��� ����Ѵ�.
//
//
//	pair<multiset<int>::iterator,multiset<int>::iterator > piter = s.equal_range(40);
//	if(piter.first!=piter.second)
//		cout<<*piter.first<<','<<*piter.second<<endl;
//	for(multiset<int>::iterator iter = s.begin();iter!=s.end();iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//
//}
//
//
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	multiset<int> s; //default���� less�� �����ѰŴ�
//
//
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//	s.insert( 40 ); //multiset�� ������ �ߺ��� ����Ѵ�.
//
//
//	pair<multiset<int>::iterator,multiset<int>::iterator > piter = s.equal_range(40);
//	if(piter.first!=piter.second){
//		for(multiset<int>::iterator iter = piter.first ; iter!=piter.second; iter++)
//			cout<<*iter<<" ";
//		cout<<endl;
//	}
//
//}
//
//
//#include<iostream>
//#include<map>
//#include<string>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	map<int,string> m; //default���� less�� �����ѰŴ�.
//
//	//m[key] = value : insert
//	m[3] = "three"; //insert
//	m[1] = "one";
//	m[5] = "five";
//	m[5] = "FIVE"; //update
//
//	cout<<m[3]<<endl; //reference
//	cout<<m[1]<<endl;
//	cout<<m[5]<<endl;
//
//}
//
//
//#include<iostream>
//#include<map>
//#include<string>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	map<int,string> m; //default���� less�� �����ѰŴ�.
//
//	//m[key] = value : insert �Ϲ������� �̷��� insert�����ʴ´�.
//	m[3] = "three"; //insert
//	m[1] = "one";
//	m[5] = "five";
//
//	m[5] = "FIVE"; //update
//
//	cout<<m[3]<<endl; //reference
//	cout<<m[1]<<endl;
//	cout<<m[5]<<endl;
//
//}
//
//
//#include<iostream>
//#include<map>
//#include<string>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	map<int,string> m; //default���� less�� �����ѰŴ�.
//
//	m.insert(pair<int,string>(3,"three")); //pair��ü�� �־�����Ѵ�.
//	m.insert(pair<int,string>(1,"one")); //pair��ü�� �־�����Ѵ�.
//	m.insert(pair<int,string>(5,"five")); //pair��ü�� �־�����Ѵ�.
//
//	//m[5] = "FIVE"; //update ���輺�� �ִ�.
//	map<int,string>::iterator iter = m.find(5); //ã���صڿ� �־��ش�. update�Ҷ� ���
//	if(iter!=m.end())
//		iter->second = "FIVE";
//
//	cout<<m[3]<<endl; //reference
//	cout<<m[1]<<endl;
//	cout<<m[5]<<endl;
//
//}
//
//
//#include<iostream>
//#include<map>
//#include<string>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	map<int,string> m; //default���� less�� �����ѰŴ�.
//
//	m.insert(pair<int,string>(3,"three")); //pair��ü�� �־�����Ѵ�.
//	m.insert(pair<int,string>(1,"one")); //pair��ü�� �־�����Ѵ�.
//	m.insert(pair<int,string>(5,"five")); //pair��ü�� �־�����Ѵ�.
//
//	//m[5] = "FIVE"; //update ���輺�� �ִ�.
//	map<int,string>::iterator iter = m.find(5); //ã���صڿ� �־��ش�. update�Ҷ� ���
//	if(iter!=m.end())
//		iter->second = "FIVE";
//
//	for(map<int,string>::iterator iter = m.begin();iter!=m.end();iter++)
//	{
//		cout<<(*iter).first<<','<<(*iter).second<<endl;
//	}
//}
//
//
//#include<iostream>
//#include<map>
//#include<string>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	map<int,string> m; //default���� less�� �����ѰŴ�.
//
//	m.insert(pair<int,string>(3,"three")); //pair��ü�� �־�����Ѵ�.
//	m.insert(pair<int,string>(1,"one")); //pair��ü�� �־�����Ѵ�.
//	m.insert(pair<int,string>(5,"five")); //pair��ü�� �־�����Ѵ�.
//
//	//m[5] = "FIVE"; //update ���輺�� �ִ�.
//	map<int,string>::iterator iter = m.find(5); //ã���صڿ� �־��ش�. update�Ҷ� ���
//	if(iter!=m.end())
//		iter->second = "FIVE";
//
//	for(map<int,string>::iterator iter = m.begin();iter!=m.end();iter++)
//	{
//		cout<<iter->first<<','<<iter->second<<endl; //iterator�� �����¿��Ұ� ������ �������ִٸ� ȭ��ǥ ������ ��밡��
//	}
//}
//
//
//#include<iostream>
//#include<map>
//#include<string>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	map<int,string> m; //default���� less�� �����ѰŴ�.
//
//	m.insert(pair<int,string>(3,"three")); //pair��ü�� �־�����Ѵ�.
//	m.insert(pair<int,string>(1,"one")); //pair��ü�� �־�����Ѵ�.
//	m.insert(pair<int,string>(5,"five")); //pair��ü�� �־�����Ѵ�.
//
//	//m[5] = "FIVE"; //update ���輺�� �ִ�.
//	map<int,string>::iterator liter = m.lower_bound(5); //ã���صڿ� �־��ش�. update�Ҷ� ���
//	map<int,string>::iterator uiter = m.upper_bound(5); //ã���صڿ� �־��ش�. update�Ҷ� ���
//	if(liter!=uiter)
//		liter->second = "FIVE";
//
//	for(map<int,string>::iterator iter = m.begin();iter!=m.end();iter++)
//	{
//		cout<<iter->first<<','<<iter->second<<endl; //iterator�� �����¿��Ұ� ������ �������ִٸ� ȭ��ǥ ������ ��밡��
//	}
//}
//
//
//#include<iostream>
//#include<map>
//#include<string>
//#include<algorithm>
//using namespace std;
//void main()
//{
//	multimap<int,string> m; //default���� less�� �����ѰŴ�.
//
//	//m[key] = value : insert multimap������ ���Ұ�
//	m.insert(pair<int,string>(3,"three")); //pair��ü�� �־�����Ѵ�.
//	m.insert(pair<int,string>(1,"one")); //pair��ü�� �־�����Ѵ�.
//	m.insert(pair<int,string>(5,"five")); //pair��ü�� �־�����Ѵ�.
//	m.insert(pair<int,string>(5,"five_2")); //pair��ü�� �־�����Ѵ�.
//
//	//m[5] = "FIVE"; //update ���輺�� �ִ�. multimap���� ���Ұ�
//	multimap<int,string>::iterator liter = m.lower_bound(5); //ã���صڿ� �־��ش�. update�Ҷ� ���
//	multimap<int,string>::iterator uiter = m.upper_bound(5); //ã���صڿ� �־��ش�. update�Ҷ� ���
//	if(liter!=uiter)
//	{
//		for(multimap<int,string>::iterator i = liter;i!=uiter;i++) //key���� 5�� ��� ���ҵ��� value�� update
//			i->second = "FIVE";
//	}
//	for(multimap<int,string>::iterator iter = m.begin();iter!=m.end();iter++)
//	{
//		cout<<iter->first<<','<<iter->second<<endl; //iterator�� �����¿��Ұ� ������ �������ִٸ� ȭ��ǥ ������ ��밡��
//	}
//}
//
//
//#include<iostream>
//#include<stack>
//using namespace std;
//void main()
//{
//	stack<int>st;
//
//	st.push(100);
//	st.push(200);
//	st.push(300);
//
//	cout<<st.top()<<endl; //���� �����ִ� ���Ҹ� ��ȯ
//	st.pop(); //300����
//	cout<<st.top()<<endl; //���� �����ִ� ���Ҹ� ��ȯ
//	st.pop(); //200����
//	cout<<st.top()<<endl; //���� �����ִ� ���Ҹ� ��ȯ
//	st.pop(); //100����
//}
//
//
//#include<iostream>
//#include<stack>
//using namespace std;
//void main()
//{
//	stack<int, deque<int>>st; //depue�� ������� �۵�
//
//	st.push(100);
//	st.push(200);
//	st.push(300);
//
//	cout<<st.top()<<endl; //���� �����ִ� ���Ҹ� ��ȯ
//	st.pop(); //300����
//	cout<<st.top()<<endl; //���� �����ִ� ���Ҹ� ��ȯ
//	st.pop(); //200����
//	cout<<st.top()<<endl; //���� �����ִ� ���Ҹ� ��ȯ
//	st.pop(); //100����
//}
//
//
//#include<iostream>
//#include<queue>
//#include<list>
//using namespace std;
//void main()
//{
//	queue<int>q; 
//	q.push(100); //push_back
//	q.push(200);
//	q.push(300);
//
//	cout<<q.front()<<endl; //���� �����ִ� ���Ҹ� ��ȯ
//	q.pop(); //100���� //pop_front�� ����.
//	cout<<q.front()<<endl; //���� �����ִ� ���Ҹ� ��ȯ
//	q.pop(); //200����
//	cout<<q.front()<<endl; //���� �����ִ� ���Ҹ� ��ȯ
//	q.pop(); //300����
//}
//
//
//#include<iostream>
//#include<queue>
//#include<list>
//using namespace std;
//void main()
//{
//	queue<int,list<int>>q; //����̵Ǵ� container�� �ٲ� �� �ִ�.
//	q.push(100); //push_back
//	q.push(200);
//	q.push(300);
//
//	cout<<q.front()<<endl; //���� �����ִ� ���Ҹ� ��ȯ
//	q.pop(); //100���� //pop_back�� ����.
//	cout<<q.front()<<endl; //���� �����ִ� ���Ҹ� ��ȯ
//	q.pop(); //200����
//	cout<<q.front()<<endl; //���� �����ִ� ���Ҹ� ��ȯ
//	q.pop(); //300����
//}
//
//
//#include<fstream> //��������������� header
//#include<iostream>
//using namespace std;
//void main()
//{
//	ofstream fout("text.txt");
//
//	fout<<100<<endl;
//	fout<<200<<endl;
//	fout<<300<<endl;
//	fout.close(); //ȣ������ �ʾƵ� �Ҹ��ڿ��� �ڵ����� �Ҹ������
//
//	ifstream fin("text.txt");
//
//	int n;
//	fin>>n;
//	cout<<n<<endl;
//	fin>>n;
//	cout<<n<<endl;
//	fin>>n;
//	cout<<n<<endl;
//}