#include <iostream>

int fibonacci_recursive(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int main() {
    int n = 40;
    int result = fibonacci_recursive(n);
    std::cout << "The " << n << "th Fibonacci number is: " << result << std::endl;
    return 0;
}
