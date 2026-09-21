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
 
const ll MOD = 1000000007LL;
const ll INF = 4e18;
const int INF_INT = 1e9;
const double EPS = 1e-9;
 
int main()
{
    linhasDeCaos;
    int t;
    cin >> t;
 
    while (t--)
    {
        ll a, b, c, s;
 
        cin >> a >> b >> c;
 
        ll ans;
 
        if (a >= b)
        {
            ans = (a - b) + c;
        }
        else
        {
            ll d = b - a;
            ans = max(d, c - d);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}