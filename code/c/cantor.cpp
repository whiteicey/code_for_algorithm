#include<cstdio>
    int main() 
	{
        int n, i=0, j=0;//ǰi��б��һ��j����
        scanf("%d", &n);
        while(n>j) 
		{//�ҵ���С��iʹ��j>=n
            i++;
            j+=i;
        }
        if(i%2==1)
            printf("%d/%d",j-n+1,i+n-j);//i����ż������б��������˳��,n�ǵ�i��б���ϵ�����j-n+1����
        else
            printf("%d/%d",i+n-j,j-n+1);//��i��ż������i��б���ϵ�����i��Ԫ����(i+1-i)/i
        return 0;
}
