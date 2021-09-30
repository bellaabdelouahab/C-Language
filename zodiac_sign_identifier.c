#include<stdio.h>
int main()
    {
        int x,y;
        printf("on this program we are going to show your zodiac ");
        printf("\nenter your birthday day/month\n (example:9/4)\n ");
        scanf("%d/%d",&x,&y);
        if (x<=20)
        {
            switch (y)
            {
                case 1 : printf("capricorne");break;
                case 3 : printf("pissons");break;
                case 4 : printf("belier");break;
                case 5 : printf("Taureau");break;
                case 2 : printf("verseau");break;
            }
        }
        else
            if (x>=20)
            {
                switch (y)
                {
                    case  1 : printf("verseau");break;
                    case  3 : printf("belier");break;
                    case  4 : printf("taureau");break;
                    case  5 : printf("gemeaux");break;
                    case  2 : printf("poisson");break;
                }
            }
        if(x<=22)
        {
            switch (y)
            {
                case 12 : printf("sagittare");break;
                case  6 : printf("gemeaux");break;
                case  7 : printf("canceer");break;
                case 11 : printf("scorpion");break;
            }
        }
        else
            if (x>=22)
            {
                switch (y)
                {
                    case 12 : printf("capricorne");break;
                    case  6 : printf("cancer");break;
                    case  7 : printf("lion");break;
                    case 11 : printf("sagittaire");break;
                }
            }
        if (x<=24)
        {
            switch (y)
            {
                case  8 : printf("lion");break;
                case  9 : printf("vierge");break;
                case 10 : printf("balence");break;
            }
        }
        else
            if (x>=24)
            {
                switch (y)
                {
                    case  8 : printf("vierge");break;
                    case  9 : printf("balence");break;
                    case 10 : printf("scorpion");break;
                }
            }
    }


