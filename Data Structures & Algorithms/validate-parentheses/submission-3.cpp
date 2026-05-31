class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;

        // for(int i=0; i<s.length(); i++){
        //     st.push(s[i]);
        // }
        // st.push(s[0]);
        int i=0;
        while( i < s.length()  ){

            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
                i++;
            }

            else{
                if( !st.empty() ){
                char top =st.top();

                if( (s[i] == ']' && top == '[') ||
                    (s[i] == ')' && top == '(') ||
                    (s[i] == '}' && top == '{') 
                    ) {
                        st.pop();
                        i++;
                    }
                    else
                    return false;
                }
                    else return 0;
            }
            
 
        }

        if(st.empty())
        return true;

        else
        return false;
    }
};
