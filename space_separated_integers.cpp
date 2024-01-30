#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string input;
    int a, b, c;
    
    getline(cin, input);
    istringstream stream(input);

    if (stream >> a >> b >> c) {
        cout<< a << " " << b << " " << c << endl;
    } else {
        cout << "Invalid input." << endl;
    }

    return 0;
}
