//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	FILE*pf;
//	pf = fopen("test.txt","wb"); //바이너리 입출력에는 b를 붙여준다
//								//그래야 \n->\r\n으로 자동변환안함
//	if(pf==NULL)
//	{
//		printf("파일생성 실패!");
//		return ;
//	}
//	{
//		int n = 100;
//		fwrite(&n,sizeof(int),1,pf);
//	}
//	{
//		double d = 6.789;
//		fwrite(&d,sizeof(double),1,pf);
//	}
//	{
//		char*s = "Hello!";
//		int slen = strlen(s)+1; //\0문자까지 생각해준다
//		fwrite(&slen,sizeof(int),1,pf);
//		fwrite(s,slen,1,pf);  //문자열 저장방법
//	}
//	fclose(pf);
//}
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	FILE*pf;
//	pf = fopen("test.txt","wb"); //바이너리 입출력에는 b를 붙여준다
//								//그래야 \n->\r\n으로 자동변환안함
//	if(pf==NULL)
//	{
//		printf("파일생성 실패!");
//		return ;
//	}
//	{
//		int n = 100;
//		fwrite(&n,sizeof(int),1,pf);
//	}
//	{
//		double d = 6.789;
//		fwrite(&d,sizeof(double),1,pf);
//	}
//	{
//		char*s = "Hello!";
//		int slen = strlen(s)+1; //\0문자까지 생각해준다
//		fwrite(&slen,sizeof(int),1,pf);
//		fwrite(s,slen,1,pf);  //문자열 저장방법
//	}
//	fclose(pf);
//}
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	FILE*pf;
//	pf = fopen("test.txt","rb"); //바이너리 입출력에는 b를 붙여준다
//								//그래야 \n->\r\n으로 자동변환안함
//	if(pf==NULL)
//	{
//		printf("파일생성 실패!");
//		return ;
//	}
//	{
//		int n;
//		fread(&n,sizeof(int),1,pf);
//		printf("%d\n",n);
//	}
//	{
//		double d;
//		fread(&d,sizeof(double),1,pf);
//		printf("%g\n",d);
//	}
//	{
//		char buf[10];
//		int slen;
//		fread(&slen,sizeof(int),1,pf);
//		fread(buf,slen,1,pf);  //문자열 저장방법
//		printf("%s\n",buf);
//	}
//	fclose(pf);
//}
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	FILE*pf;
//	pf = fopen("test.txt","rb"); //바이너리 입출력에는 b를 붙여준다
//								//그래야 \n->\r\n으로 자동변환안함
//	if(pf==NULL)
//	{
//		printf("파일생성 실패!");
//		return ;
//	}
//	{
//		int n;
//		fread(&n,sizeof(int),1,pf);
//		printf("%d\n",n);
//	}
//	{
//		double d;
//		fread(&d,sizeof(double),1,pf);
//		printf("%g\n",d);
//	}
//	{
//		char buf[10];
//		int slen;
//		fread(&slen,sizeof(int),1,pf);
//		fread(buf,slen,1,pf);  //문자열 저장방법
//		printf("%s\n",buf);
//	}
//	fclose(pf);
//}
//
//
#include<stdio.h>
#include<string.h>
int main(void)
{
	FILE*pf;
	pf = fopen("test.txt","wb"); //바이너리 입출력에는 b를 붙여준다
								//그래야 \n->\r\n으로 자동변환안함
	if(pf==NULL)
	{
		printf("파일생성 실패!");
		return ;
	}
	{ //파일 헤더 부분
		char head[2]={'M','F'};
		short extra = 0;
		int dataCount =  6;
		fwrite(head,sizeof(head),1,pf);
		fwrite(&extra,sizeof(short),1,pf);
		fwrite(&dataCount,sizeof(int),1,pf);
	}
	{
		double d=12.55;
		char dataType='D';
		fwrite(&dataType,sizeof(char),1,pf);
		fwrite(&d,sizeof(double),1,pf);
	}
	{
		int n=200;
		char dataType='I';
		fwrite(&dataType,sizeof(char),1,pf);
		fwrite(&n,sizeof(int),1,pf);
	}
	{
		double d=4.55;
		char dataType='D';
		fwrite(&dataType,sizeof(char),1,pf);
		fwrite(&d,sizeof(double),1,pf);
	}
	{
		char*s="ABC";
		int slen = strlen(s)+1;
		char dataType='S';
		fwrite(&dataType,sizeof(char),1,pf);
		fwrite(&slen,sizeof(int),1,pf);
		fwrite(s,slen,1,pf);  //문자열 저장방법
	}
	{
		char*s="12345";
		int slen = strlen(s)+1;
		char dataType='S';
		fwrite(&dataType,sizeof(char),1,pf);
		fwrite(&slen,sizeof(int),1,pf);
		fwrite(s,slen,1,pf);  //문자열 저장방법
	}
	{
		double d=5.55;
		char dataType='S';
		fwrite(&dataType,sizeof(char),1,pf);
		fwrite(&d,sizeof(double),1,pf);
	}
	fclose(pf);
}
//
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	FILE*pf;
//	pf = fopen("test.txt","rb"); //바이너리 입출력에는 b를 붙여준다
//								//그래야 \n->\r\n으로 자동변환안함
//	if(pf==NULL)
//	{
//		printf("파일생성 실패!");
//		return ;
//	}
//	{ //파일 헤더 부분
//		char head[2];
//		short extra;
//		int dataCount;
//		fread(head,sizeof(head),1,pf);
//		fread(&extra,sizeof(short),1,pf);
//		fread(&dataCount,sizeof(int),1,pf);
//
//		printf("%c%c\n",head[0],head[1]);
//		printf("data count : %d\n",dataCount);
//	}
//	
//	fclose(pf);
//}
//
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main(void)
//{
//	FILE*pf;
//	int dataCount;
//	pf = fopen("test.txt","rb"); //바이너리 입출력에는 b를 붙여준다
//	//그래야 \n->\r\n으로 자동변환안함
//	if(pf==NULL)
//	{
//		printf("파일생성 실패!");
//		return ;
//	}
//	{ //파일 헤더 부분
//		char head[2];
//		short extra;
//		fread(head,sizeof(head),1,pf);
//		fread(&extra,sizeof(short),1,pf);
//		fread(&dataCount,sizeof(int),1,pf);
//
//		printf("%c%c\n",head[0],head[1]);
//		printf("data count : %d\n",dataCount);
//	}
//	{
//		int i;
//		for(i=0;i<dataCount;i++)
//		{
//			char dataType;
//			fread(&dataType,sizeof(char),1,pf);
//			switch(dataType)
//			{
//			case 'I':
//				{
//					int data;
//					fread(&data,sizeof(int),1,pf);
//					printf("data : %d\n",data);
//					break;
//				}
//			case 'D':
//				{
//					double data;
//					fread(&data,sizeof(double),1,pf);
//					printf("data : %g\n",data);
//					break;
//				}
//				
//			case 'S':
//				{
//					int slen;
//					char*s;
//					fread(&slen,sizeof(int),1,pf);
//					s=(char*)malloc(slen);
//					fread(s,slen,1,pf);
//					printf("data : %s\n",s);
//					free(s); //다 사용했다는 전제하에 제거한다.
//					break;
//				}
//				
//				
//			default:
//				printf("파일 datatype문제 발생\n");
//				break;
//			}
//		}
//	}
//	fclose(pf);
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void main()
//{
//   FILE* pf;
//   int dataCount; //데이터의 갯수
//
//   pf=fopen("test.txt","rb");
//   if(pf==NULL){
//      printf("파일 생성 실패!\n");
//      return ;
//   }
//   {//파일 헤더(File Formect)
//      char head[2];
//      short extra;
//      fread(head,sizeof(head),1,pf);
//      fread(&extra,sizeof(short),1,pf);
//      fread(&dataCount,sizeof(int),1,pf);
//      
//      printf("%c%c\n",head[0],head[1]);
//      printf("data Count: %d\n",dataCount);
//   }
//   {
//      int i;
//      for(i=0;i<dataCount;i++)
//      {
//         char dataType;
//         fread(&dataType,sizeof(char),1,pf);
//         switch(dataType){
//         case 'I':
//            {
//               int data;
//               fread(&data,sizeof(int),1,pf);
//               printf("%d\n",data);
//               break;
//            }
//            case 'D':
//            {
//               double data;
//               fread(&data,sizeof(double),1,pf);
//               printf("%g\n",data);
//               break;
//            }
//            case 'S':
//            {
//               int slen;
//               char* s;
//               fread(&slen,sizeof(int),1,pf);
//               s= (char*)malloc(slen);
//               fread(s,slen,1,pf);
//               printf("%s\n",s);
//               free(s);
//               break;
//            }
//            default:
//               printf("파일 dataType 문제 발생!\n");
//               break;
//         }
//
//      }
//   }
//   fclose(pf);
//}
//
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main(void)
//{
//	FILE*pf;
//	pf = fopen("test.txt","rb"); //바이너리 입출력에는 b를 붙여준다
//	fseek(pf, 4, SEEK_SET);//SEEK_SET, SEEK_CUR, SEEK_END
//							//기준값에서부터 4만큼 이동
//	{
//		int len;
//		fread(&len,sizeof(int),1,pf);
//		printf("data count : %d\n",len);
//	}
//	fclose(pf);
//}
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main(void)
//{
//	FILE*pf;
//	pf = fopen("test.txt","rb"); //바이너리 입출력에는 b를 붙여준다
//	fseek(pf, -8, SEEK_END);//SEEK_SET, SEEK_CUR, SEEK_END
//							//기준값에서부터 두번째 매개변수만큼 이동
//	{
//		double data;
//		fread(&data,sizeof(data),1,pf);
//		printf("data : %g\n",data);
//	}
//	fclose(pf);
//}
//파일의 크기를 구해보자
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main(void)
//{
//	
//}