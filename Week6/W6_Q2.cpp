//week6_question 2
#include<iostream>
using namespace std;
class Plus{
    int number;
public:
    Plus(){
        number=0;
    }
    Plus(int num){
        number=num;
    }
    Plus operator+(Plus t){
        return Plus(number+t.number);
    }
    int getValue(){
        return number;
    }
};
int main(){
    Plus p1,p2;
    int num;
    cout<<"Enter value to p1::";
    cin>>num;
    p1=num;
    cout<<"Enter value to p2::";
    cin>>num;
    p2=num;
    Plus p3=p1+p2;
    cout<<"Addition of p1+p2::"<<p3.getValue();
}
/*
    Output::
    Enter value to p1::5
    Enter value to p2::4
    Addition of p1+p2::9
*/
