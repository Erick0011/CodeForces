#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
 
#define linhasDeCaos ios_base::sync_with_stdio(false), cin.tie(NULL);
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
 
ll digitSum(ll n){
    ll s = 0;
    while(n>0){
        s += n % 10;
        n /= 10;
        if(s > 10){
            return 0;
        }
    }
    return s; 
}
 
int main()
{
    linhasDeCaos
    int n; int p = 0; int aux = 0;
    cin >> n;
    while(n != p){
        aux++;
        if(digitSum(aux) == 10){
            p++;
        }
    }
 
    cout << aux;
    
    
}