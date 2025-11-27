class Solution {
public:
    int arraySum(vector<int>& nums) {
        return sum(nums,0);
    }

private:
    int sum(vector<int>& nums,int x){
        if (x>=nums.size()) return 0;
        return nums[x] + sum(nums,x+1);
    }
};
