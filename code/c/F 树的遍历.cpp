#include <iostream>
#include <queue>
#include <cstdio>
#include <set>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
using namespace std;
struct node
{
    int data;      
    node* ltree;   
    node* rtree;
};
char pre[10000],mid[10000],pos[10000];        
node* create1(int pre_l,int pre_r,int mid_l,int mid_r)
{
    if(pre_l>pre_r)
    {
    	return NULL;
	}    
    node* root=new node;
    root->data =pre[pre_l];
    int k;
    for(k = mid_l;k<=mid_r;k++)
    {
        if(mid[k]==root->data)
        {
        	break;
		}
    }
    int num_l=k-mid_l;
    root->ltree=create1(pre_l+1,pre_l+num_l,mid_l,k - 1);
    root->rtree=create1(pre_l+num_l+1,pre_r,k+1,mid_r);
    return root;
}
int n, num = 0; 
void level_traversal(node* root)
{
    queue<node*> q;
    q.push(root); 
    while(!q.empty())
    {
        node* tmp_node = q.front();
        cout<<tmp_node->data;
        num++;
        if(num < n)
        {
        	cout<<" ";
		}
        q.pop();
        if(tmp_node -> ltree != NULL)
        {
        	q.push(tmp_node->ltree);
		}
           
        if(tmp_node -> rtree != NULL)
        {
        	q.push(tmp_node->rtree);
		}  
    }
}

int main()
{
    //cin>>n;
    cin>>pre;
    cin>>mid
//    for(int i=0;i<n;i++)
//    {
//        cin>>pre[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        cin>>mid[i];
//    }
    node* root1=create1(0,n-1,0,n-1);
    level_traversal(root1);
    return 0;
}
