#include <set>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> collections;
    vector<string> wordBreak(string s, set<string> &dict) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        find(s,"",dict);       
        return collections; 
    }

    void find(string left, string hits, set<string> &dict) {
        
        if (left.length()==0) {
            collections.push_back(hits);
            return;
        }
        string cur="";
        for (int i=0;i<left.length();i++) {
            cur += left[i];
            if ( dict.find(cur) !=dict.end()) {
                if ( hits.length() !=0 ) {
                    cur = hits + " " + cur;
                }
                find(left.substr(i+1),cur,dict);
            }
                
               
        }
    }
};

int main() {
    Solution p;
    set<string> dict;//{"cat", "cats", "and", "sand", "dog"};
    dict.insert("b");
    dict.insert("cat");
    dict.insert("cats");
    dict.insert("and");
    dict.insert("sand");
    dict.insert("dog");
    vector<string> ret = p.wordBreak("a",dict);
    for (int i=0;i<ret.size();i++) {
        printf("%s\n",ret[i].c_str());
    } 
    return 0;
}
