#include <iostream>
using namespace std;
struct{
	int age, standard;
    string first_name;
    string last_name;
} MyStruct1, MyStruct2, MyStruct3, MyStruct4;
int main(){
cin>>MyStruct1.age>>MyStruct2.first_name>>MyStruct3.last_name>>MyStruct4.standard;
cout<<MyStruct1.age<<" "<<MyStruct2.first_name<<" "<<MyStruct3.last_name<<" "<<MyStruct4.standard;
return 0;
}
