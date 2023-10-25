#include<iostream>
using namespace std;
long long digit_sum(long long n)
{
    long long sum,rem,temp;
    temp = n;
    sum = 0;
    while(temp!=0){
        rem = temp%10;
        temp = temp/10;
        sum = sum + rem;
    }
    return sum;
}
int main()
{
    long long n;
    while(1){
        cin>>n;
        if (n==0)
            break;
        else{
            while (n>9){
                 n = digit_sum(n);
            }
        }
        cout<<n<<"\n";
    }
    return 0;
}
