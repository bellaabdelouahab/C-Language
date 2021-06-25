#include <stdio.h>
#define max 3
int bestline( int r,int *tabr );
int main()
{
	
	int tableau[max][max];
	for (int i = 0; i < max; ++i)
	{
		for (int j = 0; j < max; ++j)
		{
			scanf("%d",&tableau[i][j]);
		}
	}
	printf("le tableau\n");
	int c;
	c=bestline(max,*tableau);
	printf("%d\n",c);
	return 0;
}
int bestline( int r,int *tabr )
{
	int d,b=0;
	for(int i=0;i<r*r;i+=r)
	{ 
		d=0;
		for ( int j = 0; j < r; j++)
		{printf("%d\n",*tabr+i+j );
			if(tabr+i+j==0)
			{
				d++;
			
			}
		}
		if (b<d)
			b=i;
	}
	return(b);
}