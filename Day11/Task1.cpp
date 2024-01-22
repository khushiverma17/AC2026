#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/978/B
// file name
int minremove(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x')
        {
            count++;
        }
    }
    return count;
}
// tc=O(s.length)
// sc=O(1)

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << minremove(s) << endl;

    return 0;
}
