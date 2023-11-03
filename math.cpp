#include <iostream>
using namespace std;

int main(){
    int numbers [5], sum = 0;
    cout<<"Enter 5 numbers:"<<endl;
    for (int i = 0; i<5; i++){
        cin>>numbers[i];
        sum+= numbers [i];
    }
    cout<<"sum is = "<<sum<<endl;
    return 0;
}
