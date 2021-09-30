#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int i;
int fonctiong(int );
int main()
{
	int a,b;
	scanf("%d",&a);
	a--;
	b=fonctiong(a);
	printf("b=%d",b);
	return(0);
}
int fonctiong(int n)
{
	int rest;
	printf("round %d",i);
	i++;
	system("cls");
	if(n<2)
	{
		rest=1;
	}
	else 
	rest=fonctiong(n-1)+fonctiong(n-2);
	return rest;
}
