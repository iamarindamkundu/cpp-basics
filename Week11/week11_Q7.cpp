#include<iostream>
using namespace std;
template<class T1,class T2>
class Test{
public:
	void show(T1 a,T2 b){
		cout<<"I am an integer::"<<a<<endl;
		cout<<"I am an float::"<<b<<endl;
	}
};
int main(){
	Test<int,float> test1;
	test1.show(5,6.5);
	return 0;
}
/*
Output::
I am an integer::5
I am an float::6.5

*/
