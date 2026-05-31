class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1=s.length() , l2=t.length();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i=0; i<l1; i++){
            if(s == t)
            return 1;
        }
        return 0;
    }
};
