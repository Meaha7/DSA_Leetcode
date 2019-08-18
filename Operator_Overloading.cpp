//Method 1
/*
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
    int getReal(){return real;}
    int getImag(){return imag;}

    Complex operator +(Complex x){
        Complex temp;
        temp.real=getReal()+x.getReal();
        temp.imag=getImag()+x.getImag();
        return temp;
    }
    friend int main();


};

int main(){

    Complex c1(5,10),c2(1,2),c3;
    c3=c1+c2;
    cout<<c3.real<<"+"<<c3.imag<<"i"<<endl;

    return 0;
}
*/

//Method 2 Using friend function
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
    friend Complex operator +(Complex c1,Complex c2);
    friend int main();
};

Complex operator +(Complex c1,Complex c2){
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}

int main(){

    Complex c1(10,5),c2(1,2),c3;
    c3=c1+c2;
    cout<<c3.real<<"+"<<c3.imag<<"i"<<endl;
    return 0;
}
