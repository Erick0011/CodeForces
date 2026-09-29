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
#define pp pop_back()
 
const ll MOD = 1000000007LL;
const ll INF = 4e18;
const int INF_INT = 1e9;
const double EPS = 1e-9;
 
int melhor = INF_INT;
 
int main()
{
    linhasDeCaos;
 
    ll x, n, sum;
    cin >> n >> x;
 
    vi c(n);
 
    for (auto &i : c)
        cin >> i;
    sort(rall(c));
    // 5 5 3 2 1
    // 5 10 13 15 16
 
    vll prefix(n, 0);
    prefix[0] = c[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] += prefix[i - 1] + c[i];
    }
    while (x--)
    {
        ll q, s, disc = 0;
        cin >> q >> s;
        // 3 2
        if (q == s)
        {
            cout << prefix[q - 1] << "
";
        }
        else
        {
            cout << prefix[q - 1] - prefix[q - s - 1] << "
";
        }
    }
 
    // for (auto i : sum) cout << i << " ";
 
    return 0;
}