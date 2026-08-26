class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;                  
        int right = height.size() - 1; 
        int maxArea = 0;               

        while (left < right) {

            // Width = distance between two pointers
            int width = right - left;

            // Smaller height limits the water
            int h = min(height[left], height[right]);

            // Calculate current container area
            int area = width * h;

            // Update maximum area
            maxArea = max(maxArea, area);

            // Move the shorter side
            // because taller side cannot improve height
            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return maxArea;
    }
};