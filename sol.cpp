#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	int no_of_eights = 0;
	// find the frequency of 8 since this is the initial digit
	for (char c : s) {
		if (c == '8') {
			no_of_eights++;
		}
	}
	// check if the minimum is the number of valid phone numbers or the frequency of 8
	cout << min(n / 11, no_of_eights) << '\n';
	return 0;
}
