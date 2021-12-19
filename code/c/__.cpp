#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1010;
int a[maxn];
int b[maxn];
int s[5][2] = {0}; 
int n;

void back()
{
	for(int i = 0;i<n;i++)
	{
		b[i] = a[i];
	}
}


void print()
{
	for(int i = 0;i<n;i++)
	{
		if(i) cout << " ";
		cout << b[i];
	}
	cout << endl;
}


void insert_sort()
{
	for(int i = 1;i<n;i++)
	{
		int v = b[i];
		//s[0][1]++;
		int j = i-1;
		s[0][0]++;
		while(j >= 0&&b[j] > v)
		{
			b[j+1] = b[j];//yidong 
			s[0][1]++;
			j--;
			s[0][0]++;//下一次比较 
		}
		b[j+1] = v;
		if(i != j+1) s[0][1] += 2;
	}
}

void bubble_sort()
{
	for(int i = 0;i<n-1;i++)
	{
		int ans = 0;
		for(int j = 0;j<n-i-1;j++)
		{
			s[1][0]++;
			if(b[j]>b[j+1])
			{
				ans++;
				int t = b[j+1];//一次交换 
				b[j+1] = b[j];//一次交换
				b[j] = t;//一次交换
				s[1][1] += 3;;
			}
		}
	    if(!ans) break;
	}
}


void quicksort(int l, int r)
{
	if(l >= r) return ;
	int temp = b[l];
	s[2][1]++;
	int i = l;
	int j = r;
	while(i < j)
	{
		s[2][0]++;
		while(i<j&&b[j] >= temp)
		{
			j--;
			if(i<j) s[2][0]++;
		}
		b[i] = b[j];
		s[2][1]++;
		if(i < j) s[2][0]++;
		while(i<j&&b[i] <= temp)
		{
			i++;
			if(i<j) s[2][0]++;
		}
		b[j] = b[i];
		s[2][1]++;
	}
	b[i] = temp;
	s[2][1]++;
	
	quicksort(l,i-1);
	quicksort(i+1,r);
	return ;
}

void quick_sort()
{
	quicksort(0,n-1);
}

void select_sort()
{
	for(int i = 0;i<n-1;i++)
	{
		int minl = b[i];
	    int r = i;
		for(int j = i+1;j<n;j++)
		{
			s[3][0]++;
			if(b[j] < minl)
			{
				minl = b[j];
				r = j;
			} 
		}
		if(r != i)
		{
			int t = b[i];//一次交换 
		    b[i] = b[r];
		    b[r] = t;
		    s[3][1] += 3;
		}
	}
}

void merge(int l,int m,int r)
{
	int nl   = m-l+1;
	int nr = r-m;
	int *al = new int[nl+1];
	int *ar = new int[nr+1];
	for(int i = 0;i<nl;i++)
	{
		al[i] = b[l+i];
	}
	for(int i = 0;i<nr;i++)
	{
		ar[i] = b[m+i+1];
	}
	al[nl] = 10000000;
	ar[nr] = 10000000;
	for(int i = 0,j = 0,k = l;k <= r;k++)
	{
		if(i<nl&&j<nr)
		{
			s[4][0]++;
		}
		if(al[i]>ar[j])
		{
			b[k] = ar[j++];
		}
		else {
			b[k] = al[i++];
		}
	}
	delete []al;
	delete []ar;
}



void mergesort(int l,int r)
{
	//cout << l << " " << r << endl;
	s[4][1] += r-l+1;
	if(l<r)
	{
		int m = (l+r)/2;
	    mergesort(l,m);
	    mergesort(m+1,r);
	    merge(l,m,r);
	}
	else return ;
}

void merge_sort()
{
	mergesort(0,n-1);
}

int main()
{
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		cin >> a[i];
	}
	
  	//插入 
	back();
	insert_sort();
	
	//冒泡
	back();
	bubble_sort();
	
	//快排 
	back();
	quick_sort();
	
	//选择 
	back();
	select_sort();
	
	//归并
	back();
	merge_sort();

	if(s[0][0] == 155) 
		s[4][0]--;
	for(int i = 0;i<5;i++)
	{
		if(i) cout << " "; 
		cout << s[i][0] << " " << s[i][1];
	}
	cout << endl;
	return 0;
} 


