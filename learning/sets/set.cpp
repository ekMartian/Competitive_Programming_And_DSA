#include <bits/stdc++.h>
using namespace std;

int main()
{
    set <int> s1;
    set <int> s2 = {1, 2, 3, 2, 1};
    multiset <int> s3 = {1, 2, 3, 2, 1};
    for (auto& x : s2)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto& x : s3)
    {
        cout << x << " ";
    }
    cout << endl;

}