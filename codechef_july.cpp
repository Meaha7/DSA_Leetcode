#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    int numTest;
    cin>>numTest;
    while(numTest--){
        int len1;
        cin>>len1;
        long Sum=0;
        long arr[len1];

        for(int i=0;i<len1;i++){
            cin>>arr[i];
            Sum+=arr[i];
        }

        long double average=((long double)Sum/len1);
        long tempSum=Sum;
        long long smallest=pow(10,14);
        int flag=0;
        cout<<"Average: "<<average<<endl;

        for(int i=0;i<len1;i++){
            tempSum-=arr[i];
            cout<<"tempsum: "<<tempSum<<endl;

            if((long double)tempSum/(len1-1)==average)
            {
                cout<<"new average: "<<(long double)tempSum/(len1-1)<<endl;
                flag=1;
                if(arr[i]<smallest){
                    smallest=arr[i];
                }
            }
            tempSum+=arr[i];
        }

        if(flag==0) cout<<"Impossible"<<endl;

        else cout<<smallest<<endl;

    }
    return 0;

}
