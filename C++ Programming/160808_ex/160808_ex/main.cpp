#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
#include <cstring>
#include<vector>
#include<list>

using namespace std;

void Menu()
{
   cout<<"1. 게임시작"<<endl;
   cout<<"2. 프로그램 종료"<<endl;
}
string map11[20][20]={
"■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■",
"■","■","■","■","■","■","■","■","■","□","☆","■","■","■","■","□","□","□","■","■",
"■","□","♣","■","♤","■","■","■","■","□","■","■","■","■","■","□","■","□","■","■",
"■","□","■","■","□","■","■","■","■","□","■","■","■","■","■","□","■","※","■","■",
"■","□","■","□","□","■","■","■","■","□","■","■","■","■","■","□","■","■","■","■",
"■","□","■","□","■","■","■","■","■","□","■","■","■","■","■","□","■","■","■","■",
"■","□","■","□","■","■","■","■","■","□","■","■","■","■","■","□","■","■","■","■",
"■","□","■","□","■","■","■","■","■","□","■","■","■","■","■","□","■","■","■","■",
"■","□","■","□","□","□","□","□","■","□","■","■","■","■","■","□","■","■","■","■",
"■","□","■","■","■","■","■","□","■","□","■","■","■","■","■","□","■","■","■","■",
"■","□","□","□","□","■","■","□","■","□","□","□","□","□","□","□","□","□","□","■",
"■","■","■","■","□","■","■","□","■","□","■","■","■","■","■","■","■","■","□","■",
"■","■","■","■","□","■","■","□","■","□","■","■","■","□","□","□","□","■","□","■",
"■","□","□","□","□","■","■","□","■","□","□","□","■","□","■","■","□","■","□","■",
"■","□","■","■","■","■","■","□","■","■","■","□","■","□","■","■","□","■","□","■",
"■","□","□","□","□","□","□","□","■","■","■","□","■","□","■","■","□","■","□","■",
"■","■","■","□","■","■","■","■","■","■","■","□","■","□","■","■","□","■","□","■",
"■","△","■","□","■","■","■","■","■","■","■","□","■","□","■","□","□","■","□","■",
"■","□","□","□","□","□","□","□","□","□","□","□","■","□","■","◈","■","■","□","■",
"■","■","■","■","■","■","■","■","■","■","■","■","■","□","■","■","■","■","□","■",
};
string map12[20][20]={
"■","■","■","■","■","■","■","■","■","■","■","■","■","□","■","■","■","■","□","■",
"■","■","■","■","■","■","■","■","■","■","■","□","□","□","□","□","□","□","□","■",
"■","■","■","■","■","■","■","■","■","■","■","□","■","■","■","■","■","■","□","■",
"■","■","□","□","□","□","□","□","□","■","■","□","■","□","□","□","□","■","□","■",
"■","■","□","■","■","■","■","■","□","■","■","□","■","□","■","■","□","■","□","■",
"■","■","□","■","■","■","■","■","□","□","■","□","■","□","☆","■","□","■","□","■",
"■","■","□","■","■","□","☏","■","■","□","■","□","■","■","■","■","□","■","□","■",
"■","■","□","■","■","□","■","■","■","□","■","□","□","□","□","□","□","■","□","■",
"■","■","□","■","■","□","■","■","■","□","■","■","■","■","■","■","■","■","□","■",
"■","■","□","■","■","□","■","■","■","□","■","■","■","■","■","■","■","■","□","■",
"■","■","□","■","■","□","■","■","■","□","■","■","■","■","■","■","■","■","□","■",
"■","■","□","□","□","□","□","■","■","□","□","□","□","□","□","□","□","□","□","■",
"■","■","□","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■",
"■","■","□","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■",
"■","■","□","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■",
"■","■","□","■","■","□","□","□","□","□","□","□","□","□","□","□","□","□","□","□",
"■","■","□","■","■","□","■","■","■","■","■","■","■","□","■","■","■","■","■","■",
"■","■","□","□","□","□","■","■","■","■","■","■","■","□","■","■","■","□","○","■",
"■","■","■","■","■","■","■","■","■","■","■","■","■","□","■","■","■","□","■","■",
"■","■","■","■","■","■","■","■","■","■","■","■","■","□","■","■","■","□","■","■",
};
string map13[20][20]={
"■","■","■","■","■","■","■","■","■","■","■","■","■","□","■","■","■","□","■","■",
"■","□","＠","■","■","■","■","■","■","■","■","■","■","□","■","■","□","□","□","■",
"■","□","■","□","□","□","□","□","□","□","□","□","□","□","□","□","□","■","□","■",
"■","□","■","□","■","■","■","■","■","■","■","■","■","■","■","■","■","■","□","■",
"■","□","■","□","■","■","■","■","■","■","■","■","■","■","□","■","■","■","□","■",
"■","□","□","□","■","■","■","■","■","■","■","■","■","■","□","■","□","□","□","■",
"■","■","□","■","■","□","□","□","□","□","□","□","□","■","□","■","□","■","□","■",
"■","■","□","■","■","□","■","■","■","■","■","■","□","■","□","■","□","■","□","■",
"■","■","□","■","■","□","□","□","□","■","■","■","□","■","□","■","□","■","□","■",
"■","■","□","■","□","□","■","■","□","■","■","■","□","■","□","■","■","■","□","■",
"■","■","□","■","□","■","■","□","□","■","■","■","□","■","□","■","■","■","□","■",
"■","■","□","■","□","■","■","■","■","■","■","■","□","■","□","□","□","□","□","■",
"■","■","□","■","□","□","□","□","■","■","■","■","□","■","■","■","■","■","■","■",
"■","□","□","■","□","■","■","□","■","■","■","■","□","■","■","■","■","■","■","■",
"■","□","■","■","□","■","■","□","■","■","■","■","□","■","■","■","■","■","■","■",
"■","□","■","■","□","■","■","□","■","■","■","■","□","□","□","□","■","■","■","■",
"■","□","■","■","□","■","□","□","■","■","■","■","■","■","■","□","■","■","■","■",
"■","□","□","□","□","■","□","■","■","■","■","■","■","■","■","□","□","□","□","■",
"■","■","■","■","■","■","□","□","□","□","□","□","□","□","■","■","■","■","□","■",
"■","■","■","■","■","■","■","■","■","■","■","□","■","■","■","■","■","■","□","■",
};
string GameStory(int& choose)
{
   cout<<"포켓몬세계에 오신걸 환영합니다!!!"<<endl;
   Sleep(1000);
   system("cls");
   cout<<"이름 입력하세요."<<endl;
   string name;
   cin>>name;
   cout<<"오박사 : "<<name<<"아! 포켓몬 마스터의 길을 멀고 험하단다. 그래도 그 길을 가야겠니??"<<endl;
   Sleep(2000);
   cout<<name<<" : 네! 박사님.. 걱정해주신 것은 감사하지만 전 포켓몬마스터가 되야겠습니다!"<<endl;
   Sleep(2000);
   system("cls");
   cout<<"오박사 : 그래! 그래서 너를 위해 포켓몬을 준비했단다. 너가 원하는 포켓몬을 고르렴!"<<endl;
   cout<<"1. 꼬북이  2. 파이리  3. 이상해씨"<<endl;
   cin>>choose;
   switch(choose)
   {
   case 1:
      cout<<choose<<". 꼬북이 선택!!"<<endl;
      break;
   case 2:
      cout<<choose<<". 파이리 선택!!"<<endl;
      break;
   case 3:
      cout<<choose<<". 이상해씨 선택!!"<<endl;
      break;
   }

   return name;
}

class Monster
{
   string name; // 몬스터이름
   int level; // 몬스터 레벨
   int strength; // 몬스터 체력
public:
   Monster(){};
   virtual void Attack() = 0;
   virtual void ShowInfor()
   {
      cout<<"포켓몬: "<<name<<endl;
      cout<<"level: "<<level<<endl;
      cout<<"체력: "<<strength<<endl;
   }

   virtual ~Monster(){};
};

class Pikachu : public Monster
{
public:
   Pikachu(string name = "피카츄", int level=0, int strength=100)
   {
   }

   void Attack()
   {
      cout<<"100만 볼트!!!"<<endl;
   }
};

class Piry : public Monster
{
public:
   Piry(string name = "파이리", int level=0, int strength=100)
   {

   }
   void Attack()
   {
      cout<<"파이어!!!"<<endl;
   }
};

class Isanghaessi : public Monster
{
public:
   Isanghaessi(string name = "이상해씨", int level=0, int strength=100)
   {
   }
   void SetMonster()
   {

   }
   void Attack()
   {
      cout<<"나뭇잎 공격!!!"<<endl;
   }
};

class Ggobugi : public Monster
{
public:
   Ggobugi(string name = "꼬부기", int level=0, int strength=100)
   {

   }
   void Attack()
   {
      cout<<"물대포!!!"<<endl;
   }
};

class Inventory
{
   vector<Monster*> mv;
public:

   void InventoryInfo()
   {
      vector<Monster*>::iterator iter = mv.begin();
      for(; iter!=mv.end() ; iter++)
      {
         (*iter)->ShowInfor();
      }
   }
   void AddMonster(Monster* m)
   {
      mv.push_back(m);
   }
};


class Person //  지우
{
   string name;
   Inventory inven;
public:
   Person()
   {
   }
   void SetName(string pername)
   {
      name = pername;
   }
   void SetMonster(Monster* mon)
   {
      inven.AddMonster(mon);
   }
   void SelectMonster()
   {
         int choose;
         SetName( GameStory(choose) );
         if(choose == 1)
         {
            Ggobugi Ggo;
            SetMonster(&Ggo);
         }
         else if(choose == 2)
         {
            Piry piry;
            SetMonster(&piry);
         }
         else if(choose == 3)
         {
            Isanghaessi isang;
            SetMonster(&isang);
         }
      
   }
};
void Printmap(string map[20][20])
{
	for(int i=0;i<20;i++)
		{
			for(int j=0;j<20;j++)
				cout<<map[i][j];
			cout<<endl;
		}
}
void Move()
{

}
void main()
{
	Person per;
	Menu();
	switch(getch())
	{
	case '1':
		per.SelectMonster();
		break;
	case '2':
		cout<<"프로그램 종료."<<endl;
		break;
	}
}
