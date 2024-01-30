#include <iostream>
using namespace std;
int main(){
	int array[7]={-1, 2, 4, -3, 5, 2, -5 };
	int best = 0;
	for (int a = 0; a < 7; a++) {
		for (int b = a; b < 7; b++) {
			int sum = 0;
			for (int k = a; k <= b; k++) {
				sum += array[k];
			}
			best = max(best,sum);
			}
		}
	cout << best << "\n";
}
