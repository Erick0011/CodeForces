#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        string a, b;
 
        cin >> n;
        cin >> a >> b;
 
        int a_even = 0, a_odd = 0;
        int b_even = 0, b_odd = 0;
 
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                if(a[i] == '1') a_even++;
                if(b[i] == '1') b_even++;
            } else {
                if(a[i] == '1') a_odd++;
                if(b[i] == '1') b_odd++;
            }
        }
 
        if(a_even == b_even && a_odd == b_odd)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}