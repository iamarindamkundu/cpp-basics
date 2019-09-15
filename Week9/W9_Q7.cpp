#include<iostream>
using namespace std;
class Base{
public:
    void show(){
        cout<<"Base class show() method."<<endl;
    }
};
class Derive:public Base{
public:
    void show(){
        cout<<"Derive class show() method."<<endl;
    }
};
int main(){
    Base objb,*bptr;
    Derive objd,*dptr;
    cout<<"Accessing both class method using base class pointer."<<endl;
    bptr=&objb;
    bptr->show();
    bptr=&objd;         //also points to base class method.
    bptr->show();
    ((Derive*)bptr)->show();
    cout<<"Accessing both class method using derive class pointer."<<endl;
//    dptr=&objb;       //derive class pointer can not point to base class object.
    ((Base*)dptr)->show();
    dptr=&objd;
    dptr->show();
    return 0;
}
/*  Output::
    Accessing both class method using base class pointer.
    Base class show() method.
    Base class show() method.
    Derive class show() method.
    Accessing both class method using derive class pointer.
    Base class show() method.
    Derive class show() method.
*/
