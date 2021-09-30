#include <stdio.h>
#define MAX 10

int main()
{
	/* code */
	int x,y,b=0,t,bestline(int x,int y,int b);
	int* take (int x,int y);
	printf("*********ce programe va donnez le determenent d\'un matrice************\n");
	printf("combiane des colone ?\n");
	scanf("%d",&x);
	printf("combiane des line ?\n");
	scanf("%d",&y);
    int tab[y][x];
	take (x,y);/*take tableau input*/
	b=bestline(x,y,b);/*search the best line */
	
	do
	{
		/*if( >x && <y )
			=1;
		else if ( >y && <x )
			=1;*/
	}
	while( t<=x)

	return 0;
}
int* take (int x,int y)
{
	int i,j;
	for (i=0;i<y;i++)
	{
		for (j=0;j<x;j++)
		{
			printf("%d %d\n",x,y);
			printf("enter the number in  line %d colone %d\n",i+1,j+1 );
			scanf("%d",&tab[i][j]);
		}
	}
	return(*tab);
}
int bestline( int x,int y,int b )
{
	int d;
	for(int i=0;i<y;i++)
	{ 
		d=0;
		for (int j = 0; j < x; j++)
		{
			if(tab[i][j]==0)
				d++;
		}
		if (b<d)
			b=i;
	}
	//printf("%d",e);
	return (b);
}
int calcule (int b1)
{
for (int i = 0; i < x; i++)
	{
		grandsome+=tab[b][i]*
		d=-d;
	}
}