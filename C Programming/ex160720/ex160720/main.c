//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	FILE*pf;
//	pf = fopen("test.txt","wb"); //���̳ʸ� ����¿��� b�� �ٿ��ش�
//								//�׷��� \n->\r\n���� �ڵ���ȯ����
//	if(pf==NULL)
//	{
//		printf("���ϻ��� ����!");
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
//		int slen = strlen(s)+1; //\0���ڱ��� �������ش�
//		fwrite(&slen,sizeof(int),1,pf);
//		fwrite(s,slen,1,pf);  //���ڿ� ������
//	}
//	fclose(pf);
//}
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	FILE*pf;
//	pf = fopen("test.txt","wb"); //���̳ʸ� ����¿��� b�� �ٿ��ش�
//								//�׷��� \n->\r\n���� �ڵ���ȯ����
//	if(pf==NULL)
//	{
//		printf("���ϻ��� ����!");
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
//		int slen = strlen(s)+1; //\0���ڱ��� �������ش�
//		fwrite(&slen,sizeof(int),1,pf);
//		fwrite(s,slen,1,pf);  //���ڿ� ������
//	}
//	fclose(pf);
//}
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	FILE*pf;
//	pf = fopen("test.txt","rb"); //���̳ʸ� ����¿��� b�� �ٿ��ش�
//								//�׷��� \n->\r\n���� �ڵ���ȯ����
//	if(pf==NULL)
//	{
//		printf("���ϻ��� ����!");
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
//		fread(buf,slen,1,pf);  //���ڿ� ������
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
//	pf = fopen("test.txt","rb"); //���̳ʸ� ����¿��� b�� �ٿ��ش�
//								//�׷��� \n->\r\n���� �ڵ���ȯ����
//	if(pf==NULL)
//	{
//		printf("���ϻ��� ����!");
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
//		fread(buf,slen,1,pf);  //���ڿ� ������
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
	pf = fopen("test.txt","wb"); //���̳ʸ� ����¿��� b�� �ٿ��ش�
								//�׷��� \n->\r\n���� �ڵ���ȯ����
	if(pf==NULL)
	{
		printf("���ϻ��� ����!");
		return ;
	}
	{ //���� ��� �κ�
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
		fwrite(s,slen,1,pf);  //���ڿ� ������
	}
	{
		char*s="12345";
		int slen = strlen(s)+1;
		char dataType='S';
		fwrite(&dataType,sizeof(char),1,pf);
		fwrite(&slen,sizeof(int),1,pf);
		fwrite(s,slen,1,pf);  //���ڿ� ������
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
//	pf = fopen("test.txt","rb"); //���̳ʸ� ����¿��� b�� �ٿ��ش�
//								//�׷��� \n->\r\n���� �ڵ���ȯ����
//	if(pf==NULL)
//	{
//		printf("���ϻ��� ����!");
//		return ;
//	}
//	{ //���� ��� �κ�
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
//	pf = fopen("test.txt","rb"); //���̳ʸ� ����¿��� b�� �ٿ��ش�
//	//�׷��� \n->\r\n���� �ڵ���ȯ����
//	if(pf==NULL)
//	{
//		printf("���ϻ��� ����!");
//		return ;
//	}
//	{ //���� ��� �κ�
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
//					free(s); //�� ����ߴٴ� �����Ͽ� �����Ѵ�.
//					break;
//				}
//				
//				
//			default:
//				printf("���� datatype���� �߻�\n");
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
//   int dataCount; //�������� ����
//
//   pf=fopen("test.txt","rb");
//   if(pf==NULL){
//      printf("���� ���� ����!\n");
//      return ;
//   }
//   {//���� ���(File Formect)
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
//               printf("���� dataType ���� �߻�!\n");
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
//	pf = fopen("test.txt","rb"); //���̳ʸ� ����¿��� b�� �ٿ��ش�
//	fseek(pf, 4, SEEK_SET);//SEEK_SET, SEEK_CUR, SEEK_END
//							//���ذ��������� 4��ŭ �̵�
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
//	pf = fopen("test.txt","rb"); //���̳ʸ� ����¿��� b�� �ٿ��ش�
//	fseek(pf, -8, SEEK_END);//SEEK_SET, SEEK_CUR, SEEK_END
//							//���ذ��������� �ι�° �Ű�������ŭ �̵�
//	{
//		double data;
//		fread(&data,sizeof(data),1,pf);
//		printf("data : %g\n",data);
//	}
//	fclose(pf);
//}
//������ ũ�⸦ ���غ���
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main(void)
//{
//	
//}