#include<stdio.h>

class Solution {
public:
    bool isPalindrome(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        bool ret = false;
        if ( x<0 ) {
            return false;
        }
        if ( 0==x ) {
            return true;
        }
        int y=0;
        int c=x;
        while(x != 0) {
            y = y*10 + (x%10);
            x = x/10;
        }
        if ( c==y ) {
            ret = true;
        }
        return ret;

    }
};

int main()
{
    Solution p;
    bool ret = p.isPalindrome(12321);
    printf("ret is %d\n",ret);
    ret = p.isPalindrome(111);
    printf("ret is %d\n",ret);
    ret = p.isPalindrome(1);
    printf("ret is %d\n",ret);
}
