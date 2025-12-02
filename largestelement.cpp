class Solution {
public:
    int largestElement(vector<int>& nums) {
        sort (nums.begin(),nums.end());
        int largest=nums[nums.size()-1];
        return largest;
    }
};