//took help from ai in the previous quesitoj (THIS WAS A VIRTUAL CONTEST), forgot to mention, always check. 

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
        // int k = n*n - l;
        
        if (k == n*n - 1)
        {
            cout << "no" << endl;
        }
        else
        {
            vector<vector<char>> ans;
            int counter = 0;
            for (int i = 0; i < n; i++)
            {
                vector<char>thisrow;
                for (int j = 0; j < n; j++)
                {
                    // cout << "doingsomething" << endl;
                    if (counter < k)
                    {
                        thisrow.push_back('U');
                        counter++;
                        continue;

                    }
                    else if ((n-j) % 2 == 0)
                    {
                        while (j < n)
                        {
                            thisrow.push_back('R');
                            thisrow.push_back('L');
                            j+=2;
                        }
                    }
                    else if ((n-j) % 2 == 1 && j != n-1)
                    {
                        thisrow.push_back('R');
                        j++;
                        while (j < n)
                        {
                            thisrow.push_back('R');
                            thisrow.push_back('L');
                            j+=2;
                        }
                    }
                    else if ((n-j) % 2 == 1 && j == n-1)
                    {
                        thisrow.push_back('D');
                        j++;
                        while (j < n)
                        {
                            thisrow.push_back('R');
                            thisrow.push_back('L');
                            j+=2;
                        }
                    }


                }
                ans.push_back(thisrow);
            }
            cout << "yes" << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << ans[i][j] << "";
                }
                cout << endl;
            }

        }
        
    }
}

//operator precedene!!!
// i vs j be careful!
// op prec