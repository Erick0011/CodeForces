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
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, p = 0, ps = 0, best = 0;
        char s;
        cin >> n;
 
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s == '.')
            {
                ps++;
                p++;
            }
            else
            {
                ps = 0;
            }
            best = max(best, ps);
        }
        if (best >= 3)
        {
            cout << 2 << "
";
        }
        else
        {
            cout << p << "
";
        }
    }
}