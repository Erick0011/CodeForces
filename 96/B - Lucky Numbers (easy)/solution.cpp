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
    linhasDeCaos
 
        ll n,
        t;
    cin >> n;
 
    vector<ll> res;
 
    string s = to_string(n);
 
 
    for (ll i = 2; i <= 10; i += 2)
    {
        string cand = "";
        
        cand += string((i / 2), '4');
        cand += string((i / 2), '7');
 
        sort(all(cand));
        do
        {
            res.pb(stoll(cand));
        } while (next_permutation(all(cand)));
    }
 
    ll lo = 0, hi = sz(res) - 1, ans;
    while (lo <= hi)
    {
        ll mid = lo + (hi - lo) / 2;
        if (n <= res[mid])
        {
            ans = res[mid];
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }
 
    cout << ans;
 
    return 0;
}