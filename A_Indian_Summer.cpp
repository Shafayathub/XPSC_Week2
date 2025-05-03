#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<pair<string, string>, bool> mp;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        mp[{a, b}] = true;
    }
    cout << mp.size();
    return 0;
}