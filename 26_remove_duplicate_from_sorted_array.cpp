class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start=0,itr=1;
        while(itr<nums.size()){
            if(nums[start]==nums[itr]){
                itr++;
            }
            else{
                nums[++start]=nums[itr];
                // start++;
                itr++;
            }
        }
        return ++start;
    }
};