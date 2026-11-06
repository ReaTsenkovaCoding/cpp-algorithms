/* 
Task 7: print all subsets of a vector using recursion (backtracking). 
*/

#include <iostream>
#include <vector>
using namespace std;

void build(int i, vector<int>& numbers, vector<int>& current) {
	if (i == numbers.size()) {
		cout << "{";
		for (int j = 0; j < current.size(); j++) {
			if (j > 0) cout << ", ";
			cout << current[j];
		}
		cout << "}\n";
		return;
	}

	current.push_back(numbers[i]);
	build(i + 1, numbers, current);

	current.pop_back();
	build(i + 1, numbers, current);
}

int main() {
	int n;
	cout << "How many elements in the vector?: ";
	cin >> n;

	if (n <= 0) {
		cout << "\nThe vector can't have less than 1 element.\n";
		return 0;
	}

	vector<int> numbers(n);

	cout << "\nInput the elements in the vector:\n";
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ": ";
		cin >> numbers[i];
	}

	vector<int> current;

	cout << "\n";
	build(0, numbers, current);

	return 0;
}