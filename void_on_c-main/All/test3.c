#include<stdio.h>
int p=4;
int main()
{
    int x=2;
    myfunction(x);
    myfunction(x+2);
    return 0;
}
void myfunction (int A)
{
    static int s=10;
    s++;
    printf("%d\n",A+s+p);
}