#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N  30


typedef  struct {
        int    weight;
        int    parent,lchild,rchild;
  } HTNode,*HuffmanTree;
typedef  char  **HuffmanCode;


void CreateHuffmanTree(HuffmanTree HT,int *w,int n)
{
	int s1,s2,i,m,j;
	HuffmanTree p;
	
	if(n<=1)  return;
	m=2*n-1;
//	HT=(HuffmanTree)malloc((m+1)*sizeof(HTNode));
	for(p=HT+1,i=1;i<=n;++i,++p) {
		p->weight=w[i-1];
		p->parent=0;
		p->lchild=0;
		p->rchild=0;
	}
	for(;i<=m;++i,++p) {
		p->weight=0;
		p->parent=0;
		p->lchild=0;
		p->rchild=0;
	}
	for(i=n+1;i<=m;++i) {
		for(s1=-1,j=0;j<i;j++){
			if((HT[j].parent==0)&&(s1==-1||HT[j].weight<HT[s1].weight))
			    s1=j;
		}
		HT[s1].parent=-1;      //标记已找过 
		for(s2=-1,j=0;j<i;j++){
			if((HT[j].parent==0)&&(s2==-1||HT[j].weight<HT[s2].weight))
			    s2=j;
		}
		if(s1>s2){           //前面的为s1,后面的为s2 
			j=s1;s1=s2;s2=j;
		}
		HT[s1].parent=i;HT[s2].parent=i;
		HT[i].lchild=s1;HT[i].rchild=s2;
		HT[i].weight=HT[s1].weight+HT[s2].weight;
	}
}

void HuffmanCoding(HuffmanTree HT,char *HC[],int n){
	int i,start,c,f;
	char *cd;
	
//	HC = (HuffmanCode)malloc((n+1)*sizeof(char *));
	cd = (char *)malloc(n*sizeof(char));
	cd[n-1]='\0';
	for(i=1;i<=n;++i) {
		start=n-1;
		for(c=i,f=HT[i].parent;f!=0;c=f,f=HT[f].parent){
			if(HT[f].lchild==c)  cd[--start]='0';
			else  cd[--start] ='1';
		}
		HC[i]=(char *)malloc((n-start)*sizeof(char));
		strcpy(HC[i],&cd[start]);
	} 
	free(cd);
}

   

int main()
{
	int w[N],n,i;
	HuffmanTree hTree;
	HuffmanCode hCode;
	
	scanf("%d",&n);
	//printf("%d\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&w[i]);
	}
	//printf("\n");
	if(n<=1)  return 0;
	
	hTree=(HuffmanTree)malloc((2*n)*sizeof(HTNode));
	CreateHuffmanTree(hTree,w,n);
//	for(i=1;i<=2*n-1;i++){
//		printf("%5d%5d%5d%5d\n",hTree[i].weight,hTree[i].parent,hTree[i].lchild,hTree[i].rchild);
	//	printf("%s\n",hCode[i]);
//	}
    hCode = (HuffmanCode)malloc((n+1)*sizeof(char *));

	HuffmanCoding(hTree,hCode,n);
	for(i=1;i<=n;i++){
		printf("%s\n",hCode[i]);
	}
//scanf("%d",&n);	
	return 0;
}
