void merge(vector<int> &arr, int left, int mid, int right){
    vector<int> a;
    vector<int> b;
    
    int i = left;
    while(i<=mid){
        a.push_back(arr[i]);
        i++;
    }
    
    i = mid+1;
    while(i<=right){
        b.push_back(arr[i]);
        i++;
    }
    
    i = left;
    int l =0;
    int r = 0;
    while(l<a.size() && r<b.size()){
        if(a[l]<b[r]){
            arr[i]=a[l];
            i++;
            l++;
        }else{
            arr[i]=b[r];
            i++;
            r++;
        }
    }
    
    while(l<a.size()){
        arr[i]=a[l];
        i++;
        l++;
    }
    while(r<b.size()){
        arr[i]=b[r];
        i++;
        r++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if(left<right){
        int mid = left+(right-left)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
    
}

/*
Sample Input
8
6 5 3 1 8 7 2 4

Your Output
1 2 3 4 5 6 7 8 
*/