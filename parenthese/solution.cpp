#include <string>
#include <vector>
#include <stdio.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int len = s.length();
        vector<int> stack;
        for (int i=0;i<len;i++) {
            if (i==0) {
                stack.push_back(s[i]);
                printf("i=0\n");
            } else {
                if (s[i] == ']') {
                    if (stack.back() == '[') {
                        stack.pop_back();
                    } else {
                        stack.push_back(s[i]);
                    }
                }
                else if (s[i] == '}') {
                    if (stack.back() == '{') {
                        stack.pop_back();
                    } else {
                        stack.push_back(s[i]);
                    }
                }
                else if (s[i] == ')') {
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
        if (stack.size() == 0) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Solution p;
    int ret=p.isValid("()");
    printf("ret is %d\n",ret);
    
}
