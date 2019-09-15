#include<iostream>
using namespace std;
class Base{
public:
    void show(){
        cout<<"Base Class show() method"<<endl;
    }
};
class Derive:public Base{
public:
    void show(){
        cout<<"Derive Class show() method"<<endl;
    }
};
int main(){
    Base *bptr;
    Derive objd;
    bptr=&objd;
    bptr->show();
    ((Derive*)bptr)->show();    //casting to derive class show()
    return 0;
}
/*  Output::
    Base Class show() method
    Derive Class show() method
*/
