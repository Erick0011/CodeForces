#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, t;
    cin >> t;
 
    while (t--) {
        cin >> n;
        int sum = 0;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int max = *max_element(a.begin(), a.end());
 
        if (a[0] != max) swap(a[0], max);
        for (int i = 0; i < n; i++) {
            sum += *max_element(a.begin(),a.begin() + i + 1);
        }
        cout << sum << "
";
    }
 
    return 0;
}