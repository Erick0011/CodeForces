#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
 
        int rounds = 0;
 
        while (a != b && a != c && b != c) {
            int maior = max({a, b, c});
            int menor = min({a, b, c});
 
            if (a == maior) {
                a--;
            } else if (b == maior) {
                b--;
            } else {
                c--;
            }
 
            if (a == menor) {
                a++;
            } else if (b == menor) {
                b++;
            } else {
                c++;
            }
 
            rounds++;
        }
 
        cout << rounds << '
';
    }
}