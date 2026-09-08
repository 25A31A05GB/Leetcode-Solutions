class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int leftMax = 0;
        int rightMax = 0;

        int water = 0;

        while (left < right) {

            // If left wall is smaller, process the left side
            // because water level is decided by the smaller wall
            if (height[left] <= height[right]) {

                // Update the tallest wall seen from the left
                if (height[left] >= leftMax) {
                    leftMax = height[left];
                }
                else {
                    // Left max is taller, so water can be stored here
                    water += leftMax - height[left];
                }

                // Move left pointer to the next position
                left++;
            }
            else {

                // Process the right side when right wall is smaller
                if (height[right] >= rightMax) {
                    // Update the tallest wall seen from the right
                    rightMax = height[right];
                }
                else {
                    // Right max is taller, so water can be stored here
                    water += rightMax - height[right];
                }

                // Move right pointer to the previous position
                right--;
            }
        }

        return water;
    }
};