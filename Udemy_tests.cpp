#include<iostream>
using namespace std;

int main(){

    int a[][2]={{1,2},{3,4},{5,6}};
    for(auto &x:a){
        for(int y:x){
            cout<<y;
        }
    }

    return 0;

}
