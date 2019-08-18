#include<bits/stdc++.h>
using namespace std;

int main(){

    int x=5;
    int *y=&x;

    int *z=&x;

    delete z;


    return 0;
}
