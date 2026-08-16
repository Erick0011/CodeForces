#include <bits/stdc++.h>
using namespace std;
 
bool palindrome(string s) {
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}
 
int main() {
    string s;
    cin >> s;
 
    string ans = "";
 
    int n = s.size();
 
    for (int mask = 1; mask < (1 << n); mask++) {
        string sub = "";
 
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sub += s[i];
            }
        }
 
        if (palindrome(sub) && sub > ans) {
            ans = sub;
        }
    }
 
    cout << ans << '
';
 
    return 0;
}