#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
typedef struct {
char titre[10] ; unsigned long duree;
}chanson;
typedef struct {
	int nbch;
	char auteur[10];
	char titre[10];
	int anne;
	chanson *list;
}disque;
int main()
{
	disque *tab;
	tab=(disque*)calloc(10,sizeof(disque));
	for(int i=0;i<10;i++)
	{(tab+i)->list=(chanson*)calloc(10,sizeof(chanson));
	}
		tab[0].list[0].duree=-10;
	return(0);
}

