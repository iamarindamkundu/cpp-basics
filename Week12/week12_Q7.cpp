#include<iostream>
using namespace std;
template<class T>
void multiexcp(T y){
	try{
		if(y==1)
			throw(1);
		else if(y==0)
			throw('Z');
		else if(y==2.5)
			throw(2.5);
	}catch(int){
		cout<<"Integer Exception"<<endl;
	}catch(char){
		cout<<"Character Exception"<<endl;
	}catch(double){
		cout<<"Float Exception"<<endl;
	}
}
int main(){
	multiexcp(1);
	multiexcp(0);
	multiexcp(2.5);
	return 0;
}
/*
Output::
Integer Exception
Character Exception
Float Exception
*/