#include<bits/stdc++.h>
using namespace std;

int main(){


int num,t;

cin>>num>>t;

string str;
cin>>str;

while(t--){

for(int i=0;i<str.length()-1;i++){
//cout<<"i is: "<<i<<endl;
if(str[i]=='B' && str[i+1]=='G'){
//cout<<"at: "<<i<<" and: "<<i+1<<endl;
str[i+1]='B';
str[i]='G';
i++;
}
}
}
cout<<str<<endl;




return 0;

}
