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
		{       //?���зǿ� h.empty()==trueʱ ��ʾh�Ѿ�����
			typeof(h.begin())c=h.begin();
                             //cָ��h�����е�һ��Ԫ�صĵ�ַ����һ��Ԫ������С��Ԫ��
			printf("%d ",*c);   //����ַc����������
			h.erase(c);          //��h�����н�cָ���Ԫ��ɾ��
		}
		printf("\n");
	}
}
