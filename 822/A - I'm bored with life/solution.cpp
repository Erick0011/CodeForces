#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <queue>
#include <cmath>
#include <numeric>
#include <climits>
using namespace std;
 
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '
'
 
ll fact(ll a) {
    if(a == 0) return 1;
    return a * fact(a-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll x, y;
    cin >> x >> y;
    ll res = fact(min(x, y));
    cout << res;
    return 0;
}