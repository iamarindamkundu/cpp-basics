//using member function
#include<iostream>
using namespace std;
class MyMulti{
   int num;
public:
    MyMulti(){
        num=0;
    }
    MyMulti(int n){
        num=n;
    }
    int getValue();
    MyMulti operator*(int i);
};
int MyMulti::getValue(){
    return num;
}
MyMulti MyMulti::operator*(int i){
    return MyMulti(num*i);
}
int main(){
    int n;
    MyMulti m;
    cout<<"Enter an Integer::";
    cin>>n;
    m=n;
    cout<<"Enter an Integer to Multiply::";
    cin>>n;
    MyMulti r=m*n;
    cout<<"Value of Multiplication::"<<r.getValue();
    return 0;
}
/*  Output::
    Enter an Integer::5
    Enter an Integer to Multiply::2
    Value of Multiplication::10
*/
