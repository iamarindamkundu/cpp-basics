#include<iostream>
using namespace std;
template<class T>
class Stack{
	int size;
	int tos;
	T* array;
public:
	Stack(int size){
		this->size=size;
		array=new T[size];
		tos=-1;
	}
	void push(T num){
		if(tos==size)
			cout<<"stack is full."<<endl;
		else{
			array[++tos]=num;
			cout<<"item is pushed successfully."<<endl;
		}
	}
	T pop(){
		if(tos==-1)
			cout<<"stack is empty."<<endl;
		else{
			return (array[tos--]);
		}
	}
};
int main(){
	Stack<int> stack(5);
	stack.push(1);
	stack.push(3);
	stack.push(5);
	cout<<"Poped::"<<stack.pop()<<endl;
	stack.push(7);
	cout<<"Poped::"<<stack.pop()<<endl;
	cout<<"Poped::"<<stack.pop()<<endl;

	Stack<float> stackf(4);
	cout<<"Poped::"<<stackf.pop()<<endl;
	stackf.push(7.8);
	stackf.push(9.9);
	cout<<"Poped::"<<stackf.pop()<<endl;
	return 0;
}
/*
Output::
item is pushed successfully.
item is pushed successfully.
item is pushed successfully.
Poped::5
item is pushed successfully.
Poped::7
Poped::3
stack is empty.
Poped::0
item is pushed successfully.
item is pushed successfully.
Poped::9.9
*/
