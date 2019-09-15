#include<iostream>
#include<cstring>
using namespace std;
class Myclass{
    int num;
public:
    Myclass(){
        num=0;
    }
    Myclass(int n):num(n){
    }
    int getValue(){
        return(num);
    }
};
int main(){
    Myclass mc;
    int n;
    cout<<"Enter an integer::";
    cin>>n;
    mc=n;       //integer type to Myclass type conversion
    cout<<"Display value::"<<mc.getValue();
    return 0;
}
/*  Output::
    Enter an integer::4
    Display value::4
*/
