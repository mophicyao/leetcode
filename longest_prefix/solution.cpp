#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int size = strs.size();
        if (size == 0) {
            return "";
        }
        string a = strs[0];
        int len = a.length();
        int k=0;
        int end = 0;
        while (a[k]) {
            
            for (int i=1;i<size;i++) {
                if(strs[i][k]) {
                    if (strs[i][k] != a[k]) {
                        end = k;
                        break;
                    }
                } else {
                    end = k;
                    break;
                }      
            }
            if (end > -1) {
               break;
 
            }
        }
        return a.substr(0,k); 
         
    }
};

int main() {
    string a = "abdgg";
    string b = a.substr(0,0);
    printf("b is %s\n",b.c_str());
}


