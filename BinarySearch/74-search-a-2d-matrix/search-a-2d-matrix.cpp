
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int top = 0, bot = n - 1;

        while (top <= bot) {
            int mid = (top + bot) / 2;

            // Check if target belongs to this row
            if (matrix[mid][0] <= target && matrix[mid][m - 1] >= target) {
                int left = 0, right = m - 1;

                // Binary search inside the row
                while (left <= right) {
                    int mid2 = (left + right) / 2;

                    if (matrix[mid][mid2] == target)
                        return true;
                    else if (matrix[mid][mid2] < target)
                        left = mid2 + 1;  // Search right
                    else
                        right = mid2 - 1; // Search left
                }

                return false; // Target not in this row
            }
            else if (matrix[mid][0] > target) {
                bot = mid - 1; // Search upper rows
            }
            else {
                top = mid + 1; // Search lower rows
            }
        }

        return false; // Target not found
    }
};
