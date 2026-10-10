
class Solution {
public:
    int maxElement(vector<vector<int>>& mat, int col) {
        int row = 0;
        for (int i = 1; i < mat.size(); i++) {
            if (mat[i][col] > mat[row][col]) {
                row = i; // Find maximum row in this column
            }
        }
        return row;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0, high = m - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int row = maxElement(mat, mid); // Column maximum

            int left = (mid > 0) ? mat[row][mid - 1] : -1;
            int right = (mid < m - 1) ? mat[row][mid + 1] : -1;

            if (mat[row][mid] > left && mat[row][mid] > right) {
                return {row, mid}; // Peak found
            } else if (left > mat[row][mid]) {
                high = mid - 1; // Search left columns
            } else {
                low = mid + 1; // Search right columns
            }
        }

        return {-1, -1};
    }
};
