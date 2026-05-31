class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result;

        for(int i=0; i<n; i++){
            int cnt = 0;
            for(int j=i; j<n; j++){

                if(temperatures[j] > temperatures[i]){
                result.push_back(cnt); cnt =0;
                break;
                }

                cnt ++;
            }

            if(cnt != 0)
            result.push_back(0);
            
        }
        return result;

    }
};
