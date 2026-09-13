#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define VegaPunk24 ios_base::sync_with_stdio(false), cin.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
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
    VegaPunk24
    ll n, m;
 
    cin >> n >> m;
 
    ll res = 1;
    
    bool overflowed = false;
 
    for(ll i = 0; i < n; i++){
        res *= 2;
        if(res > m){
            overflowed = true;
            break;
        }
    }
 
    if(overflowed){
        cout << m << "
";
    } else{
        cout << m % res;
    }
    
    return 0;
}