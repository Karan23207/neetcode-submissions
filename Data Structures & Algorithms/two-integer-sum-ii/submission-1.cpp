class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        set<int> st(numbers.begin(), numbers.end());
        int n=st.size(); bool flag=false; int f,s;
        for (int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(numbers[i] + numbers[j] == target){
                    flag=true; f=i+1 ,s=j+1; 
                     break;
                }
                
            }
        }
        if(flag)
        return {f,s};
        else return {};

    }
};
