#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    string a;
 
    set<char> b;
 
    getline(cin, a);
 
    for (auto i : a)
    {
        if (isalpha(i))
        {
            b.insert(i);
        }
    }
 
    cout << b.size();
}