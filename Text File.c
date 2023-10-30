#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *file;

   // use appropriate location if you are using MacOS or Linux
   file = fopen("program.txt","w");

   if(file == NULL)
   {
      printf("Error!");
      exit(1);
   }

   printf("Enter num: ");
   scanf("%d",&num);

   printf(file,"%d",num);
   fclose(file);

   return 0;
}
