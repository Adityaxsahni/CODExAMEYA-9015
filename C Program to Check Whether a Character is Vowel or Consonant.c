/*C Program to Check Whether a Character is Vowel or Consonant
8 - January-2024
Ankit Kumar Singh
*/

#include <stdio.h>

int main()
{
    char c;
    printf("Enter A Character : ");
    scanf("%c",&c);
    
    if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
    {
            printf("%c Is A Vowel",c);
    }
    
    else
    {
            printf("%c Is A Consonant",c);
    }
}
