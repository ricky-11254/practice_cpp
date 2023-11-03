#include <iostream>
using namespace std;

int main(){
  int num;
  cout<<"Enter Number: ";
  cin>>num;
  int n = num, fact = 1, i;
  for(i=1; i<=num; i++)
  fact = fact * i;
  cout<<fact;
  return num;
}
