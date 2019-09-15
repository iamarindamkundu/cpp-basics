#include<iostream>
using namespace std;
class MyIo{
    int num;
public:
    MyIo(){
        num=0;
    }
    friend istream& operator>>(istream&,MyIo&);
    friend ostream& operator<<(ostream&,MyIo&);
};
istream& operator>>(istream& Iin,MyIo& obj){
    Iin>>obj.num;
    return(Iin);
}
ostream& operator<<(ostream& Oout,MyIo& obj){
    Oout<<obj.num;
    return(Oout);
}
int main(){
    int n;
    MyIo mi;
    cout<<"Enter an Integer::";
    cin>>mi;
    cout<<"Let's display value::"<<mi;
    return 0;
}
/*  Output::
    Enter an Integer::6
    Let's display value::6
*/
