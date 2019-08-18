#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream myfile("Hello.txt",ios::trunc);
    myfile<<"Hello"<<endl;
    myfile<<8<<endl;
    myfile.close();

    ifstream infile;
    infile.open("Hello.txt",ios::seek);
    string s;
    int num;
    infile>>s;
    infile>>num;
    cout<<s<<" "<<num<<endl;
    if(infile.eof()) cout<<"end of file reached!"<<endl;


    return 0;


}
