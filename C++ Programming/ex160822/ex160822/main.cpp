//#include<iostream>
//#include<algorithm>
//#include<iterator>
//using namespace std;
//void main()
//{
//	int list[10]={50,30,80,90,15,25,40,60};
//	sort(list,list+8);
//	copy(list,list+8,ostream_iterator<int>(cout," "));
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<algorithm>
//#include<iterator>
//#include<vector>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	explicit Point(int _x=0,int _y=0):x(_x),y(_y){} //형변환안하려고 붙임
//	void Print()const{cout<<x<<','<<y<<endl;}
//	bool operator<(const Point&arg)
//	{
//		if(x<arg.x)
//			return true;
//		else if(x>arg.x)
//			return false;
//		else
//			return (y<arg.y);
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//ostream& operator<<(ostream& o,const Point&arg)
//{
//	o<<arg.GetX()<<','<<arg.GetY();
//	return o;
//}
//void main()
//{
//	Point list[10]={
//		Point(2,3),
//		Point(7,8),
//		Point(10,2),
//		Point(7,6),
//		Point(5,4),
//		Point(3,3),
//		Point(6,2),
//		Point(6,8)};
//	sort(list,list+8);
//
//	vector<Point> v(8);
//
//	copy(list,list+8,v.begin()); //list에 있는것을 v에 복사한다.
//	//copy(list,list+8,ostream_iterator<int>(cout," "));
//	cout<<endl;
//
//	for(unsigned i = 0 ; i<v.size();i++)
//		v[i].Print();
//}
//
//
//#include<iostream>
//#include<algorithm>
//#include<iterator>
//#include<vector>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	explicit Point(int _x=0,int _y=0):x(_x),y(_y){} //형변환안하려고 붙임
//	void Print()const{cout<<x<<','<<y<<endl;}
//	bool operator<(const Point&arg)
//	{
//		if(x<arg.x)
//			return true;
//		else if(x>arg.x)
//			return false;
//		else
//			return (y<arg.y);
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//ostream& operator<<(ostream& o,const Point&arg)
//{
//	o<<arg.GetX()<<','<<arg.GetY();
//	return o;
//}
//template <typename InIter,typename OutIter>
//void Copy(InIter s,InIter e,OutIter b)
//{
//	for(;s!=e;s++)
//		*b++ = *s;
//}
//void main()
//{
//	Point list[10]={
//		Point(2,3),
//		Point(7,8),
//		Point(10,2),
//		Point(7,6),
//		Point(5,4),
//		Point(3,3),
//		Point(6,2),
//		Point(6,8)};
//	sort(list,list+8);
//
//	vector<Point> v(8);
//
//	Copy(list,list+8,v.begin()); //list에 있는것을 v에 복사한다.
//	//copy(list,list+8,ostream_iterator<int>(cout," "));
//	cout<<endl;
//
//	for(unsigned i = 0 ; i<v.size();i++)
//		v[i].Print();
//}
//
//
//#include<iostream>
//#include<algorithm>
//#include<iterator>
//#include<vector>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	explicit Point(int _x=0,int _y=0):x(_x),y(_y){} //형변환안하려고 붙임
//	void Print()const{cout<<x<<','<<y<<endl;}
//	bool operator<(const Point&arg)
//	{
//		if(x<arg.x)
//			return true;
//		else if(x>arg.x)
//			return false;
//		else
//			return (y<arg.y);
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//ostream& operator<<(ostream& o,const Point&arg)
//{
//	o<<arg.GetX()<<','<<arg.GetY();
//	return o;
//}
//template <typename InIter,typename OutIter>
//void Copy(InIter s,InIter e,OutIter b)
//{
//	for(;s!=e;s++)
//		*b++ = *s;
//}
//void main()
//{
//	Point list[10]={
//		Point(2,3),
//		Point(7,8),
//		Point(10,2),
//		Point(7,6),
//		Point(5,4),
//		Point(3,3),
//		Point(6,2),
//		Point(6,8)};
//	sort(list,list+8);
//
//	vector<Point> v(8);
//
//	//Copy(list,list+8,v.begin()); //list에 있는것을 v에 복사한다.
//	copy(list,list+8,ostream_iterator<Point>(cout," ")); //vector에 출력하는것은 값을 복사하는거고 cout에 출력하는것은 화면에 출력하는것이다.
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<algorithm>
//#include<iterator>
//#include<vector>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	explicit Point(int _x=0,int _y=0):x(_x),y(_y){} //형변환안하려고 붙임
//	void Print()const{cout<<x<<','<<y<<endl;}
//	bool operator<(const Point&arg)
//	{
//		if(x<arg.x)
//			return true;
//		else if(x>arg.x)
//			return false;
//		else
//			return (y<arg.y);
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//ostream& operator<<(ostream& o,const Point&arg)
//{
//	o<<arg.GetX()<<','<<arg.GetY();
//	return o;
//}
//void main()
//{
//	Point list[10]={
//		Point(2,3),
//		Point(7,8),
//		Point(10,2),
//		Point(7,6),
//		Point(5,4),
//		Point(3,3),
//		Point(6,2),
//		Point(6,8)};
//	sort(list,list+8);
//
//	vector<Point> v(8);
//
//	//Copy(list,list+8,v.begin()); //list에 있는것을 v에 복사한다.
//	copy(list,list+8,ostream_iterator<Point>(cout," ")); //vector에 출력하는것은 값을 복사하는거고 cout에 출력하는것은 화면에 출력하는것이다.
//	cout<<endl;
//}
//
//
//#include<iostream>
//#include<algorithm>
//#include<iterator>
//#include<vector>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	explicit Point(int _x=0,int _y=0):x(_x),y(_y){} //형변환안하려고 붙임
//	void Print()const{cout<<x<<','<<y<<endl;}
//	bool operator<(const Point&arg)
//	{
//		if(x<arg.x)
//			return true;
//		else if(x>arg.x)
//			return false;
//		else
//			return (y<arg.y);
//	}
//	int GetX()const{return x;}
//	int GetY()const{return y;}
//};
//ostream& operator<<(ostream& o,const Point&arg)
//{
//	o<<arg.GetX()<<','<<arg.GetY();
//	return o;
//}
//struct Pred
//{
//	bool operator()(const Point&p1,const Point&p2)
//	{
//		if(p1.GetX()<p2.GetX())
//			return true;
//		else if(p1.GetX()>p2.GetX())
//			return false;
//		else
//			return (p1.GetY() < p2.GetY());
//	}
//}
//void main()
//{
//	Point list[10]={
//		Point(2,3),
//		Point(7,8),
//		Point(10,2),
//		Point(7,6),
//		Point(5,4),
//		Point(3,3),
//		Point(6,2),
//		Point(6,8)};
//	sort(list,list+8, Pred());
//
//	vector<Point> v(8);
//
//	//Copy(list,list+8,v.begin()); //list에 있는것을 v에 복사한다.
//	copy(list,list+8,ostream_iterator<Point>(cout," ")); //vector에 출력하는것은 값을 복사하는거고 cout에 출력하는것은 화면에 출력하는것이다.
//	cout<<endl;
//}


//////////////////////////퀵sort/////////////////////////////이론적으로 분할 정렬이다.
//퀵sort에서는 pivot값 설정이 중요하다. pivot값은 대개 맨 왼쪽값이다;
//#include<iostream>
//#include<algorithm>
//using namespace std;
//void PrintArray(int list[],int size)
//{
//	for(int i=0;i<size;i++)
//		cout<<list[i]<<" ";
//	cout<<endl;
//}
//void _Sort(int list[],int left,int right)
//{
//	if(left<right)
//	{
//		int pivot = left;
//		int i = left+1;
//		int j = right;
//		while(i<=j)
//		{
//			while( list[i] < list[pivot] )
//				i++;
//			while( list[j] > list[pivot] )
//				j--;
//
//			if(i<j)
//			{
//				swap(list[i],list[j]);
//			}
//		}
//		swap(list[j],list[pivot]);
//		_Sort(list, left, j-1);
//		_Sort(list, j+1, right);
//	}
//}
//void Sort(int list[], int size)
//{
//	_Sort(list,0,size-1);
//}
//void main()
//{
//	//int list[10]={50,30,80,90,15,25,40,60};
//	int list[10]={50,15,60,80,30,25,90,40};
//	int size = 8;
//
//	Sort(list,8);
//	PrintArray(list,size);
//}