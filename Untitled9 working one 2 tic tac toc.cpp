
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define NFOIS 5
int main(){



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
printf("\n                        tic    tac    toc\n");
printf("\n                             |     |     \n");
printf("                          %d  |  %d  |  %d  \n",1,2,3);
printf("                        _____|_____|_____\n");
printf("                             |     |     \n");
printf("                          %d  |  %d  |  %d  \n",4,5,6);
printf("                        _____|_____|_____\n");
printf("                             |     |     \n");
printf("                          %d  |  %d  |  %d  \n",7,8,9);
printf("                             |     |     \n");
for (j=1;j<NFOIS;j++)
{
    sortie:{
    printf("\nfirst player\n");
    printf("enter a number\n");
    scanf("%d",&chois);

    if (chois==1 && a!='O')
    a='X';
    else if (chois==2 && b!='O')
    b='X';
    else if (chois==3 && c!='O')
    c='X';
    else if (chois==4 && d!='O')
    d='X';
    else if (chois==5 && e!='O')
    e='X';
    else if (chois==6 && f!='O')
    f='X';
    else if (chois==7 && g!='O')
    g='X';
    else if (chois==8 && h!='O')
    h='X';
    else if (chois==9 && i!='O')
    i='X';
    else{
        printf("this square is already taken try again with different square\n");
    goto sortie;
    } system("cls");}
    printf("\n                        tic    tac    toc\n");
    printf("\n                              |     |     \n");
    printf("                           %c  |  %c  |  %c  \n",a,b,c);
    printf("                         _____|_____|_____ \n");
    printf("                              |     |      \n");
    printf("                           %c  |  %c  |  %c  \n",d,e,f);
    printf("                         _____|_____|_____ \n");
    printf("                              |     |      \n");
    printf("                           %c  |  %c  |  %c  \n",g,h,i);
    printf("                              |     |      \n");
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
        sorties:{
printf("\n the second player\n");
printf("enter a number\n");
scanf("%d",&chois2);
if (chois2==1 && a!='X')
a='O';
else if (chois2==2 && b!='X')
b='O';
else if (chois2==3 && c!='X')
c='O';
else if (chois2==4 && d!='X')
d='O';
else if (chois2==5 && e!='X')
e='O';
else if (chois2==6 && f!='X')
f='O';
else if (chois2==7 && g!='X')
g='O';
else if (chois2==8 && h!='X')
h='O';
else if (chois2==9 && i!='X')
i='O';
  else{
        printf("this square is already taken try again with different square\n");
    goto sorties;
    } }
system("cls");
    printf("\n                        tic    tac    toc\n");
    printf("\n                              |     |     \n");
    printf("                           %c  |  %c  |  %c  \n",a,b,c);
    printf("                         _____|_____|_____ \n");
    printf("                              |     |      \n");
    printf("                           %c  |  %c  |  %c  \n",d,e,f);
    printf("                         _____|_____|_____ \n");
    printf("                              |     |      \n");
    printf("                           %c  |  %c  |  %c  \n",g,h,i);
    printf("                              |     |      \n");
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
    sorte:{
    printf("\nfirst player\n");
    printf("enter a number\n");
    scanf("%d",&chois);
    //system("cls");
    if (chois==1 && a!='O')
    a='X';
    else if (chois==2 && b!='O')
    b='X';
    else if (chois==3 && c!='O')
    c='X';
    else if (chois==4 && d!='O')
    d='X';
    else if (chois==5 && e!='O')
    e='X';
    else if (chois==6 && f!='O')
    f='X';
    else if (chois==7 && g!='O')
    g='X';
    else if (chois==8 && h!='O')
    h='X';
    else if (chois==9 && i!='O')
    i='X';
  else{
        printf("this square is already taken try again with different square\n");
    goto sorte;
    } system("cls");}
    printf("\n                        tic    tac    toc\n");
    printf("\n                              |     |     \n");
    printf("                           %c  |  %c  |  %c  \n",a,b,c);
    printf("                         _____|_____|_____ \n");
    printf("                              |     |      \n");
    printf("                           %c  |  %c  |  %c  \n",d,e,f);
    printf("                         _____|_____|_____ \n");
    printf("                              |     |      \n");
    printf("                           %c  |  %c  |  %c  \n",g,h,i);
    printf("                              |     |      \n");
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

