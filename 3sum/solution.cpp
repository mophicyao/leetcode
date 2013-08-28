#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;
class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        sort(num.begin(), num.end());
        int size = num.size();
        int i=0;
        int j=size -1;
        vector<vector<int> > ret;
        if (size < 3) {
            return ret;
        }
        int tmp = num[0]+num[1]+num[size-1];

        for (int j=0;j<size-2;j++) {
            if(j > 0 && num[j]==num[j-1]) {
                continue;
            }
            int l = j + 1;
            int h = size -1;
            if (j-1>=0 && (num[j-1] == num[j])) {
                j++;
            }

            while ( l < h ) {
                if ( l > j+1 && num[l] == num[l-1]) {
                    l++;
                    continue;
                }
                if ( h < size-1 && num[h] == num[h+1]) {
                    h--;
                    continue;
                }

                    
                if (num[j]+num[l]+num[h] == 0 ) {
                        vector<int> tmp;
                        tmp.push_back(num[j]);
                        tmp.push_back(num[l]);
                        tmp.push_back(num[h]);
                        ret.push_back(tmp);
                        l++;
                        h--;
                } else if (num[j]+num[l]+num[h] < 0) {
                    l++;
                } else {
                    h--;
                }
            }
        }
        return ret;
     
    }
};
int main() {

}

