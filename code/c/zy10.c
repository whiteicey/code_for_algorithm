#include <stdio.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("zy10.out","w");
	fprintf(fp,"*      *\n");
	fprintf(fp,"**     *\n");
	fprintf(fp,"* *    *\n");
	fprintf(fp,"*  *   *\n");
	fprintf(fp,"*   *  *\n");
	fprintf(fp,"*    * *\n");
	fprintf(fp,"*     **\n");
	fprintf(fp,"*      *\n");
	fclose(fp);
	return 0;
 } 
