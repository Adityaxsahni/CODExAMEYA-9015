/* C Program to Swap Two Numbers

24-December-2023

Aditya Kumar
*/
#include<stdio.h>
main ()
{
    int a, b, c;
    printf ("Enter The First Number :  ");
    scanf ("%d", &a);
    printf ("Enter The Second Number :  ");
    scanf ("%d", &b);
    c = a;
    a = b;
    b = c;
printf ("After Swapping\nFirst Number = %d\nSecond Number = %d",a , b);
  
}
