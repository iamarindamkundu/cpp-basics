#include<iostream>
using namespace std;
class A{
    int a;
public:
    A(){}
    A(int i):a(i){
        cout<<"A class consturctor is called::"<<a<<endl;
    }
    A show();
};
A A::show(){
    cout<<"show() method is class::returns a object pointer."<<endl;
    return(*this);
}
int main(){
    A obja(5),aptr;
    aptr=obja.show();
    cout<<"Calling show() method of class a using pointer::"<<endl;
    aptr.show();
    return 0;
}
/*  Output::
    A class consturctor is called::5
    show() method is class::returns a object pointer.
    Calling show() method of class a using pointer::
    show() method is class::returns a object pointer.
*/
