#include<cstdio>
#include<stdlib.h>
#include<iostream>
using namespace std;
typedef struct BiTNode
{
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;
int SearchBST(BiTree T,int key,BiTree f,BiTree *p)
{
    if (!T)
	{
        *p=f;
        return 0;
    }
    else if(key==T->data)
	{
        *p=T;
        return 1;
    }
    else if(key<T->data)
	{
        return SearchBST(T->lchild,key,T,p);
    }
	else
	{
        return SearchBST(T->rchild,key,T,p);
    }
}
int InsertBST(BiTree *T,int e)
{
    BiTree p=NULL;
    if (!SearchBST((*T),e,NULL,&p)) 
	{
        BiTree s=(BiTree)malloc(sizeof(BiTree));
        s->data=e;
        s->lchild=s->rchild=NULL;
        if (!p) 
		{
            *T=s;
        }
        else if(e < p->data)
		{
            p->lchild=s;
        }
		else
		{
            p->rchild=s;
        }
        return 1;
    }
    return 0;
}
void pre(BiTree T)
{
	if(T == NULL)
	{
		return ;
	}
	cout<<T->data<<' ';
	pre(T->lchild);
	pre(T->rchild);
	return ;
}
int main()
{
    int n;
    cin>>n;
    BiTree T = NULL;
    for( int i = 0; i < n; i++ )
	{
		int t;
		cin>>t;
        InsertBST(&T, t);
    }
    pre(T);
    return 0;
}
