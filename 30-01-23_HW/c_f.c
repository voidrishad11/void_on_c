/*5. Write a program that asks the user to enter current temperature in Celsius and convert it into
Fahrenheit temperature.*/

#include<stdio.h>
#include<math.h>

void main()
{
    float c,f;
    printf("Enter current temperature in Celsius\n");
    scanf("%f",&c);
    f= (1.8*c) + 32;
    printf("The %.2f degree Celcius is equivalent to %.2f degree Fahrenheit\n",c,f);
}