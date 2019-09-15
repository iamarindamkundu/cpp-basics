#include<iostream>
using namespace std;
void subtraction(int x,int y){
	try{
		if(y==1)
			throw(1);
		else
			cout<<"subtraction possible::"<<(x-y)<<endl;
	}catch(int){
		cout<<"y==1 subtraction condition fails."<<endl;
	}
}
int main(){
	subtraction(5,2);
	subtraction(5,1);
	return 0;
}
/*
Output::
subtraction possible::3
y==1 subtraction condition fails.
*/