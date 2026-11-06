/*
Task 8: find the maximum number of non-overlapping meetings in one room (greedy, sort by end time).
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int n;
	cout << "How many meetings?: ";
	cin >> n;

	if (n <= 0) {
		cout << "The amount of meetings can't be less than 1.\n";
		return 0;
	}

	vector<pair<int, int>> meetings(n);
	cout << "Enter the times of each meeting:\n";

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ": "; 
		cin >> meetings[i].first >> meetings[i].second;
	}

	sort(meetings.begin(), meetings.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
		return a.second < b.second;
		});

	int count = 0;
	int lastEnd = 0;

	for (int i = 0; i < n; i++) {
		if (lastEnd <= meetings[i].first) {
			count++;
			lastEnd = meetings[i].second;
		}
	}

	cout << "\nNumber of possible meetings: " << count << "\n";

	return 0;
}
