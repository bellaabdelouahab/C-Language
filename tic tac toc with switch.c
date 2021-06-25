
#include<stdio.h>
int main()
{
    int X;
    char a,b,c,d,e,f,g,h,i,chois1,chois2;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    f=0;
    g=0;
    h=0;
    i=0;
    printf("on this programe we are going to play the fames game TIC TAC TOC \n");
    printf("every squar has a number between 1 to 9\n");
    printf("    ___________________\n");
    printf("   |     |      |     |\n");
    printf("   |  %d  |   %d  |  %d  |\n",1,2,3);
    printf("   |_____|______|_____|\n");
    printf("   |     |      |     |\n");
    printf("   |  %d  |   %d  |  %d  |\n",4,5,6);
    printf("   |_____|______|_____|\n");
    printf("   |     |      |     |\n");
    printf("   |  %d  |   %d  |  %d  |\n",7,8,9);
    printf("   |_____|______|_____|\n");
    printf("first player\n");
    printf("enter a number\n");
    scanf("%d",&chois1);
    system("cls");
    switch (chois1)
    {
        case 1 : a='X';break;
        case 2 : b='X';break;
        case 3 : c='X';break;
        case 4 : d='X';break;
        case 5 : e='X';break;
        case 6 : f='X';break;
        case 7 : g='X';break;
        case 8 : h='X';break;
        case 9 : i='X';break;
    }
    printf("    ___________________\n");
    printf("   |     |      |     |\n");
    printf("   |  %c  |   %c  |  %c  |\n",a,b,c);
    printf("   |_____|______|_____|\n");
    printf("   |     |      |     |\n");
    printf("   |  %c  |   %c  |  %c  |\n",d,e,f);
    printf("   |_____|______|_____|\n");
    printf("   |     |      |     |\n");
    printf("   |  %c  |   %c  |  %c  |\n",g,h,i);
    printf("   |_____|______|_____|\n");
}
