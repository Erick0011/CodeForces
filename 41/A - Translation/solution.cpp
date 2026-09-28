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
 
    string s, t;
    cin >> s >> t;
 
    if (sz(s) != sz(t))
    {
        cout << "NO";
        return 0;
    }
 
    reverse(s.begin(), s.end());
 
    for (int i = 0; i < sz(s); i++)
    {
        if (s[i] != t[i])
        {
            cout << "NO";
            return 0;
        }
    }
 
    cout << "YES";
    return 0;
}