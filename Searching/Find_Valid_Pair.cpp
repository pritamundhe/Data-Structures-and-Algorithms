#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector < pair < int, int >> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }
    int right, left;
    cin >> left >> right;
    for (int i = 0; i < n; i++) {
        int sum = p[i].first + p[i].second;
        int product = p[i].first * p[i].second;
        if ((sum >= left && sum <= right) && (product >= left && product <= right)) {
            cout << p[i].first << " " << p[i].second << endl;
        }
    }
    return 0;
}