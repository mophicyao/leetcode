class Solution:
    # @return a tuple, (index1, index2)
    def twoSum(self, num, target):
        mDict={}
        if num=={}:
            return None
        for index,value in enumerate(num):
            if mDict.has_key(value):
                index1=mDict.get(value)
                index2=index
                return (index1+1, index2+1)
            else:
                diff=target-value
                mDict[diff]=index
        return None
            
