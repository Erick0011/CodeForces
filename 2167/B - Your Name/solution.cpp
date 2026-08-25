#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int t;
 
    cin >> t;
 
    while (t--)
    {
        string s, t;
        int a;
        cin >> a >> s >> t;
 
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
 
        if (s == t)
        {
            cout << "YES" << "
";
        }
        else
        {
            cout << "NO" << "
";
        }
    }
}