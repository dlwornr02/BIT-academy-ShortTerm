//#include<iostream>
//#include<fstream>
//using namespace std;
//void PrintStream(ostream&out) //��½�Ʈ��
//{
//	out<<"Hello!"<<endl;
//	out<<100<<endl;
//}
//void main()
//{
//	ofstream fout("text.txt");
//
//	PrintStream(fout); //���ڿ����� ����� �ٲ��.
//	PrintStream(cout); 
//}
//
//
//#include<iostream>
//#include<fstream>
//using namespace std;
//void PrintStream(ostream&out) //��½�Ʈ��
//{
//	out<<"Hello!"<<endl;
//	out<<100<<endl;
//}
//void main()
//{
//	ofstream fout("text.txt",ios::binary); //binary��� \n\r<=>\n
//
//	PrintStream(fout); //���ڿ����� ����� �ٲ��.
//	PrintStream(cout); 
//}
//
//
//#include<iostream>
//#include<fstream>
//using namespace std;
//void main()
//{
//	int n=100;
//	ifstream fin("text.txt",ios::binary); //binary���  \n\r<=>\n
//
//	int arr[5];
//
//	fin.read((char*)arr,sizeof(int)*5);
//	for(int i=0;i<5;i++)o
//		cout<<arr[i]<<endl;
//}
//
//
//#include<iostream>
//#include<fstream>
//using namespace std;
//void main()
//{
//	int arr[5] = {10,20,30,40,50};
//	ofstream fout("text.txt",ios::binary); //binary���  \n\r<=>\n	
//	fout.write((char*)arr,sizeof(int)*5);
//	fout.write((char*)arr,sizeof(int)*5);
//	fout.close();
//
//
//	ifstream fin("text.txt",ios::binary);
//}
//
//
//#include<iostream>
//#include<fstream>
//using namespace std;
//void main()
//{
//	int arr[5] = {10,20,30,40,50};
//	ofstream fout("text.txt",ios::binary); //binary���  \n\r<=>\n
//	int size = 3;
//	fout.write((char*)&size,sizeof(int)); //������ ���� ����
//	fout.write((char*)arr,sizeof(int)*size);
//	fout.close();
//
//
//	ifstream fin("text.txt",ios::binary);
//	fin.read((char*)&size,sizeof(int));
//	for(int i=0;i<size;i++)
//	{
//		int data;
//		fin.read((char*)&data,sizeof(int));
//		cout << data<<endl;
//	}
//}
//
//
//#include<iostream>
//#include<fstream>
//#include<cstring>
//using namespace std;
//void main()
//{
//	int arr[5] = {10,20,30,40,50};
//	ofstream fout("text.txt",ios::binary); //binary���  \n\r<=>\n
//	int size = 3;
//	fout.write((char*)&size,sizeof(int)); //������ ���� ����
//	{
//		const char* s="ABC";
//		char type = 'S';
//		int slen = strlen(s+1);
//		fout.write((char*)&type,sizeof(char));
//		fout.write((char*)&slen,sizeof(int));
//		fout.write(s,slen);
//	}
//	{
//		int n=100;
//		char type='I';
//		fout.write((char*)&type,sizeof(char));
//		fout.write((char*)&n,sizeof(int));
//	}
//	{
//		double d=5.55;
//		char type = 'D';
//		fout.write((char*)&type,sizeof(char));
//		fout.write((char*)&d,sizeof(double));
//	}
//	fout.close();
//	fout.write((char*)arr,sizeof(int)*size);
//	fout.close();
//
//
//	ifstream fin("text.txt",ios::binary);
//	fin.read((char*)&size,sizeof(int));
//	for(int i=0;i<size;i++)
//	{
//		char type;
//		fin.read(&type,sizeof(char));
//		switch(type)
//		{
//		case'I':
//			{int data;
//			fin.read((char*)&data,sizeof(int));
//			cout << data<<endl;
//			break;
//			}
//		case'D':
//			{double data;
//			fin.read((char*)&data,sizeof(double));
//			cout << data<<endl;
//			break;
//			}
//		case'S':
//			{
//				int slen;
//				fin.read((char*)&slen,sizeof(int));
//				char*s = new char[slen];
//				fin.read(s,slen);
//				cout<<s<<endl;
//				delete[]s;
//				break;
//			}
//		default:
//			throw exception("���� type�� I,D,S�̿��� �Ѵ�.");
//		}
//		
//	}
//}