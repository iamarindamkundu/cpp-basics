#include<iostream>
using namespace std;
class Red{
    int r;
public:
    Red(int n):r(n){}
    void displayRed(){
        cout<<"I am Red::"<<r<<endl;
    }
};
class Blue:public Red{
    int b;
public:
    Blue(int r,int n):Red(r),b(n){}
    void displayBlue(){
        cout<<"I am Blue::"<<b<<endl;
    }
};
class Green:public Blue{
    int g;
public:
    Green(int r,int b,int n):Blue(r,b),g(n){}
    void displayGreen(){
        cout<<"I am Green::"<<g<<endl;
    }
};
int main(){
    Green obj(10,5,1);
    obj.displayGreen();
    obj.displayBlue();
    obj.displayRed();
    return(0);
}
/*  Output::
    I am Green::1
    I am Blue::5
    I am Red::10
*/
