#include <stdio.h>


 int main() {
   char c;
   printf("Entrer un caractère:");
   c = getchar();
   putchar(c);
   const char* toto = "\non est super content!";
   puts(toto);

}


