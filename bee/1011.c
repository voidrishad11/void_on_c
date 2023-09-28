#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main()
{   
    int r;
    scanf("%d",&r)
    float area = ((4.0/3)*(pow(r,3))*PI);
    printf("VOLUME = %.3f\n",area);
    return 0;
}