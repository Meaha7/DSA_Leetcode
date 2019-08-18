#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int imag;
public:

    Complex(int r=0,int i=0){
        real=r;
        imag=i;
    }

    friend ostream & operator <<(ostream &o,Complex &c1);
    friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2){
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}

ostream & operator <<(ostream &o,Complex &c1){
    o<<c1.real<<"+"<<c1.imag<<"i";
    return o;
}

int main(){

    Complex c1(10,5),c2(1,2),c3;
    c3=c1+c2;
    cout<<c3;
    return 0;
}
