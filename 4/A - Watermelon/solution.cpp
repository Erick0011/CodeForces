#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Creating the variable
    int w; cin >> w;
    int result;
    result = w%2;
 
    if(result == 0 && w > 2){
        cout << "Yes";
    } else{
        cout << "No";
    }
	
}