#include<stdio.h>
#include<stdlib.h>
int i;
struct s_point 
{
	char x;
	float y;
	float z;
};
main()
{
	int NP;
	struct s_point hei(struct s_point,int );
	void heli55555(struct s_point *x,int i);
	struct s_point *Courbe;
	printf("donnez combiane des note tu va reserve : ");
	scanf("%d",&NP);
	Courbe=(struct s_point *)malloc(NP*sizeof(struct s_point));
	for(int i=0;i<NP;i++)
	{
		Courbe[i]=hei(Courbe[i],i);
	}
	printf("fin take");
		for(int i=0;i<NP;i++)
	{
		heli55555(Courbe,i);
	}
	
}
struct s_point hei(struct s_point Courbe1,int i)
{
	printf("\ndonnez le point %d : \n ",i+1);
	if (i==0)
	printf("example: A(x,y)\n");
	scanf("%c(%f;%f)",&Courbe1.x,&Courbe1.y,&Courbe1.z);
	getchar();
	return(Courbe1);
}
 void heli55555(struct s_point *Courbe,int i)
{

	printf("\nle point %c a des cordone : \nx=%g\ny=%g",(Courbe+i)->x,(Courbe+i)->y,(Courbe+i)->z);	
}

