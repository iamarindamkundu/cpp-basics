#include<iostream>
using namespace std;
class Unary{
    int num;
public:
    Unary(){
        num=0;
    }
    Unary(int n){
        num=n;
    }
    void operator++();
    void operator--();
    int getValue();

};
void Unary::operator++(){
    num++;
}
void Unary::operator--(){
    num--;
}
int Unary::getValue(){
    return num;
}
int main(){
    int num;
    Unary u1;
    cout<<"Enter an Integer::";
    cin>>num;
    u1=num;
    cout<<"Increment it twice::";
    ++u1;
    ++u1;
    cout<<u1.getValue();
    cout<<endl<<"Decrement it twice::";
    --u1;
    --u1;
    cout<<u1.getValue();
}
/*  output::
    Enter an Integer::5
    Increment it twice::7
    Decrement it twice::5
*/
