#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	float a,b,c,d,racd,x,x1,x2;
	printf("this programe can find the soulution of ax^2 + bx + c = 0\n");
printf("first inter a=\n");
scanf("%f",&a);
printf("inter b=\n");
scanf("%f",&b);
printf("inter c=\n");
scanf("%f",&c);
if (a==0)
{
printf("the soloution is:%f",-c/b);return 0;
}
d=(b*b-4*a*c);
if (d<0)
printf("there is no soulution for this int the real number");
else
if (d==0){

x1=(-b/(a*2));
printf("the soulution is %f" ,x1);
}
 
else
    if (d>0)
{

x1=((-b+sqrt(d))/(a*2));
x2=((-b-sqrt(d))/(a*2));
printf("\n First soloutionn is \nx1=%f\n",x1);
printf("Second  soloutionn is \nx2=%f\n",x2);
}
//printf("%f",sqrt(d));

}
