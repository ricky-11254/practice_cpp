#include <iostream>
#include <stack>
#include <list>
using namespace std;
int main(){
	int number, digits;
	std::list<int>& digits;
  	if (0 == number) { 
    		digits.push_back(0);
  		} else {
    		while (number != 0) {
      			int last = number % 10;
      			digits.push_front(last);
      			number = (number - last) / 10;
    		}
}
