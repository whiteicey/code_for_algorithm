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
        //printf("第%d层", layer);
        int line;
        for(line = 1; line<=m; line++)
		{
            ///printf("第%d行 前导空白",line);
            spaceNum --;
            int space;
            for(space=1; space<=spaceNum; space++)
			{
                printf(" ");
            }
            ///printf("第1个塔 的第%d行",line);
            int star;
            for(star = 1; star <= line*2-1; star++)
			{
                printf("*");
            }
            int tower;
            for(tower = 2; tower<= layer; tower++)
			{
                ///printf(" 第%d行 中间空白",line);
                int spaceNum = 2*m - 2*line +1;
                int space;
                for(space = 1; space<=spaceNum; space++)
				{
                    printf(" ");
                }

                ///printf(" 第%d个塔 的第%d行", tower, line);
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

