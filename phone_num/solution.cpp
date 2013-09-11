#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <cstring>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<string> ret;
        vector<string> map;
        map.push_back("");
        map.push_back("");
        map.push_back("abc");
        map.push_back("def");
        map.push_back("ghi");
        map.push_back("jkl");
        map.push_back("mno");
        map.push_back("pqrs");
        map.push_back("tuv");
        map.push_back("wxyz");
        ret.push_back("");
        int len=digits.length(); 
        for (int i=0;i<len;i++) {
            int index = int(digits[i])-48;
            if (index < 0 || index > 9) {
                return ret;
            }
            string cur_str=map[index];
            int size=ret.size();
            for (int j=0;j<cur_str.length();j++) {
                for (int k=0;k<size;k++) {
                    if (j != cur_str.length()-1 ) {
                        ret.push_back(ret[k]+cur_str[j]);
                    }
                    else {
                        ret[k]=ret[k]+cur_str[j];
                    }
                }
            }
            
        }
        return ret;
        
    }
};

int main() {

    Solution p;
    string str="12";
    vector<string> ret=p.letterCombinations(str);
    for (int i=0;i<ret.size();i++) {
        printf("ret is %s\n",ret[i].c_str());
    }
}

