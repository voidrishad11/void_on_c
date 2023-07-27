#include<stdio.h>

int main ()
{
    int a,b,sum,sub,mul;
    float div;
    char sign;
    printf("Enter two number: \n");
    scanf("%d %d",&a,&b);
    printf("\nEnter an operator: \n");
    scanf(" %c",&sign);
    switch (sign)
    {
        case '+':
        {
            sum=a+b;
            printf("\nSum = %d\n",sum);
            break;
        }
        case '-':
        {
            sub=a-b;
            printf("\nSub = %d\n",sub);
            break;
        }
        case '*':
        {
            mul=a*b;
            printf("\nMul =%d\n",mul);
            break;
        }
        case'/':
        {
            div=(float)a/b;
            printf("\nDiv=%f\n",div);
            break;
        }
        default:
        {
            printf("\nUnexpected operator\n");
            break;
        }
    }
}
