#include <bits/stdc++.h>

using namespace std;

int main() {
	int _; cin >> _;
	for (int __ = 1; __ <= _; __++) {
		string s; cin >> s;
		string t1, t2;
		int n = (int) s.length();
		for (int i = 0; i < n; i ++) {
			if (s[i] == '4') {
				t1 += '3'; t2 += '1';
			} else{
				t1 += s[i];
				if (!t2.empty()) t2 += '0';
			}
		}
		if (t2.empty()) t2 += '0';
		printf("Case #%d: %s %s\n", __, t1.c_str(), t2.c_str());
	}
	return 0;
}
