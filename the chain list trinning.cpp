#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
struct note
{
	char name[10];
	float note1;
	float note2;
	float note3;
	float note4;
	char class_[5];
	struct note *next=NULL;
};
void ajout_to_beginning(note**first,char *clas, char *nname,float *notte)
{
	
	note *p=(note*)malloc(sizeof(note));
	for(int i=0;i<5;i++)
	{
		p->class_[i]=clas[i];
	}
	for(int i=0;i<10;i++)
	{
		p->name[i]=nname[i];
	}
	p->note1=*(notte+0);
	p->note2=*(notte+1);
	p->note3=*(notte+2);
	p->note4=*(notte+3);
	p->next=NULL;
	if(*first==NULL)
	{
		*first=p;
	}
	else
		p->next=*first;
		*first=p;
}
void ajout_to_end(note**first,char *clas, char *nname,float *notte)
{
	note *q=*first;
	note *p=(note*)malloc(sizeof(note));
	for(int i=0;i<5;i++)
	{
		p->class_[i]=clas[i];
	}
	for(int i=0;i<10;i++)
	{
		p->name[i]=nname[i];
	}
	p->note1=*(notte+0);
	p->note2=*(notte+1);
	p->note3=*(notte+2);
	p->note4=*(notte+3);
	p->next=NULL;
	if(q!=NULL)
	{
		while(q->next)
		{
			q=q->next;
		}
	

		q->next=p;
	}
	else
	*first=p;
}
void dellete(note**first, char *nname)
{
	note *p=*first;
	if(p)
	{
		if(p->name[0]==nname[0])
		{
			*first=p->next;
			
		}
		else
			while(p->next)
				if(p->next->name[0]!=nname[0])
					p=p->next;	
				else
					p->next=p->next->next;
					
			}
	}
void show(note**first)
{
	note *q=*first;
	while(q)
	{
		printf("%10s %5s %03.2f %03.2f %03.2f %03.2f \n",q->name,q->class_,q->note1,q->note2,q->note3,q->note4);
		q=q->next;
	}
}
int main()
{
	typedef struct note note;
	note *first=NULL;
	char out[3];
	int i;
	do
	{
		char nname[10];
		char clas[5];
		float notte[4]={0};
		printf("give name of the student number %d: ",i+1);
		gets(nname);
		printf("give class of the student number %d: ",i+1);
		gets(clas);
		printf("give first note of the student number %d: ",i+1);
		scanf("%f",&notte[0]);
		printf("give second of the student number %d: ",i+1);
		scanf("%f",&notte[1]);		
		printf("give third of the student number %d: ",i+1);
		scanf("%f",&notte[2]);
		printf("give fourth of the student number %d: ",i+1);
		scanf("%f",&notte[3]);
		ajout_to_end(&first,clas,nname,notte);
		printf("do you want to add a new one ?\n");
		scanf("%s",&out);
		getchar();
		i++;
	}while(out[0]=='y'&&out[1]=='e'&&out[2]=='s'||out[0]=='o'&&out[1]=='k');
	printf("give the name of the student that you want to delete: \n");
	char nname1[10];

	scanf("%s",nname1);
	printf("you enswer is : %s\n",nname1);
	dellete(&first,nname1);
	show(&first);
	
	return(0);
}

