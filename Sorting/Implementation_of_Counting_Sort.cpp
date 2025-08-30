void countingSort(vector<int>& arr) {
    if(arr.empty()) return;
    int mn = *min_element(arr.begin(), arr.end());
    int mx = *max_element(arr.begin(), arr.end());
    
    int k = mx-mn+1;
    vector<int> ac(k,0);
    vector<int> result(arr.size());
    for(int i=0; i<arr.size(); i++){
        ac[arr[i]-mn]++;
    }
    
    for(int i=1; i<k; i++){
        ac[i]=ac[i]+ac[i-1];
    }
    
    for(int i=arr.size()-1; i>=0; i--){
        result[ac[arr[i]-mn]-1]=arr[i];
        ac[arr[i]-mn]--;
    }
    for(int i=0; i<arr.size(); i++){
        arr[i]=result[i];
    }
}

/*
Sample Input
8
6 5 3 1 8 7 2 4

Your Output
1 2 3 4 5 6 7 8 
*/