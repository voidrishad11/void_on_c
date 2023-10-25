#include<iostream>
using namespace std;
int main()
{
    long long a[100],i,n,c,j,k,temp=0,test_case,in;
    cin>>test_case;
    for(in=1;in<=test_case;in++){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        c=0;
        for(j=0;j<n;j++){
            for(k=0;k<n-1;k++){
                if(a[k]>a[k+1]){
                    swap(a[k], a[k+1]);
                    c++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<c<<" swaps.\n";
    }
    return 0;
}
