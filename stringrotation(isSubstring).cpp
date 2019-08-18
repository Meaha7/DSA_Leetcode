#include<iostream>
#include<string>

using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;

    string s2s2=s2+s2;

    cout<<s2s2<< " "<<s1<<endl;

    if (s2s2.find(s1) !=string::npos) {
        cout << s2s2.find(s1) <<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

    cout<<s2s2.substr(0,3)<<endl;




    return 0;


}
