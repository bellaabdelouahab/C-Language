 #include<stdio.h>
#include<stdlib.h>
#define Nfois 2
int main()
{
	int i;
	char Operator;

printf("enter a number from 0 to 9:\n");
scanf("%d",&Operator);
system("cls");
for(i=0;i<Nfois;i++)
{
switch(Operator){
	case 0 : printf("Good morning\n");break;
	case 1 : printf("you are beautiful\n");break;
	case 2 : printf("you are good\n");break;
	case 3 : printf("I like you style\n");break;
	case 4 : printf("your handsome\n");break;
	case 5 : printf("Hello there\n");break;
	case 6 : printf(":)\n");break;
	case 7 : printf(":P\n");break;
	case 8 : printf(";)\n");break;
	case 9 : printf(":O\n");break;

	default : printf("\n As I said from 0 to 9\n");break;
	printf("\n");
}
printf("\n");
printf("enter another number:\n");
printf("\n");
scanf("%d",&Operator);
}

}
