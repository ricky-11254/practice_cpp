#include <iostream>
#include <sstream> 
using namespace std;

int main() {
    string s;
    int a, b, c;
    getline(cin, s);
    stringstream ss(s);
    ss >> a >> b >> c;
    cout << a + b + c << endl;

    return 0;
}

