#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> uniqueSubsets(vector<int>& arr) {
    sort(arr.begin(), arr.end()); 
    vector<vector<int>> res;
    vector<int> cur;

    function<void(int)> backtrack = [&](int start) {
        res.push_back(cur); // add current subset
        for (int i = start; i < (int)arr.size(); ++i) {
            if (i > start && arr[i] == arr[i-1]) continue;
            cur.push_back(arr[i]);
            backtrack(i + 1);
            cur.pop_back();
        }
    };

    backtrack(0);
    return res;
}

void printSubsets(vector<vector<int>>& subsets) {

    sort(subsets.begin(), subsets.end());
    
    for (auto& subset : subsets) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) {
                cout << " ";
            }
        }
        cout << "]\n";
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<int> multiset(n);
    for (int i = 0; i < n; ++i) {
        cin >> multiset[i];
    }
    
    vector<vector<int>> result = uniqueSubsets(multiset);
    
    printSubsets(result);

    return 0;
}