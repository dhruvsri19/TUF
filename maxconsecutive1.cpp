class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int freq=0;
        int rem=0;
        for (int i=0;i<=nums.size()-1;i++){
            if (nums[i]==1){
                freq++;
                rem=max(freq,rem);
            }
            else{
                freq=0;
            }
        }
        return rem;
    }
    
};