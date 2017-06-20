
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   char str[100];
   FILE *fptr;
   char fname[20]="test.txt"; 
   fptr=fopen(fname,"w");	
   if(fptr==NULL)
   {
      printf(" Error in opening file!");
      exit(1);
   }
   printf(" Input a sentence for the file : ");
   fgets(str, sizeof str, stdin);
   fprintf(fptr,"%s",str);
   fclose(fptr);
   printf("\n You have  written string(%s)to The text %s...!!\n\n",str,fname);
   return 0;
}

