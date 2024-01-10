/* C Program to Calculate Fahrenheit to Celsius
27-December-2023
Ankit Kumar Singh
*/
#include<stdio.h>
main()
{
        float n;
        printf("Enter The Temperature In Fahrenheit : ");
        scanf("%f",&n);

        printf(" %f° Fahrenheit = %f° Celsius " , n , (n-32)*5/9);
}