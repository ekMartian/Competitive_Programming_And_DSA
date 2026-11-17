#include <bits/stdc++.h>
using namespace std;
//dont try to count 
// small constraints problem

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        string x;
        cin >> x;
        cin >> s;

        bool flag = false;
        for (int i = 0; i <= 5; i++)

        {
            if (x.find(s) != string::npos)
            {
                cout << i << endl;
                // break;
                flag = true;
                break;
            }
            else
            {
                x = x + x;
            }
        }
        if (flag == false)
        {
            cout << -1 << endl;
        }
    }
    // 3renarayan
    // multiple static_pointer_cast
    // ultiple sports. jow tha thelps and relatioj to ental thing 

}#include <bits/stdc++.h>
using namespace std;

// Shortcuts to save typing
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
#define pb push_back
#define all(x) (x).begin(), (x).end()

// The "Debug" Section
// This only runs on your machine, not on Codeforces
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

void solve() {
    // Your code goes here
    int n;
    cin >> n;
}

int main() {
    // Fast I/O (Essential for C++)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; // Comment this out if there are no test cases
    while (t--) {
        solve();
    }
    return 0;
}

//template?