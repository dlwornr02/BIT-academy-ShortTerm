template <typename T=int> //T�� Ÿ���� Ŭ���̾�Ʈ�� �����ϰ��ϴ°��� class template
						  //cpp���Ͽ��� template�Ⱦ�
class Array //�迭�� �׻� �ִ�뷮(�޸��� ����)�� ��������Ѵ�.
{
	T*arr;
	int capacity;
	int size;
public:
	Array(int cap=100):arr(0),size(0),capacity(cap) //�����ͺ����� 0���� ���� �ʱ�ȭ�Ѵ�.
	{
		arr = new T[capacity];
	}
	Array(const Array&arg):arr(0),size(arg.size),capacity(arg.capacity)
	{
		arr = new T[capacity];
		for(int i = 0; i<size; i++)
			arr[i]=arg.arr[i];
	}
	const Array& operator=(const Array&arg) //���Կ����ڴ� �ڱ������ check������Ѵ�.���ۼ��������
	{
		if(this == &arg) //delete�� �ϱ⶧���� check�ؾ��Ѵ�.
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
	void Add(const T& data) //�����������𸣹Ƿ� const���������
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
			throw"idx ����!";
	}
	const T& operator[](int idx)const //const��ü���� ���//�⺻Ÿ���̶� �����Ⱦ�
								 //�Ϲ������� []�����ڴ� ����ó���� �����ʴ´�.
	{
		return arr[idx];
	}
	const T& operator[](int idx) //��const��ü���� ���
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