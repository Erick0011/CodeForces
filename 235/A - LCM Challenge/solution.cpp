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
 
ll solve(ll n)
{
}
 
int main()
{
    linhasDeCaos;
    ll n;
    cin >> n;
 
    if (n <= 2)
    {
        cout << n;
        return 0;
    }
    if (n % 2 == 1)
    {
        cout << n * (n - 1) * (n - 2);
        return 0;
    }
    if (n % 3 != 0)
    {
        cout << n * (n - 1) * (n - 3);
        return 0;
    }
    cout << (n - 1) * (n - 2) * (n - 3);
}