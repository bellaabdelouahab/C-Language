#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void take(int *,int* ,int*);
int main()
{
	int a=3,b=3;

	int *c;

	int **tab;

	int tab1[a][b];

	tab=(int**)malloc(sizeof(int*)*a);

	for(int i=0;i<a;i++)

	{

		tab[i]=(int*)malloc(sizeof(int)*b);

	}

	c=&a;

	void print_f(int*,int*);


	printf("adresse a=%d\nadresse b=%d\nadresse c=%d\n",&a,&b,&c);



	for(int i=0;i<3;i++)
	{

		for(int j=0;j<3;j++)
		{
			printf("tab1[%d][%d]=%ld    ",i+1,j+1,&tab1[i][j]);
		}
		
		printf("\n\n");

	}

	//take(c,&b,tab1);

	printf("a=%d   b=%d",*c,b);

	return(0);

}

void take(int a,int *b,int *tab)

{

	puts("donnez a:");

	scanf("%d",a);

	puts("donnez b:");

	scanf("%d",b);

}
