#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<char> result;
        stack<int> lower, upper;

        for (int i = 0; i < s.size(); ++i) {
            char ch = s[i];
            if (ch == 'b') {
                if (!lower.empty()) {
                    result[lower.top()] = '\0';
                    lower.pop();
                }
            } else if (ch == 'B') {
                if (!upper.empty()) {
                    result[upper.top()] = '\0';
                    upper.pop();
                }
            } else {
                result.push_back(ch);
                if (islower(ch)) {
                    lower.push(result.size() - 1);
                } else {
                    upper.push(result.size() - 1);
                }
            }
        }

        for (char c : result) {
            if (c != '\0') {
                cout << c;
            }
        }
        cout << '\n';
    }
    return 0;
}