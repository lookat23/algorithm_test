//10把打90环的问题
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void count(int tatal, int min, int max, int ba,vector<int> v = vector<int>())
{
	//cout << tatal << ' ' << min << ' ' << max << ' ' << ba << endl;
	if(tatal == 0)
	{
		// 输出
		for(size_t i=0; i<v.size(); i++)
		{
			cout << v[i] << ' ';
		}
		cout << endl;
		return;
	}
	if(ba == 5 || tatal<0)
	{
		return;
	}
	for(int i = min; i<=max; i++)
	{
		if(ba==1)
		{
			v = vector<int>(4,0);
		}
		v[ba-1] = i;
		count(tatal-i, min, std::min(tatal-i, max),ba+1,v);
	}
}

int main()
{
	count(10,0,10,1);
	return 0;
}
