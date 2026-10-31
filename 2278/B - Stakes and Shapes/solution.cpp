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
vector<string> a;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int n = x + y + z;
 
        if (y >= z)
            cout << string(n, 'R') << "
";
        else if (z >= x)
            cout << string(n, 'S') << "
";
        else
            cout << string(n, 'P') << "
";
    }
    return 0;
}