/*
Task 3: Two Sum
  Prints the 1-based positions of two numbers that add up to the target, or NO.

Approach: store seen numbers and their indexes in a map, then look up target - current.
Time: O(n log n)
Space: O(n)
*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {

	int n;
	cout << "How many elements in the vector?: ";
	cin >> n;

	if (n <= 0){
		cout << "\nNO\n"; 
		return 0;
	}

	vector<int> numbers(n);
	cout << "\nEnter the numbers:\n";

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ": "; cin >> numbers[i];
	}

	int target;
	cout << "\nEnter your targeted sum: "; 
	cin >> target;

	map<int, int> seen;

	for (int i = 0; i < n; i++) {
		int n1 = numbers[i];
		int n2 = target - n1;

		if (seen.count(n2)) {
			cout << seen[n2] + 1 << " "  << i + 1;
			return 0;
		}
		seen[n1] = i;
	}

	cout << "\nNO\n";
	return 0;
}