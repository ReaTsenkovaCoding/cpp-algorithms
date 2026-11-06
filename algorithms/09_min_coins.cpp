/*
Task 9: find the minimum number of coins needed to make an exact amount (dynamic programming).
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int k;
	cout << "How many types of coins?: ";
	cin >> k;

	if (k <= 0) {
		cout << "There must be at least 1 type of coin.\n";
		return 0;
	}

	vector<int> coins(k);
	cout << "Enter the value of each coin:\n";
	for (int i = 0; i < k; i++) {
		cout << i + 1 << ": ";
		cin >> coins[i];
	}

	int amount;
	cout << "Enter the amount: ";
	cin >> amount;

	if (amount < 0) {
		cout << "The amount can't be negative.\n";
		return 0;
	}

	/* INF means "this amount can't be made yet" */
	const int INF = amount + 1;

	/* dp[x] = the minimum number of coins needed for amount x */
	vector<int> dp(amount + 1, INF);
	dp[0] = 0;

	for (int x = 1; x <= amount; x++) {
		for (int j = 0; j < k; j++) {
			int c = coins[j];
			if (c > 0 && c <= x && dp[x - c] != INF) {
				dp[x] = min(dp[x], dp[x - c] + 1);
			}
		}
	}

	if (dp[amount] == INF) {
		cout << "\nMinimum number of coins: -1\n";
	}
	else {
		cout << "\nMinimum number of coins: " << dp[amount] << "\n";
	}

	return 0;
}