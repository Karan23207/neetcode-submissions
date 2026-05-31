class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;

        for(auto& i : nums){
            mp[i]++;
        }

        vector<pair<int,int>> v(mp.begin(), mp.end());

        // sort by their frequency
        sort(v.begin(), v.end(), [](pair<int,int>& a , pair<int,int>& b){
                return a.second > b.second;
        });
        
        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(v[i].first);
        }
        return res; 
        // int c=1;
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size();j++ ){
        //         if(nums [i] == nums [j]){
        //             c++;
        //             if(c==k){
        //             res.push_back(nums[i]); 
        //             break; }
        //         }
        //         else break;
        //     } 
        // }
        // return res;
    }
};
