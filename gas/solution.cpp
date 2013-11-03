
class Solution {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        int station_numbers=gas.size();
        int diff=0;
        int total=0;
        int start=-1;
        for (int i=0;i<station_numbers;i++) {
            diff +=gas[i]-cost[i];
            total += gas[i]-cost[i];
            if (diff<0) { 
                start=i;
                diff=0;
            } 
        }
        return total>=0?start+1:-1;      
    }
};
