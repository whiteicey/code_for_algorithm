#include <cstdio>
#include <set>
#include <iostream>
using namespace std;
int main()
{
	int x,y,c;
	multiset<int>h;
	while(~scanf("%d%d",&x,&y))
	{
		int i,a;
		h.clear();
		for(i=0;i<x;i++)
		{
			scanf("%d",&a);
			h.insert(a);
		}
		for(i=0;i<y;i++)
		{
			scanf("%d",&a);
			if(h.find(a)!=h.end())
			{
				continue;
			}
			else
			{
				h.insert(a);
			}
		}
		while(!h.empty())
		{       //?序列非空 h.empty()==true时 表示h已经空了
			typeof(h.begin())c=h.begin();
                             //c指向h序列中第一个元素的地址，第一个元素是最小的元素
			printf("%d ",*c);   //将地址c存的数据输出
			h.erase(c);          //从h序列中将c指向的元素删除
		}
		printf("\n");
	}
}
