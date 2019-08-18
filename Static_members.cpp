#include<iostream>
using namespace std;

class Student{
public:
    int rollno;
    static int admnumber;

    Student(){
        admnumber++;
        rollno=admnumber;
    }
    //we can define static functions inside class
    static int getadm(){
        return admnumber;
    }
};
//We have to define static data members outside the class
int Student::admnumber=0;

int main(){
    //We can access static members without creating object of the class
    cout<<"Static Function:"<<Student::getadm()<<endl;
    Student s1,s2;
    cout<<s1.rollno<<endl;
    cout<<s2.rollno<<endl;
    cout<<s1.getadm()<<" "<<s2.getadm()<<endl;
    cout<<"Static Function:"<<Student::getadm()<<endl;

}
