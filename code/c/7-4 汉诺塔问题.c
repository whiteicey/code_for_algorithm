#include <stdio.h>
void hlt(int n,char a,char b,char c)
{
    if(n==1)
    {
        printf("%c->%c\n",a,c);
        return;
    }
    else
    {
        hlt(n-1,a,c,b);//��ô��Ҫ��n�ϵ�n-1���a�ϰ��˵��м�b�ϣ�
        printf("%c->%c\n",a,c);//Ȼ��ѵ�n���a���˵�c�ϣ�
        hlt(n-1,b,a,c);//����b�ϵ�n-1���ٰ��˵�c�ϼ��ɡ�
        return ;
    }
 
}
int main()
{
	int num;
	char a,b,c,m,n,s;
	scanf("%d%c%c%c%c%c%c",&num,&m,&a,&n,&b,&s,&c);
	hlt(num,a,b,c);
	return 0;
 } 
