#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int n;
    cin >> n;
 
    vector<int> coins(n), total(101);
 
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        total[coins[i]]++;
    }
 
    cout << *max_element(total.begin(), total.end());
}