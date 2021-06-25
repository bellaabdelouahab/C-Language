#include<stdio.h>
#define maxi 60 
struct reservoir_voiture 
{
	int capacite ; // capacité maximale
	int quantite ; // niveau de carburant
	struct Reserve_voiture
		{
			int Max;
			int Q;
		}doop;
	int Q;
	int jauge;
	}loop; 
	int main()
	{
		int y,i,z;
		int plein(int);
		printf("combiane des pleines ?\n");
		scanf("%d",&y);
		for(i=0;i<y;i++)
		{
			printf("donnez le kilométrage parcourus avant le plein %d: ",i+1);
			scanf("%d",&z);
			printf("donnez le nombre de litres nécessaires pour le plein : ");
			scanf("%d",&loop.Q);
		}
	}
	int plein(int x)
	{
		if (x<loop.doop.Max)
		loop.quantite=loop.quantite+loop.doop.Max-x;
		loop.Q=loop.doop.Max-x;
	}
