https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int temp;
        for(i : nums) {
            temp = abs(i) - 1;
            nums[temp] = -1 * abs(nums[temp]);
        }

        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) result.emplace_back(i+1);
        }

        return result;
    }
};
