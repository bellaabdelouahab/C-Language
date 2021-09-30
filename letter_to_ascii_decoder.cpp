#include<stdio.h>
#include<math.h>
int main()
{
	int x,i,y,f,t,s,tab[255],r;
	char a[100];
	int tab1[100];
	printf("******************Hello there this program can help you code and decode a letter using table ASCII********************* \n");	
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
		   		r=1;
		   		x=x-i;
		    }
			t=t-1;
		}
		tab[f-1]=s;//affecte les valuer dans un tablue
		f++;
	}
	printf("For coding   enter 1\n");
	printf("For decoding enter 0\n");
	scanf("%d",&x);/*il y a une espaace ici*/
	scanf("%c",&r);
	if(x==1)
	{
		printf("Write your letter\n--> ");
		for(i=0;i<100;i++)
			{
				
				scanf("%c",&a[i]);
				//ce partier pour sortie la boucle
				if(a[i]==10)
					break;
			}
			printf("Your letter is :\n");
			for(i=0;i<100;i++)
			{
				//ce partier pour sortie la boucle et ecrire le ;essage en binire
				if(a[i]==10)
					break;
				printf("%d ",tab[int(a[i])]);
			}
	}
	else if (x==0)
	{
		printf("Write the coded letter\n NB:make a speace between each eight bits\n-->");
		for(i=1;i<100;i++)
		{
			scanf("%d",&tab1[i]);
			if (tab1[i]==3)
			{
				break;
			}
			for(s=0;s<255;s++)
			{
				if(tab1[i]==tab[s])
				printf("%c",s);
			}
		}
	}
	else 
	printf("erreur!!!!!!");
}
