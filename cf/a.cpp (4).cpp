#include <bits/stdc++.h>

using namespace std;
 
#define all(a) (a).begin(), (a).end()
#define int long long

typedef complex<double> c;

int32_t main() {
    cin.tie(0); ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    if (n <= 3) {
        cout << 0;
    } else {
        vector<int> a(n);
        for (auto &x : a) cin >> x;
        sort(all(a));
        reverse(all(a));
        cout << (a[3] * a[3]);
    }
}
