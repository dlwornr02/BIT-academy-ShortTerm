#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
typedef struct _Person{
	char* name;
	char* phone;
}Person;
typedef struct _PersonArray{
	Person* parr[100];
	int perCount;
	int capacity;
}PersonArray;
void PrintPerson(Person* pt){
	printf("name : %s, phone : %s\n",pt->name,pt->phone);
}
char* InputString(){
	char* s;
	char buf[100];
	gets_s(buf,100);
	s=(char*)malloc(strlen(buf)+1);
	strcpy(s,buf);
	return s;
}
void InputPerson(Person* pt){
	system("cls");
	printf("�̸� �Է� : ");

	pt->name= InputString();

	printf("��ȭ��ȣ �Է� : ");
	pt->phone=InputString();
}

void FreePerson(Person* pt){
	free(pt->name);
	free(pt->phone);
}
void InitPersonArray(PersonArray* pa,int cap)
{
	pa->capacity=cap;
	pa->perCount=0;
}
void UninitPersonArray(PersonArray* pa)
{
	int i;
	for(i=0;i<pa->perCount;i++)
		free(pa->parr[i]);
}
void AddPersonArray(PersonArray* pa){
	pa->parr[pa->perCount]=(Person*)malloc(sizeof(Person));
	InputPerson(pa->parr[pa->perCount]);
	++pa->perCount;
}
void PrintPersonArray(PersonArray* pa)
{
	int i;
	if(pa->perCount>0){
		system("cls");
		for(i=0;i<pa->perCount;i++)
			printf("%d.  name : %s,  phone : %s\n",i+1,pa->parr[i]->name,pa->parr[i]->phone);
	}
	else{
		system("cls");
		printf("����� �����Ͱ� �����ϴ�.\n");
	}
}
void Menu(){
	printf("\n\n=========================\n");
	printf("1. ��ȭ �Է�\n");
	printf("2. ��ȭ ���\n");
	printf("3. ��ȭ �˻�\n");
	printf("4. ������ ��ȭ ����\n");
	printf("5. Ư�� ��ȣ ����\n");
	printf("6. ��ȭ ����\n");
	printf("7. ���������� �ҷ�����\n");
	printf("0. ���α׷� ����\n");
	printf("=========================\n\n\n");

}
void DeletPerson(PersonArray*pa)
{
	if((pa->perCount)>0){
		system("cls");
		pa->perCount--;
		free((pa->parr[(pa->perCount)]->name));
		free((pa->parr[(pa->perCount)]->phone));
		free(pa->parr[pa->perCount]);
		printf("������ ������ ����!\n");
	}
	else{
		system("cls");
		printf("������ �����Ͱ� �����ϴ�.\n");
	}
}
void FindPerson(PersonArray*pa)
{
	char FindName[20];
	int i,TorF=0;
	if(pa->perCount>0){
		system("cls");
		printf("ã���ô� �̸��� �Է��ϼ��� : ");
		gets(FindName);
		for(i=0;i<pa->perCount;i++)
		{
			if(strcmp(pa->parr[i]->name,FindName)==0){
				system("cls");
				printf("%d. name : %s  phone : %s\n",i+1,pa->parr[i]->name,pa->parr[i]->phone);
				TorF++;
			}
		}
		if(TorF==0){
			system("cls");
			printf("ã���ô� �����Ͱ� �����ϴ�.\n");
		}
	}
	else{
		system("cls");
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}

}
void SavePerson(PersonArray*pa)
{
	FILE*pf;
	int slen,i;
	pf=fopen("PersonInformation.txt","wb"); 
	fwrite(&(pa->perCount),sizeof(int),1,pf);
	for(i=0;i<pa->perCount;i++)
	{
		slen = strlen(pa->parr[i]->name)+1;
		fwrite(&slen,sizeof(int),1,pf);
		fwrite(pa->parr[i]->name,slen,1,pf);

		slen = strlen(pa->parr[i]->phone)+1;
		fwrite(&slen,sizeof(int),1,pf);
		fwrite(pa->parr[i]->phone,slen,1,pf);
	}
	fclose(pf);
	system("cls");
}
void Call_SaveData(PersonArray*pa){
	FILE*pf;
	int slen,i;
	pf=fopen("PersonInformation.txt","rb");
	if(pf!=NULL){
		UninitPersonArray(pa);
		fread(&(pa->perCount),sizeof(int),1,pf);
		for(i=0;i<pa->perCount;i++)
		{
			pa->parr[i]=(Person*)malloc(sizeof(Person));

			fread(&slen,sizeof(int),1,pf);
			pa->parr[i]->name=(char*)malloc(slen);
			fread(pa->parr[i]->name,slen,1,pf);

			fread(&slen,sizeof(int),1,pf);
			pa->parr[i]->phone=(char*)malloc(slen);
			fread(pa->parr[i]->phone,slen,1,pf);
		}
		fclose(pf);
		system("cls");
	}
	else{
		printf("�ҷ��� �����Ͱ� �����ϴ�.");
	}
	}
	void DeletSpecipicPerson(PersonArray*pa)
	{
		int selectNum,i;
		char temp[100];
		printf("�����ϰ� ���� ��ȣ�� �Է� �ϼ��� : ");
		scanf("%d",&selectNum);
		if((pa->perCount)>0 && selectNum<=pa->perCount){
			system("cls");
			for(i=selectNum;i<pa->perCount;i++){
				strcpy(pa->parr[i-1]->name,pa->parr[i]->name);
				strcpy(pa->parr[i-1]->phone,pa->parr[i]->phone);
			}
			free((pa->parr[(pa->perCount)-1]->name));
			free((pa->parr[(pa->perCount)-1]->phone));
			free(pa->parr[(pa->perCount)-1]);
			(pa->perCount)--;
		}
		else{
			system("cls");
			printf("������ �����Ͱ� �����ϴ�.\n");
		}
	}
	void main(){
		int run = 1;
		PersonArray perArray;
		InitPersonArray(&perArray,100);
		while(run){
			Menu();
			switch(_getch()){
			case'1':
				AddPersonArray(&perArray);
				break;
			case'2':
				PrintPersonArray(&perArray);
				break;
			case'3':
				FindPerson(&perArray);
				break;
			case'4':
				DeletPerson(&perArray);
				break;
			case'5':
				DeletSpecipicPerson(&perArray);
				break;
			case '6':
				SavePerson(&perArray);
				break;
			case '7':
				Call_SaveData(&perArray);
				break;
			case'0':
				run=0;
				UninitPersonArray(&perArray);
				break;
			default:
				system("cls");
				printf("�ٽ� �Է��ϼ���!!!\n\n");
				break;
			}
		}
	}