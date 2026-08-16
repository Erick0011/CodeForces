#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    string s, x;
    int a, b, c;
    cin >> s;
 
    a = count(s.begin(), s.end(), '1');
    b = count(s.begin(), s.end(), '2');
    c = count(s.begin(), s.end(), '3');
 
    while (a--)
        x = x + "1+";
    while (b--)
        x = x + "2+";
    while (c--)
        x = x + "3+";
 
    x.pop_back();
 
    cout << x;
 
    return 0;
}