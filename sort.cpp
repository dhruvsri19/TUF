class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			if(nums.size()<=1){
                return true;
            }
            return Sorted(nums,0,1);
		}
    private:
        bool Sorted(vector<int>& nums,int left,int right){
           if (right>=nums.size()){
            return true;
           }
           if(nums[left]>nums[right]){
            return false;
           }
           return Sorted(nums,left+1,right+1);
        }
};