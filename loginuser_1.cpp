#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
char get_pass_word(void);
void draw(void);
int moving_prosses(void);
void stick_info(char*,int*);
void textcolor(unsigned short );
char ch;
char username[20];
int key_press;
int show;
int main()
{
	int j1=0,i,j;
	for(i=0;i<20;i++);
		username[i]=' ';
	i=0;
	while(j1<20)
	{
		printf("\n\n");
		for(i=0;i<30;i++)
			printf(" ");
			printf(" _____________________\n");
		for(i=0;i<30;i++)
			printf(" ");
		printf("|");
		for(i=0;i<21;i++)
		printf(" ");
		printf("|\n");
		for(i=0;i<20;i++)
			printf(" ");
		printf("User name |");
		stick_info(username,&j1);
		printf("%s|\n",username);
		for(i=0;i<30;i++)
			printf(" ");
			printf("|_____________________|\n");
		for(i=0;i<30;i++)
			printf(" ");
			printf(" _____________________\n");
		for(i=0;i<30;i++)
			printf(" ");
		printf("|");
		for(i=0;i<21;i++)
		printf(" ");
		printf("|\n");
		for(i=0;i<20;i++)
			printf(" ");			
		printf("passeword |");
		for(i=0;i<21;i++)
			printf(" ");
		printf("|\n");
		for(i=0;i<30;i++)
			printf(" ");
			printf("|_____________________|");
	
		system("cls");
	}
	system("cls");
	j1=0;
	char set_user[20];
	while(j1<20)
	{
		for(i=0;i<30;i++)
			printf(" ");
		printf("______________________\n");
		for(i=0;i<19;i++)
			printf(" ");
		printf("User name |");
		printf("                    |\n");
		for(i=0;i<30;i++)
			printf(" ");
		printf("______________________\n");
		strcpy(set_user,username);
		for(i=0;i<30;i++)
			printf(" ");
		printf("______________________\n");
		for(i=0;i<20;i++)
			printf(" ");
		printf("passeword |");
		stick_info(username,&j1);
		printf("%s|\n",username);
				for(i=0;i<30;i++)
			printf(" ");
		printf("______________________\n");
		system("cls");
	}
	while(1)
		{
			printf(" _____________________________________________________________________________\n");
			printf("|                  |                    |                  |                  |\n");
			printf("|");
			if(key_press==1)		
				textcolor(1);
			printf(" Profile ");
			textcolor(15);
			printf("  |  ");
			if(key_press==2)		
				textcolor(1);
			printf(" Message ");
			textcolor(15);
			printf("  |  ");
			if(key_press==3)		
				textcolor(1);
			printf(" music ");
			textcolor(15);
			printf(" |  ");
			if(key_press==4)		
				textcolor(1);
			printf(" Logout ");
			textcolor(15);
			printf("     |\n");
			printf("|__________________|____________________|__________________|__________________|\n");
			printf("\nRIGHT  : d\nLEFT   : a\nUP     : w\nDOWN   : s\nAPPLY : 1\n");
			while(1)
			{
				if(kbhit())
				{
       				ch = getch();
    				break;
				}
    		}
			if(ch=='d'&&key_press<5)
				key_press++;
			else
				if(ch=='a'&&key_press>1)
					key_press--;
				else 
					if(ch=='1')
					{
						show=key_press;
						break;
					}
			system("cls");
		}
		
		
	return(0);
}
void stick_info(char*tab,int*j1)
{
	ch=' ';
	while(1)
	{
		if(kbhit())
		{
			ch = getch();
			tab[*j1]=ch;
			j1++;
			break;
		}
		
	}
		
}
void textcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}
