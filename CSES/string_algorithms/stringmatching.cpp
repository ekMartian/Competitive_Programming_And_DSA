#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    cin >> a >> b;
    int n = a.size();
    int l = b.size();
    string initiator = "";
    for (int i = 0; i < l; i++)
    {
        initiator+=a[i];
    }
    vector <string> strings;
    strings.push_back(initiator);
    string prev = initiator;
    int at = l;
    for (int i = 0; i < n-l; i++)
    {
        string here = prev.substr(1, l-1);
        here = here + a[at];
        at++;
        prev = here;
        strings.push_back(here);
    }
    int count = 0;
    for (int i = 0; i < n-l+1; i++)
    {
        if (b == strings[i])
        {
            count++;
        }
    }
    cout << count << endl;
}