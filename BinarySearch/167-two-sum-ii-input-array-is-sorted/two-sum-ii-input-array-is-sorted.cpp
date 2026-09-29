class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int i=0;
        for(int j=n-1;j>i;){
            if(numbers[i]+numbers[j]==target)
            {
                return {i+1,j+1};
            }
            else if (numbers[i]+numbers[j]<target){
                i++;
            }
            else 
            j--;
        }
        return {};
    }
};