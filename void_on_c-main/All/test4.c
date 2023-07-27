#include<stdio.h>
int main()
{
    int a,b,z;
    a=1,b=4;
    while(a<b)
    {
        a=2*a;
        b=b+1;
    }
    z=b;
    printf("%d\n",z);
}
