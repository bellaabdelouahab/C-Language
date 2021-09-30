#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
void draw();
void draw_on_screen();
void controle_draw_moving();
void draw_caractre();
void draw_caractre_space();
void puting_on_screen();
void draw_on_screen();
void making_space();
char get_input();
const char  player[3]={'-','A','-'};
const int SCREEN_WIDTH = 50;
const int SCREEN_HEIGHT = 15;
char generaltab[SCREEN_HEIGHT][SCREEN_WIDTH];
char tabI[SCREEN_WIDTH],tabII[SCREEN_WIDTH],tab0[2][SCREEN_WIDTH];
int safty_position; 
int jamping_effect;
char caracter_position;
int i,j;
int b = rand()%10;
int c = rand()%10;
HANDLE _output_handle;
int main()
{
	
	printf("#############################\n");
	while(1)
	{
		draw();
		puting_on_screen();
		draw_on_screen();
		system("@cls||clear");
	}
	
	
}
void draw()
{
	making_space();
	controle_draw_moving();
	draw_caractre_space();
}
void controle_draw_moving()
{
		b++;
	if(b>6)
		b=0;
	c--;
	if(c==0)
		c=6;
	for(i=b;i<SCREEN_WIDTH;i+=8)
	{
		for(j=0;j<3;j++)
		{
			tabI[i+j]='*';
		}
	}
	for(i=c;i<SCREEN_WIDTH;i+=8)
	{
		for(j=0;j<3;j++)
		{
			tabII[i+j]='*';
		}
	}
		for(i=0;i<SCREEN_WIDTH/7;i++)
	tabI[i]=' ';
	for(i=0;i<SCREEN_WIDTH/7;i++)
	tabII[i]=' ';
}
void draw_caractre_space()
{
	for(i=0;i<SCREEN_WIDTH;i++)
	{
		tab0[0][i]=' ';
		tab0[1][i]=' ';
	}
}
char get_input(){
    char ch = 0;

    if(kbhit()){
        ch = getch();
    }

    return ch;
}
void draw_on_screen()
{
	for(i=0;i<SCREEN_HEIGHT;i++)
	{
		for(j=0;j<SCREEN_WIDTH;j++)
		{
			printf("%c",generaltab[i][j]);
		}
		printf("\n");
	}
	
	fflush(stdout);
}
void puting_on_screen()
{
	int d=0;
	for(i=SCREEN_HEIGHT-1;i>0;i-=3)
	{
		for(j=0;j<SCREEN_WIDTH;j++)
		{
			if((d+1)%2==0)
			generaltab[i][j]=tabII[j];
			else
			generaltab[i][j]=tabI[j];
			generaltab[i-1][j]=tab0[0][j];
			generaltab[i-2][j]=tab0[1][j];
		}
		d++;
	}
	

}
void making_space()
{
	for(j=0;j<SCREEN_WIDTH;j++)
	{
		tabI[j]=' ';
		tabII[j]=' ';
		
	}

}
void print_at_xy(int x, int y, char *val)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(_output_handle, coord);
  printf("%s", val);
  fflush(stdout);
}
