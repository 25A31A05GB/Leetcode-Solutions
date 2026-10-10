class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid= low +(high-low)/2;
              int missing = arr[mid] - (mid + 1);//n-i+1
        if(missing<k)
          low=mid+1; // if target is greater updting low 
        else
        high=mid-1; //updating high

        }
    return low+k; //handles +k if element not in array 
    }
};