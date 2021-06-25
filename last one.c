#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int* take (int ,int *);
void show (int , int *);
int grandsome=0;
int calcule(int ,int *,int );
int bestline( int ,int * );

int main()
{
	int p=0,MAX,i;
	printf("This programe can calculate the determenent of any matrix n*n\n");
	printf("Give matrix dimension : n=");
	scanf("%d",&MAX);
	MAX=MAX*MAX;
	int /*tab[MAX]*/b=0;
	int n=MAX;
int*tab;
tab = (int*)malloc(n * sizeof(int));
	take (MAX,tab);/*take tableau input*/
	show(MAX,tab);/*show the matrix*/
	b=calcule1(MAX,tab,p);
	printf("Its determenent is :%d\n",b );
	return 0;
}
 int* take (int MAX,int *tab)
{
	int i,j;
	for (i=0;i<MAX;i++)
	{
		j=i/sqrt(MAX);
		scanf("%d",&tab[i]);
	}
	return(tab);
}
void show(int MAX,int *tab)
{
	int j,i;
	printf("Your matrix is :\n");
	for ( i = 0; i < MAX; i++)
	{
		printf("%4d ",tab[i] );	
		for(j=sqrt(MAX)-1;j<MAX;j+=sqrt(MAX))
		{
			if(i==j)
			printf("\n");
		}
	}	
}
int calcule1(int i,int *tabprim,int c)
{
	int d=1;
	for(c=0;c<sqrt(i);c++)
	{
		grandsome+=d*tabprim[c]*calcule(i,tabprim,c);
		d=-d;
	}
	return(grandsome);
}
int calcule(int i,int *tabprim,int c)
{	
	int r=0,lastcalcule(int *tab1);
	int* takefrom(int i,int *tabprim,int *tab1,int r,int c);
	r=(sqrt(i)-1)*(sqrt(i)-1);
	int tab1[r];
	takefrom(i,tabprim,tab1,r,c);
	if(r>4)
	{
		int p;
		int d=1;
		for(p=0;p<sqrt(r);p++)
		{
			grandsome+=d*tab1[c]*calcule(r,tab1,p);
			d=-d;
		}
		return(grandsome);
	}
	else
	{
	return (lastcalcule(tab1));
	}
}
int* takefrom(int i,int *tabprim,int *tab1,int r,int c)
{
	int t,j,d=1;
	c=c+(int)sqrt(i);
	for(j=(int)sqrt(i),t=0;j<i,t<r;j++,t++)
		{
			if(j!=c)
			{
				tab1[t]=tabprim[j];
			}
			else
			{
				t--;
				c=c+(int)sqrt(i);
			}
		}
	return(tab1);
}
int lastcalcule(int *tab1)
{
	int some,a,b,c,d;
	a=tab1[1];
	b=tab1[2];
	c=tab1[3];
	d=tab1[0];
	some=d*c-a*b;
	return(some);
}
