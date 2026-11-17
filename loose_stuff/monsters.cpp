#include <bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int k;
        cin >> k;
        vector <pair<int, int>> moensten;
        for (long long int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            // \

            if (a % k == 0)
            {
                moensten.push_back({k, i});
            }
            else
            {
                a = a%k;
                moensten.push_back({a, i});

            }
            
        }
        sort(moensten.begin(), moensten.end(), [] (pair<int, int> a, pair<int, int> b){
            if (a.first != b.first){
                return a.first > b.first;
            }
            return a.second < b.second;
        });
        // reverse(moensten.begin(), moensten.end());
        // vector <int> workingon;
        // for (int i = 1; i < n; i++)
        // {
        //     if (moensten[i].first == moensten[i-1].first && moensten)
        //     {
        //         workingon.push_back(i);
        //         reverse(moensten.begin() + workingon[0], moensten.begin() + workingon[workingon.size()-1])

        //     }
            
        // }
        for (int i = 0; i < n; i++)
        {
            cout << (moensten[i].second)+1 << " ";
        }
        cout << endl;
    }
}

//lambda functa
//write in the template 