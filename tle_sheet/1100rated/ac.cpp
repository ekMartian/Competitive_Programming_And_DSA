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
        vector <int> arra;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arra.push_back(a);
        }
        vector <int> arrb;
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            arrb.push_back(b);
        }
        vector <set<int>> cond;
        set <int> first;
        for (int i = n-1; i >= n-k; i--)
        {
            first.insert(arra[i]);

        }
        cond.push_back(first);
        for (int i = n-k-1; i >= 0; i--)
        {
            set<int> here;
            here.insert(arra[i]);
            cond.push_back(here);

        }
        reverse(cond.begin(), cond.end());
        set <int> done;
        bool is = true;
        for (int i = 0; i < n-k; i++)
        {
            int here = arrb[i];
            if (here == -1)
            {
                set <int> s = cond[i];
                int y;
                for (auto x : s)
                {   
                    y = x;

                }
                // cout << y << endl;
                arrb[i] = y; 
                here = arrb[i];
            }
            if (cond[i].find(here) != cond[i].end() && done.find(here) == done.end())
            {
                done.insert(here);
                // continue;
            }
            else
            {
                // cout << "terminating on " << here << endl;
                is = false;
                // cout << "broken at checkpoint 1" << endl;
                break;
            }
        }

        int l = cond.size();
        set <int> now = cond[l-1];
        set <int> other;
        // vector <int> thisone;
        // for (int i = n-k; i < n; i++)
        // {

        //     thisone.push_back(arra[i]);
        //     // cout << arra[i] << " ";
        // }
        // cout << endl;
        // sort(thisone.begin(), thisone.end());
        // reverse(thisone.begin(), thisone.end());
        // vector <int> thatone;
        int count = 0;
        for (int i = n-k; i < n; i++)
        {
            if (arrb[i] == -1)
            {
                count++;
            }
            else
            {
                other.insert(arrb[i]);
            }
            // thatone.push_back(arrb[i]);
            // cout << arrb[i] << " ";
        }
        for (auto x : now)
        {
            int here = x;
            if (other.find(here) != other.end() && done.find(here) == done.end())
            {
                other.erase(here);
                done.insert(here);
            }
            else if (other.find(here) == other.end() && count > 0 && done.find(here) == done.end())
            {
                done.insert(here);
                count--;

            }
            else
            {
                // cout << "broken at checkpoint 2" << endl;
                is = false;
                break;
            }
        }
        // cout << endl;
        // sort(thatone.begin(), thatone.end());
        // reverse(thatone.begin(), thatone.end());
        // for (int i = 0; i < thatone.size(); i++)
        // {
        //     if (done.find(thisone[i]) == done.end() && thisone[i] == thatone[i])
        //     {
        //         done.insert(thisone[i]);
        //         continue;
        //     }
        //     else if (done.find(thisone[i]) == done.end() && thatone[i] == -1 && count > 0)
        //     {
        //         count--;
        //         done.insert(thisone[i]);


        //     }
        //     else
        //     {
        //         cout << "entered here now " << endl;
        //         is = false;
        //         break;
        //     }

        // }

        // for (int i = n-k; i < n; i++)
        // {
        //     int here = arrb[i];
        //     // if (here == -1)
        //     // {

        //     // }
        //     if (cond[l-1].find(here) != cond[l-1].end() &&  done.find(here) == done.end())
        //     {
        //         done.insert(here);
        //         continue;
        //     }
        //     else
        //     {
        //         cout << "entered here now " << endl;
        //         is = false;
        //         break;
        //     }


        // }
        if (is == true)
        {
            cout << "YES" << endl;
        }
        else

        {
            cout << "NO" << endl;
        }


    }
}

// am i missing a test case? 

// like an edge case?

// or something wrong in the logic?

