#include<iostream>
#include<cmath>

using namespace std;
int main()
 {
    int numTest,len,q,temp;
    cin>>numTest;

    for(int i=0;i<numTest;i++){
        cin>>len;
        int a[len],b[len],max1=0;

        for(int j=0;j<len;j++){
            cin>>a[j];
        }
        for(int j=0;j<len;j++){
            cin>>b[j];
            max1=max(max1,b[j]);
        }
        int rept[max1+1]={0},grt[max1+1]={0};

        for(int j=0;j<len;j++){
            rept[b[j]]++;
        }
        grt[0]=rept[0];

        for(int j=1;j<max1+1;j++){
            grt[j]=grt[j-1]+rept[j];
        }

        cin>>q;
        for(int j=0;j<q;j++){
            cin>>temp;
            if(a[temp]>max1){
                cout<<grt[max1]<<endl;
            }
            else{
                cout<<grt[a[temp]-1]<<endl;
            }
        }
    }
	return 0;
}
