class Solution {
public:
    string minWindow(string s, string t) {
        int l=0 , r=0;
        int hash[256] = {0};
        int stindx=-1 , minlen= INT_MAX , cnt=0;

        for(int i=0; i<t.length(); i++){
            hash[t[i]]++;
        } 
        
        while( r<s.length() ){
            if( hash[s[r]] > 0) cnt += 1;
            hash[s[r]] --;

            while( cnt == t.length()){
                if( r-l+1 < minlen){
                    minlen= r-l+1;
                    stindx= l;
                }
                hash[s[l]] ++;
                if(hash[s[l]] > 0) cnt -= 1;
                l++;
            }
            r++;

        }
        return stindx == -1 ? "" : s.substr(stindx,minlen);
    }
};
