/* C Program to Check Whether Number is Even or Odd
4 - January-2024
Aditya Kumar
*/

#include <stdio.h>

int main ()
{
  int n;
  printf ("Enter A Number : ");
  scanf ("%d", &n);

  if (n % 2 == 0)
    {
      printf ("%d Is A Evem Number", n);
    }

  else
    {
      printf ("%d Is A Odd Number", n);
    }
}
