class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0 , j=0;
        int n=s.size();
        int maxlen = 0 ,maxf=0;

        unordered_map<int , int> mp;
        while(j<n){
            mp[s[j] - 'A']++;
            maxf = max(maxf,mp[s[j] - 'A']);

            int check = (j-i+1) - maxf;

            if(check > k){
                mp[s[i] - 'A']--;
                i++; j++;
            }
            if(check <= k){
                maxlen=max(maxlen,j-i+1);
                j++;
            }
        }
        return maxlen;
    }
};
