#include<iostream>
using namespace std;

int division(int a,int b){
    if(b==0) throw 1;
    else return a/b;
}


int main(){

    int a=10,b=0,c;
    try{
    cout<<division(a,b);
    }
    catch(int c){
    cout<<"Division by 0 error"<<endl;
    }

    return 0;

}
