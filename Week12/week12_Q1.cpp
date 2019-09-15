#include<iostream>
using namespace std;
template<class T>
void display(T a){
	cout<<a<<endl;
}
int main(){
	display(3);
	display(7.8);
	display("Arindam");
	return 0;
}
/*
Output::
3
7.8
Arindam
*/