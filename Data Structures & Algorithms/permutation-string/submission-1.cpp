class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1=s1.length() , l2=s2.length();
        vector<int> s1hash(26 , 0);
        vector<int> s2hash(26 , 0);

        int l=0 , r=0;

        while(r < l1){
            s1hash[s1[r]-'a']++;
            s2hash[s2[r]-'a']++;
            r++;
        }
        r = r-1;
        
        while(r < l2){
            if(s1hash == s2hash)
            return true;

            r ++;
            if(r<l2){
                s2hash[s2[l] - 'a'] --;
                s2hash[s2[r] - 'a'] ++;
                l++;
            }
        }
        return false;
        
    }
};
