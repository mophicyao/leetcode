#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;

class Solution
{
public:
    string convert(string s, int nRows)
    {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string ret = "";
        if (s == "")
        {
            return s;
        }
        if (nRows==1)
        {
            return s;
        }
        vector<vector<int> > rows(nRows);
        for (int i=0;i<s.length();i++)
        {
            if ( abs((i-nRows+1)%(nRows-1)) == 0)
            {
                if ( abs((i+1-nRows)/(nRows-1)) &1 == 1)
                {
                    rows[0].push_back(s[i]);
                }
                else
                {
                    rows[nRows-1].push_back(s[i]);
                }
            }
            else
            {
                int mod = abs(i%(nRows-1));
                if ( (i/(nRows-1)) & 1 == 1 )
                {
                    mod = nRows-1-mod;
                }
                rows[mod].push_back(s[i]);
            }
        }
        for (int i=0;i<nRows;i++)
        {
            vector<int> tmp = rows[i];
            for (vector<int>::iterator it=tmp.begin();it != tmp.end();++it)
            {
                ret += *it;
            }
        }
        return ret;
    }
};

int main()
{
    Solution p;
    string s="PAYPALISHIRING";
    string ret = p.convert(s,4);
    printf("ret is%s\n",ret.c_str());
}
