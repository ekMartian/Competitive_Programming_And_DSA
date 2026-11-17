#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b; cin >> a >> b; int n = a.size(); int l = b.size();
    string initiator = "";
    for (int i = 0; i < l; i++)
    {
        initiator+=a[i];
    }
    int count = 0;
    if (initiator == b)
    {
        count++;
    }
    int at = l;
    for (int i = 0; i < n-l; i++)
    {
        initiator = initiator.substr(1, l-1);
        initiator = initiator + a[at];
        at++;
        if (initiator == b)
        {
            count++;
        }
    }
    cout << count << endl;
}