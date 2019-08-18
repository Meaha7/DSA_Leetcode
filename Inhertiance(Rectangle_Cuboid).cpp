#include<iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;
public:
    Rectangle(int h,int b);
    void setLength(int num);
    void setBreadth(int num);
    int getBreadth(){return breadth;}
    int getLength(){return length;}
    int area(){return length*breadth;}
    int perimeter(){return 2*length+2*breadth;}
    bool isSquare(){return (length==breadth);}
    //~Rectangle();

};

Rectangle::Rectangle(int l=1,int b=1){
        setLength(l);
        setBreadth(b);
}

void Rectangle::setLength(int num){
        if(num<0){
            cout<<"Length can't be negative"<<endl;
            length=0;
        }
        else{
            length=num;
    }
}

void Rectangle::setBreadth(int num){
        if(num<0){
            cout<<"Breadth can't be negative"<<endl;
            breadth=0;
        }
        else{
            breadth=num;
    }
}

class Cuboid:public Rectangle{
private:
    int height;
public:
    Cuboid(int h=0){
        setHeight(h);
    }
    int getHeight(){
        return height;
        }
    void setHeight(int num);
    int getVolume(){return area()*height;}


};

void Cuboid::setHeight(int num){
if(num<0){
            cout<<"Height can't be negative"<<endl;
            height=0;
        }
        else{
            height=num;
    }

}

int main(){

    Cuboid c(5);
    c.setLength(-1);
    cout<<c.getVolume()<<endl;

}


