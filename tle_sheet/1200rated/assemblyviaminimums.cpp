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
        int m = n*(n-1)/2;
        vector <int> arr;
        for (int i = 0; i < m; i++)
        {
            int a;
            cin  >> a;
            arr.push_back(a);

        }
        map <int, int> counts;
        vector <int> numbers;
        sort(arr.begin(), arr.end());
        int numberof = n-1;
        int doing = arr[0];
        counts.insert({doing, 1});
        numbers.push_back(doing);
        for (int i = 1; i < m; i++)
        {
            if (arr[i] == doing)
            {
                counts[doing]++;
            }
            else
            {
                doing = arr[i];
                counts.insert({doing, 1});
                numbers.push_back(doing);
            }
        }
        vector <int> ans;
        for (int i = 0; i < numbers.size(); i++)
        {
            int here = numbers[i];
            while (numberof <= counts[here] && counts[here] > 0)
            {
                counts[here] = counts[here] - numberof;
                numberof--;
                ans.push_back(here);
            }
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }eeeeee
        for (int i = ans.size(); i < n; i++)
        {
            cout << ans[ans.size() - 1] << " ";
        }
        cout << endl;
    }
}

// dry run, infinite loops
// // infinite loops
