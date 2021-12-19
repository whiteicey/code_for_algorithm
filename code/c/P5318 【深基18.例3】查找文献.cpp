#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;
const int MAXN = 100010;
std::vector<int> G[MAXN];
int n,m;
bool visited[MAXN];
queue<int> q;
void dfs(int x, int cur) 
{						//x指当前所在的节点，cur指已遍历过的节点个数
    visited[x] = true;
    cout << x << " ";
    if (cur==n) 
	{
		return ;
	}
    for (int i=0;i<G[x].size();i++)
    {
    	if (!visited[G[x][i]])
		{
			dfs(G[x][i],cur+1);			
		} 
	} 
}
void bfs(int x) 
{
    memset(visited, false, sizeof(visited));
    visited[x] = true;
    q.push(x);
    while (!q.empty()) 
	{
        int v = q.front();
        q.pop();
        cout << v << " ";
        for (int i=0; i<G[v].size(); i++) 
        {
        	if (!visited[G[v][i]]) 
			{
                visited[G[v][i]] = true;
                q.push(G[v][i]);
            }
		}           
    }
}
int main() 
{
    cin >> n >> m;
    for (int i=1; i<=m; i++) 
	{
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
    }
    for (int i=1; i<=n; i++) 
	{
		sort(G[i].begin(), G[i].end());
	}
    dfs(1, 0);
    cout << endl;
    bfs(1);
    cout << endl;
    return 0;
}
