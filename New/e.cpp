#include <iostream>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main (){
    int t,np,nc,sum=0,i,j,flag=1;
    cin>>t;
    while(t--){
        cin>>np;
        int ara[np];
        for(int i=0;i<np;i++){
            cin>>ara[i];
            sum+=ara[i];
        }
        int avg = sum/np;
        sort(ara,ara+np);
        int n = np;
        for(i=0;i<np/2;i++){
            if((ara[i]+ara[n-1])/2!=avg){
                printf("NO\n");
                flag=0;
                break;
            }
            else{
                n--;
            }
        }
        if(flag==1){
            cout<<"YES\n";
        }
        sum = 0;
    }
}
