#include <bits/stdc++.h>
using namespace std;

int k;
bool c(const int &a,const int &b){
    return abs(a-k) < abs(b-k);
}

int main(){
    int numTest,len;
    cin>>numTest;

    for(int i=0;i<numTest;i++){
        cin>>len>>k;
        vector<int> arr(len);

        for(int j=0;j<len;j++){
            cin>>arr[j];
        }

        stable_sort(arr.begin(),arr.end(),c);
        for(auto j:arr)
            cout<<j<<" ";
        cout<<endl;
    }
	return 0;
}
