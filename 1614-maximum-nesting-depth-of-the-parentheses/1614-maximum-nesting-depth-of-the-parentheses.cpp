class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int res=0;
        for(char ch:s){
            if(ch=='('){
                st.push(ch);
                res=max(res,(int)st.size());
            }
            if(ch==')'){
                st.pop();
            }
            else continue;
        }
        return res;
    }
};