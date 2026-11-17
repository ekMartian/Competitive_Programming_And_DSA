#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 3 && n != 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    vector <int> what;
    for (int i = 1; i <= n; i+=2)
    {
        what.push_back(i);
        // cout << i << " ";
    }
    reverse(what.begin(), what.end());
    for (int i = 0; i < what.size(); i++)
    {
        cout << what[i] << " ";
    }
    vector <int> rev;
    for (int i = 2; i <= n; i+=2)
    {
        rev.push_back(i);
        
        // cout << i << " ";
    }
    reverse(rev.begin(), rev.end());
    for (int i = 0; i < rev.size(); i++)
    {
        cout << rev[i] << " ";
    }
    cout << endl;

}

// ALL CASES!!
// SMALL NUMBERS!! WHAT????
