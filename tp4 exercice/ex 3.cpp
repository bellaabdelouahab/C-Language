#include<stdio.h>
#define N 4
main ()
{
	int x,y,i,j,h;
	float z;
	char Operator;
	for(j=0;j<N;j++)
		{
		printf("entre une operation: (+,-,*,/)");
		scanf("%c",&Operator);
		printf("combiane des colons :");
		scanf("%d",&y);
		printf("le tableau 1\n");
	
		float tab3[y];
		float tab1[y];
		for (i=0;i<y;i++)
		{
			printf("donnez la valeure d'element %d:",i+1);
			scanf("%f",&z);
			tab1[i]=z;
		}	
			printf("le tableau 2\n");
		float tab2[y];
		for (i=0;i<y;i++)
		{
			printf("donnez la valeure d'element %d:",i+1);
			scanf("%f",&z);
			tab2[i]=z;
		}
		erruer:
		{
			for(i=0;i<y;i++)
				switch (Operator)
				{
					case '+' : tab3[i]=tab1[i]+tab2[i];break;	
					case '-' : tab3[i]=tab1[i]-tab2[i];break;
					case '*' : tab3[i]=tab1[i]*tab2[i];break;
					case '/' : tab3[i]=tab1[i]/tab2[i];break;
					default : printf("\noperation is not correct:");break;	
				}
		}
		printf("la resultats de le operation (%c) entre les deux tableaus est:\n",Operator);
		for(i=0;i<y;i++)
		{ printf("element %d est :%g\n",(i+1),tab3[i]);
		}
}
}
