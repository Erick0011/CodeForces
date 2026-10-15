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
        
        int n, k;
        cin >> n >> k;
 
        vi gas(n, 0);
        
        cin >> gas[0];
        int mx = gas[0];   
 
        for (int i = 1; i < n; i++)
        {
            cin >> gas[i];
            mx = max(mx, gas[i] - gas[i - 1]);
 
        }
        cout << max(mx, abs(k - gas[n-1])*2);
        cout << "
";
 
        
    }
}
/*
 
if(n == 1){
            for (int i = 1; i < n; i++)
            {
                cin >> gas[i];
                mx = max(mx, gas[i] - gas[i - 1]);
 
            }
        }else{
            mx = max(gas[0], k - gas[0]);
        }
 
*/
 
 
 