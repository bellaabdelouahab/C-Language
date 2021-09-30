#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
void textcolor(unsigned short );
int open1(void);
int show_the_disks(void);
void import_info_to_struct(void);
FILE *pt;
char thing[1000];
char filename[100];
char ch;
struct music
	{
		char title1[50];
		unsigned long lenght;
		music *next=NULL;
	};
struct app
	{
		char author[50];
		char title[50];
		music list[10];//list[10] 
		int year;
		int number_of_music;
		struct app *next=NULL;
	}*disk=NULL;
	//typedef app app; 
	void ajout_to_end(struct app**disk,char*tab2);
	int Delete_a_disk(struct app**disk);
	int i,j,k,t=0,glob=0,key_press=1;
int main()
{
	void show1(struct app**disk);
	int show;
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
	fclose(pt);		open1();
		import_info_to_struct();
		system("cls");
	//system("cls");
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

		if(show==1)
			{
			//show_the_disks();
			show1(&disk);
			}
		else 
			if(show==2)
				add_a_new_disk();
			else
				if(show==3)
					modife_a_disk();
				else
					if(show==4)
					{
						system("cls");
						Delete_a_disk(&disk);
					}
					else
					{
						printf("\nOk");
						break;
					}
	}
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
	int park=0,d;
	const char * tab1="author:            disk title:        year:              number of musics:  music:             title:             lenght:            ";
	int h,x,m,val;
	char tab2[200];
	for(m=0;m<200;m++)
	{
		tab2[m]=' ';
	}
	for(i=0;(unsigned int)i<strlen(thing)&&thing[i]!=0&&strlen(thing)>0;i=val)
	{
		x=0;

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

			if(thing[i+k+1]==' '&&x==1)
			{
				for(h=1,d=park;;h++,d++)
				{
					tab2[d]=thing[i+k+1+h];
					if(thing[i+k+1+h]=='\n')
					{
						park=d+1;
						break;	
					}
				}
			}		
			val=i+k+1+h+1;
			if(thing[val]=='\n'&&x==1)
				{
					ajout_to_end(&disk,tab2);
					i++;
					t++;
					
					for(m=0;m<200;m++)
					{
						tab2[m]=' ';
					}
					j=0;
					val++;
					park=0;
				}
			if(x==1) 
				break;
		}
	}
	
	
}
///////////////////////////////////////////////////////////////////////////////
	
void ajout_to_end(struct app**disk,char*tab2)
{
	int u=0;
	int r=0,s=0,b=0,i=0,m=0;
	struct app *q=*disk;
	struct app *p=(struct app*)calloc(0,sizeof(struct app));
	while(tab2[i]!='\n')
	{
		p->author[i]=tab2[i];
		i++;
	}
	i++;
	for( u=0;u<50;u++)
		p->title[u]=NULL;
	u=0;
	while(tab2[i]!='\n')
	{
		p->title[u]=tab2[i];
		i++;u++;
	}

	i++;
	u=i;
	s=s-1;
	while(tab2[u]!='\n')
	{
		
		s++;
		u++;
	}
	while(tab2[i]!='\n')
	{		
		b=tab2[i]-'0';		
		if (b==-48)break;	
		r=r+b*pow(10,s);	
		s--;
		i++;
	}
	p->year=r;
	i++;
	r=0;
	u=i;
	s=0;
	while(tab2[u]!='\n')
	{
		
		s++;
		u++;
	}
	s--;
	while(tab2[i]!='\n')
	{		
		b=tab2[i]-'0';		
		if (b==-48)break;	
		r=r+b*pow(10,s);	
		s--;
		i++;
	}
	p->number_of_music=r;
	int y=r;
	i++;
	for(int t=0;t<y;t++)
	{
		i+=2;
		for( u=0;u<50;u++)
		{
			p->list[t].title1[u]=NULL;
		}
		u=0;
		while(tab2[i]!='\n')
		{
			p->list[t].title1[u]=tab2[i];
			i++;
			u++;
		}
		i++;
		r=0;
		u=i;
		s=0;
		while(tab2[u]!='\n')
		{
			
			s++;
			u++;
		}
		s--;
		while(tab2[i]!='\n')
		{		
			b=tab2[i]-'0';			
			r=r+b*pow(10,s);	
			s--;
			i++;
		}
		p->list[t].lenght=r;
		i++;		
	}
	p->next=NULL;
	u=0;
	if(q)
	{
		while(q->next)
		{
			q=q->next;u++;
		}
		q->next=p;
	}
	else
	{
	*disk=p;
	}
}
void show1(struct app**disk)
{
	app *q=*disk;
	while(q)
	{
		printf("%s\n%s\n%d\n%d\n",q->author,q->title,q->year,q->number_of_music);
		q=q->next;
	}
}


int Delete_a_disk(struct app**disk)
{
	void import_to_file(void);
	void dellete( char *nname);
	int del,s,r,i=0;
	char nname[50];
	int key_press1=1;

	printf("whish one do you want to delete\n");
		while(1)
	{
		struct app *q=*disk;
		i=0;
		while(q)
		{
			printf(" ________________________________________\n");
			printf("|                                        |\n");
			printf("|");	
			for(j=0;j<(40-strlen(q->author+2))/2-2;j++)
				printf(" ");
			if((key_press1==i+1))	
			textcolor(2);
			printf("%d-%s",i+1,q->author);
			textcolor(15);
			for(j=0;j<(40-strlen(q->author)+2)/2-2;j++)
				printf(" ");
			printf("|\n");
			printf("|________________________________________|\n");
			q=q->next;
			i++;
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
	struct app *q=*disk;
	for(int i=0;i<del;i++)
		q=q->next;
	for(int i=0;i<50;i++)
		nname[i]=q->author[i];
		printf("\n\ntable :%s\n\n",nname);
	dellete(nname);
	import_to_file();
	return(0);
}



void dellete( char *nname)
{
	struct app *p=disk;
	if(p)
	{
		if(p->author==nname)
		{
			p=p->next;
			
		}
		else
			while(p->next)
				if(p->next->author!=nname)
					p=p->next;	
				else
					p->next=p->next->next;
			}
	}
void import_to_file(void)
{
	struct app *p=disk;
			pt=fopen("E:\\WindowsImageBackup\\first_file.txt","w");
		while(p)
		{
				fprintf(pt,"autuer: %s\n",p->author);
				fprintf(pt,"titre de disque: %s\n",p->title);
				fprintf(pt,"anne: %d\n",p->year);
				fprintf(pt,"nomber des chanson: %d\n",p->number_of_music);
				for(k=0;k<p->number_of_music;k++)
				{
					fprintf(pt,"chanson: %d\n",k+1);
					fprintf(pt,"titre: %s\n",p->list[k].title1);
					fprintf(pt,"duree: %lu\n",p->list[k].lenght);
				}
			fprintf(pt,"\n");
			p=p->next;
		}
			fclose(pt);
}
void textcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}
