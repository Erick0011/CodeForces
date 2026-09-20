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
    ll n;
    
 
    cin >> n;
    vi num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    sort(all(num));
 
    ll x = num[2];
 
    ll total = count(all(num), x);
    ll need = count(num.begin(), num.begin() + 3, x);
 
    ll ans = 1;
 
    for (ll i = 1; i <= need; i++)
    {
        ans = ans * (total - need + i) / i;
    }
 
    cout << ans;
 
    return 0;
}