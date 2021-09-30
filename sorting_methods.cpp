#include <stdio.h>
#define n 9
void tripar_selection();
void tripar_remplacment ();
void tripar_insertion();
void tri_a_bulles();
void affiche();
void full_table();
float table[n];
int i,j;
int main()
{
	int h;
	full_table();
	getchar();
	printf("\nwhich method you want to use ?\n1-tri par remplacment\n2-tri par selection\n3-tri parinsertion\n4-tri a bulles\n enter ints number:");
	scanf("%d",&h);
	h==1?tripar_remplacment():h==2?tripar_selection():h==3?tripar_insertion():h==4?tri_a_bulles():printf("invalide numbre");
	affiche();
	return 0;
}
void full_table()
{
		printf("fulle the table 3*3\n");
	for ( i = 0; i < n; i++)
	{
		scanf("%f",&table[i]);
	}
}
void affiche()
{
	for (i = 0; i < n; i++)
	{
		printf("%g ",table[i]);
	}
}
void echangeV(float a,float b)
{
	float c;
	c=a;
	a=b;
	b=c;
}
void echangeA(float *a,float *b)
{
	float c;
	c=*a;
	*a=*b;
	*b=c;
}

void tripar_selection()
{
	for ( i = 0; i < n; i++)
	{
		for ( j = i+1; j < n; ++j)
		{
			if(table[j]<table[i])
			{
				echangeA(table+j,table+i);
			}
		}
	}
}
void tripar_remplacment ()
{
	int a;
	float maxt,max(),min(),tab1[n];
	maxt=max();
	for(i=0;i<n;i++)
	{
		a=min();
		
		tab1[i]=table[a];
		table[a]=maxt;printf("",a);
	}
	for(i=0;i<n;i++)
	{
		float c;
		c=tab1[i];
		tab1[i]=table[i];
		table[i]=c;
	}
}
float max()
{
	float maxi;
	for(i=0;i<n;i++)
	{
		if (maxi<table[i])
		maxi=table[i];
	}
	return (maxi);
}
float min()
{
		float min,mini;
	for(i=0;i<n;i++)
	{
		if (min>table[i])
		min=table[i];
	
	}
	for(i=0;i<n;i++)
	{
		if(table[i]==min)
		mini=i;
	}
	return (mini);
}
void tripar_insertion()
{
	for(i=1;i<n;i++)
	{
		j=i-1;
		while(j>=0&&table[j]>table[j+1])
		{
			echangeA(table+j,table+j+1);
			j--;
		}
	}
}
void tri_a_bulles()
{
	for(i=n;i>0;i--)
	{
		for(j=0;j<i-1;j++)
		{
			if(table[j]>table[j+1])
			echangeA(table+j,table+j+1);
		}
	}
}

