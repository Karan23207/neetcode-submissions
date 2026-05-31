class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // set<int> st(numbers.begin(), numbers.end());
        int n=numbers.size(); bool flag=false; int f,s;
        int j=n-1;
        int i=0;
        while (i <j ){
            int sum = numbers[i] + numbers[j];
            if(sum == target) return {i+1, j+1};

            else if(sum > target)
            j--;
            else i++; 
        }
        return {};
        // if(flag)
        // return {f,s};
        // else return {};

    }
};
