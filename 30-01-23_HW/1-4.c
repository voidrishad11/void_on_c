/*3. Write a program that prints the numbers 1 to 4 on the same line. Write the program using the
following methods.*/

#include <stdio.h>

int main()
{
    //a. Using one printf statement with no conversion specifiers.
    printf("1234\n");

    //b. Using one printf statement with four conversion specifiers.
    printf("%d%d%d%d\n",1,2,3,4);

    //c. Using four printf statements.
    printf("%d",1);
    printf("%d",2);
    printf("%d",3);
    printf("%d\n",4);
}