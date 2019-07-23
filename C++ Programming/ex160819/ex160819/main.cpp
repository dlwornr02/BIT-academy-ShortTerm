//#include<iostream>
//#include<algorithm>
//#include<list>
//using namespace std;
//struct Hash
//{
//	list<int> *bucket;
//	int tableSize;
//	int (*pHF)(int ,int);
//};
//int HashFunction(int key,int size)
//{
//	return key%size;
//}
//void Add(Hash*ph,int key)
//{
//	int addr = ph->pHF(key, ph->tableSize);  //원소의 개수를 인수로 넣어준다.
//	ph->bucket[addr].push_back(key);
//}
//void Remove(Hash*ph,int key)
//{
//	int addr = ph->pHF(key,ph->tableSize);
//	list<int>::iterator iter = find(ph->bucket[addr].begin(),ph->bucket[addr].end(),key);
//	if(iter!=ph->bucket[addr].end())
//		ph->bucket[addr].erase(iter);
//}
//bool Find(Hash*ph,int key)
//{
//	int addr = ph->pHF(key,ph->tableSize);
//	list<int>::iterator iter = find(ph->bucket[addr].begin(),ph->bucket[addr].end(),key);
//	if(iter!=ph->bucket[addr].end())
//		return true;
//	else
//		return false;
//}
//void Print(Hash*ph)
//{
//	for(int i=0;i<ph->tableSize;i++)
//	{
//		cout<<"["<<i<<"] : ";
//		for(list<int>::iterator iter = ph->bucket[i].begin();iter!=ph->bucket[i].end();iter++)
//			cout<<*iter<<" ";
//		cout<<endl;
//	}
//}
//void InitHash(Hash*ph, int (*pf)(int,int)=NULL)
//{
//	ph->tableSize = 20;
//	ph->bucket = new list<int>[ph->tableSize];
//	if(pf)
//		ph->pHF =  pf;
//	else
//		ph->pHF = HashFunction;
//}
//void UninitHash(Hash*ph)
//{
//	delete [] ph->bucket;
//}
//////////////////////////////////////////////
//int MyHF(int key, int size)
//{
//	int addr = ((key >> 2) | 0x05) %size;
//	return addr;
//}
//void main()
//{
//	Hash h;
//	//충돌이 일어난다.=>client가 hashFunction을 바꿀수있게 해줘야한다.
//	InitHash(&h,MyHF);
//	Add(&h,50);
//	Add(&h,70);
//	Add(&h,80);
//	Add(&h,90);
//	Add(&h,20);
//
//	Remove(&h,72);
//	Print(&h);
//	UninitHash(&h);
//}

//
//#include<iostream>
//#include<algorithm>
//#include<list>
//using namespace std;
//class Hash
//{
//	list<int> *bucket;
//	int tableSize;
//	int (*pHF)(int ,int);
//public:
//
//	static int HashFunction(int key,int size) //객체의 것이 아니어도 상관없음 그냥 알고리즘이기 때문에
//	{
//		return key%size;
//	}
//	void Add(int key)
//	{
//		int addr = pHF(key, tableSize);  //원소의 개수를 인수로 넣어준다.
//		bucket[addr].push_back(key);
//	}
//	void Remove(int key)
//	{
//		int addr = pHF(key,tableSize);
//		list<int>::iterator iter = find(bucket[addr].begin(),bucket[addr].end(),key);
//		if(iter!=bucket[addr].end())
//			bucket[addr].erase(iter);
//	}
//	bool Find(int key)
//	{
//		int addr = pHF(key,tableSize);
//		list<int>::iterator iter = find(bucket[addr].begin(),bucket[addr].end(),key);
//		if(iter!=bucket[addr].end())
//			return true;
//		else
//			return false;
//	}
//	void Print()
//	{
//		for(int i=0;i<tableSize;i++)
//		{
//			cout<<"["<<i<<"] : ";
//			for(list<int>::iterator iter = bucket[i].begin();iter!=bucket[i].end();iter++)
//				cout<<*iter<<" ";
//			cout<<endl;
//		}
//	}
//	Hash(int (*pf)(int,int)=NULL)
//	{
//		tableSize = 20;
//		bucket = new list<int>[tableSize];
//		if(pf)
//			pHF =  pf;
//		else
//			pHF = HashFunction; //pHF는 정적 함수포인터-전역함수나 정적함수(static)의 주소를 담는 포인터
//								//멤버함수 앞에 static을 붙여야 저장할 수 있다.
//								//정적함수 포인터-전역함수 & static 함수의 주소만 보관가능
//	}
//	~Hash()
//	{
//		delete [] bucket;
//	}
//};
//////////////////////////////////////////////
//int MyHF(int key, int size)
//{
//	int addr = ((key >> 2) | 0x05) %size;
//	return addr;
//}
//void main()
//{
//	Hash h(MyHF);
//	h.Add(50);
//	h.Add(70);
//	h.Add(80);
//	h.Add(90);
//	h.Add(20);
//
//	h.Remove(72);
//	h.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//void Function(int data)
//{
//	cout << "Function()"<<data<<endl;
//}
//class Test
//{
//public:
//	static void Method1(int data)
//	{
//		cout<<"Test::Method1()"<<data<<endl;
//	}
//	void Method2(int data)
//	{
//		cout<<"Test::Method2()"<<data<<endl;
//	}
//};
//void main()
//{
//	void(*pf)(int); //정적함수 포인터라서 전역함수와 static함수만 보관가능
//	pf = &Function; //전역함수에서는 주소연산자를 붙여도 안붙여도 상관없음
//	pf(10);
//	pf = &Test::Method1;//주소연산자 붙여도되고 안붙여도 되지만 명확하게 하기위해 주소연산자를 붙여준다.
//	pf(10);
//
//	void (Test::*pf2)(int); //멤버함수 포인터 , Test클래스의 멤버함수를 저장하는 함수포인터라는 뜻이다.
//	pf2 = &Test::Method2; //멤버함수포인터는 주소연산자를 꼭 붙여줘야 한다.
//
//	Test o1,o2;
//	(o1.*pf2)(10); //객체를 생성해서 연산자우선순위에 따라 ()를 붙여준다.
//	(o2.*pf2)(10); //객체를 생성해서 연산자우선순위에 따라 ()를 붙여준다.
//	Test*p = &o1;  
//	(p->*pf2)(10);
//	//1.  .* 객체를 이용해서 멤버함수 포인터사용
//	//2.  ->* 멤버함수포인터를 객체의 주소로 사용하는법
//}
//
//
//#include<iostream>
//#include<algorithm>
//#include<list>
//using namespace std;
//class Hash
//{
//	list<int> *bucket;
//	int tableSize;
//	int (*pHF)(int ,int);
//public:
//
//	static int HashFunction(int key,int size) //객체의 것이 아니어도 상관없음 그냥 알고리즘이기 때문에
//	{
//		return key%size;
//	}
//	void Add(int key)
//	{
//		int addr = pHF(key, tableSize);  //원소의 개수를 인수로 넣어준다.
//		bucket[addr].push_back(key);
//	}
//	void Remove(int key)
//	{
//		int addr = pHF(key,tableSize);
//		list<int>::iterator iter = find(bucket[addr].begin(),bucket[addr].end(),key);
//		if(iter!=bucket[addr].end())
//			bucket[addr].erase(iter);
//	}
//	bool Find(int key)
//	{
//		int addr = pHF(key,tableSize);
//		list<int>::iterator iter = find(bucket[addr].begin(),bucket[addr].end(),key);
//		if(iter!=bucket[addr].end())
//			return true;
//		else
//			return false;
//	}
//	void Print()
//	{
//		for(int i=0;i<tableSize;i++)
//		{
//			cout<<"["<<i<<"] : ";
//			for(list<int>::iterator iter = bucket[i].begin();iter!=bucket[i].end();iter++)
//				cout<<*iter<<" ";
//			cout<<endl;
//		}
//	}
//	Hash(int (*pf)(int,int)=NULL)
//	{
//		tableSize = 20;
//		bucket = new list<int>[tableSize];
//		if(pf)
//			pHF =  pf;
//		else
//			pHF = HashFunction; //pHF는 정적 함수포인터-전역함수나 정적함수(static)의 주소를 담는 포인터
//								//멤버함수 앞에 static을 붙여야 저장할 수 있다.
//								//정적함수 포인터-전역함수 & static 함수의 주소만 보관가능
//	}
//	~Hash()
//	{
//		delete [] bucket;
//	}
//};
//////////////////////////////////////////////
//int MyHF(int key, int size)
//{
//	int addr = ((key >> 2) | 0x05) %size;
//	return addr;
//}
//void main()
//{
//	Hash h(MyHF); //객체 생성시에 함수포인터를 일반적으로 사용하지 않는다.
//				  //객체지향에서는 변화하는 내용을 캡슐화 한다.
//				  //전략패턴 - -함수포인터를 사용하지 않고 기능(알고리즘)을 실행시간에 바꾸는 것
//	h.Add(50);
//	h.Add(70);
//	h.Add(80);
//	h.Add(90);
//	h.Add(20);
//
//	h.Remove(72);
//	h.Print();
//}
//
//
//#include<iostream>
//#include<algorithm>
//#include<list>
//using namespace std;
//class HashFunction
//{
//public:
//	virtual int Action(int key,int size)=0;
//};
//
//class DefHashFunction : public HashFunction
//{
//public:
//	int Action(int key, int size)
//	{
//		return key%size;
//	}
//};
//class Hash
//{
//	list<int> *bucket;
//	int tableSize;
//	HashFunction* pHF;
//public:
//	void Add(int key)
//	{
//		int addr = pHF->Action(key, tableSize);  //원소의 개수를 인수로 넣어준다.
//		bucket[addr].push_back(key);
//	}
//	void Remove(int key)
//	{
//		int addr = pHF->Action(key,tableSize);
//		list<int>::iterator iter = find(bucket[addr].begin(),bucket[addr].end(),key);
//		if(iter!=bucket[addr].end())
//			bucket[addr].erase(iter);
//	}
//	bool Find(int key)
//	{
//		int addr = pHF->Action(key,tableSize);
//		list<int>::iterator iter = find(bucket[addr].begin(),bucket[addr].end(),key);
//		if(iter!=bucket[addr].end())
//			return true;
//		else
//			return false;
//	}
//	void Print()
//	{
//		for(int i=0;i<tableSize;i++)
//		{
//			cout<<"["<<i<<"] : ";
//			for(list<int>::iterator iter = bucket[i].begin();iter!=bucket[i].end();iter++)
//				cout<<*iter<<" ";
//			cout<<endl;
//		}
//	}
//	Hash(HashFunction*pf = NULL)
//	{
//		tableSize = 20;
//		bucket = new list<int>[tableSize];
//		if(pf)
//			pHF =  pf;
//		else
//			pHF = new DefHashFunction;
//	}
//	~Hash()
//	{
//		delete [] bucket;
//		delete pHF;
//	}
//};
//////////////////////////////////////////////
//
//class MyHF : public HashFunction
//{
//public:
//	int Action(int key, int size)
//	{
//		int addr = ((key >> 2) | 0x05) %size;
//		return addr;
//	}
//};
//void main()
//{
//	Hash h(new MyHF); //객체 생성시에 함수포인터를 일반적으로 사용하지 않는다.
//				  //객체지향에서는 변화하는 내용을 캡슐화 한다.
//				  //전략패턴 - -함수포인터를 사용하지 않고 기능(알고리즘)을 실행시간에 바꾸는 것
//	h.Add(50);
//	h.Add(70);
//	h.Add(80);
//	h.Add(90);
//	h.Add(20);
//	h.Remove(70);
//	h.Print();
//}
//
//
//#include<iostream>
//using namespace std;
//void Mabangine(int arr[][15],int row,int col)
//{
//	int i=2;
//	int j=1;
//	int num = 1;
//	while(num<=(row*col))
//	{
//		arr[i][j] = num++;
//		if((num-1)%col == 0)
//		{
//			i = i==0 ? 2 : (i-1);
//		}
//		else
//		{
//			i=(i+1)%3;
//			j=(j+1)%3;
//		}
//	}
//
//}
//void PrintArray(int arr[][15],int row,int col)
//{
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//			cout<<arr[i][j]<<" ";
//		cout<<endl;
//	}
//}
//
//void main()
//{
//	int arr[15][15]={0};
//	Mabangine(arr,3,3);
//	PrintArray(arr,3,3);
//}
//
//
//#include<iostream>
//using namespace std;
//void Mabangine(int arr[][15],int row,int col)
//{
//	int i=row-1;
//	int j=col/2;
//	int num = 1;
//	while(num<=(row*col))
//	{
//		arr[i][j] = num++;
//		if((num-1)%col == 0)
//		{
//			i = i==0 ? (row-1) : (i-1);
//		}
//		else
//		{
//			i=(i+1)%row;
//			j=(j+1)%col;
//		}
//	}
//
//}
//void PrintArray(int arr[][15],int row,int col)
//{
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			cout.width(5);
//			cout<<arr[i][j];
//		}
//		cout<<endl;
//	}
//}
//
//void main()
//{
//	int arr[15][15]={0};
//	Mabangine(arr,5,5);
//	PrintArray(arr,5,5);
//}
//
//
//#include<iostream>
//using namespace std;
//void Mabangine(int arr[][15],int row,int col)
//{
//	int i=row-1;
//	int j=col/2;
//	int num = 1;
//	while(num<=(row*col))
//	{
//		arr[i][j] = num++;
//		if((num-1)%col == 0)
//		{
//			i = i==0 ? (row-1) : (i-1);
//		}
//		else
//		{
//			i=(i+1)%row;
//			j=(j+1)%col;
//		}
//	}
//
//}
//void PrintArray(int arr[][15],int row,int col)
//{
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			cout.width(5);
//			cout<<arr[i][j];
//		}
//		cout<<endl;
//	}
//}
//
//void main()
//{
//	int arr[15][15]={0};
//	int size;
//	cout<<"1~15 integer Input";
//	cin>>size;
//	Mabangine(arr,size,size);
//	PrintArray(arr,size,size);
//}
//
//
//#include<iostream>
//using namespace std;
//void Mabangine(int** arr,int row,int col)
//{
//	int i=row-1;
//	int j=col/2;
//	int num = 1;
//	while(num<=(row*col))
//	{
//		arr[i][j] = num++;
//		if((num-1)%col == 0)
//		{
//			i = i==0 ? (row-1) : (i-1);
//		}
//		else
//		{
//			i=(i+1)%row;
//			j=(j+1)%col;
//		}
//	}
//
//}
//void PrintArray(int**arr,int row,int col)
//{
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			cout.width(5);
//			cout<<arr[i][j];
//		}
//		cout<<endl;
//	}
//}
//
//void main() //입력한만큼만 메모리 만들기
//{
//	int size;
//	cout<<"1~15 integer Input";
//	cin>>size;
//	int **parr = new int*[size];
//	for(int i = 0 ;i<size;i++)
//		parr[i] = new int[size];
//	Mabangine(parr,size,size);
//	PrintArray(parr,size,size);
//}
//
//
//#include<iostream>
//using namespace std;
//void Mabangine(int** arr,int row,int col)
//{
//	int i=row-1;
//	int j=col/2;
//	int num = 1;
//	while(num<=(row*col))
//	{
//		arr[i][j] = num++;
//		if((num-1)%col == 0)
//		{
//			i = i==0 ? (row-1) : (i-1);
//		}
//		else
//		{
//			i=(i+1)%row;
//			j=(j+1)%col;
//		}
//	}
//
//}
//void PrintArray(int**arr,int row,int col)
//{
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			cout.width(5);
//			cout<<arr[i][j];
//		}
//		cout<<endl;
//	}
//}
//
//void main() //입력한만큼만 메모리 만들기
//{
//	int size;
//	cout<<"1~15 integer Input";
//	cin>>size;
//	int **parr = new int*[size];
//	for(int i = 0 ;i<size;i++)
//		parr[i] = new int[size];
//	Mabangine(parr,size,size);
//	PrintArray(parr,size,size);
//	for(int i = 0 ;i<size;i++)
//		delete [] parr[i];
//	delete [] parr;
//}
//
//
//////////////////////////////////////////////정렬!!////@@@@!@#$%^&*(@!#$%^&*(
//#include<iostream>
//using namespace std;
//void PrintArray(int list[],int size)
//{
//	for(int i=0; i<size; i++)
//		cout<<list[i]<<" ";
//	cout<<endl;
//}
//void main()
//{
//	int list[10] = {50,30,80,90,15,25,40,60};
//	
//	PrintArray(list,8);
//}
//
//
///////선택정렬/////가장작은값을 선택해서 맨앞에 넣어줌
//#include<iostream>
//using namespace std;
//void PrintArray(int list[],int size)
//{
//	for(int i=0; i<size; i++)
//		cout<<list[i]<<" ";
//	cout<<endl;
//}
//void Swap(int&a,int&b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int Min(int list[], int s,int e)
//{
//	int min=s;
//	for(int i=s+1;i<=e;i++)
//	{
//		if(list[min]>list[i])
//			min = i;
//	}
//	return min;
//}
//void Sort(int list[], int size)
//{
//	int idx;
//	for(int i = 0 ; i<size ; i++)
//	{
//		idx = Min(list,i,size-1);
//		Swap(list[i],list[idx]);
//	}
//	
//}
//void main()
//{
//	int list[10] = {50,30,80,90,15,25,40,60};
//
//	Sort(list,8);
//	PrintArray(list,8);
//}
//
//
////@@@@@@@@@@@@@@@/////삽입정렬/////@@@@@@@@@@@@@@//
//#include<iostream>
//using namespace std;
//void PrintArray(int list[],int size)
//{
//	for(int i=0; i<size; i++)
//		cout<<list[i]<<" ";
//	cout<<endl;
//}
//void Sort(int list[], int size)
//{
//	int j;
//	for(int i=1 ; i<size ; i++)
//	{
//		int num = list[i];
//		for(j=i-1 ; (j>=0 && num < list[j]) ; j-- )
//		{
//			list[j+1] = list[j];
//		}
//		list[j+1] = num;
//	}
//}
//void main()
//{
//	int list[10] = {50,30,80,90,15,25,40,60};
//
//	Sort(list,8);
//	PrintArray(list,8);
//}
//
//
////@@@@@@@@@@@@@@@/////버블정렬/////@@@@@@@@@@@@@@//
////가장큰값을 뒤에부터 배치하는 정렬방식
//#include<iostream>
//using namespace std;
//void PrintArray(int list[],int size)
//{
//	for(int i=0; i<size; i++)
//		cout<<list[i]<<" ";
//	cout<<endl;
//}
//void Swap(int&a,int&b)
//{
//	int temp=a;
//	a=b;
//	b=temp;
//
//}
//void Sort(int list[], int size)
//{
//	for(int i = size-1 ; i > 0 ; i--)
//	{
//		int j;
//		int max=0;
//		for(j = 1 ; j<=i ; j++)
//		{
//			if(list[max] < list[j])
//				max=j;
//		}
//		Swap(list[max],list[i]);
//	}
//}
//void main()
//{
//	int list[10] = {50,30,80,90,15,25,40,60};
//
//	Sort(list,8);
//	PrintArray(list,8);
//}
//
//
////@@@@@@@@@@@@@@@/////합병정렬/////@@@@@@@@@@@@@@//
////합병정렬은 여러곳에있는 데이터들을 수집해오면서 정렬하고자할때 사용한다.//
//#include<iostream>
//using namespace std;
//void PrintArray(int list[],int size)
//{
//	for(int i=0; i<size; i++)
//		cout<<list[i]<<" ";
//	cout<<endl;
//}
//void Swap(int&a,int&b)
//{
//	int temp=a;
//	a=b;
//	b=temp;
//
//}
//void Merge_Part(int list[], int left, int right)
//{
//	int buf[10];
//	int size = right - left;
//	int i = left;
//	int j = right;
//	int cnt = 0;
//
//	while( (i < left+size) && (j < right+size) )
//	{
//		if( list[i] < list[j])
//			buf[cnt++] = list[i++];
//		else
//			buf[cnt++] = list[j++];
//	}
//	while(i<left+size)
//		buf[cnt++] = list[i++];
//	while(j<right+size)
//		buf[cnt++] = list[j++];
//	memcpy(list,buf,sizeof(int)*size*2);
//}
//void Sort(int list[], int size)
//{
//	Merge_Part(list, 0, 4 );
//}
//void main()
//{
//	//int list[10] = {50,30,80,90,15,25,40,60};
//	int list[10] = {10,30,70,80,20,40,50,90};
//	Sort(list,8);
//
//	PrintArray(list,8);
//}
//
//
////@@@@@@@@@@@@@@@/////합병정렬/////@@@@@@@@@@@@@@//
////합병정렬은 여러곳에있는 데이터들을 수집해오면서 정렬하고자할때 사용한다.//
//#include<iostream>
//using namespace std;
//void PrintArray(int list[],int size)
//{
//	for(int i=0; i<size; i++)
//		cout<<list[i]<<" ";
//	cout<<endl;
//}
//void Swap(int&a,int&b)
//{
//	int temp=a;
//	a=b;
//	b=temp;
//
//}
//void Merge_Part(int list[], int left, int right)
//{
//	int size = right - left;
//	int*buf = new int[size*2];
//	int i = left;
//	int j = right;
//	int cnt = 0;
//
//	while( (i < left+size) && (j < right+size) )
//	{
//		if( list[i] < list[j])
//			buf[cnt++] = list[i++];
//		else
//			buf[cnt++] = list[j++];
//	}
//	while(i<left+size)
//		buf[cnt++] = list[i++];
//	while(j<right+size)
//		buf[cnt++] = list[j++];
//	memcpy(list,buf,sizeof(int)*size*2);
//	delete[]buf;
//}
//void Sort(int list[], int size)
//{
//	Merge_Part(list, 0, 4 );
//}
//void main()
//{
//	//int list[10] = {50,30,80,90,15,25,40,60};
//	int list[10] = {10,30,70,80,20,40,50,90};
//	Sort(list,8);
//
//	PrintArray(list,8);
//}
//
//
////@@@@@@@@@@@@@@@/////합병정렬/////@@@@@@@@@@@@@@//
////합병정렬은 여러곳에있는 데이터들을 수집해오면서 정렬하고자할때 사용한다.//
//#include<iostream>
//using namespace std;
//void PrintArray(int list[],int size)
//{
//	for(int i=0; i<size; i++)
//		cout<<list[i]<<" ";
//	cout<<endl;
//}
//void Swap(int&a,int&b)
//{
//	int temp=a;
//	a=b;
//	b=temp;
//
//}
//void Merge_Part(int list[], int left, int right)
//{
//	int size = right - left;
//	int*buf = new int[size*2];
//	int i = left;
//	int j = right;
//	int cnt = 0;
//
//	while( (i < left+size) && (j < right+size) )
//	{
//		if( list[i] < list[j])
//			buf[cnt++] = list[i++];
//		else
//			buf[cnt++] = list[j++];
//	}
//	while(i<left+size)
//		buf[cnt++] = list[i++];
//	while(j<right+size)
//		buf[cnt++] = list[j++];
//	memcpy(list,buf,sizeof(int)*size*2);
//	delete[]buf;
//}
//void Sort(int list[], int size) //안됨..............
//{
//	Merge_Part(list, 0, 1 );
//	Merge_Part(list, 2, 3 );
//	Merge_Part(list, 4, 5 );
//	Merge_Part(list, 6, 7 );
//	
//	Merge_Part(list, 0, 2 );
//	Merge_Part(list, 4, 6 );
//
//	Merge_Part(list, 0, 4 );
//}
//void main()
//{
//	int list[10] = {50,30,80,90,15,25,40,60};
//	//int list[10] = {10,30,70,80,20,40,50,90};
//	Sort(list,8);
//
//	PrintArray(list,8);
//}
//
//
////@@@@@@@@@@@@@@@/////합병정렬/////@@@@@@@@@@@@@@//
////합병정렬은 여러곳에있는 데이터들을 수집해오면서 정렬하고자할때 사용한다.//
//#include<iostream>
//using namespace std;
//void PrintArray(int list[],int size)
//{
//	for(int i=0; i<size; i++)
//		cout<<list[i]<<" ";
//	cout<<endl;
//}
//void Swap(int&a,int&b)
//{
//	int temp=a;
//	a=b;
//	b=temp;
//
//}
//void Merge_Part(int list[], int left, int right)
//{
//	int size = right - left;
//	int*buf = new int[size*2];
//	int i = left;
//	int j = right;
//	int cnt = 0;
//
//	while( (i < left+size) && (j < right+size) )
//	{
//		if( list[i] < list[j])
//			buf[cnt++] = list[i++];
//		else
//			buf[cnt++] = list[j++];
//	}
//	while(i<left+size)
//		buf[cnt++] = list[i++];
//	while(j<right+size)
//		buf[cnt++] = list[j++];
//	memcpy(list+left,buf,sizeof(int)*size*2);
//	delete[]buf;
//}
//void Sort(int list[], int size) //안됨..............
//{
//	Merge_Part(list, 0, 1 );
//	Merge_Part(list, 2, 3 );
//	Merge_Part(list, 4, 5 );
//	Merge_Part(list, 6, 7 );
//	
//	Merge_Part(list, 0, 2 );
//	Merge_Part(list, 4, 6 );
//
//	Merge_Part(list, 0, 4 );
//}
//void main()
//{
//	int list[10] = {50,30,80,90,15,25,40,60};
//	//int list[10] = {10,30,70,80,20,40,50,90};
//	Sort(list,8);
//
//	PrintArray(list,8);
//}
//
//
////@@@@@@@@@@@@@@@/////합병정렬/////@@@@@@@@@@@@@@//
////합병정렬은 여러곳에있는 데이터들을 수집해오면서 정렬하고자할때 사용한다.//
//#include<iostream>
//using namespace std;
//void PrintArray(int list[],int size)
//{
//	for(int i=0; i<size; i++)
//		cout<<list[i]<<" ";
//	cout<<endl;
//}
//void Swap(int&a,int&b)
//{
//	int temp=a;
//	a=b;
//	b=temp;
//
//}
//void Merge_Part(int list[], int left, int right)
//{
//	int size = right - left;
//	int*buf = new int[size*2];
//	int i = left;
//	int j = right;
//	int cnt = 0;
//
//	while( (i < left+size) && (j < right+size) )
//	{
//		if( list[i] < list[j])
//			buf[cnt++] = list[i++];
//		else
//			buf[cnt++] = list[j++];
//	}
//	while(i<left+size)
//		buf[cnt++] = list[i++];
//	while(j<right+size)
//		buf[cnt++] = list[j++];
//	memcpy(list+left,buf,sizeof(int)*size*2);
//	delete[]buf;
//}
//void Sort(int list[], int size) //안됨..............
//{
//	int w = 2;
//	for(int i=0 ; i<size ; i += w)
//		Merge_Part(list, i, i+(w/2) );
//	
//	Merge_Part(list, 0, 2 );
//	Merge_Part(list, 4, 6 );
//
//	Merge_Part(list, 0, 4 );
//}
//void main()
//{
//	int list[10] = {50,30,80,90,15,25,40,60};
//	//int list[10] = {10,30,70,80,20,40,50,90};
//	Sort(list,8);
//
//	PrintArray(list,8);
//}
//
//
////@@@@@@@@@@@@@@@/////합병정렬/////@@@@@@@@@@@@@@//
////합병정렬은 여러곳에있는 데이터들을 수집해오면서 정렬하고자할때 사용한다.//
//#include<iostream>
//using namespace std;
//void PrintArray(int list[],int size)
//{
//	for(int i=0; i<size; i++)
//		cout<<list[i]<<" ";
//	cout<<endl;
//}
//void Swap(int&a,int&b)
//{
//	int temp=a;
//	a=b;
//	b=temp;
//
//}
//void Merge_Part(int list[], int left, int right)
//{
//	int size = right - left;
//	int*buf = new int[size*2];
//	int i = left;
//	int j = right;
//	int cnt = 0;
//
//	while( (i < left+size) && (j < right+size) )
//	{
//		if( list[i] < list[j])
//			buf[cnt++] = list[i++];
//		else
//			buf[cnt++] = list[j++];
//	}
//	while(i<left+size)
//		buf[cnt++] = list[i++];
//	while(j<right+size)
//		buf[cnt++] = list[j++];
//	memcpy(list+left,buf,sizeof(int)*size*2);
//	delete[]buf;
//}
//void Sort(int list[], int size) //안됨..............
//{
//	for(int w = 2 ; w<=size  ; w*=2)
//	{
//		for(int i=0 ; i<size ; i += w)
//			Merge_Part(list, i, i+(w/2) );
//	}
//}
//void main()
//{
//	int list[10] = {50,30,80,90,15,25,40,60};
//	//int list[10] = {10,30,70,80,20,40,50,90};
//	Sort(list,8);
//
//	PrintArray(list,8);
//}