#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio> 
using namespace std;
const int maxn = 1000010;
typedef struct node{
    char str;
    node* l;
    node* r; 
}*shu;

int x = 0;

shu solve(string s1,string s2){
	int m = s2.length();
    if(m == 1){
        shu point = new node();
        point->str = s2[0];
        point->l = NULL;
        point->r = NULL;
        return point;
    }
    string x1, x2;//构建左右子树 
    int i;
    for(i = 0; i<= m;i++){
        if(s2[i] != s1[x]){ //找根节点 
        	x1 += s2[i];
		}
        else break;
    }
    i++;
    for(;i<m;i++){
    	x2 += s2[i];
	}
        
    shu point = new node();
    point->l = NULL;
    point->r = NULL;
    point->str=s1[x];
    if(x1.length() != 0){
        x++;
        point->l = solve(s1,x1);
    }
    if(x2.length() != 0){
        x++;
        point->r = solve(s1,x2);
    }
    return point;
 
}

void dfs(shu point){  //后序遍历 
    if(point->l != NULL) dfs(point->l);
    if(point->r != NULL) dfs(point->r);
    printf("%c",point->str);//每个叶子节点都可以看做一棵子树的根节点 
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    shu root = NULL;
    root = solve(s1,s2);
    dfs(root);
    cout << endl;
    return 0;
}
/*
GDAFEMHZ
ADEFGHMZ
*/


