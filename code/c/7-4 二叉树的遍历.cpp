#include <iostream>
using namespace std;
struct node
{
    int left=0;//左子树
    int right=0;//右子树
};
node arr[10000];
void pre(int start_loc)
{
    if(start_loc==0) 
    {
    	return;
	}
    cout<<start_loc<<" ";
    pre(arr[start_loc].left);
    pre(arr[start_loc].right);
}
int main()
{
    int n;
    cin>>n;
    int tmp1,tmp2;//用于输入的临时变量
    for(int i=1;i<=n;i++)
    {
        cin>>tmp1>>tmp2;
        arr[i].left=tmp1;
        arr[i].right=tmp2;
    }
    pre(1);
    return 0;
}


