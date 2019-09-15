#include<iostream>
using namespace std;
class Base{
    void showprivate(){
        cout<<"I am in private section";
    }
public:
    void showpublic(){
        cout<<"I am in public section.";
    }
};
class Derive:public Base{
    int d;
public:
    Derive(int i):d(i){}
    int getValue(){
        return d;
    }
};
int main(){
    Derive objd(5);
    cout<<"Value of d::"<<objd.getValue()<<endl;
    //objd.showprivate();
    objd.showpublic();
    return(0);
}
/*  Output::
    Value of d::5
    I am in public section.
*/
