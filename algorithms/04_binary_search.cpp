/*
Task 4: Binary Search
Prints the 1-based first position of each queried number, or -1 if it is missing.

Approach: binary search; on a match, save the index and keep searching left.
Time: O(n + Q log n)
Space: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; 
	cout << "How many numbers in the vector?: "; 
	cin >> n;

	if (n <= 0) {
		cout << "\nn can't be a 0 or a negative number.";
		return 0;
	}

	vector<int> numbers(n);
	cout << "\nInput the numbers:\n";

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ": "; cin >> numbers[i];
	}

	int Q;
	cout << "\nQ: "; cin >> Q;

	for (int i = 0; i < Q; i++) {
		int target;
		cout << "\nTargeted number(s): "; cin >> target;
		int l = 0; int r = n - 1; int answer = -1;

		while (l <= r) {
			int mid = (l + r) / 2;
			if (target == numbers[mid]) {
				answer = mid;
				r = mid - 1;
			}
			else if (target < numbers[mid]) {
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}
		}
		if (answer == -1) cout <<"\nAnswer: " << - 1 << "\n";
		else cout << "\nAnswer: " << answer + 1 << "\n";
	}

	return 0;
}