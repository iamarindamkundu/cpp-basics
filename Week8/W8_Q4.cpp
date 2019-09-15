#include<iostream>
#include<cstring>
using namespace std;
class English{
    int ch;
public:
    English(int arr):ch(arr){}
    void display(){
        cout<<"I am English::"<<ch<<endl;
    }
};
class A:public English{
    int index;
public:
    A(int ch,int i):English(ch),index(i){}
    void display(){
        cout<<"I am english first letter::"<<index<<endl;
        English::display();
    }
};
class B:public English{
    int index;
public:
    B(int ch,int i):English(ch),index(i){}
    void display(){
        cout<<"I am english second letter::"<<index<<endl;
        English::display();
    }
};
class C:public English{
    int index;
public:
    C(int ch,int i):English(ch),index(i){}
    void display(){
        cout<<"I am english third letter::"<<index<<endl;
        English::display();
    }
};
int main(){
    A obja(26,1);
    B objb(26,2);
    C objc(26,3);
    obja.display();
    objb.display();
    objc.display();
    return 0;
}
