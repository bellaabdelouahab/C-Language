#include <stdio.h>
#include<math.h>
#define MAX 5
int tab[MAX][MAX],grandsome;
int bestline( int r,int *tabr),calcule(int i,int b,int *tabprim,int p);
int* take (),takefrom(int *tabprim,int r,int *tab1,int c,int b);
int main()
{
	/* code */
	int b=0,i,p;
	int tabprim[MAX][MAX];
	printf("*********ce programe va donnez le determenent d\'un matrice************\n");
	take ();/*take tableau input*/
	b=bestline(MAX,*tab);/*search the best line */
	b=calcule(i,b,*tab,p);
	printf("the finale result is %d\n",b);
	return 0;
}
int* take ()
{
	int i,j;
	for (i=0;i<MAX;i++)
	{
		for (j=0;j<MAX;j++)
		{
			printf("enter the number in  line %d colone %d\n",i+1,j+1 );
			scanf("%d",&tab[i][j]);
		}
	}
	return(*tab);
}

int bestline( int r,int tabr )
{
	int d,b=0;
	for(int i=0;i<r*r;i+=r)
	{ 
		d=0;
		for ( int j = 0; j < r; j++)
		{
			if(*tabr+i+j==0)
				d++;
		}
		if (b<d)
			b=i;
	}
	return (b);
}

int calcule(int i,int b,int *tabprim,int p)
{
	int r,c,d=1,lastcalcule(int *tab1);
	int* takefrom(int tabprim,int r,int *tab1,int c,int b);
	r=MAX-i;
	int *tab1;
	*tab1=takefrom(tabprim,r,tab1,p,b);
	b=bestline( r,tab1 );
		if(r>2)
	{
		i++;
		for(c=0;b<r;c++)
		{
			grandsome+=d*tab1[b][c]*calcule(i,b,*tab1,c);
			d=-d;
		}
		return(grandsome);
	}
	else
	return (lastcalcule(tab1));
}
int* takefrom(int tabprim,int r,int *tab1,int c,int b)
{
	int i,j;
	for (j = 1; j < r*r; j+=r)
	{
		for (i = 1; i < r; i++)
		{
			tab1+j+i=*tabprim+j+b+c+i+c;
		}
	}
	return(tab1);
}
int lastcalcule(int *tab1)
{
	int some,a,b,c,d;
	a=*(tab1+1);
	b=*(tab1+3);
	c=*(tab1+3+1);
	d=*(tab1+0+0);
	some=d*c-a*b;
	return(some);
}*/