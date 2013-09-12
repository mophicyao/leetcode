#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> ret;
    vector<string> generateParenthesis(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int m=n*2;
        gen(m,1,"");
        
        vector<string> get;
        int size=ret.size();
        for (int i=0;i<size;i++) {
            if (isValid(ret[i])) {
                get.push_back(ret[i]);
            }
        }
        return get;
    }
    void gen(int total, int index,string s) {
        if (index == total) {
            ret.push_back(s+"(");
            ret.push_back(s+")");
            return ;
        }
        gen(total,index+1,s+"(");
        gen(total,index+1,s+")");
    }
    bool isValid(string s) {
        int len = s.length();
        vector<int> stack;
        for (int i=0;i<len;i++) {
            if (i == 0) {
                stack.push_back(s[i]);
            } else {
                if (s[i] == ')') {
                    if (stack.back() == '(') {
                        stack.pop_back();
                    } else {
                        stack.push_back(s[i]);
                    }
                } else {
                    stack.push_back(s[i]);
                }
                
            }
        }
        if (stack.empty()) {
            return true;
        } else {
            return false;
        }
    }

};

int main() {
    Solution p;
    vector<string> ret=p.generateParenthesis(2);
    for(int i=0;i<ret.size();i++) {
        printf("ret[%d] is %s\n",i,ret[i].c_str());
    }
    
}

