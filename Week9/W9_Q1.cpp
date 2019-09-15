#include<iostream>
using namespace std;
class A{
    int a;
public:
    A(int i):a(i){
        cout<<"Class A constructor is called.::"<<a<<endl;
    }
    void show(){
        cout<<"Ap is::"<<a<<endl;
    }
};
class B:virtual public A{
    int b;
public:
    B(int a,int i):A(a),b(i){
        cout<<"Class B consturctor is called.::"<<b<<endl;
    }
};
class C:virtual public A{
    int c;
public:
    C(int a,int i):A(a),c(i){
        cout<<"Class C constructor is called.::"<<c<<endl;
    }
};
class D:public B,public C{  //multiple base class;  C is used as virtual class
    int d;
public:
    D(int a,int b,int c,int i):A(a),B(a,b),C(a,c),d(i){
        cout<<"Class D constructor is called.::"<<d<<endl;
        cout<<"Accessing show() method of class A=";
        show();
    }
};
int main(){
    D objd(1,2,2,3);
    return 0;
}
/*
    Output::
    Class A constructor is called.::1
    Class B consturctor is called.::2
    Class C constructor is called.::2
    Class D constructor is called.::3
    Accessing show() method of class A=Ap is::1
*/
