/* C Program to Check Whether a Number is Positive, Negative, or Zero
04- January-2024
Aditya Kumar
*/

#include <stdio.h>

int main ()
{
  int n;

  printf ("Enter The Number : ");
  scanf ("%d", &n);

  if (n == 0)
    {
      printf ("You Have Enter Zero");
    }

  else if (n > 0)
    {
      printf ("%d Is A Positive Number", n);
    }

  else
    {
      printf ("%d Is A Negative Number", n);
    }

  return 0;
}
