#include<stdio.h>
int main ()
{
	int x,i,y;
	printf("un programme permettant la saisie d'un tableau de reels, et un tableau de caractere. ");
	printf("\nle tableau de entier\n");
	printf("combiane des element:");
	scanf("%d",&x);
	int tlab[x],tab[x];
	
	for (i=0;i<x;i++)
	{
		printf("donnez le nomber d'element %d tab 1:",i+1);
		scanf("%d",&y);
		tlab[i]=y;
	}
		for (i=0;i<x;i++)
	{
		printf("donnez le nomber d'element %d tab 2:",i+1);
		scanf("%d",&y);
		tab[i]=y;
	}
	
}
