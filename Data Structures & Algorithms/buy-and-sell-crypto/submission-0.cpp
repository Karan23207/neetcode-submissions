class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp=INT_MAX;
        int pr=0;
        for( int& i: prices){
            cp= min(cp, i);
            if(cp < i ){
                int diff = i-cp;
                pr=max(pr,diff);
            }
        }
        return pr;

        // for( int& i: prices){
        //     if(cp < i){

        //     }
        //  }
        // return ;
    }
};
