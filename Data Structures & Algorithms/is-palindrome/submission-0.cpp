class Solution {
public:
    bool isPalindrome(string s) {
    string str="";
    for(int i=0; i<s.length(); i++){
        char ch=s[i];
        if(isalnum(ch)) str += ch;
    }
    for (char &c : str) {
    c = std::tolower(static_cast<unsigned char>(c));
    }
   
    int j = str.length() -1;
    bool flag=true; int i=0;
    while(i < j){
        if(str[i] != str[j])
        return false; 
        i++ , j--;
    }
    return true;
    }
};
