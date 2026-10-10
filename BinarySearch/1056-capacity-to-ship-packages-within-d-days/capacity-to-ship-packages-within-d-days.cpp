class Solution {
public:
    int calculateDays(vector<int>& weights, int capacity) {
        int days = 1;
        int remaining = capacity;

        for (int i = 0; i < weights.size(); i++) {
            if (weights[i] <= remaining) {
                remaining -= weights[i]; // Load package
            }
            else {
                days++; // Start a new day
                remaining = capacity - weights[i];
            }
        }

        return days; // Total days required
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end()); // Heaviest package
        int high = accumulate(weights.begin(), weights.end(), 0); // All packages in one day
        int answer = high;

        while (low <= high) {
            int mid = low + (high - low) / 2; // Try capacity

            int requiredDays = calculateDays(weights, mid);

            if (requiredDays <= days) {
                answer = mid; // Valid; try smaller capacity
                high = mid - 1;
            }
            else {
                low = mid + 1; // Capacity too small
            }
        }

        return answer; // Minimum capacity
    }
};