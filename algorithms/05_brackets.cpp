/*
Task 5: Valid Brackets
Prints YES if all brackets are correctly closed and nested, otherwise NO.

Approach: push opening brackets to a stack and match each closing bracket with the top.
Time: O(n)
Space: O(n)
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string brackets;
	cout << "Enter the brackets: ";
	cin >> brackets;

	stack<char> opened;

	for (int i = 0; i < brackets.size(); i++) {
		char current = brackets[i];

		if (current == '(' || current == '[' || current == '{') {
			opened.push(current);
		}
		else {
			if (opened.empty()) {
				cout << "\nNO\n";
				return 0;
			}

			char top = opened.top();
			opened.pop();

			if (current == ')' && top != '(') {
				cout << "\nNO\n";
				return 0;
			}
			else if (current == ']' && top != '[') {
				cout << "\nNO\n";
				return 0;
			}
			else if (current == '}' && top != '{') {
				cout << "\nNO\n";
				return 0;
			}
		}
	}

	if (opened.empty()) cout << "\nYES\n";
	else cout << "\nNO\n";

	return 0;
}