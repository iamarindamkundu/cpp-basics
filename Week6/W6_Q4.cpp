//using memeber function
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
    int getValue();
    void operator-();
};
int Unary::getValue(){
  return num;
}
void Unary::operator-(){
    num=num*(-1);
}
int main(){
    Unary u1;
    int num;
    cout<<"Enter an Integer::";
    cin>>num;
    u1=num;
    cout<<"Make it negative::";
    -u1;
    cout<<u1.getValue();
    return 0;
}
