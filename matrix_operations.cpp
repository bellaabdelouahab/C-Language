#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int a,b,c,x,y,i,d,z,j,t,u,l,q,g;
	char Operator;
	printf("On this programe we are going to calculate the operation between two matrixes\n");
	obit:{
	printf("\nChose the Operator (+ or - or *)\n");
	scanf("%c",&Operator);
	if (Operator=='*')
		printf("\nNote : the number of colons in the first matrix must be same as the lines of the second one\n");
	else if (Operator=='+' || Operator=='-')
	printf("\nNote : the number of colons and lines should be the same\n");
	else 
	{
		printf("\nInvalid operator!!!!!");
		goto obit;
	}
	
		obito:{
	printf("How many lines and colons on the first matrix :");
	scanf("%d %d",&x,&y);
	printf("How many lines and colons on the second matrix :");
	scanf("%d %d",&z,&t);
		int A[x][y];
	int B[z][t],d;
	printf("\nEnter the nummber of the first matrix\n");
	for(j=0,d=0;d<x;j+=y,d++)
	{
		for(i=0;i<y;i++)
		{
		printf(" \nLine %d colon %d:\n",j+1,i+1);
		scanf("%d",&*(*A+j+i));
		}
	}
	printf("\nEnter the nummber of the second matrix\n");
	for(j=0,d=0;d<z;j+=t,d++)
	{
		for(i=0;i<t;i++)
		{
	 	printf(" Line %d colon %d:\n",j+1,i+1);
		scanf("%d",&u);
		*(*B+j+i)=u;
		}
	}
	int C[x][t];
	printf("First matrice %c second matric =   \n",Operator);
	for(j=0,d=0;d<x;j+=t,d++)
	{
		for(i=0;i<t;i++)
		{	l=0;
			switch (Operator)
			{
				case '+':(*(*C+j+i))=(*(*A+j+i))+(*(*B+j+i));break;
				case '-':*(*C+j+i)=*(*A+j+i)-*(*B+j+i);if (y!=t && x!=y) {printf("As I said the number of colons and lines should be the same ");goto obito;};break;
				case '*':if(y!=z){printf("As I said the number of colons in the first matrix must be same as the lines of the second one ");goto obito;};if (y==z)
						{
							
									for(q=0,g=0;q<y,g<y*z;q++,g+=z)
									{
										l=l+(*(*(A+j)+q))*(*(*(B+g)+i));
									}
									*(*C+j+i)=l;
								}
							
						;break;
				default: printf("somthing is not correct!!!");
						 
			}
			printf("                    %d",*(*C+j+i));
		
		}
			printf("\n");
	}
	}
	}
}

