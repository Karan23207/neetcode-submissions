class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size();
        int left =0 , right= n-1;
        int res = 0;
        while(left <  right){
            if(heights[left] < heights[right]){
                int prodc = heights[left] * (right - left);
                res= max(res , prodc);
                left++;
            }
            else{
                int prodc = heights[right] * (right - left);
                res= max(res , prodc);
                right--;
            }
        }
        return res;
    }
};
