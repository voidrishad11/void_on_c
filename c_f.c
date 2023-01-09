#include<stdio.h>
#include<math.h>

void main()
{
    float c,f;
    printf("Please Enter the temperature\n");
    scanf("%f",&c);
    f= (1.8*c) + 32;
    printf("The %.2f degree Celcius is equivalent to %.2f degree Fahrenheit\n",c,f);
}