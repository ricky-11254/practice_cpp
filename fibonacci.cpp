#include <iostream>
using namespace std;

int main() {
    int N;
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    if (N < 0) {
        std::cout << "Invalid input. N must be a non-negative integer." << std::endl;
        return 1;
    }

    int fib[N + 1];
    fib[0] = 0;

    if (N > 0) {
        fib[1] = 1;
    }

    int sum = (N %2==0) ? fib[0] : 0;
    
    for (int i = 2; i <= N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        if (fib[i]%2==0){
            sum += fib[i];
        }
    }
    std::cout << sum << std::endl;

    return 0;
}

