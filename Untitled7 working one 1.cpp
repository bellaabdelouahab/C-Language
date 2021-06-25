#include <stdio.h>
#include <math.h>
#define NFOIS 3
main (){


{
int i,x,y;
for (i=0;i<NFOIS;i++){

printf("write a number x:\n");
scanf("%d",&x);
printf("write a number y:\n");
scanf("%d",&y);
if (x == y)
printf("%d est egal a %d\n",x,y);
else{

printf("%d est different de %d\n",x,y);}
if (i<NFOIS)
printf("you can try again with two different nembers\n");
else{
printf("your free  trial ends at this point\n");
}
}
}
}
