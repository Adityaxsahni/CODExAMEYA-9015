/* C Program to Calculate Fahrenheit to Celsius
15-December-2023
Aditya Kumar
*/
#include<stdio.h>
main()
{
        float n;
        printf("Enter The Temperature In Fahrenheit : ");
        scanf("%f",&n);

        printf(" %f° Fahrenheit = %f° Celsius " , n , (n-32)*5/9);
}
