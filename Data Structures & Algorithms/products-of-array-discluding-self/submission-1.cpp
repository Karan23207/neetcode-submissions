class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prdct=1; int n=nums.size();
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; ; j++){
        //         prdct=nums[i]*nums[j];
        //     }
        // }
        vector<int> res;
        // int c=0;
        // for(int i=0; i<n; i++){
        //     int j=i+1; prdct=1;
        //     if(j == n) j=0;
        //     while(nums[i] != nums[j] && c!=n){
        //     prdct *= nums[j];
        //     j++;
        //     if(j == n) j=0;
        //     }
        //     c++;
        //     res.push_back(prdct);
        // }
        // return res;
        
        for (int i = 0; i < n; i++) {
            int prdct = 1;

            for (int j = 0; j < n; j++) {
                if (i != j) {              // skip current element
                    prdct *= nums[j];
                }
            }

            res.push_back(prdct);
        }

        return res;
    }
};
