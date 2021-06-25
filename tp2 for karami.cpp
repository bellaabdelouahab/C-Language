#include<stdio.h>
#include<math.h>
int arr[3],x,y,z,i;
	struct cord
	{
	char x;
 	float y;
	float z;
	}stdr[3];	
int main()
{
	int ex_max_min_med(int x, int y, int z),ex_max_min_med1(int x, int y, int z),ex_factoriale(int x);
	int ex_pwesonce(int x,int y),ex_void(),ex_nub_egale_ce_deveser(),ex_determinent_matrice(void);
	int ex_convert_to_octale_and_decimale(),ex_calcule_exp(),ex_tamperture_essaouira();
	float ex_max_vleur_tab();
	struct cord ex_cord_point_dans_espace();
	//ecrice la fonction qui tu veux
	(stdr[3])=ex_cord_point_dans_espace;
	//ex_max_min_med1(158,-852,102);
	printf("%c %d %d",men.x,men.y,men.z);
}
int ex_max_min_med                                                (int x, int y, int z){
	int w1,w2,w3;
	printf("******le minimum*****le maximum*****le mediane*********");
	if(x==NULL || y==NULL || z==NULL)
	{
	int x,y,z;
	printf("donnez trois nomber:\n");
	scanf("%d %d %d",&x,&y,&z);
	}
	if (x>y)
	{
		if(x>z)
		{
			if(y<z)
			{
				printf("%d est le max %d est le min %d est le median",x,y,z);
				w1=x;w2=y;w3=z;
			}
			else
			 {
				w1=x;w2=z;w3=y;	
				printf("%d est le max %d est le min %d est le median",x,z,y);
			}
		}
		else
		{
			printf("%d est le max %d est le min %d est le median",z,x,y);
			w1=z;w2=x;w3=y;
		}
	}
	else 
		if(x<y)
		{
			if(y>z)
			{
				if(x>z)
				{
					printf("%d est le max %d est le min %d est le median",y,x,z);
					w1=y;w2=x;w3=z;
				}
				else
				{
					printf("%d est le max %d est le min %d est le median",y,z,x);
					w1=y;w2=z;w3=x;
				}
			}
			else 
			{
				printf("%d est le max %d est le min %d est le median",z,y,x);
				w1=z;w2=y;w3=x;
			}
		}
		else
			printf("il y a une egalite.");

	return(w1,w2,w3);
}	
int ex_max_min_med1/*(?:)*/                                       (int x, int y, int z){
	
	int w1,w2,w3;
	if(x==NULL || y==NULL || z==NULL)
	{
		printf("donnez deux nomber:");
		scanf("%d %d %d",&x,&y,&z);
	}
	arr[0]=x>y?(x>z?x:z):(y>z?y:z);
	printf("le max est %d\n",arr[0]);
	arr[1]=x<y?(x<z?x:z):(y<z?y:z);
	printf("le min est %d\n",arr[1]);
	arr[2]=x<y?(y<z?y:(x<z?z:x)):(x<z?x:(y<z?z:y));
	printf("le median est %d\n",arr[2]);
	return(arr[0],arr[1],arr[2]);
}
int ex_factoriale                                                 (int x){{
	y=1;
	if(x==NULL)
{
printf("dennez un nomber : ");
scanf("%d",&x);
}
while (x>0)
{
	y*=x;
	x--;
}
printf("N!=%d",y);
return(y);
}}
int ex_pwesonce                                                   (int x,int y){
	if(x==NULL||y==NULL)
	{
	printf("donnez x:");
	scanf("%d",&x);
	printf("dennez la peusance n :");
	scanf("%d",&y);
	}
	printf("%d power %d =",x,y);
	z=1	;
	while(y>0)
	{
		z*=x;
		y--;
	}
	printf("%d",z);
	return(z);
}
float ex_max_vleur_tab                                                (void){
	int n;
	float y;
	printf("donnez combine de colone :");
	scanf("%d",&n);
	float j[n];
	for(x=0;x<n;x++)
	{
		printf("donnez le colone %d ",x+1);
		scanf("%f",&j[x]);
	}
	for(x=0;x<n;x++)
	{
		j[x]>j[x+1]?y=j[x]:y=j[x+1];	
	}
	printf("le max dans le tablaeux de reel est %g ",y);
	return(y);
}
void ex_void                                                       (void){
	
}
int ex_nub_egale_ce_deveser                                       (int x){
	if(x==NULL)
	{
	printf("dennez un nomber :");
	scanf("%d",&x);
	}
	z=0;
	for(y=x/2;y>0;y--)
	{
		if(x%y==0)
		z+=y;
	}bool b1=x==z;
	if(x==z)
	{
	 
	printf("%d",b1);
	}
	else
	
	printf("%d",b1);
	return(b1);
}
float ex_convert_to_octale_and_decimale                             (int x){
	int x1,x2;
	if(x==NULL)
	{
	printf("donnez un nomber decimale:");
	scanf("%d",&x);
	}
	printf("%d dans le base octale est : %o\n",x,x1);
	printf("%d nomber dans le base hexadecimale est : %X\n",x,x2);
	return(x1,x2);
}
void ex_calcule_exp                                                (void){
	float z;
	int w,d;
	printf("donnez le nomber et valeure d'arrete");
	scanf("%d %d",&y,&x);
	for(i=0;i<=x;i++)
	{
		d=1;
		for(w=i;w>0;w--)
			d*=w;
		z+=pow(y,i)/d;
	}
	printf("le exp de %d est %f",y,z);
}
void ex_tamperture_essaouira                                       (void){
	int i,N[7],max,min,tp1,tp2,tp3;
	float moy;
	tp3=0;
	for(i=0;i<7;i++)
	{
		printf("donnez %d tempertire:",i+1);
		scanf("%d",&N[i]);
		moy+=N[i];
		if(N[i]<=19) tp1+=1;
		else if(N[i]>=22) tp2+=1;
			else if(N[i]<22&&N[i]>19) tp3+=1;
			if(i==0)
			max=min=N[i];
		else
		{
			if (N[i]>max) max=N[i];
			else if (N[i]<min) min=N[i];
		}
	
	}
	moy/=(i+1);
	printf(" typ1 %d typ2 %d typ3 %d moyane %f max %d min %d",tp1,tp2,tp3,moy,max,min);
}
long long int ex_IEEE745_32bit             /*not complete*/                                         (int x){
/*	if(x==NULL)
	{
		int y;
		printf("dennez un nomber:");
		scanf("%lld",&x);
	}
	if(x<0)
	y=1*pow(10,31);
	x=ex_dicimale_to_binary(x);
*/	
}
int ex_determinent_matrice                                                       (void){
	int det,x[4];
	for(i=0;i<4;i++)
	{
		printf("donnez la valeure %d",i+1);
		scanf("%d",&x[i]);
	}
	det=0;
	det=x[0]*x[3]-x[2]*x[1];
	return (det);
}
struct cord ex_cord_point_dans_espace                         (void){
	struct cord nmil;
		printf("donnez un point\n example: A(x,y)\n");
		scanf("%c(%f,%f)",&nmil.x,&nmil.y,&nmil.z);
	return (nmil);
}
