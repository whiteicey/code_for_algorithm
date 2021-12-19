#include<bits/stdc++.h>
using namespace std;
char ch[1000000],s[1000000];
void get_next(char* t ,int * next)
{
	int i,j,l,k;
	i = j = 0;
	l  = strlen(t);

	next[0] = 0;
	j=0;
	for(i=1 ;i<l ; i++) {
		k = next[i-1] ;
		while( t[i]!=t[k] && k!=0 )
			k = next[ k-1];
		
		if( t[k] == t[i] )
			next[i] = k+1;
		else 
			next[i] = 0;
		next[i+1] = -1;
	}
}

int main( ){
	int next[100001];
	cin.get(ch,100001);
	get_next(ch,next);
	
	int max = 0,maxi = -1;
	
	for( int i = 0 ; i< strlen(ch) ; i++ ){
		if( next[i] > max) {
			max = next[i];
			maxi = i;
		}
	}
	cout<<ch<<endl;
	if( max!=0 )
		for(int i=maxi-max+1 ; (i<=maxi||next[i]==0 );  i++ )
			printf("%c",ch[i]);
	else
		cout<<"NULL";
	
	return 0;
}
