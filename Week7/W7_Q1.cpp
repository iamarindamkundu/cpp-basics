#include<iostream>
using namespace std;
class Enclosing{
    int o;
    class Nested{
        int i;
    public:
        Nested(int num):i(num){}
        void display(){
            cout<<"Enclosing class Member variable::"<<o<<endl;
        }
    };
    public:
        Enclosing(int num):o(num){}
        void display(){
            //cout<<"Nested class Member variable::"<<i<<endl;
        }
};
int main(){
    Enclosing e;
    e=5;
    e.Nested n;
    e.n=10;
    e.display();
    e.n.display();
}
