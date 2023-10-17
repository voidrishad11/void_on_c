#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    long long a[100],sum=0,i,n,sub,j,avg;
    //double avg;
    j=0;
    while(1){
        cin>>n;
        if(n==0){
           break;
        }
        else{
            sum = 0;
            avg = 0;
            for(i=0;i<n;i++){
                cin>>a[i];
                sum = sum + a[i];
            }
            avg = sum/n;
            sub = 0;
            for(i=0;i<n;i++){
                sub = sub + abs(avg-a[i]);
            }
            j++;
            cout<<"Set #"<<j<<"\n"<<"The minimum number of moves is "<<sub/2<<".\n";
        }
        cout<<"\n";
    }
    return 0;
}
