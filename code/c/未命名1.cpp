#include<cstdio>
#include<queue>
#include<vector>
#define MAX (~0)
using namespace std;

typedef struct{
	int id;
	unsigned int len;
}addr;

typedef struct{
//	int id;
	bool visit;
	vector<addr> nbr;
}N;

vector<N> node;

bool operator <(addr a, addr b){
	return (a.len < b.len);
}

bool operator >(addr a, addr b){
	return (a.len > b.len);
}

inline void Insert(int from, int to, unsigned int len)
{
	int size = node[from].nbr.size();
	int i;
	for (i=0; i<size; i++)
	{
		if (node[from].nbr[i].id==to)
		{
			if (node[from].nbr[i].len>len)
				node[from].nbr[i].len=len;
			break;
		}
	}
	if (i==size)	node[from].nbr.push_back({to, len});
}

int main()
{
	int n, m, s;
	scanf("%d%d", &m, &n);
		
	int t_from, t_to;
	unsigned int t_len;
	node = vector<N>(n+1);
	s = n; 
	for (int i=0; i < m; i++)
	{
		scanf("%d%d%u", &t_from, &t_to, &t_len);
		Insert(t_from, t_to, t_len);
		Insert(t_to, t_from, t_len);
		node[t_to].nbr.push_back({t_from, t_len});
	}
	vector<unsigned int> min_dis(n+1, MAX);
	min_dis[s] = 0;

	priority_queue< addr, vector<addr>, greater<addr> > op;
	op.push({s, 0});
	int head;
	int size_num;
	while(!op.empty())
	{

		head = op.top().id;
		if (node[head].visit)
		{
			op.pop();
			continue;
		}

		size_num = node[head].nbr.size();
		for (int i=0; i < size_num; i++)
		{
			t_to = node[head].nbr[i].id;
			t_len = node[head].nbr[i].len;
			if (min_dis[t_to] > min_dis[head]+t_len)
			{
				min_dis[t_to] = min_dis[head]+t_len;
				op.push({t_to, min_dis[t_to]});
			}
		}
		node[head].visit = true;
		op.pop();
	}
	//	for (int i=1; i <= n; i++)
		printf("%u", min_dis[1]);	
	return 0;
}
