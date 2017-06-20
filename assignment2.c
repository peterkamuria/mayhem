#include <stdio.h>
#include <string.h>

int main()
{
  int c, d;
  FILE *file1, *file2;
  char string [100], *begin, *end, temp;

  file1 = fopen("test.txt", "rt");
  if (file1 == NULL)
    {
      printf ("Error - Couldn't open file\n");
      return (-1);
    }

  fgets(string, 100, file1);

  fclose (file1);
  begin = string;
  end = begin + strlen(string) - 1;

  while (end > begin)
    {
      temp = *begin;
      *begin = *end;
      *end = temp;

      ++begin;
      --end;
    }  

  file2 = fopen("FinalFile.txt", "w");
  fprintf (file2, "%s", string);
  fclose (file2);
  printf("**********The string in reverse***************");
  printf ("%s\n", string);

  return 0;
}
