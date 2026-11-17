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
        vector <int> perm;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            perm.push_back(a);
        }
        int number = 0;
        for (int i = 0; i < n-1; i++)
        {
            int hcf = gcd(perm[i], perm[i+1]);
            if (((perm[i] + hcf) == perm[i+1]) || (perm[i+1] + hcf == perm[i]))
            {
                number++;
            }
        }
        cout << number << endl;

    }
}


// WRITE SHIT DOWN MAAATHEMATICALLY!!!
// for mod stuff for gcd stuff, express in its generla forms or hwteevr you know ya knowwww!!!

// what could be wrong here first,m like if ithis is corect have. i implemented domerhign wrog ior msied it, check this logic fully first. 