#pragma once
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

