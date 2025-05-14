#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int sum = 0, avg = 1, goldcnt = 0;
         priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < 5; i++)
        {
            int rating;
            cin >> rating;
            sum += rating;
            pq.push(rating);
        }
        avg = sum / 5;
        if (avg < 7)
        {
            for (int i = 0; i < 5 && avg < 7; i++)
            {
                sum += (10-pq.top());
                pq.pop();
                avg = sum / 5;
                goldcnt += 1;
            }
        }

        cout << goldcnt * 100 << '\n';
    }

    return 0;
}