class Solution {
public:

// string compare(string strs1,string strs2){
//     string s1=strs1;
//     string s2=strs2;
//     sort(s1.begin() , s1.end());
//     sort(s2.begin() , s2.end());

//     if(s1 == s2)
//         return strs1+","+strs2;

//     else{
//         return "";
//     } 
    

// }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // int l=strs.size();
        // vector<string> s; string st;
        // for(int i=0; i<l; i++){
        //     for(int j=i+1; j<l; j++){
        //         st=compare(strs[i],strs[j]);
        //     }
        //     s.push_back(st);
        // }
        // for(int i=0; i<l; i++){
        //     for(int j=i+1; j<l; j++){
        //     if(s[i] != strs[j])
        //     s.push_back(strs[i]);
        // }
        // }
        // for(int i=0; i<s.size(); i++){
        //     return s[i];
        // }
        // return {s};
        unordered_map<string, vector<string>> mp;
        
        for (auto& s : strs) {
            string key = s;
            sort(key.begin(), key.end());  // sorted string as key
            mp[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& it : mp) {
            result.push_back(it.second);
        }

        return result;
    }
};
