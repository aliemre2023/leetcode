// Time Complexity = O(n)
// Sapce Complxity = O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for(int i = 1; i < nums.size(); i++){ 
            if(nums[count] != nums[i]){
                count++;
            }
            nums[count] = nums[i];
        }
        return count+1;
    }
};
