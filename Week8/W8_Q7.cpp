#include<iostream>
using namespace std;
class Base{
    int b;
public:
    Base():b(0){
        cout<<"No Argument constructor is called."<<endl;
    }
    Base(int i):b(i){
        cout<<"One Argument constructor is called."<<endl;
    }
};
class Derive:public Base{
    int d;
public:
    Derive(int b,int i):Base(b),d(i){
        cout<<"Single constructor of Derive class."<<endl;
    }
};
int main(){
    Derive objd(5,1);
    return 0;
}
