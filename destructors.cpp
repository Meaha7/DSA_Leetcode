#include<iostream>
using namespace std;

class A{
public:
    A(){
    cout<<"Constructor is called"<<endl;
    }
    ~A(){
    cout<<"Destructor is called"<<endl;
    }
};


int main()
{

    A *ptr=new A();

    cout<<"Hello"<<endl;
    delete ptr;

    return 0;


}
