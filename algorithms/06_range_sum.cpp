/*
Task 6: Range Sum Queries
Prints the sum of the elements between positions L and R for each query.

Approach: build prefix sums once, then answer each query with prefix[R] - prefix[L - 1].
Time: O(n + Q)
Space: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	cout << "How many elements in the vector?: ";
	cin >> n;

	if (n <= 0) {
		cout << "\nThe vector can't have less than 1 element.\n";
		return 0;
	}

	int number;
	vector<long long> prefix(n + 1);
	prefix[0] = 0;
	
	cout << "\nEnter the elements of the vector:\n";
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ": "; cin >> number;
		prefix[i + 1] = prefix[i] + number;
	}

	int Q; 
	cout << "\nHow many requests?: "; 
	cin >> Q;

	if (Q <= 0) {
		cout << "\nRequests can't be less than 1.\n";
		return 0;
	}

	for (int i = 0; i < Q; i++) {
		int L, R;
		cout << "L: "; cin >> L;
		cout << "R: "; cin >> R;

		long long answer = prefix[R] - prefix[L - 1];
		cout << "Answer: " << answer << "\n\n";
	}

	return 0;
}