#pragma once
map<int, WMap> Hmap;
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
