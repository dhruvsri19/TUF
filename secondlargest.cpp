class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int largest=nums[nums.size()-1];
        for (int i=nums.size()-1;i>=0;i--){
            if (nums[i]<largest){
                return nums[i];
            }

        }
        return -1;
    }
};