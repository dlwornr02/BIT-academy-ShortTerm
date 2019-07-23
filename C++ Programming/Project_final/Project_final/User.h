#pragma once
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
