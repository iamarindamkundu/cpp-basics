#include<iostream>
using namespace std;
class Myclass{
    double d;
public:
    Myclass(){}
    Myclass(double n):d(n){}
    operator double();
};
Myclass::operator double(){
    return (d);
}
int main(){
    Myclass mc;
    double f;
    cout<<"Enter a float::";
    cin>>f;
    mc=f;   //double to Myclass conversion
    f=mc;   //Myclass to double conversion
    cout<<"Value of D is::"<<f;
    return 0;
}
/*  Output::
    Enter a float::34.45
    Value of D is::34.45
*/
