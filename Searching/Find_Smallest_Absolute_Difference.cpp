#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector < int > a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int min = INT_MAX;
    int result = INT_MAX;

    for (int i = 0; i < n; i++) {
        int dif = abs(a[i] - k);
        if (dif < min || (dif == min && a[i] < result)) {
            min = dif;
            result = a[i];
        }
    }
    cout << result << endl;
}

/*
Sample Input
5 10
1 5 9 12 14

Your Output
9
*/