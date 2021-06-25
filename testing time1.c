#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int open1(void);
int show_the_disks(void);
int add_a_new_disk(void);
int modife_a_disk(void);
int Delete_a_disk(void);
void import_info_to_struct(void);
void import_to_file(void);
void put_in(int ,int ,char*,int );
FILE *pt;
char thing[1000];
typedef struct 
	{
		char titre1[50];
		unsigned long duree;
	}chanson;
	typedef struct
	{
		char autuer[50];
		char titre[50];
		chanson *list;//list[10] 
		int anne;
		int nbsh;
	}disque;
	disque *tab;
	int ned,i,j,k,t=0,glob=0;
int main()
{
	chanson reach;
	int show,i,j,k;
	tab=(disque*)calloc(10,sizeof(disque));
	for(i=0;i<10;i++)
	{
		tab[i].list=(chanson*)calloc(10,sizeof(disque));
	}
	//open file
	open1();
	while(1)
	{
		printf("1-Show the disks\n2-Add a new disk\n3-Modife a disk\n4-Delete a disk\n5-Exit\n-->");
		scanf("%d",&show);
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
	pt=fopen("E:\\WindowsImageBackup\\first_file.txt","r");
	if(pt==NULL)
	{
		printf("There has been an error");
		return(1);
	}
	while(!feof(pt))
	{
		fscanf(pt,"%c",&thing[i]);
		i++;
	}
}
int show_the_disks(void)
{
	for(i=0;i<strlen(thing);i++)
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
	char b;
	char tab2[20];
	for(h=0;h<sizeof(tab2);h++)
	{
	 	tab2[h]=NULL;
	}
	for(i=0;i<strlen(thing),thing[i]!=NULL;i=val)
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
				tab2[m]=NULL;
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
	int i1=0,i2=0,i3=0,s=strlen(tab2)-1,r=0,b=0,k=0;
	switch(j)
	{
		case  0 : for(k=0;k<h-1,tab2[k]!=NULL;k++) tab[t].autuer[k]=tab2[k];break;
		case 19 : for(k=0;k<h-1,tab2[k]!=NULL;k++) tab[t].titre[k]=tab2[k];break;
		case 76 : for(k=0;k<h-1,tab2[k]!=NULL;k++) tab[t].list[ned].titre1[k]=tab2[k];break;
		case 95 : while(tab2[i1]!=NULL&&tab2[i1]!='.')
						{		
							b=tab2[i1]-'0';		
							if (b==-48)break;	
							r=r+b*pow(10,s);	
							s--;i1++;	
						};
						tab[t].list[ned].duree=r;break;
		case 57 : while(tab2[i1]!=NULL)
						{		
							b=tab2[i1]-'0';		
							if (b==-48)break;	
							r=r+b*pow(10,s);	
							s--;i1++;	
						};
						tab[t].nbsh=r;break;
		case 38 :while(tab2[i1]!=NULL)
						{		
							b=tab2[i1]-'0';		
							if (b==-48)break;	
							r=r+b*pow(10,s);	
							s--;i1++;	
						};	
						tab[t].anne=r;
						break;
		case 114 :while(tab2[i1]!=NULL)
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
	char tab3[5];
	getchar();
	printf("autuer:");
	gets(tab[t].autuer);
	printf("le titre de disk:");
	gets(tab[t].titre);
	printf("anne:");
	scanf("%d",&tab[t].anne);
	printf("nomber des chanson:");
	scanf("%d",&tab[t].nbsh);
	getchar();
	for(i=0;i<tab[t].nbsh;i++)
	{
		printf("titre de chanson %d:",i+1);
		gets(tab[t].list[i].titre1);
		printf("duree de chanson(s):");
		scanf("%d",&tab[t].list[i].duree);
		getchar();
	}
	import_to_file();
}
int modife_a_disk()
{
	int mod,x=0,s=0,r=0;
	char tab4[50];
	getchar();
	printf("give the name of the autor that you want to modife his disk:");
	gets(tab4);
	for(i=0;i<10;i++)
	{
		if (tab[i].autuer==tab4)
			t=1;
			break;
	}
	if (t==0)
	{
		printf("this name dose not exist try to show the disk first :)");
		return(0);
	}
	i=i+1;
	while(1)
	{
		printf("what do you want to  modife?\n1-autor\n2-title of disk\n3-date of disk\n4-nomber of songs\n5-a song\n6-End modification\n");
		scanf("%d",&mod);
		getchar();
		switch(mod)
		{
			case 1 : 	printf("give the new name:");
						gets(tab4);
						for(k=0;k<strlen(tab4);k++)
							tab[i].autuer[k]=tab4[k];
						break;
			case 2 : 	printf("give the new disk title:");
						gets(tab4);
						for(k=0;k<strlen(tab4);k++)
							tab[i].titre[k]=tab4[k];
						break;
			case 3 : 	printf("give the new date of disk:");
						scanf("%d",&r);
						getchar();
						tab[i].anne=r;
						break;
			case 4 :	printf("give the new nomber:");
						scanf("%d",&r);
						getchar();
						printf("%d %d",tab[i].nbsh,r);
						if(tab[i].nbsh<r)
							{
								for(j=tab[i].nbsh;j<r;j++)
								{
									printf("give the new name of the song %d :",j);
									gets(tab4);
									printf("give its long (s):");
									scanf("%d",&s);
									getchar();
									for(k=0;k<strlen(tab4);k++)
									tab[i].list[j].titre1[k]=tab4[k];
									tab[i].list[j].duree=s;
								}
							}
						else
							{
								for(j=r;j<tab[i].nbsh;j++)
								{
									for(k=0;k<strlen(tab[i].list[j].titre1);k++)
									{
										tab[i].list[j].titre1[k]=NULL;
									}
									tab[i].list[j].duree=NULL;
								}
							}
						tab[i].nbsh=r;
						break;
			case 5 :	printf("give the nomber of the song:");
						scanf("%d",&r);
						getchar();
						printf("give the new name of the song:");
						gets(tab4);
						printf("give its long (s):");
						scanf("%d",&s);
						getchar();
						for(k=0;k<strlen(tab4);k++)
							tab[i].list[r].titre1[k]=tab4[k];
						tab[i].list[r].duree=s;
						break;
			default : printf("Modification ended\n");	
		}
		if (mod==6)
		break;
		import_to_file();
	}
	
}
int Delete_a_disk()
{
	void vid_the_removed(int);
	int del;
	printf("whish one do you want to delete\n");
	for(i=0;i<10&&tab[i].autuer[0]!=NULL;i++)
		printf("%d-%s\n",i+1,tab[i].autuer);
	scanf("%d",&del);
	vid_the_removed(del);
	for(i=del;i<10&&tab[i+1].autuer[0]!=NULL;i++)
	{
		for(k=0;k<50;k++)
		{
			tab[i].autuer[k]=tab[i+1].autuer[k];
			tab[i].anne=tab[i+1].anne;
			tab[i].nbsh=tab[i].nbsh;
			tab[i].titre[k]=tab[i+1].titre[k];
			for(j=0;j<50;j++)
				tab[i].list[j].titre1[k]=tab[i+1].list[j].titre1[k];
			tab[i].list[j].duree=tab[i+1].list[j].duree;
		}
	}
	import_to_file();
}
void import_to_file(void)
{
			pt=fopen("E:\\WindowsImageBackup\\first_file.txt","w");
		for(j=0;j<glob+1;j++)
		{
			
			fprintf(pt,"autuer: %s\n",tab[j].autuer);
			fprintf(pt,"titre de disque: %s\n",tab[j].titre);
			fprintf(pt,"anne: %d\n",tab[j].anne);
			fprintf(pt,"nomber des chanson: %d\n",tab[j].nbsh);
			for(k=0;k<tab[t].nbsh;k++)
			{
				fprintf(pt,"chanson: %d\n",k+1);
				fprintf(pt,"titre: %s\n",tab[j].list[k].titre1);
				fprintf(pt,"duree: %d\n",tab[j].list[k].duree);
			}
			fprintf(pt,"\n");
		}
			fclose(pt);
}
void vid_the_removed(int del)
{
	for(i=0;i<50;i++)
	{
		tab[del].autuer[i]=NULL;
		tab[del].anne=NULL;
		tab[del].nbsh=NULL;
		tab[del].titre[i]=NULL;
		for(j=0;j<50;j++)
			tab[del].list[j].titre1[i]=NULL;
		tab[del].list[j].duree=NULL;
	}
}