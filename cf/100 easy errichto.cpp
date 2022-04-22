#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b,c,d;
	cin >> a;
	cin >> b;
	c = a+b;
	cin >> d;
	if (c.length()!=d.length()) {
		cout << "NO\n";
	}
	else {
		int count = 0;
		for (int i = 0; i < c.length(); i++) {
			if (d.find(c[i])!=std::string::npos) {
				count++;
				d.erase(d.find(c[i]), 1);
			}
		}
		if (count!=c.length()) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}
}
