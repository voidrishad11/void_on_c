#include<stdio.h>

int main()
{
    int n = 0;
    while (n<10)
    {
        n++;
        if (n%2==0)
        {
            continue; /*This program will not read the following lines after a continue statement. 
                     In this case the loop will break out without printing the even values. Whereas 
                     we use break statement to completely break the loop and not continueing further 
                     incrementation of the loop*/
        }
        printf("%d\n",n);
    }
    return 0;
}