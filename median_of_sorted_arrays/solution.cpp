#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> C;

        int i=0,j=0;

        while(i<m&&j<n)
        {
            if(A[i]>B[j])
            {
                C.push_back(B[j]);
                j++;
            }
            else
            {
                C.push_back(A[i]);
                i++ ;
            }
 }
        if(i<m)
        {
            for(int k=i;k<m;k++)
            {
                C.push_back(A[k]);
            }
        }
        if(j<n)
        {
            for(int k=j;k<n;k++)
            {
                C.push_back(B[k]);
            }
        }
        int start=C[0];
        int end=C[C.size()-1];
        if (C.size()&1 !=0) //odd
        {
            int md=C.size()/2;
            return double(C[md]);
        }
        else
        {
            int md=C.size()/2;
            double left=double(C[md-1]);
            double right=double(C[md]);
            return (left+right)/2;
        }
        
    }

};


int main()
{
    Solution p;
    int a[5]={4,5,6,8,9};
    int b[]={};
    double d = p.findMedianSortedArrays(a,5,b,0);
    printf("d is %f\n",d);

}
