#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector <int> as;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            as.push_back(a);
            total+=a;
        }
        sort(as.begin(), as.end());
        vector <int> singles = as;
        reverse(singles.begin(), singles.end());
        vector <int> doubles;

        for (int i = 0; i+1 < n; i++)
        {
            int element = as[i]+as[i+1];
            doubles.push_back(element);
            i++;
        }
        int takeout = INT_MAX;
        int sumofsingles = 0;
        vector <int> singleprefix;
        for (int i = 0; i < n; i++)
        {
            sumofsingles+=singles[i];
            singleprefix.push_back(sumofsingles);

        }
        int sumofdoubles = 0;
        vector <int> doubleprefix;
        for (int i = 0; i < n/2; i++)
        {
            sumofdoubles+=doubles[i];
            doubleprefix.push_back(sumofdoubles);
        }
        
        
        
        for (int i = 0; i < k; i++)
        {
            int thisone = singleprefix[i] + doubleprefix[k-i];
            takeout = min(takeout, thisone);
        }
        cout << total - takeout << endl;
    }
}

// contiguous subarray
// continuous subarray
// sliding window

