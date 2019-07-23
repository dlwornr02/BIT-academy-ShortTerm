#include "Monster.h"
map<string, vector<Monster>> HMonster;
class Monster
{
	string name; // �����̸�
	string type; //�Ӽ�
	int level; // ���� ����
	int HP; // ���� ü��
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
		skill.push_back("��ȹ�ϱ�!");
		skill.push_back("��������!");

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
		cout << "���ϸ�: " << name << endl;
		cout << "�Ӽ�: " << type << endl;
		cout << "level: " << level << endl;
		cout << "ü��: " << HP << endl;

	}
};
void InitHMonster(){
	HMonster["��"] = Fire;
	HMonster["��"] = Water;
	HMonster["��"] = Earth;
	HMonster["����"] = Electronic;

	HMonster["��"].push_back(Monster("���̸�", "��", 1, 80, "��", "����", "������", "ȭ�����", "���̸�.txt"));
	HMonster["��"].push_back(Monster("�Ҳɸ�", "��", 1, 80, "��", "������", "�Ҳɹ�ġ��", "�Ķ��Ҳ�", "�Ҳɸ�.txt"));
	HMonster["��"].push_back(Monster("������", "��", 2, 90, "��", "ȭǮ��", "���ǻ�����Ŭ", "����", "������.txt"));
	HMonster["��"].push_back(Monster("���׸���", "��", 2, 90, "��", "�Ҳ�Ƣ���", "��������", "ȭ��������", "���׸���.txt"));
	HMonster["��"].push_back(Monster("����Ÿ", "��", 3, 100, "��", "��������", "¤���", "�Ҳɼ���", "����Ÿ.txt"));
	HMonster["��"].push_back(Monster("��Ʈ��", "��", 7, 140, "��", "������", "�÷���", "��Ʈ�Ҳ�", "��Ʈ��.txt"));
	HMonster["��"].push_back(Monster("���ڸ�", "��", 10, 170, "��", "�÷������̺�", "��ǳ", "�Ҳ�ȸ����", "���ڸ�BOSS.txt"));

	HMonster["��"].push_back(Monster("���α�", "��", 1, 80, "��", "��ٶ��", "���������", "�����ĵ�", "���α�.txt"));
	HMonster["��"].push_back(Monster("�׾�ŷ", "��", 1, 70, "��", "Ƣ�������", "������", "�����Ű��", "�׾�ŷ.txt"));
	HMonster["��"].push_back(Monster("����", "��", 2, 90, "��", "���δ��", "����ź", "�ĵ�Ÿ��", "����.txt"));
	HMonster["��"].push_back(Monster("�����縮", "��", 2, 90, "��", "�ұݹ�", "��ǰ����", "������Ű�׽ý�", "�����縮.txt"));
	HMonster["��"].push_back(Monster("������", "��", 3, 100, "��", "°������", "������", "�õ���", "������.txt"));
	HMonster["��"].push_back(Monster("����Ĵ�", "��", 7, 140, "��", "�Ϳ���ô�ϱ�", "����ǥ�ٿ��", "����", "����Ĵ�.txt"));
	HMonster["��"].push_back(Monster("�źϿ�", "��", 10, 170, "��", "�׷ο���ġ", "������ĳ��", "���̵������", "�źϿ�BOSS.txt"));

	HMonster["����"].push_back(Monster("��ī��", "����", 1, 80, "��", "�����ġ��", "����ũ", "�鸸��Ʈ", "��ī��.txt"));
	HMonster["����"].push_back(Monster("�����", "����", 1, 80, "��", "�߱���", "�Ӹ��ڱ�", "������", "�����.txt"));
	HMonster["����"].push_back(Monster("����", "����", 1, 80, "��", "�ֱ�", "����ġ��", "���� ��ũ", "����.txt"));
	HMonster["����"].push_back(Monster("����", "����", 3, 100, "��", "���������", "�׸��ںн�", "�Ϸ�Ʈ����", "����.txt"));
	HMonster["����"].push_back(Monster("���ǽ��", "����", 4, 110, "��", "���¢��", "������ȭ", "��������", "���ǽ��.txt"));
	HMonster["����"].push_back(Monster("���", "����", 8, 150, "��", "�����ũ", "������", "������", "���.txt"));
	HMonster["����"].push_back(Monster("������", "����", 10, 170, "��", "���̾�����", "���ϵ庼Ʈ", "������ġ", "������BOSS.txt"));

	HMonster["��"].push_back(Monster("�̻��ؾ�", "��", 1, 80, "��", "��������", "���𳯸���", "����ä��", "�̻��ؾ�.txt"));
	HMonster["��"].push_back(Monster("ġ�ڸ�Ÿ", "��", 1, 80, "��", "�ķ�ġ��", "�����ٴ�����", "�����ø���", "ġ�ڸ�Ÿ.txt"));
	HMonster["��"].push_back(Monster("����", "��", 2, 90, "��", "�ٶ�����Ű��", "�ɾƴ��", "Į��������", "����.txt"));
	HMonster["��"].push_back(Monster("��������", "��", 3, 100, "��", "����������", "�볪����ġ", "��������", "��������.txt"));
	HMonster["��"].push_back(Monster("���丵", "��", 4, 110, "��", "���丮������", "����Ÿ��", "��������", "���丵.txt"));
	HMonster["��"].push_back(Monster("���ο�", "��", 8, 150, "��", "�ٴ���", "������ġ", "�ٴûձ�", "���ο�.txt"));
	HMonster["��"].push_back(Monster("�̻��ز�", "��", 10, 170, "��", "Ǯ����", "�Գ�������", "�ֶ��", "�̻��ز�BOSS.txt"));

	vector<Monster>::iterator fiter = Fire.begin();
	vector<Monster>::iterator witer = Water.begin();
	vector<Monster>::iterator eiter = Earth.begin();
	vector<Monster>::iterator eniter = Electronic.begin();
}