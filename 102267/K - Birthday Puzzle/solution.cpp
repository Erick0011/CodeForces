#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n; cin >> n;
    map<string, ll> m;
 
    string team_winner, current_team;
    ll points = 0;
 
    while (n--) {
 
        cin >> current_team;
        m[current_team]++;
 
        if (m[current_team] > points) team_winner = current_team;
        points = max(points, m[current_team]); 
    }
 
    cout << team_winner << '
';
 
    return 0;
}