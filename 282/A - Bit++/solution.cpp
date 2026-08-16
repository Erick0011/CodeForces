#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n, x, op;
    string s;
    x = 0;
    cin >> n;
 
    while (n--)
    {
        cin >> s;
        op = count(s.begin(), s.end(), '+');
        if (op != 0)
            x += 1;
        else
            x -= 1;
    }
    cout << x;
}