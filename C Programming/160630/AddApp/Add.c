int AddRange(int start, int end) //리턴타입 함수이름(매개변수 리스트)
{ //함수 정의부분
	int sum =0;
	int i;
	for(i=start;i<=end;++i)
		sum+=i;
	return sum;
}