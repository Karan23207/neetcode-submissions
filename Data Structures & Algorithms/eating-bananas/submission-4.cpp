class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int n = piles.size();

        int low = 1;
        int high = 0;
        for(int x : piles) high = max(high, x);

        int ans = high;

        // 2. Binary Search replaces your sequential outer loop
        while (low <= high) {
            int k = low + (high - low) / 2; // Midpoint is our candidate speed 'k'
            long long t = h; 

            // 3. Your exact inner loop logic calculating hours
            for(int j = 0; j < n; j++){
                long long time = piles[j] / k;
                if(piles[j] % k != 0) {
                    time += 1;
                }
                
                t -= time;
            }
            
            // 4. Adjust binary boundaries based on whether Koko succeeded
            if (t >= 0) {
                ans = k;         // This speed works! Save it.
                high = k - 1;    // Can we go even slower? Search left half.
            } else {
                low = k + 1;     // Too slow! We need a faster speed. Search right half.
            }
        }
        return ans;
    }
};
