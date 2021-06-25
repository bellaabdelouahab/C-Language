
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

#define NFOIS 5

int chois,chois2;
 char a,b,c,d,e,f,g,h,i,j;
a=0;
b=0;
c=0;
d=0;
e=0;
f=0;
g=0;
h=0;
i=0;
printf("on this programe we are going to play the famous game TIC TAC TOC \n");
printf("every squar has a number between 1 to 9\n");
printf("\n    tic    tac    toc\n");
printf("\n        |     |     \n");
printf("     %d  |  %d  |  %d  \n",1,2,3);
printf("   _____|_____|_____\n");
printf("        |     |     \n");
printf("     %d  |  %d  |  %d  \n",4,5,6);
printf("   _____|_____|_____\n");
printf("        |     |     \n");
printf("     %d  |  %d  |  %d  \n",7,8,9);
printf("        |     |     \n");
for (j=1;j<NFOIS;j++)
{
    sortie:{
    printf("\nfirst player\n");
    printf("enter a number\n");
    scanf("%d",&chois);
    system("cls");
    if (chois==1 && a!='o')
    a='X';
    else if (chois==2 && a!='o')
    b='X';
    else if (chois==3 && a!='o')
    c='X';
    else if (chois==4 && a!='o')
    d='X';
    else if (chois==5 && a!='o')
    e='X';
    else if (chois==6 && a!='o')
    f='X';
    else if (chois==7 && a!='o')
    g='X';
    else if (chois==8 && a!='o')
    h='X';
    else if (chois==9 && a!='o')
    i='X';
    else
    goto sortie; }
        printf("this square is already taken try again with different square");
    printf("\n   tic    tac    toc\n");
    printf("\n        |     |     \n");
    printf("     %c  |  %c  |  %c  \n",a,b,c);
    printf("   _____|_____|_____ \n");
    printf("        |     |      \n");
    printf("     %c  |  %c  |  %c  \n",d,e,f);
    printf("   _____|_____|_____ \n");
    printf("        |     |      \n");
    printf("     %c  |  %c  |  %c  \n",g,h,i);
    printf("        |     |      \n");
   if ((a=='X' && b=='X' && c=='X') || (a=='X' && d=='X' && g=='X') || (d=='X'&& e=='X'&& f=='X') || (g=='X'&& h=='X'&& i=='X') || (b=='X'&& e=='X'&& h=='X') || (c=='X'&& f=='X'&& i=='X') || (a=='X'&& e=='X'&& i=='X') || (c=='X'&& e=='X'&& g=='X'))
       {
           printf("\nfirst player won\n");
            return 0;
       }
    if ((a=='O' && b=='O' && c=='O') || (a=='O' && d=='O'&& g=='O') || (d=='O'&& e=='O'&& f=='O') || (g=='O'&& h=='O'&& i=='O') || (b=='O'&& e=='O'&& h=='O') || (c=='O'&& f=='O'&& i=='O') || (a=='O'&& e=='O'&& i=='O') || (c=='O'&& e=='O'&& g=='O'))
        {
            printf("second player won\n");
            return 0;
        }
printf("the second player\n");
printf("enter a number\n");
scanf("%d",&chois2);
if (chois2==1)
a='O';
else if (chois2==2)
b='O';
else if (chois2==3)
c='O';
else if (chois2==4)
d='O';
else if (chois2==5)
e='O';
else if (chois2==6)
f='O';
else if (chois2==7)
g='O';
else if (chois2==8)
h='O';
else if (chois2==9)
i='O';
system("cls");
    printf("\n   tic    tac    toc\n");
    printf("\n        |     |     \n");
    printf("     %c  |  %c  |  %c  \n",a,b,c);
    printf("   _____|_____|_____ \n");
    printf("        |     |      \n");
    printf("     %c  |  %c  |  %c  \n",d,e,f);
    printf("   _____|_____|_____ \n");
    printf("        |     |      \n");
    printf("     %c  |  %c  |  %c  \n",g,h,i);
    printf("        |     |      \n");
   if ((a=='X' && b=='X' && c=='X') || (a=='X' && d=='X' && g=='X') || (d=='X'&& e=='X'&& f=='X') || (g=='X'&& h=='X'&& i=='X') || (b=='X'&& e=='X'&& h=='X') || (c=='X'&& f=='X'&& i=='X') || (a=='X'&& e=='X'&& i=='X') || (c=='X'&& e=='X'&& g=='X'))
       {
           printf("first player won\n");
            return 0;
       }
    if ((a=='O' && b=='O' && c=='O') || (a=='O' && d=='O'&& g=='O') || (d=='O'&& e=='O'&& f=='O') || (g=='O'&& h=='O'&& i=='O') || (b=='O'&& e=='O'&& h=='O') || (c=='O'&& f=='O'&& i=='O') || (a=='O'&& e=='O'&& i=='O') || (c=='O'&& e=='O'&& g=='O'))
        {
            printf("second player won\n");
            return 0;
        }
}
printf("enter a number\n");
scanf("%d",&chois);
system("cls");
if (chois==1)
a=1;
else if (chois==2)
b=1;
else if (chois==3)
c=1;
else if (chois==4)
d=1;
else if (chois==5)
e=1;
else if (chois==6)
f=1;
else if (chois==7)
g=1;
else if (chois==8)
h=1;
else if (chois==9)
i=1;
    printf("\n   tic    tac    toc\n");
    printf("\n        |     |     \n");
    printf("     %c  |  %c  |  %c  \n",a,b,c);
    printf("   _____|_____|_____ \n");
    printf("        |     |      \n");
    printf("     %c  |  %c  |  %c  \n",d,e,f);
    printf("   _____|_____|_____ \n");
    printf("        |     |      \n");
    printf("     %c  |  %c  |  %c  \n",g,h,i);
    printf("        |     |      \n");
   if ((a=='X' && b=='X' && c=='X') || (a=='X' && d=='X' && g=='X') || (d=='X'&& e=='X'&& f=='X') || (g=='X'&& h=='X'&& i=='X') || (b=='X'&& e=='X'&& h=='X') || (c=='X'&& f=='X'&& i=='X') || (a=='X'&& e=='X'&& i=='X') || (c=='X'&& e=='X'&& g=='X'))
       {
           printf("first player won\n");
            return 0;
       }
    if ((a=='O' && b=='O' && c=='O') || (a=='O' && d=='O'&& g=='O') || (d=='O'&& e=='O'&& f=='O') || (g=='O'&& h=='O'&& i=='O') || (b=='O'&& e=='O'&& h=='O') || (c=='O'&& f=='O'&& i=='O') || (a=='O'&& e=='O'&& i=='O') || (c=='O'&& e=='O'&& g=='O'))
        {
            printf("second player won\n");
            return 0;
        }
else
printf("draw\n");
}


