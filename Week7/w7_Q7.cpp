#include<iostream>
using namespace std;
class A{
protected:
    void showA(){
        cout<<"I am in protected section."<<endl;
    }
};
class B:protected A{
public:
    void showB(){
        cout<<"I am in public section of B"<<endl;
        showA();
    }
};
int main(){
    B d;
    d.showB();
}
