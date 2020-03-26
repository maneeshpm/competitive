class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = sizeof(nums)/sizeof(int);
        for(int i=0;i<n;i++){
            for(int j = 0;j<i;j++){
                if((nums[i]+nums[j])==target){
                    return [j , i];

                }
            }
        }
    }
};