#include <bits/stdc++.h>
using namespace std;

int password_strength(const string& password, int weight_a) {
    int strength = 0;

    for (char ch : password) {
        if (isalpha(ch)) {
            char lowercaseCh = tolower(ch);
            int weight = (lowercaseCh - 'a' + weight_a) % 26;
            strength += weight;
        }
    }

    return strength;
}

int main() {
    string password;
    int weight_a;
    cin >> password;
    cin >> weight_a;
    int strength = password_strength(password, weight_a);
    cout << strength<<endl;
    return 0;

