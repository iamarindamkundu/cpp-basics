#include<iostream>
using namespace std;

template<class T>
class Test{
public:
	Test(T i){
		cout<<"It is from Constructor::"<<i<<endl;
	}
};
int main(){
	Test<int> test1(5);
	Test<float> test2(7.5);
	return 0;
}
/*Output::
It is from Constructor::5
It is from Constructor::7.5
*/