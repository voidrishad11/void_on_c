#include<stdio.h> 
int main () 
{ 
    int m,n,i; 
    while(scanf("%d %d",&m,&n) == 2)
    { 
        i=m*n; 
        printf("%d\n",i-1); 
    } 
    return 0; 
}