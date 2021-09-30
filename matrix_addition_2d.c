#include<stdio.h>
#define Nfois 4
int main ()
{
	int a,b,c,d,e,f,g,h,i,x,z;
	printf("on this programe we are going to calculate the addition of two square matrice");
	printf("\nhow many colons and lines :");
	scanf("%d %d",&a,&b);
	if (x==1 && y==1)
	{
		printf("\nenter the nummber(s) of the first matrice (first line):\n");
		scanf("%d",&a);
		printf("\nenter the nummber(s) of the second matrice (first line):\n");
		scanf("%d",&b);
		x=0;
		int A[1]={a};	
		int B[1]={b};
		int C[1];
		printf("first matrice + second matric =   \n");
		C[0]=A[0]+B[0];
		printf("                    %d",C[i]);
		printf("\n");
	}
	else if (x==1 && y==2)
	{
		printf("\nenter the nummbers of the first matrice (first line):\n");
		scanf("%d",&a);
		printf("(the second line):\n");
		scanf("%d",&b);
		printf("\nenter the nummbers of the second matrice (first line):\n");
		scanf("%d",&c);
		printf("(the second line):\n");
		scanf("%d",&d);
		x=0;
		int A[2]={a,b};	
		int B[2]={c,d};
		int C[2];
		printf("first matrice + second matric =   \n");
		for(i=0;i<4;i++)
		{
			C[i]=A[i]+B[i];
			printf("                    %d",C[i]);
			if (i==0)
				printf("\n");
		
	}
	}
