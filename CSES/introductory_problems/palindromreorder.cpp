#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> howmany(26, 0);
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char c;
        c = s[i];
        int index = c - 'A';
        howmany[index]++;
    }
    int count = 0;
    bool is = true;
    for (int i = 0; i < 26; i++)
    {
        if (count < 1 && howmany[i] % 2 == 1)
        {
            count++;
        }
        else if (count == 1 && howmany[i] % 2 == 1)
        {
            is = false;
            break;

        }
    }
    if (is == false)
    {
        cout << "NO SOLUTION" << endl;
       
        
    }
    else
    {
        vector <pair<int, char>> todo;
        for (int i = 0; i < 26; i++)
        {
            int number = howmany[i];
            char c = 'A' + i;
            todo.push_back({number, c});
        }
        vector <char> palindrome(s.size(), 'a');
        sort(todo.rbegin(), todo.rend());
        int k = 0;
        char storer;
        for (int i = 0; i < 26; i++)
        {
            if (todo[i].first > 0 && todo[i].first % 2 == 0)
            {
                for (int j = 0; j < todo[i].first; j+=2)
                {
                    palindrome[k] = todo[i].second;
                    palindrome[s.size()-k-1] = todo[i].second;
                    k++;

                }
            }
            else if (todo[i].first > 0 && todo[i].first % 2 != 0)
            {   
                storer = todo[i].second;
                todo[i].first--;
                for (int j = 0; j < todo[i].first; j+=2)
                {
                    palindrome[k] = todo[i].second;
                    palindrome[s.size()-k-1] = todo[i].second;
                    k++;

                }


            }
        }
        if (count == 1)
        {
            palindrome[s.size()/2] = storer;
        }
        for (int i = 0; i < s.size(); i++)
        {
            cout << palindrome[i];
        }
        cout << endl;
    }
}