#include <iostream>
using namespace std;
int main(){
	int a = 3, b = 5;
	bool result;
	result = (a == b);
	cout<<"3 == b is "<<result<<endl;
	result = (a != b);
	cout<<"3 != b is "<<result<<endl;
	result = a < b;
	cout<<"3 < b is "<<result<<endl;
	result = a > b;
	cout<<"3 > b is "<<result<<endl;
	result = a >= b;
	cout<<"3 >= b is "<<result<<endl;
	result = a <= b;
	cout<<"3 <= b is "<<result<<endl;
	return 0;
}
