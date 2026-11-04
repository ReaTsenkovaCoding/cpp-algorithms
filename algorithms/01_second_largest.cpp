
// Task 1: Second Largest Distinct Number
// Prints the second largest distinct value, or NO if it does not exist.
//
// Approach: one pass, tracking the largest and second largest values.
// Time: O(n)
// Space: O(n)

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cout << "How many elements will the vector have?: "; 
	cin >> n;

	if (n <= 0) {
		cout << "NO\n";
		return 0;
	}

	vector<int> numbers(n);
	int largest, second;
	bool hasSecond = false;

	cout << "\nEnter the numbers:\n";
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ": "; cin >> numbers[i];
	}

	largest = numbers[0];

	for (int i = 1; i < n; i++) {
		if (numbers[i] > largest) {
			second = largest;
			hasSecond = true;
			largest = numbers[i];
		}
		else if (numbers[i] < largest) {
			if (!hasSecond) {
				second = numbers[i];
				hasSecond = true;
			}
			else if (numbers[i] > second) {
				second = numbers[i];
			}
		}
	}

	if (hasSecond) cout << second;
	else cout << "\nNO\n";

	return 0;
}