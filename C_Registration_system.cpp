#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v;
    map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        mp[s]++;
        if (mp[s] == 1)
        {
            v.push_back("OK");
        }
        else
        {
            int cnt = mp[s] - 1;
            string modS = s + to_string(cnt);
            v.push_back(modS);
        }
    }
    for (auto st : v)
    {
        cout << st << '\n';
    }
    return 0;
}