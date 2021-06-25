#include<stdio.h>
#include<math.h>
float intergrale(float a,float b,float c,float x){
	float d;
	d=(a/3)*pow(x,3)+(b/2)*pow(x,2)+c*x;
	
return (d);
}
int main(){
    float a,b,c,x1,x2;
    float s=0;
	printf("donnez le debute de  borne ");
        scanf("%f",&x1);
	printf("donnez le fin de  borne ");
		scanf("%f",&x2);
    printf("donnez le nombre a:");
        scanf("%f",&a);
    printf("donnez le nombre b:");
        scanf("%f",&b);
    printf("donnez le nombre c:");
        scanf("%f",&c);

    s=intergrale(a,b,c,x2)-intergrale(a,b,c,x1);
    printf("le valeure est : %f",s);
}
