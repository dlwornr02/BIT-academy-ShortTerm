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
//#include<iostream>//그냥함수
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
//#include<iostream>//함수포인터
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
//	Func f("\n=="); //상태를 가질 수 있으므로 부가적인 기능 호출가능
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
//	Print f; //함수객체 
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
//void For_each(Iter si,Iter ei,F f) //순차열을 input으로 받는다.
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
//	Print f; //함수객체 
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
//class Print //함수객체 class, 함수자 class
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
//	//Print f; //f => 함수객체,함수자
//	for_each(v.begin(),v.end(),Print()); //임시객체로 사용
//	cout<<endl;								 
//	for_each(v.begin(),v.end(),Print()); //임시객체로 사용
//	cout<<endl;								 
//	for_each(v.begin(),v.end(),Print()); //임시객체로 사용
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
///////////////////////////
//struct Print //class와의 차이점은 접근권한자밖에 없음
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
//	//Print f; //f => 함수객체,함수자
//	for_each(v.begin(),v.end(),Print()); //임시객체로 사용
//	cout<<endl;								 
//	for_each(v.begin(),v.end(),Print()); //임시객체로 사용
//	cout<<endl;								 
//	for_each(v.begin(),v.end(),Print()); //임시객체로 사용
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Print //class와의 차이점은 접근권한자밖에 없음
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
//struct Print //class와의 차이점은 접근권한자밖에 없음
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
//struct Print //class와의 차이점은 접근권한자밖에 없음
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
//struct Print //함수객체이면서 predicate
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
//	cout<<f(50,20)<<endl; //이항predicate
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Print //함수객체이면서 predicate
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
//	cout<<f(500)<<endl; //단항 predicate
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Print //함수객체이면서 predicate
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
//struct Print //함수객체이면서 predicate
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
//struct Print //함수객체이면서 predicate
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
//		return a>b;  //내림차순으로 하고싶다.
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
//	sort(v.begin(),v.end(),greater<int>()); //greater을 이미 만들어놈 => 이항predicate 함수자를 이미 만들어놈
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
//	sort(v.begin(),v.end(),less<int>()); //greater을 이미 만들어놈 => 이항predicate 함수자를 이미 만들어놈
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
//	//sort(v.begin(),v.end(),less<int>()); //greater을 이미 만들어놈 => 이항predicate 함수자를 이미 만들어놈
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
//	sort(v.begin(),v.end()); //greater을 이미 만들어놈 => 이항predicate 함수자를 이미 만들어놈
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
//	bool operator<(const Point&arg) //크기비교 연산자는 잘안쓴다.
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
//	sort(v.begin(),v.end()); //greater을 이미 만들어놈 => 이항predicate 함수자를 이미 만들어놈
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
//	sort(v.begin(),v.end(),Cmp()); //greater을 이미 만들어놈 => 이항predicate 함수자를 이미 만들어놈
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
//	sort(v.begin(),v.end(),Cmp()); //greater을 이미 만들어놈 => 이항predicate 함수자를 이미 만들어놈
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
//	sort(v.begin(),v.end(),Compare); //greater을 이미 만들어놈 => 이항predicate 함수자를 이미 만들어놈
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
//	set<int,less<int>> s; //default값이 less라서 생략한거다
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
//	set<int,greater<int>> s; //default값이 less라서 생략한거다
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
//	set<int> s; //default값이 less라서 생략한거다
//	s.insert( 30 ); //인수를 key라고 한다.
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
//	set<int> s; //default값이 less라서 생략한거다
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//
//	set<int>::iterator iter = s.find(40); //찾으면 찾은 원소의 iterator반환 못찾으면 end()반환
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
//	set<int> s; //default값이 less라서 생략한거다
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
//	set<int> s; //default값이 less라서 생략한거다
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//
//	set<int>::iterator liter = s.lower_bound(30); 
//	set<int>::iterator uiter = s.upper_bound(40); //원소가 아니라서 오류남
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
//	set<int> s; //default값이 less라서 생략한거다
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//
//	set<int>::iterator liter = s.lower_bound(30);
//	set<int>::iterator uiter = s.upper_bound(40); //원소가 아니라서 오류남
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
//	set<int> s; //default값이 less라서 생략한거다
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//
//	set<int>::iterator liter = s.lower_bound(30);
//	set<int>::iterator uiter = s.upper_bound(30); //원소가 아니라서 오류남
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
//	set<int> s; //default값이 less라서 생략한거다
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
//	set<int> s; //default값이 less라서 생략한거다
//
//
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//	s.insert( 40 ); //원소의 중복을 허용하지 않는다.
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
//	multiset<int> s; //default값이 less라서 생략한거다
//
//
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//	s.insert( 40 ); //multiset은 원소의 중복을 허용한다.
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
//	multiset<int> s; //default값이 less라서 생략한거다
//
//
//	s.insert( 30 );
//	s.insert( 20 );
//	s.insert( 50 );
//	s.insert( 40 );
//	s.insert( 10 );
//	s.insert( 40 ); //multiset은 원소의 중복을 허용한다.
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
//	map<int,string> m; //default값이 less라서 생략한거다.
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
//	map<int,string> m; //default값이 less라서 생략한거다.
//
//	//m[key] = value : insert 일반적으로 이렇게 insert하지않는다.
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
//	map<int,string> m; //default값이 less라서 생략한거다.
//
//	m.insert(pair<int,string>(3,"three")); //pair객체로 넣어줘야한다.
//	m.insert(pair<int,string>(1,"one")); //pair객체로 넣어줘야한다.
//	m.insert(pair<int,string>(5,"five")); //pair객체로 넣어줘야한다.
//
//	//m[5] = "FIVE"; //update 위험성이 있다.
//	map<int,string>::iterator iter = m.find(5); //찾아준뒤에 넣어준다. update할때 사용
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
//	map<int,string> m; //default값이 less라서 생략한거다.
//
//	m.insert(pair<int,string>(3,"three")); //pair객체로 넣어줘야한다.
//	m.insert(pair<int,string>(1,"one")); //pair객체로 넣어줘야한다.
//	m.insert(pair<int,string>(5,"five")); //pair객체로 넣어줘야한다.
//
//	//m[5] = "FIVE"; //update 위험성이 있다.
//	map<int,string>::iterator iter = m.find(5); //찾아준뒤에 넣어준다. update할때 사용
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
//	map<int,string> m; //default값이 less라서 생략한거다.
//
//	m.insert(pair<int,string>(3,"three")); //pair객체로 넣어줘야한다.
//	m.insert(pair<int,string>(1,"one")); //pair객체로 넣어줘야한다.
//	m.insert(pair<int,string>(5,"five")); //pair객체로 넣어줘야한다.
//
//	//m[5] = "FIVE"; //update 위험성이 있다.
//	map<int,string>::iterator iter = m.find(5); //찾아준뒤에 넣어준다. update할때 사용
//	if(iter!=m.end())
//		iter->second = "FIVE";
//
//	for(map<int,string>::iterator iter = m.begin();iter!=m.end();iter++)
//	{
//		cout<<iter->first<<','<<iter->second<<endl; //iterator가 가지는원소가 참조를 가지고있다면 화살표 연산자 사용가능
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
//	map<int,string> m; //default값이 less라서 생략한거다.
//
//	m.insert(pair<int,string>(3,"three")); //pair객체로 넣어줘야한다.
//	m.insert(pair<int,string>(1,"one")); //pair객체로 넣어줘야한다.
//	m.insert(pair<int,string>(5,"five")); //pair객체로 넣어줘야한다.
//
//	//m[5] = "FIVE"; //update 위험성이 있다.
//	map<int,string>::iterator liter = m.lower_bound(5); //찾아준뒤에 넣어준다. update할때 사용
//	map<int,string>::iterator uiter = m.upper_bound(5); //찾아준뒤에 넣어준다. update할때 사용
//	if(liter!=uiter)
//		liter->second = "FIVE";
//
//	for(map<int,string>::iterator iter = m.begin();iter!=m.end();iter++)
//	{
//		cout<<iter->first<<','<<iter->second<<endl; //iterator가 가지는원소가 참조를 가지고있다면 화살표 연산자 사용가능
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
//	multimap<int,string> m; //default값이 less라서 생략한거다.
//
//	//m[key] = value : insert multimap에서는 사용불가
//	m.insert(pair<int,string>(3,"three")); //pair객체로 넣어줘야한다.
//	m.insert(pair<int,string>(1,"one")); //pair객체로 넣어줘야한다.
//	m.insert(pair<int,string>(5,"five")); //pair객체로 넣어줘야한다.
//	m.insert(pair<int,string>(5,"five_2")); //pair객체로 넣어줘야한다.
//
//	//m[5] = "FIVE"; //update 위험성이 있다. multimap에선 사용불가
//	multimap<int,string>::iterator liter = m.lower_bound(5); //찾아준뒤에 넣어준다. update할때 사용
//	multimap<int,string>::iterator uiter = m.upper_bound(5); //찾아준뒤에 넣어준다. update할때 사용
//	if(liter!=uiter)
//	{
//		for(multimap<int,string>::iterator i = liter;i!=uiter;i++) //key값이 5인 모든 원소들의 value를 update
//			i->second = "FIVE";
//	}
//	for(multimap<int,string>::iterator iter = m.begin();iter!=m.end();iter++)
//	{
//		cout<<iter->first<<','<<iter->second<<endl; //iterator가 가지는원소가 참조를 가지고있다면 화살표 연산자 사용가능
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
//	cout<<st.top()<<endl; //가장 끝에있는 원소를 반환
//	st.pop(); //300제거
//	cout<<st.top()<<endl; //가장 끝에있는 원소를 반환
//	st.pop(); //200제거
//	cout<<st.top()<<endl; //가장 끝에있는 원소를 반환
//	st.pop(); //100제거
//}
//
//
//#include<iostream>
//#include<stack>
//using namespace std;
//void main()
//{
//	stack<int, deque<int>>st; //depue를 기반으로 작동
//
//	st.push(100);
//	st.push(200);
//	st.push(300);
//
//	cout<<st.top()<<endl; //가장 끝에있는 원소를 반환
//	st.pop(); //300제거
//	cout<<st.top()<<endl; //가장 끝에있는 원소를 반환
//	st.pop(); //200제거
//	cout<<st.top()<<endl; //가장 끝에있는 원소를 반환
//	st.pop(); //100제거
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
//	cout<<q.front()<<endl; //가장 끝에있는 원소를 반환
//	q.pop(); //100제거 //pop_front와 같다.
//	cout<<q.front()<<endl; //가장 끝에있는 원소를 반환
//	q.pop(); //200제거
//	cout<<q.front()<<endl; //가장 끝에있는 원소를 반환
//	q.pop(); //300제거
//}
//
//
//#include<iostream>
//#include<queue>
//#include<list>
//using namespace std;
//void main()
//{
//	queue<int,list<int>>q; //기반이되는 container를 바꿀 수 있다.
//	q.push(100); //push_back
//	q.push(200);
//	q.push(300);
//
//	cout<<q.front()<<endl; //가장 끝에있는 원소를 반환
//	q.pop(); //100제거 //pop_back와 같다.
//	cout<<q.front()<<endl; //가장 끝에있는 원소를 반환
//	q.pop(); //200제거
//	cout<<q.front()<<endl; //가장 끝에있는 원소를 반환
//	q.pop(); //300제거
//}
//
//
//#include<fstream> //파일입출력을위한 header
//#include<iostream>
//using namespace std;
//void main()
//{
//	ofstream fout("text.txt");
//
//	fout<<100<<endl;
//	fout<<200<<endl;
//	fout<<300<<endl;
//	fout.close(); //호출하지 않아도 소멸자에서 자동으로 소멸시켜줌
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