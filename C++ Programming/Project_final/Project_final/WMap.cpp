#include "WMap.h"
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
