#include<stdio.h>
#include<math.h>
	enum abds{FALSE,TRUE};
	enum abds b1;
abds abs1(int x){
if (x==2||x==1)
b1=TRUE;
for(int i=2;i<=x/2;i++)
{
	if(x%i==0)
	b1=FALSE;
	else
	{
	b1=TRUE;
	break;
	}
	
	return (b1);
	
}
return (b1);
}
int main(){
	int x;
	int abds(int x);
	printf("donnez N:");
	scanf("%d",&x);
	abs1(x);
	printf("%d",b1);
}
