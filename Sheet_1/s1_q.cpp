#include<iostream>
using namespace std;

int main()
{
    double a,b;
    cin >>a>>b;
    if (a == 0 && b == 0)
        cout <<"Origem\n";
    else if (a == 0 && b!=0)
        cout <<"Eixo Y\n";
    else if (b==0 && a!=0)
        cout <<"Eixo X\n";
    else if (a>0 && b>0)
       cout <<"Q1\n";
    else if (a>0 && b<0)
       cout <<"Q4\n";
    else if (a<0 && b>0)
       cout <<"Q2\n";
    else
        cout <<"Q3\n";
    return 0;
}

