#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int main(){
    class Student{
        char name[20];
        int rollno;
        char grade;
    public:
        void setData(){
            cout<<"Enter name of Student::...."<<endl;
            cin>>name;
            cout<<"Enter rollno::...."<<endl;
            cin>>rollno;
            cout<<"Enter grade::..."<<endl;
            cin>>grade;
        }
        void getData(){
            cout<<"Strudent's name::"<<name<<endl;
            cout<<"Rollno::"<<rollno<<endl;
            cout<<"Grade::"<<grade<<endl;
        }
    };
    Student st[3];
    for(int i=0;i<3;i++){
        cout<<"Enter data about "<<(i+1)<<" student::"<<endl;
        st[i].setData();
    }
    cout<<"Let's display student details::"<<endl;
    for(int i=0;i<3;i++){
        cout<<(i+1)<<" student data::"<<endl;
        st[i].getData();
    }
    return 0;
}
/*      Output::
        Enter data about 1 student::
        Enter name of Student::....
        Arindam
        Enter rollno::....
        1
        Enter grade::...
        A
        Enter data about 2 student::
        Enter name of Student::....
        Prolay
        Enter rollno::....
        2
        Enter grade::...
        A
        Enter data about 3 student::
        Enter name of Student::....
        Saika
        Enter rollno::....
        3
        Enter grade::...
        A
        Let's display student details::
        1 student data::
        Strudent's name::Arindam
        Rollno::1
        Grade::A
        2 student data::
        Strudent's name::Prolay
        Rollno::2
        Grade::A
        3 student data::
        Strudent's name::Saika
        Rollno::3
        Grade::A
*/

