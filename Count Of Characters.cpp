#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--) {
        getline(cin, s);
        int c[26] = {};
        for (int i = 0; i < s.size(); ++i) {
            s[i] = tolower(s[i]);
            if(s[i] >= 'a' && s[i] <= 'z') {
                c[s[i]-'a']++;
            }
        }
        for (int i = 0; i < 26; ++i) {
            char c1 = 'a' + i;
            cout << c[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
