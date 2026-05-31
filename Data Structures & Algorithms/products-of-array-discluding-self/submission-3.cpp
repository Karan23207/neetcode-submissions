class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n= nums.size();
        // for prefix (means taking )
        vector<int> prefix(n); 
        prefix[0] =1;
        for(int i=1; i<n; i++){ 
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        
        // for suffix (means taking )
        vector<int> suffix(n); 
        suffix[n-1] =1; int j=1;
        for(int i=n-2; i>=0; i--){ 
         suffix[i] = suffix[i+1] * nums[i+1];
        }

        vector<int> res(n);
        for(int i=0; i<n; i++){
            res[i] = prefix[i] * suffix[i];
        }
        return res;
    }
};
