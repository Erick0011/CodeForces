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
    int q;
 
    cin >> q;
    while (q--)
    {
        ll n;
        int op = 0;
        cin >> n;
        while (n != 1)
        {
            ll op1 = INF, op2 = INF, op3 = INF, best;
 
            if (n % 2 == 0)
            {
                op1 = (ll)n / 2;
            }
            if (n % 3 == 0)
            {
                op2 = (2LL * n) / 3;
            }
            if (n % 5 == 0)
            {
                op3 = (4LL * n) / 5;
            }
 
            if (op1 == INF && op2 == INF && op3 == INF)
            {
                op = -1;
                break;
            }
 
            best = min(op2, op1);
            n = min(best, op3);
            op++;
        }
        cout << op << "
";
    }
 
    return 0;
}
 
/*
n = n/2 se %2;
n = (2*n)/3 %3;
n = (4*n)/5 %5;
 
*/