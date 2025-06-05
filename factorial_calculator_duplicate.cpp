#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,x;
	x=1;
	printf("math season\n let's calculate !N\n");
	printf("\n enter a N value :\n");
	scanf("%d",&n);
	system("cls");
	for (i=1;i<=n;i++)
	{

if (i==1){

printf("\n\n!N=");
printf("%d",i);}
else
printf("*%d",i);
x=x*i;
}

	printf("\nthe result is : %d ",x);

}
