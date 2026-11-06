#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
 
#define linhasDeCaos ios_base::sync_with_stdio(false), cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define F first
#define S second
#define pb push_back
#define NO cout << "NO
"
#define YES cout << "YES
"
 
const ll MOD = 1000000007LL;
const ll INF = 4e18;
const int INF_INT = 1e9;
const double EPS = 1e-9;
 
int main()
{
    linhasDeCaos;
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        vll a(n);
        for (auto &x : a) cin >> x;
 
        sort(a.begin(), a.end());
 
        int best = 1, cur = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] <= k) {
                cur++;
            } else {
                cur = 1;
            }
            best = max(best, cur);
        }
 
        cout << n - best << "
";
    }
    return 0;
}