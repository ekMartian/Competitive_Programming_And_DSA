#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set <int> as;
    for (int i =0; i < n; i++)
    {
        int a;
        cin >> a;
        as.insert(a);
    }
    cout << as.size() << endl;
}