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
//	explicit Point(int _x=0,int _y=0):x(_x),y(_y){} //����ȯ���Ϸ��� ����
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
//	copy(list,list+8,v.begin()); //list�� �ִ°��� v�� �����Ѵ�.
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
//	explicit Point(int _x=0,int _y=0):x(_x),y(_y){} //����ȯ���Ϸ��� ����
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
//	Copy(list,list+8,v.begin()); //list�� �ִ°��� v�� �����Ѵ�.
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
//	explicit Point(int _x=0,int _y=0):x(_x),y(_y){} //����ȯ���Ϸ��� ����
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
//	//Copy(list,list+8,v.begin()); //list�� �ִ°��� v�� �����Ѵ�.
//	copy(list,list+8,ostream_iterator<Point>(cout," ")); //vector�� ����ϴ°��� ���� �����ϴ°Ű� cout�� ����ϴ°��� ȭ�鿡 ����ϴ°��̴�.
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
//	explicit Point(int _x=0,int _y=0):x(_x),y(_y){} //����ȯ���Ϸ��� ����
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
//	//Copy(list,list+8,v.begin()); //list�� �ִ°��� v�� �����Ѵ�.
//	copy(list,list+8,ostream_iterator<Point>(cout," ")); //vector�� ����ϴ°��� ���� �����ϴ°Ű� cout�� ����ϴ°��� ȭ�鿡 ����ϴ°��̴�.
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
//	explicit Point(int _x=0,int _y=0):x(_x),y(_y){} //����ȯ���Ϸ��� ����
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
//	//Copy(list,list+8,v.begin()); //list�� �ִ°��� v�� �����Ѵ�.
//	copy(list,list+8,ostream_iterator<Point>(cout," ")); //vector�� ����ϴ°��� ���� �����ϴ°Ű� cout�� ����ϴ°��� ȭ�鿡 ����ϴ°��̴�.
//	cout<<endl;
//}


//////////////////////////��sort/////////////////////////////�̷������� ���� �����̴�.
//��sort������ pivot�� ������ �߿��ϴ�. pivot���� �밳 �� ���ʰ��̴�;
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