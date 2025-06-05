  #include<stdio.h>
#include<stdlib.h>
int main()
{
	float t;
	float r,s,i,n,x;
	x=1;
	s=1;
	t=1;
	n=1;
	r=0;
	for (i=1;(n-r)>0.000001;i++)
	{
t=t*i;
r=s;
s=s+ 1/t;
n=s;
}

	printf("\nthe result is : %f",n-r);

}
