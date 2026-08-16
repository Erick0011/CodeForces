#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    string name;
    unordered_map<char, int> freq;
    int unique = 0;
 
    cin >> name;
 
    for (int n : name)
    {
        freq[n]++;
        if (freq[n] == 1)
            unique++;
    }
 
    cout << (unique % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
}