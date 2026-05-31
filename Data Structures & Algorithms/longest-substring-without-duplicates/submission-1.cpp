class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int n = s.length();
        // int maxi =0;
        // set<char> st ;
        // unordered_map<int,int> mp;
        // for(int i=0; i<n; i++){
        //     mp[s[i]]++;
        // }

        // for(auto& i:mp){
        //     if(i.second == 1)
        //     maxi++;
        // }
        // return maxi;

        int n = s.length();
        if(n == 0) return 0;
        int c = 1; int i=0 , j=0;;
        int maxi =0; set<char> st;
        while (j<s.size()){  
            char ch= s[j];
            if(st.find(ch) != st.end()){
                st.erase(s[i]); i++;
            }
            else{
            st.insert(ch);
            maxi = max(maxi,(int)st.size());j++;
            // if(st.find())
            }
               
        }
        return maxi;

    }
};
