class Solution {
public:
    vector<string> ret;
    vector<string> generateParenthesis(int n) {
        gen(ret,0,0,n,"");
        return ret;
    }
    void gen(vector<string> &con, int left, int right, int n, string s) {
        if (left == n ) {
            con.push_back(s.append((n-right), ')'));
            return;
        }
        if (left >= right ) {
            gen(con,left+1,right,n,s+"(");
        }
        if (left > right) {
            gen(con,left,right+1,n,s+")");
        } 
    }
};
