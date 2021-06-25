#include<stdio.h>
int main()
{
    int x,y,z,max,min;
    printf("entre trois nomber:");
    scanf("%i %i %i",&x,&y,&z);
    if (x>y && x>z)
    {
        max=x;
        if (y<z)
          min=z;
          else
        min=y;
                printf("le max est %i et le min est %i",max,min);

    }
    else
        if (x<y && z<y)
    {
        max=y;
        if (x<y)
            min=y;
            else
                min=x;
                            printf("le max est %i et le min est %i",max,min);

    }
        else
            if (z>x && z>y)
        {
            max=z;
            if (x<y)
                min=x;
                else
                min=y;
                            printf("le max est %i et le min est %i",max,min);
        }
        else
        if (x=y)
            printf("%i=%i",x,y);
        else
            if (x=z)
            printf("%i=%i",x,z);
            else
                if (y=z)
                printf("%i=%i",y,z);
        printf("\nil y a une egalite");


}
