#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

class Solution {
public:
    int atoi(const char *str) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (NULL == str) {
            return 0;
        }
        int i=0;
        int ret=0;
        int neg=0;
        while(str[i] == ' ') {
            i++;
        }
        if ( str[i] ) {
            if ( '-' == str[i] ) {
            //todo            
                i++;
                neg = 1;
            }
            if ( '+' == str[i] ) {
                i++;
                neg = 0;
            }
        }
        
        for ( ;str[i];i++ ) {
            if ( 48 <= str[i] && 57 >= str[i] ) {
                if(  (ret > INT_MAX/10) || ( (ret == INT_MAX/10)&&(str[i]-48>7) ) ) {
                    return neg?INT_MIN:INT_MAX;
                }
                ret = ret*10 +(str[i]-48);
            }
            else {
                if( str[i] == ' ' ) {
                    continue;
                }
                break;
            }
        }
        if ( neg ) {
            ret = ret*(-1);
            
        }
          
        return ret;
    }
};

int main()
{
    Solution p;
    int ret =p.atoi("   -321");
    printf("ret is %d\n",ret);
}
