#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n, k, score, p;
 
    cin >> n >> k;
 
    vector<int> v(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
 
    // cout << v[k - 1];
 
    p = v[k - 1];
    score = 0;
 
    for (int i = 0; i < n; i++)
    {
 
        if (v[i] >= p and v[i] > 0)
            score += 1;
    }
 
    cout << score;
}