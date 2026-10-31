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
    linhasDeCaos
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool ones = true, inte = false;
        ll soma = 0, x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            soma += x;
            if (x > 1)
                ones = false;
            if (i > 0 && i < n - 1 && x >= 2)
                inte = true;
        }
 
        if (ones)
            cout << -1 << "
";
        else if (inte)
            cout << soma - 1 << "
";
        else
            cout << soma - (n - 1) << "
";
    }
 
    return 0;
}