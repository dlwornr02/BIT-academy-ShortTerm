#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct PhoneBook{
	char*name[100];
	int*age[100];
}PB;
void Menu(int*a);
void InputInformation(PB*pb,int count);
void PrintInformation(PB*pb,int count);
void FindInformation(PB*pb,int count);
void DeleteInformation(PB*pb,int*count);
void FreeDynamic(PB*pb,int count);
void DeletSpecipicInformation(PB*pb,int*count);

int main(void)
{
	PB pb;
	int a,run=1,count=0;

	while(run)
	{
a:
		Menu(&a);
		switch(a){
		case 1:
			InputInformation(&pb,count);
			count++;
			break;
		case 2:
			PrintInformation(&pb,count);
			break;
		case 3:
			FindInformation(&pb,count);
			break;
		case 4:
			DeleteInformation(&pb,&count);
			break;
		case 5:
			DeletSpecipicInformation(&pb,&count);
			break;
		case 0:
			run=0;
			break;
		default:
			printf("\n\n!!!!!!!!!!잘못된 입력입니다. 다시 입력해주세요.!!!!!!!!!!!!\n");
			goto a;
		}
	}
	FreeDynamic(&pb,count-1);
}
void DeletSpecipicInformation(PB*pb,int*count){
	if(*count>0){
		int num,i,age;
		char name[20];
		printf("지우고 싶은 번호를 입력하세요 : ");
a:
		scanf("%d",&num);
		if(num>*count || num<=0){
			printf("잘못된 입력입니다.다시입력해주세요 : ");
			goto a;
		}	
		free(pb->age[num-1]);
		free(pb->name[num-1]);
		if(num!=1){
			for(i=num;i<*count;i++){

				age=*(pb->age[i]);
				strcpy(name,pb->name[i]);

				*(pb->age[i-1])=age;
				strcpy(pb->name[i-1],name);
			}
		
			free(pb->age[(*count)-1]);
			free(pb->name[(*count)-1]);
		}
		(*count)--;

	}
	else{
		printf("입력된 정보가 없습니다.\n");
	}


}
void Menu(int*a){
	printf("\n===================================\n");
	printf("원하는 작업을 선택하세요.\n");
	printf("1.입력\n");
	printf("2.출력\n");
	printf("3.검색\n");
	printf("4.삭제\n");
	printf("5.특정위치의 정보삭제\n");
	printf("0.종료\n");
	printf("===================================\n");
	scanf("%d",a);

}
void InputInformation(PB*pb,int count){
	char name[20];
	int age;
	printf("나이 : ");
	scanf("%d",&age);
	printf("이름 : ");
	scanf("%s",name);
	pb->name[count]=(char*)malloc(strlen(name)+1);
	strcpy(pb->name[count],name);
	pb->age[count]=(int*)malloc(sizeof(int));
	*(pb->age[count])=age;
}
void PrintInformation(PB*pb,int count){
	int i;
	for(i=0;i<count;i++){
		printf("\n%d. 이름 : %s  나이 : %d\n",i+1,pb->name[i],*(pb->age[i]));
	}
	if(count==0){
		printf("입력된 정보가 없습니다.\n");
	}
}
void FindInformation(PB*pb,int count){
	int i;
	char findname[20],noInformation=0;
	printf("찾으시는 이름을 입력하세요 : ");
	scanf("%s",findname);
	for(i=0;i<count;i++){
		if(strcmp(findname,pb->name[i])==0){
			printf("\n%d. 이름 : %s  나이 : %d\n",i+1,pb->name[i],*(pb->age[i]));
			noInformation++;
		}
	}
	if(noInformation==0){
		printf("찾으시는 이름이 없습니다.\n");
	}
}
void DeleteInformation(PB*pb,int*count){
	if(*count>=1){
		printf("마지막 정보 삭제\n");
		free(pb->age[(*count)-1]);
		free(pb->name[(*count)-1]);
		(*count)--;
	}
	else{
		printf("입력된 정보가 없습니다.\n");
	}
}
void FreeDynamic(PB*pb,int count){
	int i;
	for(i=0;i<=count;i++){
		free(pb->age[i]);
		free(pb->name[i]);
	}
}
