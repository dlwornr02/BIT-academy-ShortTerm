#include "Inventory.h"
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
			cout<<"Ű:������"<<endl;
		else if(key==false)
			cout<<"Ű:����"<<endl;
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
