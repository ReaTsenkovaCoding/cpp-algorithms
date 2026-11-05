/* 
Task 2: Number Frequency
Prints each distinct number and its count in ascending order.

Approach: count values in a map, which keeps keys sorted.
Time: O(n log n)
Space: O(n)
*/

#include <map>
#include <iostream>
using namespace std;

int main() {

	int n; 
	cout << "How many numbers?: "; 
	cin >> n;

	map<int, int> numbers;
	int number;

	for (int i = 0; i < n; i++) {
		cout << "Enter number " << i + 1 << ": ";
		cin >> number;

		numbers[number]++;
	}

	cout << "\n";

	for (auto item : numbers) {
		cout << item.first << ": " << item.second << "\n";
	}

	return 0;
}