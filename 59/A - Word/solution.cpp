#include <iostream>
using namespace std;
 
int main()
{
    string a;
    int upper = 0, lower = 0;  
    cin >> a;
    
    for (int i = 0; i < a.size(); i++){
        if (isupper(a[i])) upper++;
        else lower++;
    }
    
    if (upper > lower){
    for (int i = 0; i < a.size(); i++)
            a[i] = toupper(a[i]);
    } else {
        for (int i = 0; i < a.size(); i++)
            a[i] = tolower(a[i]);
    }
 
    cout << a << endl;
    
    return 0;
}