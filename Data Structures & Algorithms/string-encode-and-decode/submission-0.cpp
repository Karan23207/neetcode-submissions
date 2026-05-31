class Solution {
public:

    string encode(vector<string>& strs) {
        string encodestr="";
        for(auto& i: strs){
            encodestr += to_string(i.size()).append("#").append(i);
        }
        return encodestr;
    }

    vector<string> decode(string s) {
        
        vector<string> res;
        int i=0;
        while(i<s.length()){
            int j=i;
            while(  s[j] != '#' && j<s.size()  ) j++;

            int len = stoi(s.substr(i,j-i));
            string str= s.substr(j+1,len);
            res.push_back(str);

            i= len + j + 1;

        }
        return res;
    } 
};
