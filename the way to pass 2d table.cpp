#include <stdio.h>
#include<stdlib.h>
int x=3,y,i,j;
int main(){
	int **tab1;
	
	printf("the first adresse : %d\n\n\n\n",tab1);
	
	tab1=(int**)malloc(sizeof(int*)*x);
	
	// the adress of the pointers of a pointer
	
	for(i=0;i<x;i++)
	
			printf("pointer : %d     adrees: %d\n",*(tab1+i),&*(tab1+i));	
	
	printf("donnez :");
	
	scanf("%d",&y);
	
	printf("before making the 2d\n");
	
	for(i=0;i<x;i++)
	
			printf("pointer : %d     adrees: %d\n",*(tab1+i),&*(tab1+i));
	
	for(i=0;i<x;i++)
	
	
	
	tab1[i]=(int*)malloc(sizeof(int)*y);
	
	printf("after making the 2d\n");
	
	for(i=0;i<x;i++)
	
			printf("pointer : %d     adrees: %d\n",*(tab1+i),&*(tab1+i));
	
	//remplir
	
		for(i=0;i<x;i++)
	
	{
	
		for(j=0;j<y;j++)
	
		{
	
			printf("donnez l\'element de line %d collon %d whish has the adress %d : ",i+1,j+1,*(tab1+i)+j);
	
			scanf("%d",*(tab1+i)+j);
	
		}
	
	}
	
	printf("with &\n");
	
	for(i=0;i<x;i++)
	
	{
	
		for(j=0;j<y;j++)
	
		printf("*tab1[%d][%d]=%ld           ",i+1,j+1,&tab1[i][j]);
	
		printf("\n\n");
	
	}
	
	printf("with *\n");
	
		for(i=0;i<x;i++)
	
	{
	
		for(j=0;j<y;j++)
	
		printf("*(tab1+%d*y+%d)=%ld           ",i+1,j+1,(*(tab1+i)+j));
	
		printf("\n\n");
	
	}
	
	for(i=0;i<x;i++)
	
	free(tab1[i]);
	
	free(tab1);



}


