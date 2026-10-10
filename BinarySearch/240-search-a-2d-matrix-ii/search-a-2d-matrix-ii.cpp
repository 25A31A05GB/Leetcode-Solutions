class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0; i < n; i++) {
        // searching row by row 
            int low = 0;
            int high = m - 1;

            // Binary search this row
            while (low <= high) {
                int mid = (low + high) / 2;

                if (matrix[i][mid] == target)
                    return true;
                else if (matrix[i][mid] < target)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }

        return false;
    }
};