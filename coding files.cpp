#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void getting_the_code_ready(int *);
void coding(char*,FILE*,int);
int decoding(char*,FILE*,int);
int checking_if_valide(char*);
int tab[255];
int tab1[255];
char thing[100000];
char filename[100];
int i=0,x,j;
int main()
{
	//E:\\WindowsImageBackup\\first_file.txt
	//01101000 01100101 01101100 01101100 01101111 00100000 01110100 01101000 01100101 01110010 01100101 00001010 
	getting_the_code_ready(tab);
	char k;
	FILE *pt;
	printf("******************Hello there this program can help you code and decode a file using table ASCII********************* \n");
	printf("enter the file path:\n");
	scanf("%s",&filename);	
	pt=fopen(filename,"r");
	if(pt==NULL)
	{
		printf("There has been an error");
		return(1);
	}
	printf("Do you want to 1-code or 2-decode?\n");
	scanf("%d",&x);
	while(!feof(pt))
	{
		fscanf(pt,"%c",&thing[i]);
		i++;
	}
	fclose(pt);
	if(x==2)
	{
		if(1==checking_if_valide(thing))
			printf("Your file has been decoded\n");
		else
		{
			printf("\nYour file isn\'t compatible with this methde of decoding !!!\n make sure you\'ve a space between each 8 numbers\n");
			printf("do you still want to decode it ?\n");
			scanf("%s",&k);
			if(k=='n'||k=='N')
				return(0);
			else
				getchar();	
		}
	}
	pt=fopen(filename,"w");
	if(x==1)
	coding(thing,pt,k);
	else if(x==2)
	decoding(thing,pt,k);
	fclose(pt);
}
void getting_the_code_ready(int *tab)
{
	int y,x,s,t,i,r,f=0;
	for(y=0;y<256;y++)
	{
		s=0;
		x=y;	
		t=8;
		for(i=128;i>=1,x>0;i=(i/2))
		{
			if(x-i<0)
			r=0;
			else
			{
				r=1;
		   		s=s+r*pow(10,t-1);
		   		x=x-i;
		    }
			t=t-1;
		}
		tab[f]=s;//affecte les valuer dans un tablue
		f++;
	}
}
void coding(char *thing,FILE *pt,int k)
{
	int i;
	for(i=0;i<strlen(thing);i++)
	{
		fprintf(pt,"%08d ",tab[(int)thing[i]]);
	}
}
int checking_if_valide(char*thing)
{
	int i;
	for(i=0;i<strlen(thing);i++)
	{
		
		if((i+1)%9==0)
		{
			i++;
		}
		if(thing[i]==' ')
		return (0);
	}
	return(1);
}
int decoding (char*thing,FILE*pt,int k)
{
	int i,j,x=0,t,b,c=0;
	int f;
	for(f=0;;f+=9)
	{
		x=0;
		t=7;
		for(i=0;i<8;i++)
		{
			b=thing[f+i]-'0';
			x=x+b*pow(10,t);
			t--;	
			if (f>strlen(thing))
			{
				printf("decoding complete");
				return(0);
			}
		}
		for(j=0;j<255;j++)
		{
			if(x==tab[j])
			{
				c=1;
				fprintf(pt,"%c",j);
			}
		
		}
	}
	
		if(c==0)
			{ 
				printf("But, are you sure that this is a binary code ?\n");
				return(0);
			}
}
