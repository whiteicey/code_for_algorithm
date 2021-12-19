#include <stdio.h>
struct tree{
	int num;
	struct tree* left;
	struct tree* right;
};

void print(struct tree* p){
	int i=0;
	printf("%d\n",p->num);
	if(p[i].left!=NULL)
	{
		p=p->left;
		print(p);
	}
	else
	{
		p=p->right;
		print(p);
	}
	return ;
}

int main(){
	int n;
	int a[10][2];
	scanf("%d",&n);
	int i,j=0;
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
	struct tree p[10];
	struct tree* start;
	start=&p[0];
	p[0].num=1;
	for(i=0;i<n;i++)
	{
		if(a[i][0]!=0&&a[i][1]!=0)
		{
			p[j+1].num=a[i][0];
			p[j+1].num=a[i][1];
			p[i].left=&p[j-2];
			p[i].right=&p[j-1];
		}
		else if(a[i][0]!=0&&a[i][1]==0)
		{
			p[j+1].num=a[i][0];
			p[i].left=&p[j-1];
			p[i].right=NULL;
		}
		else if(a[i][0]==0&&a[i][1]!=0)
		{
			p[j+1].num=a[i][1];
			p[i].left=NULL;
			p[i].right=&p[j-1];
		}
		else if(a[i][0]==0&&a[i][1]==0)
		{
			p[i].left=NULL;
			p[i].right=NULL;
		}
	}
	print(start);
	return 0;
}
