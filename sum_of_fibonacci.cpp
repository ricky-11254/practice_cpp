#include <iostream>

int main() {
    int T;
    std::cin>>T;
    while(T--){
    	int N;
    std::cin >> N;

    if (N < 0) {
        std::cout << "Invalid input." << std::endl;
        return 1;
    }

    int fib[N + 1];
    fib[0] = 0;

    if (N > 0) {
        fib[1] = 1;
    }

    int sum = (N %2==0) ? fib[0] : 0;

    for (int i = 2; fib[i - 1] + fib[i - 2] < N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        if (fib[i]%2== 0) {
            sum += fib[i];
        }
    }
    std::cout<< sum << std::endl;	
	}
    return 0;
}

