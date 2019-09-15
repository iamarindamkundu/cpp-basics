#include<iostream>
using namespace std;
class Alto800{
    int a;
    public:
        Alto800(int i):a(i){}
    void display(){
        cout<<"I am Alto::Highest adult male singing voice.::"<<a<<endl;
    }
};
class Amaze{
    int m;
public:
    Amaze(int i):m(i){}
    void display(){
        cout<<"I am Amaze::Amazing.::"<<m<<endl;
    }
};
class Dzire{
    int z;
public:
    Dzire(int i):z(i){}
    void display(){
        cout<<"I am Dzire::Great Desire::"<<z<<endl;
    }
};
class Car:public virtual Alto800,public virtual Amaze,public virtual Dzire{
    int c;
public:
    Car(int a,int m,int z,int i):Alto800(a),Dzire(z),Amaze(m),c(i){}
    void display(){
        cout<<"I am Car::Amazing->Highest->Desire.::"<<c<<endl;
        Alto800::display();
        Dzire::display();
        Amaze::display();
    }
};
int main(){
    Car obj(12,8,4,1);
    obj.display();
}
/*  Output::
    I am Car::Amazing->Highest->Desire.::1
    I am Alto::Highest adult male singing voice.::12
    I am Dzire::Great Desire::4
    I am Amaze::Amazing.::8
*/
