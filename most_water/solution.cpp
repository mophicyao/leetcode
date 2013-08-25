#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int> &height) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int len = height.size();
        if (len == 1 || len == 0) {
            return 0;
        }
        int i=0;
        int j=len-1;
        int ret=0;
        while ( i < j ) {
            int hi = height[i] > height[j]?height[j]:height[i];
            ret= max((j-i)*hi,ret);
             
            if ( height[i] < height[j] ) {
                i++ ; 
            }
            else {
                j--;
            }
        }
        return ret; 
    }
};

int main()
{
    Solution p;
    vector<int> a;
    a.push_back(2);
    a.push_back(1);
    int ret = p.maxArea(a);
    printf("max is %d\n",ret);
}
