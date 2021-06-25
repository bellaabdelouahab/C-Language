  #include<stdio.h>
#include<stdlib.h>
int main()
{
	static long int i,n,x;
	
	x=1;
	printf("math season\n let's calculate !N\n");
	scanf("%d",&n);
	system("cls");
	i=1;
	while (i<=n)
	{

if (i==1){

printf("\n\n!N=");
printf("%d",i);}
else
printf("*%d",i);
x=x*i;
i=i+1;}

	printf("\n enter a N value :\n");
	printf("\nthe result is : %d ",x);

}
