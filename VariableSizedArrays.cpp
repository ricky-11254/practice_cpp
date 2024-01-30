#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // Create a vector of vectors to represent the 2D array
    vector<vector<int>> arr(n);

    // Input the 2D array
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;

        // Input the elements of the array at index i
        for (int j = 0; j < k; j++) {
            int element;
            cin >> element;
            arr[i].push_back(element);
        }
    }

    // Process the queries
    for (int i = 0; i < q; i++) {
        int array_index, element_index;
        cin >> array_index >> element_index;

        // Print the element at the specified indices
        cout << arr[array_index][element_index] << endl;
    }

    return 0;
}

