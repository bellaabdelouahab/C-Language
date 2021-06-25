#include<stdio.h>
#include<math.h>
int main ()
{
	int x,y,n,t,i,q,d;
	printf("on va calculer le PPCM et le PGCD de deux nomber\n ");
	printf("enter les deux nomber:\n");
	scanf("%d %d",&x,&y);
	d=y;
	if (y==0)
	    printf("le PGCD est %d",x);
	else
	    while (y!=0)
	{
	        t=y;
	        n=x%y;
	        y=n;
	}
	printf("\n le PGCD est %d ",t);
	q=x*d/t;
	printf("\n le PPCM est %d",q);
//printf("%d %d %d ",x,d,t);

}







