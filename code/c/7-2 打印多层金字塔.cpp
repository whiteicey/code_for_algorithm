#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int spaceNum = n*m;
    int layer;
    for(layer = 1; layer<=n; layer++)
	{
        //printf("��%d��", layer);
        int line;
        for(line = 1; line<=m; line++)
		{
            ///printf("��%d�� ǰ���հ�",line);
            spaceNum --;
            int space;
            for(space=1; space<=spaceNum; space++)
			{
                printf(" ");
            }
            ///printf("��1���� �ĵ�%d��",line);
            int star;
            for(star = 1; star <= line*2-1; star++)
			{
                printf("*");
            }
            int tower;
            for(tower = 2; tower<= layer; tower++)
			{
                ///printf(" ��%d�� �м�հ�",line);
                int spaceNum = 2*m - 2*line +1;
                int space;
                for(space = 1; space<=spaceNum; space++)
				{
                    printf(" ");
                }

                ///printf(" ��%d���� �ĵ�%d��", tower, line);
                int star;
                for(star = 1; star <= line*2-1; star++)
				{
                    printf("*");
                }
            }
            printf("\n");
        }
        //printf("\n");
    }
    return 0;
}

