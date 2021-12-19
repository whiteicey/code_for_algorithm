#include <stdio.h>
int BinarySearch(int A[],int n,int target){
    if(n <= 0){
        return -1;
    }//if
    int start = 0,end = n-1;
    // 二分查找变形
    while(start < end){
        int mid = (start + end) / 2;
        if(A[mid] < target){
            start = mid + 1;
        }//if
        else{
            end = mid;
        }//else
    }//while
    // 目标不存在的情况
    // 此时start = end
    if(A[start] != target){
        return -1;
    }//if
    else{
        return start;
    }
}
 
int main()
{
	char s[10000];
	gets(s);
	printf("%s\n",s);
    int A[] = {2,4,6,7,8,8,9};
    printf("%d",BinarySearch(A,7,9)-1);
    return 0;
}
