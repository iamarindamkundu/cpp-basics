//using friend function
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
    friend MyMulti operator*(MyMulti m,int i);
    int getValue();
};
int MyMulti::getValue(){
    return num;
}
MyMulti operator*(MyMulti m,int i){
    return MyMulti(m.num*i);
}
int main(){
    MyMulti m;
    int n;
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
    Enter an Integer to Multiply::-2
    Value of Multiplication::-10
*/
