#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    
    
    {
        int t;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            string s;
            cin >> s;
            int l = s.length();
            vector <tuple<string, int, int>> sames;
            bool doing = false;
            string current = "";
            int index;
            int count = 0;
            for (int j = 1; j < l; j++)
            {

                if (s[j] == s[j-1] && doing == false)
                {
                    doing = true;
                    current = current + s[j] + s[j];
                    index = j-1;
                }
                else if (s[j] == s[j-1] && doing == true)
                {
                    current = current + s[j];

                }
                else if (s[j] != s[j-1] && doing == true)
                {
                    sames.push_back({current, index, j-1});
                    doing = false;
                    current = "";
                    count++;

                }
                // else if (j == l-1 && doing == true)
                // {
                //     sames.push_back({current, index, j-1});
                //     doing = false;
                //     current = "";
                //     count++;
                // }
                
            }
            vector <int> counts;
            for (int j = 0; j < count; j++)
            {
                int start = get<1>(sames[j]);
                int end = get<2>(sames[j]);
                string here = get<0>(sames[j]);
                char c = here[0];
                bool toput = false;
                char storer;
                if (start > 0)
                {
                    if (s[start-1] != c)
                    {
                        storer = s[start-1];
                        if (s[end+1] != storer)
                        {
                            toput = true;
                        }

                    }
                    if (toput == true)
                    {
                        counts.push_back(end - start + 3);
                    }



                }
                else
                {
                    continue;
                }
            }
            int countofone = 0;
            int countoftwo = 0;
            int countofthree = 0;
            bool readyornot = false;
            for (int j = 0; j < l; j++)
            {
                if (s[j] == '1')
                {
                    countofone++;
                }
                else if (s[j] == '2')
                {
                    countoftwo++;
                }
                else
                {
                    countofthree++;
                }

            }
            if (countofone > 0 && countoftwo > 0 && countofthree > 0)
            {
                readyornot = true;
            }
            for (int j = 2; j < l; j++)
            {
                if (s[j] != s[j-1] && s[j] != s[j-2] && s[j-1] != s[j-2])
                {
                    counts.push_back(3);
                }
            }
            sort(counts.begin(), counts.end());
            // int countslength = counts.size();
            // for (int j = 0; j < countslength; j++)
            // {
            //     cout << counts[j] << endl;
            // }
            if (readyornot == true)
            {
                cout << counts[0] << endl;
            }
            else
            {
                cout << 0 << endl;
            }

        }
    }
}