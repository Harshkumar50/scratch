class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroes=0;
        for(int i=0;i<=nums.size()-1;i++){
            if(nums[i]!=0){
            nums[zeroes]=nums[i];
            zeroes++;
        }
        }
        for(int i=zeroes;i<=nums.size()-1;i++){
            nums[i]=0;
        }
        // return nums[i];
    }
};