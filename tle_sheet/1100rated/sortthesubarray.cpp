#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> arrone;
        vector <int> arrtwo;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arrone.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arrtwo.push_back(a);
        }
        int startmark = 0;
        int endmark = n-1;
        for (int i = 0; i < n; i++)
        {
            if (arrone[i] == arrtwo[i])
            {
                continue;
            }
            else
            {
                startmark = i;
                break;

            }
        }
        for (int i = n-1; i >= 0; i--)
        {
            if (arrone[i] == arrtwo[i])
            {
                continue;
            }
            else
            {
                endmark = i;
                break;

            }
        }
        int minimum = arrtwo[startmark];
        int maximum = arrtwo[endmark];

        for (int i = startmark - 1; i >= 0; i--)
        {
            if (arrone[i] <= minimum)
            {
                minimum = arrone[i];
                startmark--;
            }
        }
        for (int i = endmark + 1; i < 0; i++)
        {
            if (arrone[i] >= maximum)
            {
                maximum = arrone[i];
                endmark++;
            }
        }
        // int start = 0;
        // int end = n-1;
        cout << startmark+1 << " " << endmark+1 << endl;

    }
}