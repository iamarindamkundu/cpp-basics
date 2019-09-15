#include<iostream>
using namespace std;
class A{
    int a;
public:
    A(int i):a(i){
        cout<<"A class consturctor::"<<a<<endl;
    }
    void show(){
        cout<<"A class show() method::"<<a<<endl;
    }
};
int main(){
    A obja(5),*aptr;
    aptr=&obja;
    aptr->show();
    return 0;
}
/*  Output::
    A class consturctor::5
    A class show() method::5
*/
