#include<stdio.h>
#include<stdlib.h>
#define Nfois 5
    enum {FALSE,TRUE};

int main()
{ int move;
    printf("                            THE MAZE RUNNER\n");
    printf("                                 _________________________________________________\n");
    printf("                                |                        |                   |    |\n");
    printf("                                |               ____ ____|     ____          |    |\n");
    printf("                                |    |    |    |    |         |         |         |\n");
    printf("                                |____|    |    |    |     ____|     ____|____ ____|\n");
    printf("                                |         |         |         |    |              |\n");
    printf("                                |     ____|     ____|____     |    |              |\n");
    printf("                                |         |                   |         |    |    |\n");
    printf("                                |____     |____      ____ ____|____ ____|    |____|____\n");
    printf("                                |    |         |         |                   |         \n");
    printf("                            ____|    |____ ____|____     |     ____ ____ ____|     ____\n");
    printf("                                                    |    |              |         |\n");
    printf("                            ____ __________         |    |____ ____     |     ____|\n");
    printf("                                |    |         |         |         |         |    |\n");
    printf("                                |    |     ____|____ ____|     ____|____ ____|    |\n");
    printf("                                |         |              |              |         |\n");
    printf("                                |     ____|          ____|____          |____     |\n");
    printf("                                |         |    |              |    |              |\n");
    printf("                                |         |    |____ ____     |    |     ____ ____|\n");
    printf("                                |    |         |                   |              |\n");
    printf("                                |____|____ ____|____ ____ ____ ____|____ ____ ____|\n");
    printf("\n controle\n 2 down   8 up\n 4 left   6 right\n");
    scanf("%d",&move);
    system("cls");

}
