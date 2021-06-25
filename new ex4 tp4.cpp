#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<math.h>
int open1(void);
int show_the_disks(void);
int add_a_new_disk(void);
int modife_a_disk(void);
int Delete_a_disk(void);
void import_info_to_struct(void);
void import_to_file(void);
void put_in(int ,int ,char*,int );
void textcolor(unsigned short );
FILE *pt;
char thing[1000];
char filename[100];
typedef struct 
	{
		char title1[50];
		unsigned long lenght;
	}chanson;
	typedef struct
	{
		char author[50];
		char title[50];
		chanson *list;//list[10] 
		int year;
		int number_of_music;
	}disque;
	disque *tab;
	int ned,i,j,k,t=0,glob=0,key_press=1;
	char ch;
int main()
{
	//E:\\WindowsImageBackup\\first_file.txt
	int show;
	tab=(disque*)calloc(10,sizeof(disque));
	for(i=0;i<10;i++)
	{
		tab[i].list=(chanson*)calloc(10,sizeof(chanson));
	}
	printf("NB:to creat a new file type (new)\n");
	printf("enter the file path:\n");
	gets(filename);
	if(filename[0]=='n'&&filename[1]=='e'&&filename[2]=='w')
	{
		printf("give your file a name : \n");
		while(getchar()!='\n')
		{
			filename[i]=getchar();
			i++;
		}
		pt=fopen(filename,"w");
		if(pt==NULL)
		{
			printf(" ____________________________\n");
			printf("|                            |\n");
			printf("|   There has been an error  |\n");
			printf("|____________________________|\n");
			return(1);
		}
		
	}
	fclose(pt);
	system("cls");
	while(1)
	{
		while(1)
		{
			printf(" ______________________________________________________________________________________________\n");
			printf("|                  |                    |                  |                  |                |\n");
			printf("|");
			if(key_press==1)		
				textcolor(1);
			printf(" Show the disks ");
			textcolor(15);
			printf("  |  ");
			if(key_press==2)		
				textcolor(1);
			printf(" Add a new disk ");
			textcolor(15);
			printf("  |  ");
			if(key_press==3)		
				textcolor(1);
			printf(" Modife a disk ");
			textcolor(15);
			printf(" |  ");
			if(key_press==4)		
				textcolor(1);
			printf(" Delete a disk ");
			textcolor(15);
			printf(" |     ");
			if(key_press==5)		
				textcolor(1);
			printf(" Exit ");
			textcolor(15);
			printf("     |\n");
			printf("|__________________|____________________|__________________|__________________|________________|\n");
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
		t=0;
		//open file
		open1();
		import_info_to_struct();
		if(show==1)
			show_the_disks();
		else 
			if(show==2)
				add_a_new_disk();
			else
				if(show==3)
					modife_a_disk();
				else
					if(show==4)
						Delete_a_disk();
					else
					{
						printf("\nOk");
						break;
					}
	}
	free(tab);
	for(i=0;i<10;i++)
	{
		free(tab[i].list);
	}
	return(0);
}
int open1(void)
{
		int i;	
	pt=fopen(filename,"r");
	if(pt==NULL)
	{
		printf(" ____________________________\n");
		printf("|                            |\n");
		printf("|   There has been an error  |\n");
		printf("|____________________________|\n");
		return(1);
	}
	while(!feof(pt))
	{
		fscanf(pt,"%c",&thing[i]);
		i++;
	}
	return(0);
}
int show_the_disks(void)
{
	for(i=0;(unsigned int) i<strlen(thing);i++)
	{
		printf("%c",thing[i]);	
	}
	printf("\n");
	return(1);
}
void import_info_to_struct(void)
{
	const char * tab1="autuer:            titre de disque:   anne:              nomber des chanson:titre:             duree:             chanson:           ";
	int h,x,m,val;
	char tab2[20];
	for(h=0;(unsigned int)h<sizeof(tab2);h++)
	{
	 	tab2[h]=0;
	}
	for(i=0;(unsigned int)i<strlen(thing)&&thing[i]!=0&&strlen(thing)>0;i=val)
	{
		x=0;
		if(thing[i]=='\n')
			{
				t++;
				i++;
			}
		for(j=0;j<115;j+=19)
		{		
			for(k=0;k<19;k++)
			{
				if(thing[i+k]==tab1[k+j])
				{
					if(thing[i+k]==':')
						{
							x=1;
							break;
						}
				}
				else
					break;
			}
			for(m=0;m<20;m++)
			{
				tab2[m]=0;
			}
			if(thing[i+k+1]==' '&&x==1)
			{
				for(h=1;;h++)
				{
					if(thing[i+k+1+h]=='\n')
						break;
					tab2[h-1]=thing[i+k+1+h];	
				}
			}		
			val=i+k+1+h+1;
			if(x==1) 
				break;
		}
		if(x==1)
		{
			put_in(j,t,tab2,h);
		}
	}
	glob=t;
}
void put_in(int j,int t,char*tab2,int h)
{
	int i1=0,s=strlen(tab2)-1,r=0,b=0,k=0;
	switch(j)
	{
		case  0 : for(k=0;k<h-1||tab2[k]!=0;k++) tab[t].author[k]=tab2[k];break;
		case 19 : for(k=0;k<h-1||tab2[k]!=0;k++) tab[t].title[k]=tab2[k];break;
		case 76 : for(k=0;k<h-1||tab2[k]!=0;k++) tab[t].list[ned].title1[k]=tab2[k];break;
		case 95 : while(tab2[i1]!=0&&tab2[i1]!='.')
						{		
							b=tab2[i1]-'0';		
							if (b==-48)break;	
							r=r+b*pow(10,s);	
							s--;i1++;	
						};
						tab[t].list[ned].lenght=r;break;
		case 57 : while(tab2[i1]!=0)
						{		
							b=tab2[i1]-'0';		
							if (b==-48)break;	
							r=r+b*pow(10,s);	
							s--;i1++;	
						};
						tab[t].number_of_music=r;break;
		case 38 :while(tab2[i1]!=0)
						{		
							b=tab2[i1]-'0';		
							if (b==-48)break;	
							r=r+b*pow(10,s);	
							s--;i1++;	
						};	
						tab[t].year=r;
						break;
		case 114 :while(tab2[i1]!=0)
						{		
							b=tab2[i1]-'0';		
							if (b==-48)break;	
							r=r+b*pow(10,s);	
							s--;i1++;	
						};
						ned=r-1;break;	
		default:break;
	}
}
int add_a_new_disk(void)
{
	printf("give the disk info\n");
	printf("author:");
	gets(tab[t].author);
	printf("\nTitle of disk:");
	gets(tab[t].title);
	printf("\nyear:");
	scanf("%d",&tab[t].year);
	printf("\nnomber of musics:");
	scanf("%d",&tab[t].number_of_music);
	getchar();
	for(i=0;i<tab[t].number_of_music;i++)
	{
		printf("\ntitle of the music %d:",i+1);
		gets(tab[t].list[i].title1);
		printf("\nits lenght(s):");
		scanf("%lu",&tab[t].list[i].lenght);
		getchar();
	}
	import_to_file();
	return(0);
}
int modife_a_disk()
{
	int mod,s=0,r=0,h=0;
	int key_press1=1,key_press2=1;
	char tab4[50];
	while(1)
	{
		for(i=0;i<10&&tab[i].author[0]!=0;i++)
		{
			printf(" ________________________________________\n");
			printf("|                                        |\n");
			printf("|");	
			for(j=0;j<(40-strlen(tab[i].author+2))/2-2;j++)
				printf(" ");
			if((key_press1==i+1))	
			textcolor(2);
			printf("%d-%s",i+1,tab[i].author);
			textcolor(15);
			for(j=0;j<(40-strlen(tab[i].author)+2)/2-2;j++)
				printf(" ");
			printf("|\n");
			printf("|________________________________________|\n");
		}
					while(1)
			{
				if(kbhit())
				{
       				ch = getch();
    				break;
				}
    		}
			if(ch=='s'&&key_press1<i)
				key_press1++;
			else
				if(ch=='w'&&key_press1>1)
					key_press1--;
				else 
					if(ch=='1')
					{
						h=key_press1;
						break;
					}
			system("cls");
	}
	h--;
	while(1)
	{
		while(1)
		{
			printf("what do you want to  modife?\n");
			printf(" _____________________________________________________________________________________________________________________\n");
			printf("|                  |                    |                  |                  |                |                      |\n");
			printf("|");
			if(key_press2==1)		
				textcolor(1);
			printf("      autor     ");
			textcolor(15);
			printf("  |  ");
			if(key_press2==2)		
				textcolor(1);
			printf(" title of disk  ");
			textcolor(15);
			printf("  |  ");
			if(key_press2==3)		
				textcolor(1);
			printf(" date of disk  ");
			textcolor(15);
			printf(" |  ");
			if(key_press2==4)		
				textcolor(1);
			printf("nomber of songs ");
			textcolor(15);
			printf("|     ");
			if(key_press2==5)		
				textcolor(1);
			printf(" a song   ");
			textcolor(15);
			printf(" |  ");
			if(key_press2==6)		
				textcolor(1);
			printf(" End modification ");
			textcolor(15);
			printf("  |\n");
			printf("|__________________|____________________|__________________|__________________|________________|______________________|\n");
			while(1)
			{
				if(kbhit())
				{
       				ch = getch();
    				break;
				}
    		}
			if(ch=='d'&&key_press2<6)
				key_press2++;
			else
				if(ch=='a'&&key_press2>1)
					key_press2--;
				else 
					if(ch=='1')
					{
						mod=key_press2;
						break;
					}
			system("cls");
		}
		switch(mod)
		{
			case 1 : 	printf("give the new name:");
						gets(tab4);
						for(k=0;(unsigned int)k<strlen(tab4);k++)
							tab[h].author[k]=tab4[k];
						break;
			case 2 : 	printf("give the new disk title:");
						gets(tab4);
						for(k=0;(unsigned int)k<strlen(tab4);k++)
							tab[h].title[k]=tab4[k];
						break;
			case 3 : 	printf("give the new date of disk:");
						scanf("%d",&r);
						getchar();
						tab[h].year=r;
						break;
			case 4 :	printf("give the new nomber:");
						scanf("%d",&r);
						getchar();
						if(tab[h].number_of_music<r)
							{
								for(j=tab[h].number_of_music;j<r;j++)
								{
									printf("give the new name of the song %d :",j+1);
									gets(tab4);
									printf("give its long (s):");
									scanf("%d",&s);
									getchar();
									for(k=0;k<strlen(tab4);k++)
									tab[h].list[j].title1[k]=tab4[k];
									tab[h].list[j].lenght=s;
								}
							}
						else
							{
								for(j=r;j<tab[h].number_of_music;j++)
								{
									for(k=0;(unsigned int)k<strlen(tab[h].list[j].title1);k++)
									{
										tab[h].list[j].title1[k]=0;
									}
									tab[h].list[j].lenght=0;
								}
							}
						tab[h].number_of_music=r;
						break;
			case 5 :	printf("give the nomber of the song:");
						scanf("%d",&r);
						r--;
						getchar();
						printf("give the new name of the song:");
						gets(tab4);
						printf("give its long (s):");
						scanf("%d",&s);
						getchar();
						for(k=0;k<strlen(tab4);k++)
							tab[h].list[r].title1[k]=tab4[k];
						tab[h].list[r].lenght=s;
						break;
			default : printf("Modification ended\n");	
		}
		if (mod==6)
			break;
		import_to_file();
	}
	return(0);
}
int Delete_a_disk()
{
	void vid_the_removed(int);
	int del,s,r;
	int key_press1=1;
	printf("whish one do you want to delete\n");
		while(1)
	{
		for(i=0;i<10&&tab[i].author[0]!=0;i++)
		{
			printf(" ________________________________________\n");
			printf("|                                        |\n");
			printf("|");	
			for(j=0;j<(40-strlen(tab[i].author+2))/2-2;j++)
				printf(" ");
			if((key_press1==i+1))	
			textcolor(2);
			printf("%d-%s",i+1,tab[i].author);
			textcolor(15);
			for(j=0;j<(40-strlen(tab[i].author)+2)/2-2;j++)
				printf(" ");
			printf("|\n");
			printf("|________________________________________|\n");
		}
					while(1)
			{
				if(kbhit())
				{
       				ch = getch();
    				break;
				}
    		}
			if(ch=='s'&&key_press1<10)
				key_press1++;
			else
				if(ch=='w'&&key_press1>1)
					key_press1--;
				else 
					if(ch=='1')
					{
						del=key_press1;
						break;
					}
			system("cls");
	}
	del--;
	
	vid_the_removed(del);
	
	for(i=del;i<glob+1&&tab[i+1].author[0]!=0;i++)
	{
		for(k=0;k<50&&tab[i+1].author[k]!=0;k++)
		{
			tab[i].author[k]=tab[i+1].author[k];
			tab[i].title[k]=tab[i+1].title[k];
		}
		tab[i].number_of_music=tab[i+1].number_of_music;
		for(j=0;j<tab[i].number_of_music;j++)
		{
			for(s=0;s<50;s++)
			tab[i].list[j].title1[s]=tab[i+1].list[j].title1[s];
			tab[i].list[j].lenght=tab[i+1].list[j].lenght;
		}
		tab[i].year=tab[i+1].year;	
		vid_the_removed(del+1);	
	}
	import_to_file();

	return(0);
}
void import_to_file(void)
{
			pt=fopen("E:\\WindowsImageBackup\\first_file.txt","w");
		for(j=0;j<glob+1;j++)
		{
			if(tab[j].author[0]!=0)
			{
				fprintf(pt,"autuer: %s\n",tab[j].author);
				fprintf(pt,"titre de disque: %s\n",tab[j].title);
				fprintf(pt,"anne: %d\n",tab[j].year);
				fprintf(pt,"nomber des chanson: %d\n",tab[j].number_of_music);
				for(k=0;k<tab[j].number_of_music;k++)
				{
					fprintf(pt,"chanson: %d\n",k+1);
					fprintf(pt,"titre: %s\n",tab[j].list[k].title1);
					fprintf(pt,"duree: %lu\n",tab[j].list[k].lenght);
			}
			fprintf(pt,"\n");
			}
		}
			fclose(pt);
}
void vid_the_removed(int del)
{
	for(i=0;i<50;i++)
	{
		tab[del].title[i]=0;
		tab[del].author[i]=0;
		tab[del].year=0;
		for(j=0;j<tab[del].number_of_music;j++)
		{
			for(k=0;k<50;k++)
			tab[del].list[j].title1[k]=0;
			tab[del].list[j].lenght=0;
		}
		tab[del].number_of_music=0;
	}
}
void textcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}
