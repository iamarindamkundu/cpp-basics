#include<iostream>
using namespace std;
template<class T>
void bubble(T a[],int n){
	for(int i=0;i<n-1;i++)
		for(int j=n-1;i<j;j--)
			if(a[j]<a[j-1])
				swap(a[j],a[j-1]);
}
template<class T>
void swap(T& a,T& b){
	T temp=a;
	a=b;
	b=temp;
}
template<class T>
void display(T a[]){
	for(int i=0;i<5;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	int x[5]={10,15,17,12,34};
	float y[5]={7.8,9.8,5.7,8.9,3.4};

	bubble(x,5);
	bubble(y,5);
	cout<<"Sorted x-array::"<<endl;
	display(x);
	cout<<"Sorted y-array::"<<endl;
	display(y);
}
/*
Output::
Sorted x-array::
10 12 15 17 34 
Sorted y-array::
3.4 5.7 7.8 8.9 9.8 
*/