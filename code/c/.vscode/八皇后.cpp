6#include <iostream>
using namespace std;
int map[3][100];
int step[100],sum,n;
void dfs(int num)
{
    if(num>n)
    {
        if(sum<=2)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<step[i]<<" ";
            }
            cout<<"\n";
            sum++;
        }
        else{
            sum++;
        }
        return ;
    }
    for(int i=1;i<=n;i++)
    {
        if(!map[0][i]&&!map[1][num+i]&&!map[2][num-i+n])
        {
            step[num]=i;
            map[0][i]=1;
            map[1][num+i]=1;
            map[2][num-i+n]=1;
            dfs(num+1);
            step[num]=0;
            map[0][i]=0;
            map[1][num+i]=0;
            map[2][num-i+n]=0;
        }

    }
}
int main()
{
    cin>>n;
    dfs(1);
    cout<<sum<<endl;
    return 0;
}