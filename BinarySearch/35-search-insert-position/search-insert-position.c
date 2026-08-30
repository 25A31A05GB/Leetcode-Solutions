int searchInsert(int* nums, int n, int target) {
int i;
// normal binarysearch
    for( i =0 ;i<n;i++){
        if(nums[i]==target){
            return i;
        }
        if ( nums[i]>target)
        break;
    }

    return i;
    
}