class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); // <-- FIX
        
        int maxFreq = 1, currFreq = 1;
        int maxEle = nums[0];
        
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i-1]) {
                currFreq++;
            } else {
                currFreq = 1;
            }
            
            if (currFreq > maxFreq) {
                maxFreq = currFreq;
                maxEle = nums[i];
            }
            // tie-case automatically handled since sorted array puts smaller first
        }
        
        return maxEle;
    }
};