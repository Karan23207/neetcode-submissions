class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0 , j=0;
        
        int n= nums.size();
        vector<int> res; int m=0;
        while( j<=n - k){
            m=j;
            int maxi=  INT_MIN;
            while(i<k && m<n){
                maxi = max(maxi , nums[m]);
                i++; m++;
            }
            res.push_back(maxi);
           
            j++; 
            i=0;
        }
        return res;

        // for(int i=0; i<=n-k; i++){
        //     int maxi=  INT_MIN;
        //     int m=j;
        //     for(int j=i; j<k+i; j++){
        //         maxi= max(maxi,nums[j]);
        //     }
        //     res.push_back(maxi);
        // }
        // return res;
    }
};
