class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1=s1.length() , l2=s2.length();

        if(l1 > l2) return 0;
        // firstly we create dono string ka hash table with initialze all eng aplpha. wih 0
        vector<int> s1hash(26 , 0);
        vector<int> s2hash(26 , 0);

        int l=0 , r=0;

        // secondly we put values of s1 and s2 in hash table till s1 ki length
        while(r < l1){
            s1hash[s1[r]-'a']++;
            s2hash[s2[r]-'a']++;
            r++;
        }
        r = r-1; // as r ek aage phouch gya tha to usa piche kra 
        
        while(r < l2){
            if(s1hash == s2hash) // we check that by s1 or s2 ma ssame no. of freq. or same index pr hn kya
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
