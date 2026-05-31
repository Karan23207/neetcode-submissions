class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        
        vector<int> preleft(n);
        preleft[0] = height[0];
        for(int i=1; i<n; i++){
            preleft[i] = max(preleft[i-1] , height[i]);
        }

        
        vector<int> preright(n);
        preright[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--){
            preright[i] = max(preright[i+1] , height[i]);
        }

        int total=0;
        for(int i=0; i<n; i++){
           int left=preleft[i] , right= preright[i];
           if(height[i]<left && height[i]<right){
            total += min (left , right) - height[i];
           }

        }
        return total;
    }
};
