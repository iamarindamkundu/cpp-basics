#include<iostream>
using namespace std;
class Base1{
    int b;
public:
    Base1(int num):b(num){
        cout<<"Base1 constructor is called::"<<b<<endl;
    }
    ~Base1(){
        cout<<"Base1 destructor is called."<<endl;
    }
};
class Base2{
    int b;
public:
    Base2(int num):b(num){
        cout<<"Base2 constructor is called::"<<b<<endl;
    }
    ~Base2(){
        cout<<"Base2 desturctor is called."<<endl;
    }
};
class Base3{
    int b;
public:
    Base3(int num):b(num){
        cout<<"Base 3 constructor is called::"<<b<<endl;
    }
    ~Base3(){
        cout<<"Base3 desturctor is called."<<endl;
    }
};
class Derive:public Base1,public Base2,public Base3{
    int d;
public:
    Derive(int b,int i):Base1(b),Base2(b),Base3(b),d(i){
        cout<<"Derive constructor is called::"<<d<<endl;
    }
    ~Derive(){
        cout<<"Derive destructor is called."<<endl;
    }
};
int main(){
    Derive objd(5,10);
    return 0;
}
/*  Output::
    Base1 constructor is called::5
    Base2 constructor is called::5
    Base 3 constructor is called::5
    Derive constructor is called::10
    Derive destructor is called.
    Base3 desturctor is called.
    Base2 desturctor is called.
    Base1 destructor is called.
*/
