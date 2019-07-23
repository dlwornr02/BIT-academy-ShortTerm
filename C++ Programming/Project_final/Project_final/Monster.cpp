#include "Monster.h"
map<string, vector<Monster>> HMonster;
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