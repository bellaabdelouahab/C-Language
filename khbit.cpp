#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
char touch_key(void);
int main()
{	int i;
	char x=NULL;
	while( x==0)
	{
		x=touch_key();
	}printf("%c\n",x);

	return(0);
}
int touch_key(void)
{
	    char ch = 0;

    if(kbhit()){
        ch = getch();
    }
	if(ch=='d')
	key_press++;
	else
		if(ch=='a')
			keypress--;
    return presse;
}
