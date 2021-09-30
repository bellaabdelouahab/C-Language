#include<stdio.h>
 main()
{
	char Operator;
	float x,y,z;
	printf("******************************************Calculator**************************************************\n");
	printf("\n                                    Enter your equation\n                             Example(x+y or x-y or x*y or x/y)\n");
	scanf("                                            %f%c%f",&x,&Operator,&y);
	switch (Operator)
	{
		case '+' : z=x+y;printf("%g%c%g=%g",x,Operator,y,z);break;
		case '-' : z=x-y;printf("%g%c%g=%g",x,Operator,y,z);break;
		case '*' : z=x*y;printf("%g%c%g=%g",x,Operator,y,z);break;
		case '/' : z=x/y;printf("%g%c%g=%g",x,Operator,y,z);break;
		default : printf("Invalide operator!!!!");break;
	}
}
