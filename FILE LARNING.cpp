#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *pt;
	pt=fopen("fidle","w");
	if(pt==NULL)
	{
		printf("There has been an error");
		return(1);
	}
	fclose(pt);
}
