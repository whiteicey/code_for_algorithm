#include <stdio.h>

#include <stdlib.h>

int main()

{   

    int i,j,max_row=0,min_col=0;

     int k,flag=0;

     int col_no=0,row_no=0;

     int m,n,a[10][10];

   

     scanf("%d%d",&m,&n);

     for(i=0;i<m;i++)

      for(j=0;j<n;j++)

         scanf("%d",&a[i][j]);

    

    for(i=0;i<m;i++)

     {

         max_row=a[i][0];

         for(j=1;j<n;j++)//�ҳ��������

         {

              if(max_row<a[i][j])

              {

                   max_row=a[i][j];

                   col_no=j; //��¼������

                   row_no=i; //��¼������

              }

         }

         //�ж��Ƿ�����С

         min_col=a[0][col_no];    //��¼���е���Сֵ

         k=0;           //��¼���е���С��

         for (j=0;j<m;j++)

         {

              if (min_col>a[j][col_no])

              {

                   min_col=a[j][col_no];

                   k=j;    

              }

         }

         if ((max_row==)&&(row_no==i))

         {

              printf("%d %d %d\n",row_no,col_no,a[row_no][col_no]);

              flag=1;            //��ʾ�а���

         }

     }

     if (flag==0)

         printf("no\n");

 

    return 1;

}
