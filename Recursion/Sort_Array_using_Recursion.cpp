#include <bits/stdc++.h>
using namespace std;

// Function to insert an element in sorted order
void insert(vector<int> &a, int tp) {
    if (a.size() == 0 || a[a.size() - 1] <= tp) {
        a.push_back(tp);
        return;
    }
    int x = a.back();
    a.pop_back();
    insert(a, tp);
    a.push_back(x);
}

// Recursive function to sort the array
void sortArray(vector<int> &a) {
    if (a.size() <= 1) return;

    int tp = a.back();
    a.pop_back();

    sortArray(a);
    insert(a, tp);
}

int main() {
    vector<int> a = {3, 1, 4, 2, 5};
    
    sortArray(a);
    
    for (int i : a)
        cout << i << " ";
    cout << endl;

    return 0;
}
