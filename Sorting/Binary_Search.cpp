#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int k) {
    int left = 0, right = n-1;
    while (left <= right) {
        int middle = (left + right) / 2; 
        if (arr[middle]==k) {
            return middle;
        } else if (arr[middle] > k) {
            right = middle-1;
        } else {
            left = middle+1;
        }
    }
    return -1; // k not found
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << binary_search(arr, n, k) << endl;
    return 0;
}

/*
Sample Input
9 7 
1 3 6 7 10 13 20 25 27 

Your Output
3

*/
