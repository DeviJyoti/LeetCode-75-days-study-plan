//https://leetcode.com/problems/running-sum-of-1d-array/?envType=study-plan&id=level-1

//code:
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int>runningSum(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
         runningSum[i]=sum;
        }
        return runningSum;
    }
};
