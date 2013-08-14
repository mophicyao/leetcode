#include <stdio.h>
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int pos[256]={-1};
        for(int i=0;i<256;i++)
        {
            pos[i]=-1;
        }
        int size=s.size();
        int begin=0,distance=0;
        for(int i=0;i<size;i++)
        {
            
            begin=max(begin,pos[s[i]]+1);
            pos[s[i]]=i;
            distance=max(distance,i-begin+1);
            printf("%d,%d,%d\n",distance,i,begin);
        }
        return distance;
    }
};

int main()
{
    Solution p;
    string a="abcdefeadabf";
    int ret=p.lengthOfLongestSubstring(a);
    printf("ret is %d\n",ret);
}
