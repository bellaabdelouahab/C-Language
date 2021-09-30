#include <stdio.h>
void Afiche(int * );
void Remplir(int*,int*);
int x=3,y=3,i,j;
int main(){
	int tab[x][y];
	Remplir(&tab[0][0],&tab[0][1]);
	Afiche(&tab[0][0]);
	printf("the real table\n");
		for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",tab[i][j]);
		}
		printf("\n");
	}
		printf("ints coords table\n");
		for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",&tab[i][i]);
		}
		printf("\n");
	}
}
void Remplir(int*tab,int*tab2)
{
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("donnez l\'element de line %d collon %d whish has the adress %d : ",i+1,j+1,(tab+y*i+j));
			scanf("%d",&*(tab+y*i+j));
		}
	}
}
void Afiche(int* tab)
{
	printf("the expected tables\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",*(tab+i*y+j));
		}
		printf("\n");
	}
	printf("its coords:\n");
		printf("the expected tables\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",(tab+i*y+j));
		}
		printf("\n");
	}
}


