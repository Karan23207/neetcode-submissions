class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.length();
        if(n == 0) return 0;

        int i=0 , j=0;;
        int maxi =0; unordered_set<char> st; // can also take set but its T.C is O(n)

        while (j<s.size()){  
            if(st.find(s[j]) != st.end()){
                st.erase(s[i]); i++;
            }
            else{
            st.insert(s[j]);
            maxi = max(maxi,(int)st.size());
            j++;
            }
               
        }
        return maxi;

    }
};
