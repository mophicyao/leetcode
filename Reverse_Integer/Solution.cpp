#include <limits>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int ret = 0;
        if (x == 0) {
            return 0;
        }
        
        if (x > 0) {
            while(x != 0) {
                ret = ret * 10 +(x%10);
                x = x/10;
            }
        }
        else {
            int i=0;
            x = abs(x);
            printf("x is %d\n",x);
            while(x != 0) {
                ret = ret * 10 +(x%10);
                x = x/10;
            }   
            ret = ret*(-1);
        }
        return ret;
    }
};

int main()
{
    int max=std::numeric_limits<int>::max();
    int min=std::numeric_limits<int>::min();

    printf("max %d min %d \n",max,min);
    Solution p;
    int ret=p.reverse(-123);
    printf("ret is %d\n",ret);

}
