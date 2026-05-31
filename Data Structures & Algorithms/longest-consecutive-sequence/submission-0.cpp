class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // unordered_map<int,int> mp;

        int n= nums.size();
        if (n == 0 ) return 0;

        int maxi=INT_MIN; int c=1;
        sort(nums.begin(), nums.end());
            
            for(int j=1; j<n; j++){
                if (nums[j] == nums[j-1]) continue; 
                int diff = nums[j] - nums[j-1];
                if( diff == 1)
                c++;
               
                else{
                  maxi= max(maxi , c);
                  c=1;
                }
            
        }
        maxi= max(maxi , c);
        return maxi;

    }
};
