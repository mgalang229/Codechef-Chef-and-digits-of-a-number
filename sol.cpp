#include <bits/stdc++.h>

#define ll long long

using namespace std;

void decode() {
	string s;
	cin >> s;
	int z = 0, on = 0;
	for(char ch : s) {
		if(ch == '0') z++;
		else on++;
	}
	if(z == 1 || on == 1) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
