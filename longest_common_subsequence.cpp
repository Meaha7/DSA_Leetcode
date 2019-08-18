#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int lcs(string s1,string s2,int n,int m){
    if(n==-1 || m==-1) return 0;
    cout<<"comparing "<<s1[n]<<" with "<<s2[m];
    cout<<", n: "<<n<<" m: "<<m;
    if(s1[n]==s2[m]) {
            cout<<"   match"<<endl;
            return 1+lcs(s1,s2,n-1,m-1);
    }
    else{
        cout<<"   no match"<<endl;
        return max(lcs(s1,s2,n,m-1),lcs(s1,s2,n-1,m));
    }

}


int main(){

    string s1="aaftaab";
    string s2="arushsharma";
    int res=0;
    cout<<s1<<" "<<s2<<endl;
    int resultlcs=lcs(s1,s2,s1.length()-1,s2.length()-1);
    cout<<resultlcs<<endl;

    return 0;
}
