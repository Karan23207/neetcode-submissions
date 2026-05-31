class Solution {
public:
// int add(int a,int b){
// return a+b;
// }
// int sub(int a,int b){
// return a-b;
// }
// int mul(int a,int b){
// return a*b;
// }
// int div(int a,int b){
// if(b != 0)
// return a/b;
// }

    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        for(int i=0; i<tokens.size(); i++){

            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int n2 = (st.top());
                st.pop();
                int n1 = (st.top());
                st.pop();

                if(tokens[i] == "+") st.push(n1 + n2);
                if(tokens[i] == "-") st.push(n1 - n2);
                if(tokens[i] == "*") st.push(n1 * n2);
                if(tokens[i] == "/") st.push(n1 / n2);

            }
            else
            st.push(stoi(tokens[i]));

        }
        return st.top();

        // int t1 = stoi(tokens[0]);
        // int t2 = stoi(tokens[1]);
        // int res = 0; int t3;
        // for(int i=2; i<tokens.size(); i++){
        //     if(tokens[i] == "+" && i==2){
        //          res = add(t1,t2);
        //     }
        //     if(tokens[i] == "-" && i==2){
        //          res = sub(t1,t2);
        //     }
        //     if(tokens[i] == "*" && i==2){
        //          res = mul(t1,t2);
        //     }
        //     if(tokens[i] == "/" && i==2){
        //          res = div(t1,t2);
        //     }
        //     if(tokens[i] == "+") res = add(res,t3);
        //     else if(tokens[i] == "-") res = sub(res,t3);
        //     else if(tokens[i] == "*") res = mul(res,t3);
        //     else if(tokens[i] == "/") res = div(res,t3);

        //     else
        //     t3 = stoi(tokens[i]);
        // }
        // return res;



    }
};
