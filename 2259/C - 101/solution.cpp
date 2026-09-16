#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
 
    vector<int> ones;
    for (int i = 0; i < n; i++) if (a[i] == 1) ones.push_back(i);
 
    long long best = 0;
    int bi = -1, bj = -1;
 
    for (size_t k = 0; k + 1 < ones.size(); k++) {
        long long len = ones[k+1] - ones[k] + 1;
        if (len > best) { best = len; bi = ones[k]; bj = ones[k+1]; }
    }
 
    if (!ones.empty()) {
        int first_one = ones.front();
        int last_one = ones.back();
 
        for (int idx = 0; idx < first_one; idx++) {
            if (a[idx] == -1) {
                long long len = first_one - idx + 1;
                if (len > best) { best = len; bi = idx; bj = first_one; }
                break;
            }
        }
 
        for (int idx = n - 1; idx > last_one; idx--) {
            if (a[idx] == -1) {
                long long len = idx - last_one + 1;
                if (len > best) { best = len; bi = last_one; bj = idx; }
                break;
            }
        }
    } else {
        int L = -1, R = -1;
        for (int i = 0; i < n; i++) if (a[i] == -1) { L = i; break; }
        for (int i = n - 1; i >= 0; i--) if (a[i] == -1) { R = i; break; }
        if (L != -1 && R != -1) {
            long long len = R - L + 1;
            if (len > best) { best = len; bi = L; bj = R; }
        }
    }
 
    if (best == 0) {
        for (int idx = 0; idx < n; idx++) {
            if (a[idx] != 0) { best = 1; bi = idx; bj = idx; break; }
        }
    }
 
    vector<int> res(n);
    for (int i = 0; i < n; i++) res[i] = (a[i] == 1) ? 1 : 0;
 
    if (best > 0) {
        res[bi] = 1;
        res[bj] = 1;
        for (int i = bi + 1; i < bj; i++) res[i] = 0;
    }
 
    for (int i = 0; i < n; i++) cout << res[i] << " 
"[i == n-1];
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}