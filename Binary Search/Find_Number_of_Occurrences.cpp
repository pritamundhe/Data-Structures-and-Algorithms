int countOccurrences(const int arr[], int n, int target) {
    // Write your code here
    int l1=0,r1=n-1;
    while(l1<=r1){
        int mid1 = l1+(r1-l1)/2;
        if(arr[mid1]==target){
            int start = mid1;
            r1 = mid1 -1;
        }else if(arr[mid]>target){
            r1 = mid -1;
        }else{
            l1 = mid +1;
        }
    }
    int l2=0, r2=n-1;
    while(l2<=r2){
        int mid2 = l2(r2-l2)/2;
        if(arr[mid]==target){
            int end = mid;
            l2 = mid +1;
        }else if(arr[mid]>target){
            r2 = mid -1;
        }else{
            l2 = mid +1;
        }
    }

    return (end-start+1)

}
