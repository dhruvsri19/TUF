lass Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int end=nums[0];
        for (int i=1;i<nums.size();i++){
            nums[i-1]=nums[i];
        }
        nums[nums.size()-1]=end;
        
        
    }
};