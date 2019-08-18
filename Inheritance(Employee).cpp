#include<iostream>
#include<string>

using namespace std;

class Employee{
private:
    string name;
    int age;
    int eid;
public:
    Employee(){
        name="";
        age=0;
        eid=0;
    }

    Employee(string name,int age,int eid){
        this->name=name;
        this->age=age;
        this->eid=eid;
    }

    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getEid(){
        return eid;
    }

};

class PermanentEmployee:public Employee{
private:
    int salary;
public:
    PermanentEmployee(){
        this->salary=0;
    }
    PermanentEmployee(string name,int age, int eid,int salary):Employee(name,age,eid){
        this->salary=salary;
    }
    int getSalary(){
        return this->salary;
    }
};

class ParttimeEmployee:public Employee{
private:
    int dailywage;
public:
    ParttimeEmployee(){
        this->dailywage=0;
    }
    ParttimeEmployee(string name,int age, int eid,int wage):Employee(name,age,eid){
        this->dailywage=wage;
    }
    int getWage(){
        return this->dailywage;
    }
};

int main(){

    ParttimeEmployee E1("Dhanush",23,1001,500);
    cout<<E1.getName();

    return 0;
}
