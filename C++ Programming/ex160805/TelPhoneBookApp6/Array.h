template <typename T=int> //T의 타입을 클라이언트가 결정하게하는것이 class template
						  //cpp파일에는 template안씀
class Array //배열은 항상 최대용량(메모리의 개수)를 정해줘야한다.
{
	T*arr;
	int capacity;
	int size;
public:
	Array(int cap=100):arr(0),size(0),capacity(cap) //포인터변수도 0으로 많이 초기화한다.
	{
		arr = new T[capacity];
	}
	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
	{
		arr = new T[capacity];
		for(int i = 0; i<size; i++)
			arr[i]=arg.arr[i];
	}
	const Array& operator=(const Array&arg) //대입연산자는 자기대입을 check해줘야한다.꼭작성해줘야함
	{
		if(this == &arg) //delete를 하기때문에 check해야한다.
			return *this;
		delete []arr;
		size = arg.size;
		capacity=arg.capacity;
		arr = new T[capacity];
		for(int i=0;i<arg.size;i++)
			arr[i]=arg.arr[i];
		return *this;
	}
	~Array(){delete []arr;}
	void Add(const T& data) //언떤형식인지모르므로 const형참조사용
	{
		if(size>=capacity){
			return;
			//throw exception("out of capacity");
		}
		arr[size]=data;
		size++;
	}
	int Size()const{return size;}
	const T& At(int idx)const 
	{
		if(0<idx && idx < size)
			return arr[idx];
		else
			throw"idx 오류!";
	}
	const T& operator[](int idx)const //const객체에서 사용//기본타입이라 참조안씀
								 //일반적으로 []연산자는 오류처리를 하지않는다.
	{
		return arr[idx];
	}
	const T& operator[](int idx) //비const객체에서 사용
	{
		return arr[idx];
	}
	void Remove(int idx)
	{
		for(int i=idx;i<size-1;i++)
			arr[i]=arr[i+1];
		size--;
	}
};