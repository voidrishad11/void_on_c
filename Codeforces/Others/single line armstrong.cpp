#include<iostream>
#include<cmath>
using namespace std;
int count(int x)
{
    int c=0;
    while(x!=0){
        x=x/10;
        c++;
    }
    return c;
}
int main()
{
    int n,temp,sum,rem,total;
    cin>>n;
    temp = n;
    sum = 0;
    total = count(n);
    while(temp!=0){
        rem = temp%10;
        sum = sum + (pow(rem,total));
        temp = temp/10;
    }
    if (sum == n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
