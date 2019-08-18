#include<iostream>
using namespace std;
//In this case there is an ambiguity, A<-B && A<-C and (B,C)<-D, therefore is member functions of A accessible in D via B or C? (Ambiguity)
class A{
public:
    int numA;
    A(){
        cout<<"Constructor of A is called"<<endl;
        numA=0;
    }
};

class B:virtual public A{
public:
    int numB;
    B(){
        cout<<"Constructor of B is called"<<endl;
        numB=0;
    }
};

class C:virtual public A{
public:
    int numC;
    C(){
        cout<<"Constructor of C is called"<<endl;
        numC=0;
    }
};

class D:public B,public C{
public:
    int numD;
    D(){
        cout<<"Constructor of D is called"<<endl;
        numD=0;
    }
};

int main(){
    D d1;
    cout<<d1.numD;
    cout<<d1.numA;

    return 0;
}
