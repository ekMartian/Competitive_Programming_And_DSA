//took help from ai in the previous quesitoj (THIS WAS A VIRTUAL CONTEST), forgot to mention, always check. 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        int k = n*n - l;
        
        if (k == 1)
        {
            cout << "no" << endl;
        }
        else
        {
            vector <vector <char>> ans;
            
            if (k % 2 == 0)
            {
                int counter = 0;
                for (int i = 0; i < n; i++)
                {
                    vector <char> thisrow;
                    for (int j = 0; j < n; j++)
                    {
                        if (counter < k && j < n-1)
                        {
                            thisrow.push_back('R');
                            thisrow.push_back('L');
                            counter+=2;
                            j++;

                        }
                        else
                        {
                            thisrow.push_back('D');
                        }
                    }
                    ans.push_back(thisrow);
                }
            }
            else if (k % 2 == 1)
            {
                int counter = 0;
                for (int i = 0; i < n; i++)
                {
                    vector <char> thisrow;
                    for (int j = 0; j < n; j++)
                    {
                        if (counter == 0)
                        {
                            thisrow.push_back('R');
                            j++;
                            counter+=1;

                        }
                        
                        if (counter < k && j < n-1)
                        {
                            thisrow.push_back('R');
                            thisrow.push_back('L');
                            counter+=2;
                            j++;

                        }
                        else
                        {
                            thisrow.push_back('D');
                        }
                    }
                    ans.push_back(thisrow);
                }
            }
            cout << "yes" << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << ans[i][j] << " ";
                }
                cout << endl;
            }

        }
        
    }
}