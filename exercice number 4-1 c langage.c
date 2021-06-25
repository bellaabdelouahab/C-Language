#include<stdio.h>
int main()
{
    int x,y,z,max,min;
    printf("entre trois nomber:");
    scanf("%i %i %i",&x,&y,&z);
    if (x>=y && x>=z)
    {
        max=x;
        if (y<z)
          min=y;
          else
        min=z;
                printf("le max est %i et le min est %i",max,min);

    }
    else
        if (x<=y && z<=y)
    {
        max=y;
        if (z<x)
            min=z;
            else
                min=x;
                            printf("le max est %i et le min est %i",max,min);

    }
        else
    	{
			if (z>=x && z>=y)
	        {
	            max=z;
	            if (x<y)
	                min=x;
	                else
	                min=y;
	    
	                            printf("le max est %i et le min est %i",max,min);
			}
		}
			
			if (x=y)
			{
	            printf("\n%i=%i",x,y);
	            printf("\nil y a une egalite");
	    	}
	        else
	        {			
	            if (x=z)
	            {
	            printf("\n%i=%i",x,z);
	            printf("\nil y a une egalite");
	        	}
	            else
	            {
				    if (y=z)
	                printf("\n%i=%i",y,z);
	                printf("\nil y a une egalite");
	        	}
			}
}

