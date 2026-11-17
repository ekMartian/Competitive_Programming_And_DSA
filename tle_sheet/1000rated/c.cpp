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
        vector <string> lists;
        for (int i = 0; i < n; i++)
        {
            // vector <int> here;
            string here;
            int l;
            cin >> l;

            for (int j = 0; j < l; j++)
            {
                int a;
                cin >> a;
                here.push_back(a);
                // here.push_back(a);
            }
            reverse(here.begin(), here.end());

            lists.push_back(here);
        }
        sort(lists.begin(), lists.end());
        reverse(lists.begin(), lists.end());
        vector <int> order;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < lists[i].size(); j++)
            {
                order.push_back(lists[i][j] - '0' + 48);
            }
        }
        set <int> done;
        for (int i = 0; i < order.size(); i++)
        {
            // if (done.)
            if (done.count(order[i]) == 0)
            {
                cout << order[i] << " ";
                done.insert(order[i]);
            }
            else
            {
                continue;
            }
        }
        cout << endl;
    }
}