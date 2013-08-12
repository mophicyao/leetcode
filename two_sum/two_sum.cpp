#include <vector>
#include <stdio.h>
using namespace std;
class Solution
{
public:
	vector<int> twoSum(vector<int> &numbers,int target)
	{
		vector<int> ret;
		int flag=0;
		for(int i=0;i<numbers.size()-1;i++)
		{	
			for(int j=i+1;j<numbers.size();j++)
			{
				int sum = numbers[i] + numbers[j];
				printf("sum %d numbers[%d] %d, numbers[%d] %d\n",
					sum, i,numbers[i],j,numbers[j]);
				if(sum==target)
				{	
					ret.push_back(i+1);
					ret.push_back(j+1);
					flag=1;
					break;			
				}
			}
			if(flag==1)
				break;
		}
		return ret;
	}
};

int main()
{
	Solution p ;
	vector<int> init;
	init.push_back(5);
	init.push_back(25);
	init.push_back(75);
	int target=100;
	vector<int> ret = p.twoSum(init,target);
	for(int i=0;i<ret.size();i++)
	{
		printf("[%d] is [%d]\n",i,ret[i]);	
	}
}
