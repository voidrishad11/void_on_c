#include<iostream>
using namespace std;
int main()
{
    //[0,25], (25,50], (50,75], (75,100]
    double a;
    cin>>a;
    if (a>=0 && a<=25)
    {
        cout <<"Interval [0,25]\n";
    }
    else if (a>25 && a<=50)
    {
        cout <<"Interval (25,50]\n";
    }
    else if (a>50 && a<=75)
    {
        cout <<"Interval (50,75]\n";
    }
    else if (a>75 && a<=100)
    {
        cout <<"Interval (75,100]\n";
    }
    else
    {
        cout <<"Out of Intervals\n";
    }
    return 0;
}
