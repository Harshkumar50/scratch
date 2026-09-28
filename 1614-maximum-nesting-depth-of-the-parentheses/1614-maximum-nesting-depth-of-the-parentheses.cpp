class Solution {
public:
    int maxDepth(string s) {
        int bracket=0;
        int total=0;
        for(char ch:s){
            if(ch=='('){
            bracket++;
        total=max(total,bracket);
            }
            else if(ch==')'){
            bracket--;
            }
        }
    return total;
    }
};