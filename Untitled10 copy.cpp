#include<stdio.h>
#include<stdlib.h>
int main()
{
	char Operator;
printf("enter a number:\n");
scanf("%d",&Operator);
system("cls");
switch(Operator){
	case 1 : printf("hi");break;
	case 2 : printf("hello");break;
	case 3 : printf("hey");break;
	default : printf("you're  good at this you can do it");break;
}

}
