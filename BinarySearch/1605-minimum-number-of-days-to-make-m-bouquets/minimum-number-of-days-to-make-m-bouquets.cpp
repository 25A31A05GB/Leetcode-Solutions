class Solution {
public:
    bool canMake(vector<int>& bloomDay, int m, int k, int day) {
        int bouquets = 0, flowers = 0;

        for (int bloom : bloomDay) {
            if (bloom <= day) {
                flowers++; // Count bloomed flowers

                if (flowers == k) {
                    bouquets++; // Make one bouquet
                    flowers = 0; // Reset for next bouquet

                    if (bouquets >= m)
                        return true; // Required bouquets made
                }
            } else {
                flowers = 0; // Adjacent flowers broken
            }
        }

        return false; // Not enough bouquets
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n = bloomDay.size();

        if ((long long)m * k > n)
            return -1; // Not enough flowers

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low <= high) {
            int mid = low + (high - low) / 2; // Try this day

            if (canMake(bloomDay, m, k, mid))
                high = mid - 1; // Possible; try fewer days
            else
                low = mid + 1; // Need more days
        }

        return low; // Minimum required days
    }
};