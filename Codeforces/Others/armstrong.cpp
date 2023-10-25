#include<iostream>
#include<cmath>
using namespace std;
long long digit_count(long long m)
{
    long long c;
    c=0;
    while(m!=0){
        m = m/10;
        c++;
    }
    return c;
}
long long arm(long long n)
{
    long long sum,r,temp;
    temp = n;
    sum = 0;
    while(temp!=0){
        r = temp%10;
        temp = temp/10;
        sum = sum + pow(r,digit_count(n));
    }
    return sum;
}
int main()
{
    long long n;
    while(1){
        cin>>n;
        if (arm(n)==n){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
