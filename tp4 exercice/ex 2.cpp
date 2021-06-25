#include<stdio.h>
int main ()
{
	int x,y,i,j,z;
	printf("un programme permettant la saisie d'un tableau de 2 dimension de reels, et un tableau de 2 dimension caractere. ");
	printf("\nle tableau de reel\n");
	printf("combiane des des element dans chaque line :\n");
	scanf("%d",&y);
	x=2;
	float tlab[x][y];
	for (j=0;j<x;j++)
	{
	
		for (i=0;i<y;i++)
		{
			printf("\ndonnez le nomber d'element %d:\n",i+1);
			scanf("%d",&z);
			tlab[j][i]=z;
		}
		if (j<x-1)
			printf("\nnext line");
	}
	
	printf("\nle tableau de char\n");
	printf("combiane des des element dans chaque line :\n");
	scanf("%d",&y);
	x=2;
	float tab[x][y];
	for (j=0;j<x;j++)
	{
	
		for (i=0;i<y;i++)
		{
			printf("\ndonnez le nomber d'element %d:\n",i+1);
			scanf("%d",&z);
			tlab[j][i]=z;
		}
		if (j<x-1)
			printf("\nnext line");
	}
}
