#include<stdio.h>
int main()
{
    long long int x,y,i,t,z,h;
printf("**************Ce programme trasnforme entre dicimale et binier****************\n");
printf("enter un nomber dicimale :\n");
scanf("%ld",&x);
y=x;
i=1;
do
i=i*2;
while (i<x);
printf("Dans base binier est : \n");
for(i;i>=1;i=(i/2))
{
if ((x-i)>=0)
    {
    printf("1");
    x=x-i;
    }
    else
    {
    if (x!=y)
    printf("0");
    }
}
z=0;
t=1;
y=1;
printf("\ndonne un nomber binier :\n");
scanf("%ld",&x);
y=x;
if (x==0)
printf(" la valuer on dicimale est 0");
else
{
while ((x%10==0 || (x-1)%10==0 )&& x!=0)
{
	if ((x-1)%10==0)
	x=x-1;
	while (x%10==0)

			x=x/10;

	x=x-1;
}
}
if (x!=0)
{printf("\nle nomber invalide");return 0;}
while (y!=0)
{
	if (y%10==0)
	{
	    y=y/10;
	    t=t*2;
	}
	else
	{
		y=y-1;
		z=z+t;
	}
}
printf("Dans la base dicimale : \n%ld",z);

}


