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
	printf("이름 입력 : ");

	pt->name= InputString();

	printf("전화번호 입력 : ");
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
		printf("출력할 데이터가 없습니다.\n");
	}
}
void Menu(){
	printf("\n\n=========================\n");
	printf("1. 전화 입력\n");
	printf("2. 전화 출력\n");
	printf("3. 전화 검색\n");
	printf("4. 마지막 전화 삭제\n");
	printf("5. 특정 번호 삭제\n");
	printf("6. 전화 저장\n");
	printf("7. 이전데이터 불러오기\n");
	printf("0. 프로그램 종료\n");
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
		printf("마지막 데이터 삭제!\n");
	}
	else{
		system("cls");
		printf("삭제할 데이터가 없습니다.\n");
	}
}
void FindPerson(PersonArray*pa)
{
	char FindName[20];
	int i,TorF=0;
	if(pa->perCount>0){
		system("cls");
		printf("찾으시는 이름을 입력하세요 : ");
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
			printf("찾으시는 데이터가 없습니다.\n");
		}
	}
	else{
		system("cls");
		printf("데이터가 존재하지 않습니다.\n");
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
		printf("불러올 데이터가 없습니다.");
	}
	}
	void DeletSpecipicPerson(PersonArray*pa)
	{
		int selectNum,i;
		char temp[100];
		printf("삭제하고 싶은 번호를 입력 하세요 : ");
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
			printf("삭제할 데이터가 없습니다.\n");
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
				printf("다시 입력하세요!!!\n\n");
				break;
			}
		}
	}