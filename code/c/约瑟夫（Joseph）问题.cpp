#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;
struct pos
{
	int num,pos;
	struct pos* next;
};
struct pos* head,* tail;
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		int t;
		cin>>t;
		struct pos* now=(struct pos*)malloc(sizeof(struct pos));
		now->num=t;
		now->pos=i;
		if(i==1)
		{
			head=now;
			tail=now;
			tail->next=head;
			continue; 
		}
		tail->next=now;
		tail=now;
		tail->next=head;
	} 
	int ans=1;
	int k=n;
	//int b=1;
	struct pos* now=head;
	struct pos* pri=tail;
	while(k!=1)
	{
		if(ans==m)
		{
			pri->next=now->next;
			cout<<now->pos<<' ';
			m=now->num;
			ans=1;
			free(now);
			now=pri->next;	
			k--;
			continue;
		}
		ans++;
		pri=now;
		now=now->next;
		
	}
	cout<<now->pos;
	return 0;
}
