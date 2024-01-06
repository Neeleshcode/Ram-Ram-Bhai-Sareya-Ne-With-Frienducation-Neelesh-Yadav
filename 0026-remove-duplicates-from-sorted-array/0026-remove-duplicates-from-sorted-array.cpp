class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
           return 0;
           
           int j=0;
           
           for (int k = 1; k<nums.size(); k++) {
               if(nums[k] !=nums[j]) {
                   j++;
                   nums[j] =nums[k];
               }
           }
           
           return j + 1;
        
    }
};