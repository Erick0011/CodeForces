#include <iostream>
using namespace std;
int main()
{
    string s;
    int n, p = 0;
    cin >> n >> s;
    
    for(int i = 0; i < n-1; i++){
        if(s[i] == s[i + 1] ) p++; 
    }
    cout << p;
    return 0;
}