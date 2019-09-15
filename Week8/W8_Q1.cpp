#include<iostream>
using namespace std;
class A{
    int a;
public:
    A(int n):a(n){}
    int getValue();
};
int A::getValue(){
    return a;
}
class B:public A{
    int b;
public:
    B(int a,int n):A(a),b(n){}
    int getValueB();
};
int B::getValueB(){
    return b;
}
int main(){
    B obj(5,6);
    cout<<"Value of b::"<<obj.getValueB()<<endl;
    cout<<"Value of a::"<<obj.getValue()<<endl;
}
/*  Output::
    Value of b::6
    Value of a::5
*/
