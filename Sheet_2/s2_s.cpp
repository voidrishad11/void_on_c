#include<iostream>
using namespace std;
int main()
{
    long long n,a,b,i,j,sum,temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        sum=0;
        cin>>a>>b;
        if (a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        for(j=a+1;j<b;j++)
        {
            if (j%2 !=0)
                sum = sum +j;
        }
        cout <<sum<<"\n";
    }
    return 0;
}





