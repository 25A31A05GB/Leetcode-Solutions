
class Solution {
public:
    long long totalHours(vector<int>& piles, int k) {
        long long hours = 0;

        for (int i = 0; i < piles.size(); i++) {
            hours += ceil((double)piles[i] / k); // Hours for each pile
        }

        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {
            int mid = low + (high - low) / 2; // Try eating speed
            long long hours = totalHours(piles, mid);

            if (hours <= h) {
                high = mid - 1; // Valid speed; try slower
            } else {
                low = mid + 1;  // Too slow; increase speed
            }
        }

        return low; // Minimum valid speed
    }
};
