#include<stdio.h>
int main ()
{
	int x,i,y;
	printf("un programme permettant la saisie d'un tableau de reels, et un tableau de caractere. ");
	printf("\nle tableau de reel\n");
	printf("combiane des element:");
	scanf("%d",&x);
	float tlab[x];
	
	for (i=0;i<x;i++)
	{
		printf("donnez le nomber d'element %d:\n",i+1);
		scanf("%d",&y);
		tlab[i]=y;
	}
	
	printf("\nle tableau de char\n");
	printf("combiane des element:");
	scanf("%d",&x);
	for (i=0;i<x;i++)
	{
		printf("donnez le nomber d'element %d:\n",i+1);
		scanf("%d",&y);
		tlab[i]=y;
	}
}
