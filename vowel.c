#include <stdio.h>
void main()
{
    char c;
    int lcv, ucv;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    
    lcv = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    
    ucv = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
   
    if (lcv || ucv)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
   getch()
}
