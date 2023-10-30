#include<stdio.h>
int main()
{
    FILE *file;
   file = fopen("test.txt","w");
   if(file==NULL)
   {
     printf("File does not exist");

   }
   else
   {
       printf("File is opened");
       fclose(file);

    }


   getch ();
}

