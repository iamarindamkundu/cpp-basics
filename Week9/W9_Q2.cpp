#include<iostream>
using namespace std;
class Base{
    int b;
public:
    void show(int i){
        b=i;
        cout<<"It is Base class show() method::"<<b<<endl;
    }
};
class Base2{
    int b2;
public:
    void show(int i){
        b2=i;
        cout<<"It is Base2 class show() method::"<<b2<<endl;
    }
};
class Derive:public Base,public Base2{
    int d;
public:
    void show(int i){
        d=i;
        cout<<"It is Derive class show() method::"<<d<<endl;
    }
};
int main(){
    Derive objd;
    objd.show(5);
    objd.Base::show(1);
    objd.Base2::show(1);
}
/*  Output::
    It is Derive class show() method::5
    It is Base class show() method::1
    It is Base2 class show() method::1
*/
