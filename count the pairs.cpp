#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int ans = 0ll;
    for (int i = 1; i < n; i++) {
        int val = x - vec[i];
        int ind = upper_bound(vec.begin(), vec.begin() + i, val) - vec.begin();
        ans += 2 * ind;
    }
    cout << ans << "\n";
}


signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
}
