#include <stdio.h>
int main ()
{
	int fonc (int);
	int x,b,i;
	i=0;
	printf("donnez un nomber :");
	scanf("%d",&x);
	for(i=0;b!=1;i++)
	{
		b=fonc(x+i);
	}
	printf("%d",x+i);
}
int fonc (int x)
{
	int b,j;
	for (j=0;j<x/2;j++)
	{
		if (x%j==0)
		b=0;
		else 
		b=1;
	}
	return b;
}
