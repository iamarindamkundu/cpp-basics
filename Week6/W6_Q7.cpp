#include<iostream>
//#include<stdlib.h>
using namespace std;
class MyFree{
	int num;
public:
	MyFree(){
		num=0;
	}
	MyFree(int n){
		num=n;
	}
	void* operator new(size_t);
	void operator delete(void*);
	int getValue();
};
void MyFree::operator delete(void* ptr){
	::delete(ptr);
}
void* MyFree::operator new(size_t size){
	return(::new MyFree[size]);
}
int MyFree::getValue(){
	return(num);
}
int main(){
	MyFree* f1;
	int size,a;
	cout<<"Enter length of the object array::";
	cin>>size;
	f1=new MyFree[size];
	for(int i=0;i<size;i++){
		cout<<"Enter value to "<<i+1<<" object::";
		cin>>a;
		f1[i]=a;
	}
	cout<<endl<<"Let's display::";
	for(int i=0;i<size;i++){
		cout<<f1[i].getValue()<<" ";
	}
	delete(f1);
	return 0;
}

