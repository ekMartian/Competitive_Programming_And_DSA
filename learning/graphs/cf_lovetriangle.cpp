#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> f;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        f.push_back(a-1);
    }
    for (int i = 0; i < n; i++)
    {
        int a = f[i];
        int b = f[a];
        int c = f[b];
        if (i == c)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}