#include<stdio.h>

void main()
{
    char c;
    printf("Enter a letter\n");
    scanf("%c",&c);
    if( c =='a' || c =='e' || c =='i' || c =='o' || c =='u' || c =='A' || c =='E' || c =='I' || c =='O' || c =='U')
    {
        printf("The letter is a vowel\n");
    }
    else 
    {
        printf("The letter is a consonant\n");
    }
}