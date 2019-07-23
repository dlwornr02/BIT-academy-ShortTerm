//1.
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>
using namespace std;
class Point
{
	int x;
	int y;
public:
	Point(int _x=0,int _y=0):x(_x),y(_y){}
	int GetX()const{return x;}
	int GetY()const{return y;}
	bool operator<(const Point&arg)
	{
		if(x<arg.x)
			return true;
		else if(x>arg.x)
			return false;
		else
			return (y<arg.y);
	}
	bool operator>(const Point&arg)
	{
		if(x>arg.x)
			return true;
		else if(x<arg.x)
			return false;
		else
			return (y>arg.y);
	}
};
class PointContainer
{
	Point*pc;
	vector<Point> v;
	int size;
	int capacity;
public:
	PointContainer(int cap=100):size(0),capacity(cap)
	{
		pc = new Point[capacity];
	}
	void Add(const Point&data)
	{
		
		pc[size++] = data;
		v.push_back(data);
	}
	void Print()
	{
		for(int i=0;i<size;i++)
			cout<<'('<<pc[i].GetX()<<','<<pc[i].GetY()<<')'<<" ";
		cout<<endl;
	}
	void Remove(const Point&pt)
	{
		int idx=-1;
		for(int i=0 ; i<size ; i++)
		{
			if((pc[i].GetX()==pt.GetX()) && (pc[i].GetY()==pt.GetY()))
				idx=i;
		}
		if(idx!=-1)
		{
			for(int i=idx;i<size;i++)
				pc[i]=pc[i+1];
			size--;
		}

	}
	void Search(const Point&pt)
	{
		for(int i=0 ; i<size ; i++)
		{
			if((pc[i].GetX()==pt.GetX()) && (pc[i].GetY()==pt.GetY()))
				cout<<"있음!"<<endl;
		}
	}
	void Random()
	{
		srand((unsigned) time);
		for(int i=0;i<size;i++){
			int a = rand()%(size-1)+1;
			Point pt = pc[a];
			pc[a] = pc[i];
			pc[i] = pt;
		}
	}
	void Reset()
	{
		vector<Point>::iterator iter = v.begin();
		size = v.size();
		for(int i=0;i<size;i++,iter++)
		{
			pc[i] = *iter;
		}
	}
	void Sort()
	{
		for(int i=0;i<size;i++){
			for(int j=0;j<size;j++){
				if(pc[j]>pc[j+1] && (j+1)<size)
				{
					Point pt = pc[j];
					pc[j] = pc[j+1];
					pc[j+1] = pt;
				}

			}
		}

	}
};
void main()
{
	PointContainer pc;

	pc.Add(Point(6,3));
	pc.Add(Point(5,6));
	pc.Add(Point(5,3));
	pc.Add(Point(10,10));
	pc.Add(Point(10,6));
	pc.Add(Point(10,11));
	pc.Print();
	
	pc.Remove(Point(10,10));
	pc.Print();

	pc.Search(Point(10,11));

	pc.Random();
	pc.Print();


	pc.Reset();
	pc.Print();

	pc.Sort();
	pc.Print();
	
}

//
////
//////2.
//#include<iostream>
//#include<list>
//#include<string>
//#include<algorithm>
//using namespace std;
//struct PredString1
//{
//	bool operator()(const string&a,const string&b)const
//	{
//		return a<b;
//	}
//};
//struct PredString2
//{
//	bool operator()(const string&a,const string&b)const
//	{
//		return a>b;
//	}
//};
//const string TotalString(list<string> lt)
//{
//	string total;
//	for(list<string>::iterator iter = lt.begin(); iter!=lt.end();iter++)
//		total+=(*iter);
//	return total;
//}
//string MaxString(list<string>lt)
//{
//	string max;
//	list<string>::iterator biter = lt.begin();
//	list<string>::iterator citer = ++lt.begin();
//	for(; citer!=lt.end();biter++,citer++)
//	{
//		if((*biter).length() > (*citer).length())
//			max = *biter;
//		else
//			max = *citer;
//	}
//	return max;
//}
////template <typename T>
////void sort(list<string>::iterator bi,list<string>::iterator ei,T)
////{
////	for(;bi!=ei;bi++)
////	{
////		if(T())
////		{
////			*bi=*ei;
////		}
////	}
////}
//void main()
//{
//	list<string> lt;
//
//	lt.push_back("abc");
//	lt.push_back("bcd");
//	lt.push_back("kbc");
//	lt.push_back("jactag");
//	lt.push_back("gaac");
//
//	//1.모든 원소가 오름차순 정렬되어 출력
//	//sort(lt.begin(),lt.end(),PredString1());
//	//출력코드 작성
//	lt.sort(); //대체...
//	for(list<string>::iterator iter = lt.begin(); iter!=lt.end(); iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//
//	//2 모든 원소가 내림차순 정렬되어 출력
//	//sort(lt.rbegin(),lt.rend(),PredString2());
//	//출력코드 작성
//	for(list<string>::iterator iter = lt.begin(); iter!=lt.end(); iter++)
//		cout<<*iter<<" ";
//	cout<<endl;
//	//3.아래 TotalString()함수 작성
//	string total = TotalString(lt); //모든 문자열을 하나로
//	cout<<total<<endl;
//
//	//4.가장 길이가 긴 문자열 반환
//	string max = MaxString(lt);
//	cout<<max<<endl;//jactag
//}