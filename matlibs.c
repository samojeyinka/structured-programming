#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Madlibs game6

   char color[20];
   char pluralNoun[20];
   char celebrity[20];

   printf("Enter a color: ");
   scanf(" %s", color);
   printf("%s\n", color);
   printf("Enter a plural noun: ");
   scanf(" %s", pluralNoun);
   printf("%s\n", pluralNoun);
   printf("Enter a celebrity name: ");
   scanf(" %[^\n]", celebrity);
   printf("%s\n", celebrity);

   printf("\n");
   printf("%s are red\n", color);
   printf("%s are blue\n", pluralNoun);
   printf("I love %s", celebrity);

   return 0;
}
