#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector < pair < int, int >> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }
    for (int i = 0; i < n; i++) {
        int sum = p[i].first + p[i].second;
        if (sum % k == 0) {
            cout << "(" << p[i].first << ", " << p[i].second << ")" << endl;
        }
    }
    return 0;
}

/*
Sample Input
3 5
1 4
2 5
6 4

Your Output
(1, 4)
(6, 4)
*/