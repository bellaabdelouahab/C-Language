#include<stdio.h>
#include<stdlib.h>

main(){
	double N,F=1,e=1;
	int P=1,i=0;
	
do {
	i++;
	F*=i; N=e;
	e+=(1/(F));
	P++;
	//printf(" i = %d    B = %lf    e = %lf   P = %d \n",i,B,e,P);
}while((P<100) || (e-N>=0.000001));

printf(" e = %lf",e);

}
