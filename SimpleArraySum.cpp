#include <bits/stdc++.h>
using namespace std;

void simpleArraySum(int ar[], int n);

int main() {
    int n;
    cin >> n;
    int ar[n];
    simpleArraySum(ar, n);
    return 0;
}

void simpleArraySum(int ar[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        sum += ar[i];
    }
    cout<< sum << endl;
}

