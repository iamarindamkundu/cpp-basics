#include<iostream>
using namespace std;
class A{
    int a;
public:
    A(){}
    A(int i):a(i){}
    int getValue(){
        return a;
    }
};
class B{
    int b;
public:
    B(){}
    B(A a){
        b=a.getValue();
    }
    int getValue(){
        return b;
    }
};
int main(){
    A obja;
    int num;
    cout<<"Enter a number::";
    cin>>num;
    obja=num;
    B objb=obja;        //A class type to B class type conversion
    cout<<"Value of b::"<<objb.getValue();
}
/*  Output::
    Enter a number::5
    Value of b::5
*/
