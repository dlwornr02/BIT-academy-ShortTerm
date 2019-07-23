#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
#include <cstring>
#include<vector>
#include<map>
#include<list>
#include <fstream>
#include <time.h>
#include<algorithm>
#include"MAP.h"
#define RIGHT 77
#define LEFT 75
#define UP 72
#define DOWN 80
#define ENTER 13
#define SPACE 32
#define ESC 27
#define I 105
using namespace std;
class WMap;
class Monster;
class PoketmonBook;
class Inventory;
class FindMonster;
class User;
void Load();
void Save();
void PrintMonster(string fileName);
void gotoxy(int x, int y);
void Menu();
void InitHMap();
void ApearMonster(int mapNum);
void Printmap(WMap&map);
int Move(int _x, int _y, WMap&map, int mapNum);
string GameStory(int& choose);
void ApearMonster(int mapNum);
void Fight();
void PrintMyMon(int hp, int exp, string monName);
void PrintEnemyMon(int hp, int exp, string monName);
vector<Monster> Fire;
vector<Monster> Water;
vector<Monster> Earth;
vector<Monster> Electronic;
map<int, WMap> Hmap;
map<string, vector<Monster>> HMonster;
class WMap
{
	WMap*up;
	WMap*down;
	WMap*right;
	WMap*left;
	int mapNum;
public:
	string wmap[21][20];
	WMap(string map[21][20] = 0, int mapNum = 0) :mapNum(mapNum)
	{
		for (int i = 0; i<21; i++)
			for (int j = 0; j<20; j++)
				wmap[i][j] = map[i][j];
		up = NULL;
		down = NULL;
		right = NULL;
		left = NULL;
	}
	void SetRelation(int i)
	{
		if (0<(i - 1) && (i - 1)<26)
			up = &Hmap[i - 1];
		if (0<(i + 1) && (i + 1)<26)
			down = &Hmap[i + 1];
		if (0<(i + 5) && (i + 5)<26)
			right = &Hmap[i + 5];
		if (0<(i - 5) && (i - 5)<26)
			left = &Hmap[i - 5];
	}
	WMap* GetUp()const
	{
		return up;
	}
	WMap* GetDown()const
	{
		return down;
	}
	WMap* GetRight()const
	{
		return right;
	}
	WMap* GetLeft()const
	{
		return left;
	}
	int MapNum()const
	{
		return mapNum;
	}
};
class Monster
{
	string name; // 몬스터이름
	string type; //속성
	int level; // 몬스터 레벨
	int HP; // 몬스터 체력
	int Exp;
	vector<string> skill;
	string filename;
	string strong;
public:
	Monster(string name = "", string type = "", int level = 0, int hp = 0, string strong = "", string skill1 = "", string skill2 = "", string skill3 = "", string filename = "") :name(name), type(type), level(level), HP(hp), strong(strong), filename(filename)
	{
		skill.push_back(skill1);
		skill.push_back(skill2);
		skill.push_back(skill3);
		skill.push_back("포획하기!");
		skill.push_back("도망가기!");

		Exp = 0;
	}
	vector<string> GetSkill()const
	{
		return skill;
	}
	void SetHP(int hp)
	{
		HP = hp;
	}
	void Hurting(int damage)
	{
		HP -= damage;
	}
	void Attack(Monster& enemy, int skillNum)
	{
		int power;
		if (skillNum<4 && 0<HP)
		{
			power = this->GetDamage(skillNum);
			enemy.Hurting(power);
			system("cls");
			cout<<name<<"!!!  "<<GetSkillName(skillNum)<<"!!!"<<endl;
			Sleep(1000);
		}
	}
	void SetLevel(int level)
	{
		this->level = level;
		HP = 80 + (this->level - 1) * 10;
	}
	int GetExp()const
	{
		return Exp;
	}
	void SetExp(int exp)
	{
		Exp += exp;
	}
	int GetHP()const
	{
		return HP;
	}
	string GetType()const
	{
		return type;
	}
	int GetLevel()const
	{
		return level;
	}
	string GetName()const
	{
		return name;
	}
	string GetSkillName(int i)
	{
		return skill[i - 1];

	}
	int GetDamage(int i)
	{
		return i * (level * 5);
	}
	string GetFilename()const
	{
		return filename;
	}
	string GetStrong()const
	{
		return strong;
	}
	void SetName(string _name)
	{
		name = _name;
	}
	void ShowInfor()
	{
		cout << "포켓몬: " << name << endl;
		cout << "속성: " << type << endl;
		cout << "level: " << level << endl;
		cout << "체력: " << HP << endl;

	}
};
void InitHMonster(){
	HMonster["불"] = Fire;
	HMonster["물"] = Water;
	HMonster["땅"] = Earth;
	HMonster["전기"] = Electronic;

	HMonster["불"].push_back(Monster("파이리", "불", 1, 80, "약", "연막", "할퀴기", "화염방사", "파이리.txt"));
	HMonster["불"].push_back(Monster("불꽃몬", "불", 1, 80, "약", "망각술", "불꽃박치기", "파란불꽃", "불꽃몬.txt"));
	HMonster["불"].push_back(Monster("브케인", "불", 2, 90, "약", "화풀이", "이판사판태클", "연옥", "브케인.txt"));
	HMonster["불"].push_back(Monster("마그마그", "불", 2, 90, "약", "불꽃튀기기", "대지의힘", "화염던지기", "마그마그.txt"));
	HMonster["불"].push_back(Monster("포니타", "불", 3, 100, "약", "날라옆차기", "짚밟기", "불꽃세례", "포니타.txt"));
	HMonster["불"].push_back(Monster("하트몬", "불", 7, 140, "강", "헤롱헤롱", "플래시", "하트불꽃", "하트몬.txt"));
	HMonster["불"].push_back(Monster("리자몽", "불", 10, 170, "강", "플레어드라이브", "열풍", "불꽃회오리", "리자몽BOSS.txt"));

	HMonster["물"].push_back(Monster("꼬부기", "물", 1, 80, "약", "비바라기", "등껍질던지기", "물의파동", "꼬부기.txt"));
	HMonster["물"].push_back(Monster("잉어킹", "물", 1, 70, "약", "튀어오르기", "뭉개기", "집어삼키기", "잉어킹.txt"));
	HMonster["물"].push_back(Monster("방울몬", "물", 2, 90, "약", "물싸대기", "물폭탄", "파도타기", "방울몬.txt"));
	HMonster["물"].push_back(Monster("별가사리", "물", 2, 90, "약", "소금물", "거품광선", "사이코키네시스", "별가사리.txt"));
	HMonster["물"].push_back(Monster("리아코", "물", 3, 100, "약", "째려보기", "물대포", "냉동빔", "리아코.txt"));
	HMonster["물"].push_back(Monster("고라파덕", "물", 7, 140, "강", "귀여운척하기", "물음표뛰우기", "염력", "고라파덕.txt"));
	HMonster["물"].push_back(Monster("거북왕", "물", 10, 170, "강", "그로우펀치", "러스터캐논", "하이드로펌프", "거북왕BOSS.txt"));

	HMonster["전기"].push_back(Monster("피카츄", "전기", 1, 80, "약", "몸통박치기", "스파크", "백만볼트", "피카츄.txt"));
	HMonster["전기"].push_back(Monster("찌리리공", "전기", 1, 80, "약", "뒹굴기", "머리박기", "대폭발", "찌리리공.txt"));
	HMonster["전기"].push_back(Monster("피츄", "전기", 1, 80, "약", "애교", "꼬리치기", "전기 쇼크", "피츄.txt"));
	HMonster["전기"].push_back(Monster("코일", "전기", 3, 100, "약", "나사던지기", "그림자분신", "일렉트릭볼", "코일.txt"));
	HMonster["전기"].push_back(Monster("쥬피썬더", "전기", 4, 110, "약", "울부짖기", "전광석화", "번개엄니", "쥬피썬더.txt"));
	HMonster["전기"].push_back(Monster("썬더", "전기", 8, 150, "강", "전기쇼크", "전자포", "차지빔", "썬더.txt"));
	HMonster["전기"].push_back(Monster("라이츄", "전기", 10, 170, "강", "아이언테일", "와일드볼트", "번개펀치", "라이츄BOSS.txt"));

	HMonster["땅"].push_back(Monster("이상해씨", "땅", 1, 80, "약", "씨던지기", "덩쿨날리기", "덩쿨채찍", "이상해씨.txt"));
	HMonster["땅"].push_back(Monster("치코리타", "땅", 1, 80, "약", "후려치기", "나뭇잎던지기", "메지컬리프", "치코리타.txt"));
	HMonster["땅"].push_back(Monster("구구", "땅", 2, 90, "약", "바람일으키기", "쪼아대기", "칼날가르기", "구구.txt"));
	HMonster["땅"].push_back(Monster("나무돌이", "땅", 3, 100, "약", "나무던지기", "통나무펀치", "리프스톰", "나무돌이.txt"));
	HMonster["땅"].push_back(Monster("도토링", "땅", 4, 110, "약", "도토리던지기", "나무타기", "에너지볼", "도토링.txt"));
	HMonster["땅"].push_back(Monster("선인왕", "땅", 8, 150, "강", "바늘팔", "가시펀치", "바늘뿜기", "선인왕.txt"));
	HMonster["땅"].push_back(Monster("이상해꽃", "땅", 10, 170, "강", "풀베기", "입날가르기", "솔라빔", "이상해꽃BOSS.txt"));

	vector<Monster>::iterator fiter = Fire.begin();
	vector<Monster>::iterator witer = Water.begin();
	vector<Monster>::iterator eiter = Earth.begin();
	vector<Monster>::iterator eniter = Electronic.begin();
}
class Inventory
{
	vector<Monster> mv;
	bool key;
public:
	Inventory()
	{
		key = false;
	}
	void SetKey(bool get)
	{
		key = get;
	}
	bool GetKey()
	{
		return key;
	}
	void SetSize(int size)
	{
		mv.reserve(size);
	}
	void InventoryInfo()
	{
		vector<Monster>::iterator iter = mv.begin();
		int i = 1;
		for (; iter != mv.end(); iter++, i++)
		{
			cout << i << "." << endl;
			(*iter).ShowInfor();
			cout << endl;
		}
		if(key==true)
			cout<<"키:보유중"<<endl;
		else if(key==false)
			cout<<"키:없음"<<endl;
	}
	void AddMonster(Monster m)
	{
		mv.push_back(m);
	}
	vector<Monster> GetMonsterlist()
	{
		return mv;
	}
	vector<Monster>::iterator Getsiter()
	{
		return mv.begin();
	}
	Monster& UserMonster(int i)
	{
		return mv[i];
	}
	int Size()const
	{
		return mv.size();
	}
};
class FindMonster
{
	string name;
public:
	FindMonster(string name) :name(name){}
	bool operator()(const Monster&m1)
	{
		return (m1.GetName() == name);
	}
};
class User //  사용자 클래스
{
	typedef struct Position
	{
		int x, y, mapNumber;
	}Position;
	Position position;
	string name;
	Inventory inven;
public:

	Inventory& GetInven()
	{
		return inven;
	}
	void UpdatePosition(int x, int y, int mapNumber)
	{
		position.x = x;
		position.y = y;
		position.mapNumber = mapNumber;
	}
	Position GetPosition()const
	{
		return position;
	}
	string GetName() const
	{
		return name;
	}
	void SetName(string pername)
	{
		name = pername;
		system("cls");
		Printmap(Hmap[13]);
		Move(10, 10, Hmap[13], 25);
	}
	void SetMonster(Monster mon)
	{
		mon.SetLevel(5);
		inven.AddMonster(mon);
	}
	void SelectMonster()
	{
		int choose;
		string name = GameStory(choose);
		vector<Monster>::iterator iter;
		if (choose == 1)
		{
			iter = find_if(HMonster["물"].begin(), HMonster["물"].end(), FindMonster("꼬부기"));
			SetMonster((*iter));
		}
		else if (choose == 2)
		{
			iter = find_if(HMonster["불"].begin(), HMonster["불"].end(), FindMonster("파이리"));
			SetMonster((*iter));
		}
		else if (choose == 3)
		{
			iter = find_if(HMonster["땅"].begin(), HMonster["땅"].end(), FindMonster("이상해씨"));
			SetMonster((*iter));
		}
		SetName(name);

	}

};
User user;
///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
void main()
{
	InitHMap();
	InitHMonster();
re:
	system("cls");
	Menu();
	switch (_getch())
	{
	case '1':
		user.SelectMonster();
		break;
	case '2':
		Load();
		break;
	case '3':
		cout << "프로그램 종료." << endl;
		break;
	default:
		goto re;
	}
}
///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

void PrintMyMon(Monster& mymon, int&selectSkill)
{
a:
	system("cls");
	ifstream fin;
	char line[200];

	fin.open(mymon.GetFilename());

	if (fin.is_open())
	{
		while (fin.getline(line, sizeof(line)))
		{
			cout << line << endl;
		}
	}
	cout << "LV." << mymon.GetLevel() << endl;
	cout << "HP:" << Bar[(mymon.GetHP() / 10)] << endl << endl;
	cout << "EXP:" << Bar[mymon.GetExp() / 10] << endl;
	for (int i = 0; i<5; i++)
	{
		gotoxy(45, 5 + i);
		cout << (i + 1) << '.' << mymon.GetSkill()[i] << endl;
	}
	gotoxy(45, 10);
	cout << "스킬선택 :";
	selectSkill = ((_getch()) - '0');
	if ( (selectSkill<=0 ) || (6<=selectSkill && selectSkill!=57) )
	{
		fin.close();
		goto a;
	}
	fin.close();
}
void PrintEnemyMon(Monster& enemymon, int&selectSkill)
{
	srand((unsigned)time(NULL));
	system("cls");
	ifstream fin;
	char line[200];

	fin.open(enemymon.GetFilename());
	if (fin.is_open())
	{
		while (fin.getline(line, sizeof(line)))
		{
			int i = 0;
			cout << line << endl;
			i++;
		}
	}
	cout << "LV." << enemymon.GetLevel() << endl;
	cout << "HP:" << Bar[(enemymon.GetHP() / 10)] << endl << endl;
	fin.close();
	selectSkill = (rand() % 3 + 1);
	Sleep(1000);
}
void Fight(string enemyname, string montype)
{
	static int mymonNumber = 1;
	int selectSkill1, selectSkill2;
	string enemymontype;
	int mymonsterNum = user.GetInven().GetMonsterlist().size();
	Monster mymon = user.GetInven().UserMonster(mymonNumber-1);
	vector<Monster>::iterator iter = find_if(HMonster[montype].begin(), HMonster[montype].end(), FindMonster(enemyname));
	Monster enemymon = *(iter);
	while (0 < enemymon.GetHP())
	{
		int die_monsterNum=0;
		die_monsterNum=0;
		for (int i = 0; i<mymonsterNum; i++)
		{
			if (user.GetInven().UserMonster(i).GetHP() <= 0)
			{
				die_monsterNum++;
			}
		}
		if (mymon.GetHP() <= 0 && die_monsterNum < mymonsterNum)
		{
reselect:
			system("cls");
			user.GetInven().UserMonster(mymonNumber-1).SetHP(0);
			user.GetInven().InventoryInfo();
			cout<<"포켓몬을 선택하세요 : ";
			cin>>mymonNumber;
			if(cin.fail())
			{
				cin.clear();
				char c;
				cin >> c;
				goto reselect2;
			}
			else if(mymonNumber<=mymonsterNum)
				mymon = user.GetInven().UserMonster(mymonNumber-1);
			else
				goto reselect;
		}
		else if (mymon.GetHP() <= 0 && die_monsterNum == mymonsterNum)
		{
			system("cls");
			user.GetInven().UserMonster(mymonNumber-1).SetHP(0);
			cout << "전투가능한 몬스터가 없습니다." << endl << "포켓몬센터에서 치료받으세요." << endl;
			Sleep(1000);
			break;
		}
	b:
		PrintMyMon(mymon, selectSkill1);
		if (selectSkill1 == 4)
		{
			if (enemymon.GetHP() <= 20)
			{
				if (user.GetInven().Size()<6)
				{
					user.GetInven().AddMonster(enemymon);
					mymonsterNum++;
					system("cls");
					cout << enemymon.GetName() << "을/를 포획하셧습니다." << endl;
					Sleep(1000);
					break;
				}
				else
				{
					system("cls");
					cout << "배낭이 가득찻습니다." << endl;
					goto b;
				}
			}
			else if (20<enemymon.GetHP())
			{
				system("cls");
				cout << "몬스터가 아직 팔팔합니다!!!!" << endl;
				Sleep(1000);
				goto b;
			}
		}
		else if (selectSkill1 == 5)
		{
			system("cls");
			cout << "너무쎄다...도망가자...ㅠㅠ" << endl;
			Sleep(1000);
			break;
		}
		else if (0<selectSkill1 && selectSkill1<4)
		{
			PrintEnemyMon(enemymon, selectSkill2);
			mymon.Attack(enemymon, selectSkill1);

			PrintEnemyMon(enemymon, selectSkill2);
			enemymon.Attack(mymon, selectSkill2);
			user.GetInven().UserMonster(mymonNumber-1).SetHP(mymon.GetHP());
		}
		else if (selectSkill1==57)
		{
reselect2:
			system("cls");
			user.GetInven().InventoryInfo();
			cout<<"포켓몬을 선택하세요 : ";
			cin>>mymonNumber;
			if(cin.fail())
			{
				cin.clear();
				char c;
				cin >> c;
				goto reselect2;
			}
			else if(mymonNumber<=mymonsterNum){
				mymon = user.GetInven().UserMonster(mymonNumber-1);
				goto b;
			}
			else
				goto reselect2;
		}
	}
	if (mymon.GetHP()>0 && selectSkill1 != 4 && selectSkill1 != 5)
	{
		user.GetInven().UserMonster(mymonNumber-1).SetExp(((enemymon.GetLevel())*20)/mymon.GetLevel());
	}

	if (mymon.GetExp() >= 100)
	{
		user.GetInven().UserMonster(mymonNumber-1).SetExp(-100);
		user.GetInven().UserMonster(mymonNumber-1).SetLevel(mymon.GetLevel() + 1);
	}


}


void PrintMonster(string fileName, string montype)
{
	if (rand() % 6 == 0 && fileName != "럭키.txt")
	{
		system("cls");
		cout << "포켓몬 등장!!!!" << endl;
		ifstream fin;
		char line[200];

		fin.open(fileName);

		if (fin.is_open())
		{
			while (fin.getline(line, sizeof(line)))
			{
				cout << line << endl;
			}
		}
		fin.close();
		Sleep(1000);
		//twinkletwinkle();
		fileName.pop_back();
		fileName.pop_back();
		fileName.pop_back();
		fileName.pop_back();
		Fight(fileName, montype);

	}
	else if (fileName == "럭키.txt")
	{
		system("cls");
		cout << "♥♥♥♥포켓몬센터♥♥♥♥" << endl;
		cout << "---포켓몬 치료중---" << endl;
		ifstream fin;
		char line[200];

		fin.open(fileName);

		if (fin.is_open())
		{
			while (fin.getline(line, sizeof(line)))
			{
				cout << line << endl;
			}
		}
		fin.close();
		Sleep(1000);
	}
}
void ApearMonster(int mapNum)
{
	srand((unsigned int)time(NULL));
	int singletype = rand() % 6;
	int doubletype = rand() % 12;
	string doubletypeMonster[12];
	string montype;

	if (1 <= mapNum && mapNum <= 4)
	{
		PrintMonster(HMonster["불"][singletype].GetFilename(), "불");
	}
	else if (5 <= mapNum && mapNum <= 8)
	{
		PrintMonster(HMonster["물"][singletype].GetFilename(), "물");
	}
	else if (9 <= mapNum && mapNum <= 12)
	{
		PrintMonster(HMonster["땅"][singletype].GetFilename(), "땅");
	}
	else if (13 <= mapNum && mapNum <= 16)
	{
		PrintMonster(HMonster["전기"][singletype].GetFilename(), "전기");
	}
	else if (17 <= mapNum && mapNum <= 18)
	{
		for (int i = 0; i < 6; i++){
			doubletypeMonster[i] = HMonster["불"][i].GetFilename();
			doubletypeMonster[i + 6] = HMonster["땅"][i].GetFilename();
		}
		if (0 <= doubletype && doubletype <= 5)
		{
			montype = "불";
		}
		else
		{
			montype = "땅";
		}
		PrintMonster(doubletypeMonster[doubletype], montype);
	}
	else if (19 <= mapNum && mapNum <= 20)
	{
		for (int i = 0; i < 6; i++){
			doubletypeMonster[i] = HMonster["불"][i].GetFilename();
			doubletypeMonster[i + 6] = HMonster["물"][i].GetFilename();
		}
		if (0 <= doubletype && doubletype <= 5)
		{
			montype = "불";
		}
		else
		{
			montype = "물";
		}
		PrintMonster(doubletypeMonster[doubletype], montype);
	}
	else if (21 <= mapNum && mapNum <= 22)
	{
		for (int i = 0; i < 6; i++){
			doubletypeMonster[i] = HMonster["물"][i].GetFilename();
			doubletypeMonster[i + 6] = HMonster["전기"][i].GetFilename();
		}
		if (0 <= doubletype && doubletype <= 5)
		{
			montype = "물";
		}
		else
		{
			montype = "전기";
		}
		PrintMonster(doubletypeMonster[doubletype], montype);
	}
	else if (23 <= mapNum && mapNum <= 24)
	{
		for (int i = 0; i < 6; i++)
		{
			doubletypeMonster[i] = HMonster["땅"][i].GetFilename();
			doubletypeMonster[i + 6] = HMonster["전기"][i].GetFilename();
		}
		if (0 <= doubletype && doubletype <= 5)
		{
			montype = "땅";
		}
		else
		{
			montype = "전기";
		}
		PrintMonster(doubletypeMonster[doubletype], montype);
	}
	else if (mapNum == 25)
	{
		return;
	}
}
void gotoxy(int x, int y)
{
	COORD CursorPosition = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}
void Menu()
{
	cout << "1. 새로운 게임시작" << endl;
	cout << "2. 불러오기" << endl;
	cout << "3. 프로그램 종료" << endl;
}
void InitHMap()
{
	Hmap.insert(pair<int, WMap>(1, WMap(map11, 1)));
	Hmap.insert(pair<int, WMap>(2, WMap(map12, 3)));
	Hmap.insert(pair<int, WMap>(3, WMap(map13, 17)));
	Hmap.insert(pair<int, WMap>(4, WMap(map14, 9)));
	Hmap.insert(pair<int, WMap>(5, WMap(map15, 11)));
	Hmap.insert(pair<int, WMap>(6, WMap(map21, 2)));
	Hmap.insert(pair<int, WMap>(7, WMap(map22, 4)));
	Hmap.insert(pair<int, WMap>(8, WMap(map23, 18)));
	Hmap.insert(pair<int, WMap>(9, WMap(map24, 10)));
	Hmap.insert(pair<int, WMap>(10, WMap(map25, 12)));
	Hmap.insert(pair<int, WMap>(11, WMap(map31, 19)));
	Hmap.insert(pair<int, WMap>(12, WMap(map32, 20)));
	Hmap.insert(pair<int, WMap>(13, WMap(map33, 25)));
	Hmap.insert(pair<int, WMap>(14, WMap(map34, 23)));
	Hmap.insert(pair<int, WMap>(15, WMap(map35, 24)));
	Hmap.insert(pair<int, WMap>(16, WMap(map41, 5)));
	Hmap.insert(pair<int, WMap>(17, WMap(map42, 7)));
	Hmap.insert(pair<int, WMap>(18, WMap(map43, 21)));
	Hmap.insert(pair<int, WMap>(19, WMap(map44, 13)));
	Hmap.insert(pair<int, WMap>(20, WMap(map45, 15)));
	Hmap.insert(pair<int, WMap>(21, WMap(map51, 6)));
	Hmap.insert(pair<int, WMap>(22, WMap(map52, 8)));
	Hmap.insert(pair<int, WMap>(23, WMap(map53, 22)));
	Hmap.insert(pair<int, WMap>(24, WMap(map54, 14)));
	Hmap.insert(pair<int, WMap>(25, WMap(map55, 16)));

	for (int i = 0; i<25; i++)
		Hmap[i + 1].SetRelation(i + 1);

}
void Printmap(WMap&map)
{
	system("cls");
	for (int i = 0; i<20; i++)
	{
		for (int j = 0; j<20; j++)
			cout << map.wmap[i][j];
		cout << endl;
	}
	cout << map.wmap[20][0] << endl;
	cout << "Esc를 누르면 저장&종료" << endl;
}
int Move(int _x, int _y, WMap&map, int mapNum)
{
	int x = _x, x2 = _y * 2;
	int y = _y, y2 = _x;
	int run = 1;
	gotoxy(x2, y2);
	//user.UpdatePosition(x2, y2, map.MapNum());
	while (run)
	{
		switch (_getch())
		{
		case ESC:
		{
			Save();
			system("cls");
			cout<<"지우와 포켓몬들이 태초마을로 쉬러갔습니다."<<endl;
			Sleep(2000);
			return 0;
		}
		case I:
		{
			system("cls");
			user.GetInven().InventoryInfo();
			Sleep(1000);
			Printmap(map);
		}
		case RIGHT:

			if (y < 19 && map.wmap[x][y + 1] == "□" )
			{
				y++, x2 += 2;
					map.wmap[x][y - 1] = "□";
				map.wmap[x][y] = "★";
				Printmap(map);
				ApearMonster(map.MapNum());
				gotoxy(x2, y2);
				system("cls");
				Printmap(map);
			}
			else if (y == 19 && map.GetRight() != NULL)
			{
				system("cls");
				map.wmap[x][y] = "□";
				map.GetRight()->wmap[x][0] = "★";
				Printmap(*(map.GetRight()));
				run = Move(x, 0, *(map.GetRight()), map.MapNum());
				return 0;
			}
			break;
		case LEFT:
			if (0<y && map.wmap[x][y - 1] == "□")
			{
				y--, x2 -= 2;
				
					map.wmap[x][y + 1] = "□";
				map.wmap[x][y] = "★";
				gotoxy(x2, y2);
				Printmap(map);
				ApearMonster(map.MapNum());
				system("cls");
				Printmap(map);
			}
			else if (y == 0 && map.GetLeft() != NULL)
			{
				system("cls");
				map.wmap[x][y] = "□";
				map.GetLeft()->wmap[x][19] = "★";
				Printmap(*(map.GetLeft()));
				run = Move(x, 19, *(map.GetLeft()), map.MapNum());
				return 0;
			}
			break;
		case UP:
			if ((0<x && map.wmap[x - 1][y] == "□"))
			{
				--x, y2--;
				
					map.wmap[x + 1][y] = "□";
				map.wmap[x][y] = "★";
				gotoxy(x2, y2);
				Printmap(map);
				ApearMonster(map.MapNum());
				system("cls");
				Printmap(map);
			}
			else if (x == 0 && map.GetUp() != NULL)
			{
				system("cls");
				map.wmap[x][y] = "□";
				map.GetUp()->wmap[19][y] = "★";
				Printmap(*(map.GetUp()));
				run = Move(19, y, *(map.GetUp()), map.MapNum());
				return 0;
			}
			break;
		case DOWN:
			if (x < 19 && map.wmap[x + 1][y] == "□")
			{
				x++, y2++;
					map.wmap[x - 1][y] = "□";
				map.wmap[x][y] = "★";
				gotoxy(x2, y2);
				Printmap(map);
				ApearMonster(map.MapNum());
				system("cls");
				Printmap(map);
			}
			else if (x == 19 && map.GetDown() != NULL)
			{
				system("cls");
				map.wmap[x][y] = "□";
				map.GetDown()->wmap[0][y] = "★";
				Printmap(*(map.GetDown()));
				run = Move(0, y, *(map.GetDown()), map.MapNum());
				return 0;
			}
			break;
		case SPACE:
			if (map.wmap[x + 1][y] == "♡" || map.wmap[x - 1][y] == "♡" || map.wmap[x][y + 1] == "♡" || map.wmap[x][y - 1] == "♡")
			{
				int size = user.GetInven().Size();
				for (int i = 0; i<size; i++)
				{
					Monster& usermonster = user.GetInven().UserMonster(i);
					usermonster.SetHP(80 + (((usermonster).GetLevel()) - 1) * 10);
				}
				PrintMonster("럭키.txt", "치료");
				Sleep(1000);
				system("cls");
				Printmap(map);
			}
			else if (map.wmap[x + 1][y] == "☆" || map.wmap[x - 1][y] == "☆" || map.wmap[x][y + 1] == "☆" || map.wmap[x][y - 1] == "☆")
			{
					if (1 <= mapNum && mapNum <= 4)
					{
						system("cls");
						cout<<"??? : 누가날 깨웠나 화끈한 불맛을 보여줘야겠구만"<<endl;
						Sleep(1000);
						Fight("리자몽", "불");
						Printmap(map);
					}
					else if (5 <= mapNum && mapNum <= 8)
					{
						system("cls");
						cout<<"??? : 잠수 잘허냐?"<<endl;
						Sleep(1000);
						Fight("거북왕", "물");
						Printmap(map);
					}
					else if (9 <= mapNum && mapNum <= 12)
					{
						system("cls");
						cout<<"??? : 난 꽃가루 알러지를 유발하지"<<endl;
						Sleep(1000);
						Fight("이상해꽃", "땅");
						Printmap(map);
					}
					else if (13 <= mapNum && mapNum <= 16)
					{
						system("cls");
						cout<<"??? :  Electric E-E-E-Electric E-E-E-Electric Shoc"<<endl<<"전 전 전류들이 몸을 타고 흘러 다녀 기 기 기절 할 듯 아슬아슬 찌릿찌릿"<<endl;
						Sleep(1000);
						Fight("라이츄", "전기");
						Printmap(map);
				}
			}
			else if (map.wmap[x + 1][y] == "§" || map.wmap[x - 1][y] == "§" || map.wmap[x][y + 1] == "§" || map.wmap[x][y - 1] == "§")
			{
				if(user.GetInven().GetKey() == true)
				{
					system("cls");
					cout<<"이미 열쇠를 가지고있습니다."<<endl;
				}
				else
				{
					user.GetInven().SetKey(true);
					system("cls");
					cout << "열쇠를 얻었다!! 어느곳에 쓰이는 열쇠일까 좀더 돌아다녀보자!" << endl;
				}
				Sleep(1000);
				Printmap(map);
				
			}
			else if (map.wmap[x + 1][y] == "▤" || map.wmap[x - 1][y] == "▤" || map.wmap[x][y + 1] == "▤" || map.wmap[x][y - 1] == "▤")
			{
				system("cls");
				if(user.GetInven().GetKey()==true)
				{
					if (map.wmap[x + 1][y] == "▤")
						map.wmap[x + 1][y] = "□";
					else if (map.wmap[x - 1][y] == "▤")
						map.wmap[x - 1][y] = "□";
					else if (map.wmap[x][y + 1] == "▤")
						map.wmap[x][y + 1] = "□";
					else if (map.wmap[x][y - 1] == "▤")
						map.wmap[x][y - 1] = "□";
					cout<<"문이 열렸다!!!안에 뭐가있을까..."<<endl;
					Sleep(1000);
					Printmap(map);
				}
				else
				{
					system("cls");
					cout << "KEY가 없습니다ㅎㅎ 키를 얻어오세요." << endl;
					Sleep(1000);
					Printmap(map);
				}
				Printmap(map);
			}
			break;
		}
	}
	return 0;
}
string GameStory(int& choose)
{
	system("cls");
	cout << "포켓몬세계에 오신걸 환영합니다!!!" << endl;
	Sleep(1000);
	system("cls");
	cout << "이름 입력하세요." << endl;
	string name;
	cin >> name;
	system("cls");
	cout << "오박사 : " << name << "아! 포켓몬 마스터의 길을 멀고 험하단다. 그래도 그 길을 가야겠니??" << endl;
	Sleep(1000);
	cout << name << " : 네! 박사님.. 걱정해주신 것은 감사하지만 전 포켓몬마스터가 되야겠습니다!" << endl;
	Sleep(1000);
Rechoose:
	system("cls");
	cout << "오박사 : 그래! 그래서 너를 위해 포켓몬을 준비했단다. 너가 원하는 포켓몬을 고르렴!" << endl;
	cout << "1. 꼬북이  2. 파이리  3. 이상해씨" << endl;
	cin >> choose;
	if(cin.fail())
	{
		cin.clear();
		char c;
		cin >> c;
		goto Rechoose;
	}
	system("cls");
	switch (choose)
	{
	case 1:
		cout << choose << ". 꼬북이 선택!!" << endl;
		break;
	case 2:
		cout << choose << ". 파이리 선택!!" << endl;
		break;
	case 3:
		cout << choose << ". 이상해씨 선택!!" << endl;
		break;
	default:
		goto Rechoose;
	}

	return name;
}
void Save()
{
	ofstream fout("User.txt");

	fout << user.GetName() << " ";
	fout << user.GetInven().Size() << " ";
	for (int i = 0; i< user.GetInven().Size(); ++i)
	{
		fout << user.GetInven().UserMonster(i).GetName() << " ";
		fout << user.GetInven().UserMonster(i).GetType() << " ";
		fout << user.GetInven().UserMonster(i).GetLevel() << " ";
		fout << user.GetInven().UserMonster(i).GetHP() << " ";
		fout << user.GetInven().UserMonster(i).GetStrong() << " ";
		fout << user.GetInven().UserMonster(i).GetSkillName(1) << " ";
		fout << user.GetInven().UserMonster(i).GetSkillName(2) << " ";
		fout << user.GetInven().UserMonster(i).GetSkillName(3) << " ";
		fout << user.GetInven().UserMonster(i).GetFilename() << " ";
		fout << user.GetInven().UserMonster(i).GetExp() << " ";
	}
	/*fout<<user.GetPosition().x<<" ";
	fout<<user.GetPosition().y<<" ";
	fout<<user.GetPosition().mapNumber<<" ";*/

	fout.close();
}
void Load()
{
	ifstream fin;
	string name;
	/*int x;
	int y;
	int mapNumber;*/
	int size;
	string monname;
	string type;
	int level;
	int HP;
	string strong;
	string skillName1;
	string skillName2;
	string skillName3;
	string filename;
	int exp;

	fin.open("User.txt");
	if (fin)
	{
		fin >> name;
		fin >> size;

		for (int i = 0; i<size; i++)
		{
			fin >> monname;
			fin >> type;
			fin >> level;
			fin >> HP;
			fin >> strong;
			fin >> skillName1;
			fin >> skillName2;
			fin >> skillName3;
			fin >> filename;
			fin >> exp;
			user.GetInven().AddMonster(Monster(monname, type, level, HP, strong, skillName1, skillName2, skillName3, filename));
			user.GetInven().UserMonster(i).SetExp(exp);
		}
		/*fin>> x;
		fin>> y;
		fin>> mapNumber;
		*/
		fin.close();
		user.SetName(name);
	}
	else
	{
		system("cls");
		cout << "저장된 데이터가 없습니다." << endl;
		Sleep(1000);
		user.SelectMonster();
	}
}