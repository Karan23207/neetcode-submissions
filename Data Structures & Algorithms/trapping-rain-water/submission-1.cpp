class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftmax=0 ,rightmax=0 , total =0;
        int left=0 , right=n-1;

        while(left < right){
            if(height[left] < height[right] ){
                if(height[left]<leftmax)
                total +=leftmax - height[left];

            else{
                leftmax= height[left];
            }
            left++;
            }
            else{
                if( rightmax > height[right])
                total += rightmax - height[right];

                else
                rightmax = height[right];

                right --;
            }
            
        }
        return total;
    }
};
