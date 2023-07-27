#include <stdio.h>
#include <ctype.h>

void main ()
{
    char a,b,c,d,e,f;
    printf("Enter Your Name in all Capital\n");
    scanf("%c %c %c %c %c %c",&a,&b,&c,&d,&e,&f);
    char a_lower,b_lower,c_lower,d_lower,e_lower,f_lower;
    a_lower = tolower(a);
    b_lower = tolower(b);
    c_lower = tolower(c);
    d_lower = tolower(d);
    e_lower = tolower(e);
    f_lower = tolower(f);
    printf("\n%c\t%d\t%c\t%d\n%c\t%d\t%c\t%d\n%c\t%d\t%c\t%d\n%c\t%d\t%c\t%d\n%c\t%d\t%c\t%d\n%c\t%d\t%c\t%d",a,a,a_lower,a_lower,b,b,b_lower,b_lower,c,c,c_lower,c_lower,d,d,d_lower,d_lower,e,e,e_lower,e_lower,f,f,f_lower,f_lower);
}