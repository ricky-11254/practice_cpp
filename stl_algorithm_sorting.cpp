#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 5, 1, 2, 4};
    sort(std::begin(arr), std::end(arr));
    for (int i : arr) {
        std::cout << i << " ";
    }
    return 0;
}

